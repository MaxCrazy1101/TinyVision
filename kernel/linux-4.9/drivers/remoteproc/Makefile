#
# Generic framework for controlling remote processors
#

obj-$(CONFIG_REMOTEPROC)		+= remoteproc.o
remoteproc-y				:= remoteproc_core.o
remoteproc-y				+= remoteproc_sysfs.o
remoteproc-y				+= remoteproc_debugfs.o
remoteproc-y				+= remoteproc_virtio.o
remoteproc-y				+= remoteproc_elf_loader.o
remoteproc-y				+= sunxi_rproc_firmware.o
remoteproc-y				+= sunxi_rproc_trace.o
obj-$(CONFIG_SUNXI_RPROC_SHARE_IRQ) += sunxi_share_interrupt.o
obj-$(CONFIG_OMAP_REMOTEPROC)		+= omap_remoteproc.o
obj-$(CONFIG_STE_MODEM_RPROC)	 	+= ste_modem_rproc.o
obj-$(CONFIG_WKUP_M3_RPROC)		+= wkup_m3_rproc.o
obj-$(CONFIG_DA8XX_REMOTEPROC)		+= da8xx_remoteproc.o
obj-$(CONFIG_QCOM_MDT_LOADER)		+= qcom_mdt_loader.o
obj-$(CONFIG_QCOM_Q6V5_PIL)		+= qcom_q6v5_pil.o
obj-$(CONFIG_QCOM_WCNSS_PIL)		+= qcom_wcnss_pil.o
qcom_wcnss_pil-y			+= qcom_wcnss.o
qcom_wcnss_pil-y			+= qcom_wcnss_iris.o
obj-$(CONFIG_ST_REMOTEPROC)		+= st_remoteproc.o
obj-$(CONFIG_SUNXI_RPROC)			+= sunxi_boot/
obj-$(CONFIG_SUNXI_RPROC)			+= sunxi_loader/
obj-$(CONFIG_SUNXI_RPROC)			+= sunxi_remoteproc.o
sunxi_remoteproc-y					:= sunxi_rproc.o
