/*
 * SPDX-License-Identifier: GPL-2.0
 * nand_ota_burn.c for  SUNXI NAND .
 *
 * Copyright (C) 2016 Allwinner.
 *
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/module.h>
#include <linux/list.h>
#include <linux/fs.h>
#include <linux/blkdev.h>
#include <linux/blkpg.h>
#include <linux/spinlock.h>
#include <linux/hdreg.h>
#include <linux/init.h>
#include <linux/semaphore.h>
#include <linux/platform_device.h>
#include <linux/clk.h>
#include <linux/interrupt.h>
#include <asm/uaccess.h>
#include <linux/timer.h>
#include <linux/delay.h>
#include <linux/clk.h>
#include <linux/mutex.h>
#include <linux/dma-mapping.h>
#include <linux/wait.h>
#include <linux/sched.h>
#include <asm/cacheflush.h>
#include <linux/gpio.h>
#include <linux/vmalloc.h>

#include "nand_lib.h"
#include "nand_blk.h"


int NAND_CheckBoot(void);

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
void test_dram_para(void *buffer)
{
	int *data;
	int i;

	data = (int *)buffer;
	for (i = 0; i < 40; i += 4) {
		NAND_Print("%x %x %x %x\n", data[i + 0], data[i + 1],
				data[i + 2], data[i + 3]);
	}
	NAND_Print("\n");

	return;
}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int gen_check_sum(void *boot_buf)
{
	standard_boot_file_head_t *head_p;
	unsigned int length;
	unsigned int *buf;
	unsigned int loop;
	unsigned int i;
	unsigned int sum;
	unsigned int *p;
	toc0_private_head_t *toc0_head;

	if (1 == NAND_IS_Secure_sys()) {	/* secure */
		toc0_head = (toc0_private_head_t *) boot_buf;
		length = toc0_head->length;
		p = &(toc0_head->check_sum);
	} else {
		head_p = (standard_boot_file_head_t *) boot_buf;
		length = head_p->length;
		p = &(head_p->check_sum);
	}

	if ((length & 0x3) != 0)	/* must 4-byte-aligned */
		return -1;
	buf = (unsigned int *)boot_buf;
	*p = STAMP_VALUE;	/* fill stamp */
	loop = length >> 2;

	for (i = 0, sum = 0; i < loop; i++)
		sum += buf[i];


	*p = sum;
	return 0;
}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int gen_uboot_check_sum(void *boot_buf)
{
	boot_file_head_t *head_p;
	unsigned int length;
	unsigned int *buf;
	unsigned int loop;
	unsigned int i;
	unsigned int sum;

	head_p = (boot_file_head_t *) boot_buf;
	length = head_p->length;
	if ((length & 0x3) != 0)	/* must 4-byte-aligned */
		return -1;
	buf = (unsigned int *)boot_buf;
	head_p->check_sum = STAMP_VALUE;	/* fill stamp */
	loop = length >> 2;
	/* 计算当前文件内容的“校验和” */
	for (i = 0, sum = 0; i < loop; i++)
		sum += buf[i];

	/* write back check sum */
	head_p->check_sum = sum;

	return 0;
}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int get_nand_para(void *boot_buf)
{
	boot0_file_head_t *boot0_buf;
	char *data_buf;
	boot_nand_para_t *nand_para;
	sbrom_toc0_config_t *secure_toc0_buf;

	if (1 == NAND_IS_Secure_sys()) {	/*secure*/
		secure_toc0_buf =
			(sbrom_toc0_config_t *) (boot_buf + SBROM_TOC0_HEAD_SPACE);
		data_buf = secure_toc0_buf->storage_data;
		nand_para = (boot_nand_para_t *) data_buf;
	} else {			/*nonsecure*/
		boot0_buf = (boot0_file_head_t *) boot_buf;
		data_buf = boot0_buf->prvt_head.storage_data;
		nand_para = (boot_nand_para_t *) data_buf;
	}
	nand_get_param(nand_para);
	return 0;
}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int get_dram_para(void *boot_buf)
{
	boot0_file_head_t *src_boot0;
	boot0_file_head_t *dst_boot0;
	sbrom_toc0_config_t *secure_src_toc0;
	sbrom_toc0_config_t *secure_dst_toc0;
	char *buffer = NULL;

	buffer = kmalloc(32 * 1024, GFP_KERNEL);
	if (buffer == NULL) {
		NAND_Print("get_dram_para, kmalloc failed!\n");
		return -1;
	}
	memset(buffer, 0, 32 * 1024);
	if (nand_read_nboot_data(buffer, 32 * 1024) != 0)
		goto error;

	test_dram_para(buffer);
	if (1 == NAND_IS_Secure_sys()) { /*secure*/

		secure_src_toc0 =
			(sbrom_toc0_config_t *) (buffer + SBROM_TOC0_HEAD_SPACE);
		secure_dst_toc0 =
			(sbrom_toc0_config_t *) (boot_buf + SBROM_TOC0_HEAD_SPACE);
		memcpy(&secure_dst_toc0->dram_para[0],
				&secure_src_toc0->dram_para[0], 32 * 4);
	} else {		/*nonsecure*/
		src_boot0 = (boot0_file_head_t *) buffer;
		dst_boot0 = (boot0_file_head_t *) boot_buf;
		memcpy(&dst_boot0->prvt_head, &src_boot0->prvt_head, 40 * 4);
	}

	test_dram_para(boot_buf);
	kfree(buffer);
	buffer = NULL;
	return 0;

error:
	kfree(buffer);
	buffer = NULL;
	return -1;

}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int get_nand_para_for_boot1(void *boot_buf)
{
	boot1_file_head_t *boot1_buf;
	boot_nand_para_t *nand_para;

	boot1_buf = (boot1_file_head_t *) boot_buf;
	nand_para = (boot_nand_para_t *) boot1_buf->prvt_head.nand_spare_data;

	return 0;
}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int NAND_ReadBoot0(unsigned int length, void *buf)
{
	void *buffer;
	__u32 ret;

	NAND_PhysicLock();

	buffer = vmalloc(length);
	if (buffer == NULL) {
		NAND_Print("read boot0 malloc failed!\n");
		NAND_PhysicUnLock();
		return -1;
	}

	if (nand_read_nboot_data(buffer, length) != 0) {
		vfree(buffer);
		NAND_Print("read boot0 failed\n");
		NAND_PhysicUnLock();
		return -1;
	}

	ret = copy_to_user(buf, buffer, length);
	if (ret != 0) {
		vfree(buffer);
		NAND_Print("copy_to_user failed\n");
		NAND_PhysicUnLock();
		return -1;
	}

	vfree(buffer);
	NAND_Print("read boot0 success\n");
	NAND_PhysicUnLock();

	return 0;
}


/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int NAND_ReadBoot1(unsigned int length, void *buf)
{
	void *buffer;
	__u32 ret;

	NAND_PhysicLock();

	buffer = vmalloc(length);
	if (buffer == NULL) {
		NAND_Print("read boot1 malloc failed!\n\n");
		NAND_PhysicUnLock();
		return -1;
	}

	if (nand_read_uboot_data(buffer, length) != 0) {
		vfree(buffer);
		NAND_Print("read boot1 failed\n");
		NAND_PhysicUnLock();
		return -1;
	}

	ret = copy_to_user(buf, buffer, length);
	if (ret != 0) {
		vfree(buffer);
		NAND_Print("copy_to_user failed\n");
		NAND_PhysicUnLock();
		return -1;
	}

	vfree(buffer);
	NAND_Print("read boot1 success\n");
	NAND_PhysicUnLock();

	return 0;
}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int NAND_BurnBoot0(unsigned int length, void *buf)
{
	void *buffer;
	__u32 ret;

	NAND_PhysicLock();

	NAND_Print("buf_from %x\n", buf);

	buffer = kmalloc(length + 16 * 1024, GFP_KERNEL);
	if (buffer == NULL) {
		NAND_Print("no memory!\n");
		NAND_PhysicUnLock();
		return -1;
	}

	ret = copy_from_user(buffer, (const void *)buf, length);
	NAND_Print("buffer from %x\n", buffer);
#if 0
	if (get_dram_para(buffer) != 0) {
		NAND_Print("get dram para error\n");
		kfree(buffer);
		buffer = NULL;
		NAND_PhysicUnLock();
		return -1;
	}
#endif
	get_nand_para(buffer);
	gen_check_sum(buffer);

	if (nand_write_nboot_data(buffer, length) != 0) {
		NAND_Print("burn boot 0 failed\n");
		kfree(buffer);
		buffer = NULL;
		NAND_PhysicUnLock();
		return -1;
	} else {
		NAND_Print("burn boot 0 success\n");
		kfree(buffer);
		buffer = NULL;
		NAND_PhysicUnLock();
		return 0;
	}
}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int NAND_BurnBoot1(unsigned int length, void *buf)
{
	void *buffer = NULL;

	NAND_PhysicLock();

	buffer = vmalloc(length + 0x10000);
	if (buffer == NULL) {
		NAND_Print("no memory!\n");
		NAND_PhysicUnLock();
		return -1;
	}

	if (copy_from_user(buffer, (const void *)buf, length)) {
		NAND_Print("NAND_BurnBoot1, copy_from_user error!\n");
		vfree(buffer);
		NAND_PhysicUnLock();
		return -1;
	}

	if (nand_write_uboot_data(buffer, length) != 0) {
		NAND_Print("burn boot1 failed\n");
		vfree(buffer);
		NAND_PhysicUnLock();
		return -1;
	} else {
		vfree(buffer);
		NAND_PhysicUnLock();
		NAND_Print("burn boot1 success\n");
		return 0;
	}
}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
int NAND_CheckBoot(void)
{
	unsigned int len;
	unsigned char *buf;
	int ret;

	NAND_Print(" check boot start.\n");
	NAND_PhysicLock();

	len = nand_get_uboot_total_len();
	if (len == 0) {
		NAND_Print("not uboot\n");
		NAND_PhysicUnLock();
		return -1;
	}

	buf = vmalloc(len + 32 * 1024);
	if (buf == NULL) {
		NAND_Print("check uboot no memory\n");
		NAND_PhysicUnLock();
		return -1;
	}

	ret = nand_check_uboot(buf, len);
	if (ret != 0) {
		NAND_Print("check uboot fail\n");
		vfree(buf);
		NAND_PhysicUnLock();
		return -1;
	}

	/*
	   len = nand_get_nboot_total_len();
	   if(len == 0)
	   {
	   NAND_Print("not nboot\n");
	   vfree(buf);
	   NAND_PhysicUnLock();
	   return -1;
	   }

	   nand_check_nboot(buf,len);
	 */

	vfree(buf);
	NAND_PhysicUnLock();

	NAND_Print(" check boot  end.\n");

	return 0;
}

/*****************************************************************************
 *Name         :
 *Description  :
 *Parameter    :
 *Return       : 0:ok  -1:fail
 *Note         :
 *****************************************************************************/
__s32 NAND_DragonboardTest(void)
{
	__u32 i, blk_ok;
	__u8 oob_buf[32];
	void *main_buf;
	__s32 ret;
	struct _nand_info *local_nand_info = NULL;

	NAND_Print("dragon board test start!\n");

	local_nand_info = NandHwInit();
	if (local_nand_info == NULL) {
		NAND_Print("dragonboard test fail\n");
		return -1;
	}
	main_buf =  kmalloc(1024 * 32, GFP_KERNEL);
	if (main_buf == NULL) {
		NAND_Print("no memory!\n");
		return -1;
	}

	for (i = 0; i < 32; i++)
		oob_buf[i] = 0xff & i;

	blk_ok = 0;
	for (i = 10; i < 15; i++) {
		NAND_Print("test blk %x\n", i);

		ret = 0;

		ret = nand_dragonborad_test_one(main_buf, oob_buf, i);
		if (ret == 0)
			blk_ok++;

	}
	if (blk_ok < 3) {
		NAND_Print("dragon board test fail\n");
		kfree(main_buf);
		return -1;
	}
	kfree(main_buf);
	return 0;
}
