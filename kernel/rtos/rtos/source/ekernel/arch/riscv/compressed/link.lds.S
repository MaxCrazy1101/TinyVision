/*
 *  Copyright (C) 2000 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifdef CONFIG_CPU_ENDIAN_BE8
#define ZIMAGE_MAGIC(x) ( (((x) >> 24) & 0x000000ff) | \
			  (((x) >>  8) & 0x0000ff00) | \
			  (((x) <<  8) & 0x00ff0000) | \
			  (((x) << 24) & 0xff000000) )
#else
#define ZIMAGE_MAGIC(x) (x)
#endif

OUTPUT_ARCH("riscv")
OUTPUT_FORMAT("elf32-littleriscv")
ENTRY(_start)
SECTIONS
{
  . = TEXT_START;
  _text = .;
  .text : {
    _start = .;
    *(.start)
    *(.text)
    *(.text.*)
    *(.fixup)
    *(.gnu.warning)
    *(.glue_7t)
    *(.glue_7)
  }
  .rodata : {
    *(.rodata)
    *(.rodata.*)
  }
  .data : {
    /*
     * The EFI stub always executes from RAM, and runs strictly before the
     * decompressor, so we can make an exception for its r/w data, and keep it
     */
    *(.data.efistub)
  }

  .piggydata : {
    *(.piggydata)
  }

  . = ALIGN(4);
  _etext = .;
  .got.plt : { *(.got.plt) }
  _got_start = .;
  .got : { *(.got) }
  _got_end = .;

#ifdef CONFIG_AMP_SHARE_IRQ
  .share_irq_table : {
    KEEP(*(.share_irq_table))
  }
#endif

#ifdef CONFIG_SUPPORT_AMP
  .resource_table : {
    KEEP(*(.resource_table))
  }
#endif

  /* ensure the zImage file size is always a multiple of 64 bits */
  /* (without a dummy byte, ld just ignores the empty section) */
  .pad			: { BYTE(0); . = ALIGN(8); }

  _edata = .;
  _magic_comp = ZIMAGE_MAGIC(CONFIG_KERNEL_COMPRESS_METHON);
  _magic_sig = ZIMAGE_MAGIC(0x016f2818);
  _magic_start = ZIMAGE_MAGIC(_start);
  _magic_end = ZIMAGE_MAGIC(_edata);

  . = BSS_START;
  __bss_start = .;
  .bss : { *(.bss.*) }
  _end = .;

  . = ALIGN(8);		/* the stack must be 64-bit aligned */
  .stack : { *(.stack) }

  .stab 0		: { *(.stab) }
  .stabstr 0		: { *(.stabstr) }
  .stab.excl 0		: { *(.stab.excl) }
  .stab.exclstr 0	: { *(.stab.exclstr) }
  .stab.index 0		: { *(.stab.index) }
  .stab.indexstr 0	: { *(.stab.indexstr) }
  .comment 0		: { *(.comment) }

  /DISCARD/ : {
    *(.ARM.exidx*)
    *(.ARM.extab*)
    /*
     * Discard any r/w data - this produces a link error if we have any,
     * which is required for PIC decompression.  Local data generates
     * GOTOFF relocations, which prevents it being relocated independently
     * of the text/got segments.
     */
    *(.data)
  }
}
