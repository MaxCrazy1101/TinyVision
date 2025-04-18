<h1 align="center">TinyVision</h1>
<p align="center">TinyVision - A Tiny Linux Board / IPC / Server / Router / And so on...</p>

![image-20231118150323034](assets/post/README/image-20231118150323034.png)

# 功能特性

- TinyVision是适用于 Linux主板、IPC、服务器、路由器等的终极一体化解决方案。 TinyVision 采用先进的 Allwinner V851se 或 V851s3 处理器，以紧凑的外形提供卓越的性能和多功能性。
- TinyVision 的 Cortex-A7 内核运行频率高达 1200MHz，RISC-V E907GC@600MHz，可在保持能源效率的同时提供强大的处理能力。 集成的0.5Tops@int8 NPU可为各种应用提供高效的AI推理。
- TinyVision 配备 64M DDR2 (V851se) 或 128M DDR3L (V851s3) 内置内存选项，确保流畅、无缝的操作。 TF 卡插槽支持 UHS-SDR104，为您的数据需求提供可扩展的存储空间。 此外，板载 SD NAND 和 USB&UART Combo 接口提供便捷的连接选项。
- 通过 TinyVision 对 2 通道 MIPI CSI 输入的支持，增强您基于视觉的应用程序，从而实现高级相机功能的无缝集成。 独立的 ISP 可实现高分辨率图像处理，支持高达 2560 x 1440 的分辨率。
- 借助 TinyVision 的 H.264/H.265 解码功能（分辨率高达 4096x4096）享受身临其境的视频体验。 使用 H.264/H.265 编码器捕捉和编码令人惊叹的时刻，支持高达 3840x2160@20fps 的分辨率。 借助在线视频编码支持，您可以轻松共享和流式传输您的内容。
- 为了提供可靠的实时操作系统支持，TinyVision 利用基于 RT-Thread + RTOS-HAL 的 RISC-V E907 RTOS 的强大功能，确保最佳性能和稳定性。
- 无论您喜欢 Linux 环境还是实时控制，TinyVision 都能满足您的需求。 它支持 OpenWrt 23.05、Buildroot 和 Mainline Linux 6.7 等 GNU/Linux 版本，满足不同的软件需求。 
- 对于实时控制爱好者来说，基于 RT-Thread + RTOS-HAL 的 RISC-V E907 RTOS 支持可提供快速可靠的性能。
- TinyVision 是一款紧凑而强大的解决方案，适用于您的 Linux 主板、IPC、服务器、路由器等，释放无限可能。 体验无与伦比的性能、增强的功能和无缝集成。 选择 TinyVision 并改变您的创新方式。


![TinyVision_Pinout](assets/post/README/TinyVision-Pinout.jpg)

- Based on Allwinner V851se / V851s3
- Cortex-A7 Core up to 1200MHz
- RISC-V E907GC@600MHz
- 0.5Tops@int8 NPU
- Built in 64M DDR2 (V851se) / 128M DDR3L (V851s3) memory
- One TF Card Slot, Support UHS-SDR104
- On board SD NAND
- On board USB&UART Combo
- Supports one 2-lane MIPI CSI inputs
- Supports 1 individual ISP, with maximum resolution of 2560 x 1440
- H.264/H.265 decoding at 4096x4096
- H.264/H.265 encoder supports 3840x2160@20fps
- Online Video encode
- RISC-V E907 RTOS Support, Based on RT-Thread + RTOS-HAL

# 芯片框图

## V851 系列

![image-20231118143708175](assets/post/README/image-20231118143708175.png)

## 不同型号芯片的区别

| 芯片型号 | 内存       | 内置网络PHY | 显示接口                                        | 发布状态                            |
| -------- | ---------- | ----------- | ----------------------------------------------- | ----------------------------------- |
| V851s    | 64M DDR2   | 无          | 2-lane MIPI + RGB + MIPI DBI TypeC, 1280x720@60 | Yuzukilizard 开发板，已发布         |
| V851se   | 64M DDR2   | 10/100M     | MIPI DBI TypeC, 320x240@30                      | TinyVision 开发板，已发布           |
| V851s3   | 128M DDR3L | 无          | 2-lane MIPI + RGB + MIPI DBI TypeC, 1280x720@60 | TinyVision 开发板销量达到1k开始计划 |
| V851s4   | 256M DDR3L | 无          | 2-lane MIPI + RGB + MIPI DBI TypeC, 1280x720@60 | TinyVision 开发板销量达到3k开始计划 |

## 配套模块

### TypeC-SBUUart

- 链接开发板
- 提供串口调试功能
- 提供OTG功能，通过他插U盘等设备

https://item.taobao.com/item.htm?id=761016078439&

![img](assets/post/README/O1CN01VSf9j91lZZ6KxHqtO_!!41044833.jpg_Q75.jpg_.webp)

### SPI显示屏

- 1.44 寸 IPS 240*240 显示屏

https://item.taobao.com/item.htm?id=761016078439&

![img](assets/post/README/O1CN01xsx2Wu1lZZ6MjuB4f_!!41044833.jpg_Q75.jpg_.webp)

### WIFI模块

https://item.taobao.com/item.htm?id=761016078439&

### GC2053摄像头

* GC2053摄像头: https://item.taobao.com/item.htm?&id=736796459015

![image-20240320183430101](assets/post/README/image-20240320183430101.png)


### 百兆RJ45头

* RJ45 百兆线（选择4P转水晶头 50CM）: https://item.taobao.com/item.htm?&id=626832235333

![image-20240320183442520](assets/post/README/image-20240320183442520.png)

# 快速上手

## 制作系统启动镜像

### 硬件要求

当您购买了一套全新的TinyVision异构视觉AI开发套件，包装盒内会有：

1.TinyVision开发板

您还需要额外的：

1.microSD卡(建议最低8GB） x1

2.TypeC-SUB调试器 x1  https://item.taobao.com/item.htm?id=761016078439&

3.40Gbps数据线 x1 https://item.taobao.com/item.htm?id=761016078439&

4.type-C数据线 x2 https://item.taobao.com/item.htm?id=761016078439&

5.USB读卡器 x1

> 注意：使用时还需要一台正常工作且能连接互联网的PC电脑。

### 系统选择

TinyVision V851se支持多种不同的系统，有主线，有原厂BSP，有RTOS等等，在首次启动，您需要选择一个合适的系统，这里我们以兼容性最好，功能最全的Tina-SDK系统镜像为例，下载地址：[https://github.com/YuzukiHD/TinyVision/releases]  下载固件  `v851se_linux_tinyvision_uart0.zip` 保存至电脑。之后进行烧写操作。

![image-20240127152200069](assets/post/README/image-20240127152200069.png)

### Tina Linux 原厂 BSP 烧写系统

- 硬件：TinyVision主板 x1
- 硬件：TypeC-SUB x1
- 硬件：TF卡读卡器 x1
- 硬件：8GB以上的 Micro TF卡 x1
- 软件：Tina系统TF卡烧录工具: [PhoenixCard-V2.8](https://gitlab.com/dongshanpi/tools/-/raw/main/PhoenixCard-V2.8.zip)
- 软件：TinaTF卡最小系统镜像：`tina_v851se-tinyvision_uart0.img` 

烧录过程请参考下述步骤：

1. 打开 已经下载好的 PhoenixCard-V2.8 烧录工具运行起来，点击 **固件**
2. 在弹出的对话框内，找到我们已经下载好的Tina系统镜像，按照 序号  2 、3 依次选择。
3. 选择好固件后，点击 序号 4 选择为 启动卡，之后 点击 序号 5   烧卡进行烧录。
4. 烧录完成后，如下蓝框 序号6 log提示，会提示 烧写完成，此时 拔下 TF卡即可进行后续启动步骤。

![image-20231221122848948](assets/post/README/TinaSDKFlash.jpg)

### 主线 Linux 系统固件刷写

主线 Linux 系统不适用于 PhoenixCard，请使用 win32diskimager 或者 Etcher 进行烧写，与树莓派是一样的

- TF卡读卡器 x1
- 8GB以上的 micro TF卡 x1
- win32diskimage工具 : https://gitlab.com/dongshanpi/tools/-/raw/main/win32diskimager-1.0.0-install.exe
- SDcard专用格式化工具：https://gitlab.com/dongshanpi/tools/-/raw/main/SDCardFormatter5.0.1Setup.exe
- Etcher 烧写工具下载：https://etcher.balena.io/#download-etcher


* 使用Win32Diskimage烧录：需要下载 **win32diskimage SDcard专用格式化** 这两个烧写TF卡的工具。

- 使用SD CatFormat格式化TF卡，注意备份卡内数据。参考下图所示，点击刷新找到TF卡，然后点击 Format 在弹出的 对话框 点击 **是(Yes)**等待格式完成即可。

![](assets/post/README/SDCardFormat_001.png)

- 格式化完成后，使用**Win32diskimage**工具来烧录镜像，参考下属步骤，找到自己的TF卡盘符，然后点击2 箭头 文件夹的符号 找到 刚才解压的 TF卡镜像文件 **dongshannezhastu-sdcard.img** 最后 点击 写入，等待写入完成即可。

![](assets/post/README/wind32diskimage_001.png)

完成以后，就可以弹出TF卡，并将其插到 东山哪吒STU 最小板背面的TF卡槽位置处，此时连接 串口线 并使用 串口工具打开串口设备，按下开发板的 **RESET**复位按键就可以重启进入TF卡系统内了。

* 使用 etcher https://etcher.balena.io/ 工具直接烧写系统镜像。

1.以管理员身份运行 etcher 烧写工具

2.选择需要烧写的系统镜像文件

3.选择 目标磁盘，找到TF卡设备

4. 点击烧录，等待烧录成功

![](assets/post/README/Etcher_Flash.jpg)

### 插卡启动

在开发板启动前需要先将SD卡接入开发板，如下图所示：

![image-20240110120118215](assets/post/README/image-20240110120118215.png)


使用 40Gbps 数据线连接TinyVision开发板和TypeC-SUB调试器，如下图所示**（Yuzuki注：下图拍错了懒得换，得反过来插，TypeC-SUB调试器背面对着TinyVision有SD卡的那一面，拍照人已经扣钱了）：**

![image-20240110141348166](assets/post/README/image-20240110141348166.png)

使用两条Type-C连接TypeC UART调试器和电脑端，连接完成后即可启动系统.

## 使用串口登录系统

### 1. 连接串口线

将配套的TypeC线一段连接至开发板的串口/供电接口，另一端连接至电脑USB接口，连接成功后板载的红色电源灯会亮起。
默认情况下系统会自动安装串口设备驱动，如果没有自动安装，可以使用驱动精灵来自动安装。

* 对于Windows系统
  此时Windows设备管理器 在 端口(COM和LPT) 处会多出一个串口设备，一般是以 `USB-SERIAL CH340`开头，您需要留意一下后面的具体COM编号，用于后续连接使用。

![image-20240127154715951](assets/post/README/image-20240127154715951.png)

如上图，COM号是14，我们接下来连接所使用的串口号就是14。

* 对于Linux系统
  可以查看是否多出一个/dev/tty 设备,一般情况设备节点为 /dev/ttyACM0  。

![QuickStart-02](assets/post/README/QuickStart-02.png)

### 2. 打开串口控制台

#### 2.1 获取串口工具

使用Putty或者MobaXterm等串口工具来开发板设备。

* 其中putty工具可以访问页面  https://www.chiark.greenend.org.uk/~sgtatham/putty/  来获取。
* MobaXterm可以通过访问页面 https://mobaxterm.mobatek.net/ 获取 (推荐使用)。

#### 2.2 使用putty登录串口

![QuickStart-04](assets/post/README/QuickStart-04.png)

#### 2.3 使用Mobaxterm登录串口

打开MobaXterm，点击左上角的“Session”，在弹出的界面选中“Serial”，如下图所示选择端口号（前面设备管理器显示的端口号COM21）、波特率（Speed 115200）、流控（Flow Control: none）,最后点击“OK”即可。步骤如下图所示。
**注意：流控（Flow Control）一定要选择none，否则你将无法在MobaXterm中向串口输入数据**

![Mobaxterm_serial_set_001](assets/post/README/Mobaxterm_serial_set_001.png)


### 3. 进入系统shell

使用串口工具成功打开串口后，可以直接按下 Enter 键 进入shell，当然您也可以按下板子上的 `Reset`复位键，来查看完整的系统信息。

``` bash
[34]HELLO! BOOT0 is starting!
[37]BOOT0 commit : 88480af
[40]set pll start
[42]periph0 has been enabled
[44]set pll end
[46][pmu]: bus read error
[48]board init ok
[50]ZQ value = 0x2f
[52]get_pmu_exist() = -1
[54]DRAM BOOT DRIVE INFO: V0.33
[57]DRAM CLK = 528 MHz
[59]DRAM Type = 2 (2:DDR2,3:DDR3)
[62]DRAMC read ODT  off.
[65]DRAM ODT off.
[67]ddr_efuse_type: 0xa
[69]DRAM SIZE =64 M
[71]dram_tpr4:0x0
[73]PLL_DDR_CTRL_REG:0xf8002b00
[76]DRAM_CLK_REG:0xc0000000
[78][TIMING DEBUG] MR2= 0x0
[83]DRAM simple test OK.
[85]dram size =64
[87]spinor id is: ef 40 18, read cmd: 6b
[90]Succeed in reading toc file head.
[94]The size of toc is 100000.
[139]Entry_name        = opensbi
[142]Entry_name        = u-boot
[146]Entry_name        = dtb
▒149]Jump to second Boot.

U-Boot 2018.05-g24521d6 (Feb 11 2022 - 08:52:39 +0000) Allwinner Technology

[00.158]DRAM:  64 MiB
[00.160]Relocation Offset is: 01ee7000
[00.165]secure enable bit: 0
[00.167]CPU=1008 MHz,PLL6=600 Mhz,AHB=200 Mhz, APB1=100Mhz  MBus=300Mhz
[00.174]flash init start
[00.176]workmode = 0,storage type = 3
individual lock is enable
[00.185]spi sunxi_slave->max_hz:100000000
SF: Detected w25q128 with page size 256 Bytes, erase size 64 KiB, total 16 MiB
[00.195]sunxi flash init ok
[00.198]line:703 init_clocks
[00.201]drv_disp_init
request pwm success, pwm7:pwm7:0x2000c00.
[00.218]drv_disp_init finish
[00.220]boot_gui_init:start
[00.223]set disp.dev2_output_type fail. using defval=0
[00.250]boot_gui_init:finish
partno erro : can't find partition bootloader
54 bytes read in 0 ms
[00.259]bmp_name=bootlogo.bmp size 38454
38454 bytes read in 1 ms (36.7 MiB/s)
[00.434]Loading Environment from SUNXI_FLASH... OK
[00.448]out of usb burn from boot: not need burn key
[00.453]get secure storage map err
partno erro : can't find partition private
root_partition is rootfs
set root to /dev/mtdblock5
[00.464]update part info
[00.467]update bootcmd
[00.469]change working_fdt 0x42aa6da0 to 0x42a86da0
No reserved memory region found in source FDT
FDT ERROR:fdt_get_all_pin:get property handle pinctrl-0 error:FDT_ERR_INTERNAL
sunxi_pwm_pin_set_state, fdt_set_all_pin, ret=-1
[00.494]LCD open finish
[00.510]update dts
```

**系统默认会自己登录 没有用户名 没有密码。**
**系统默认会自己登录 没有用户名 没有密码。**
**系统默认会自己登录 没有用户名 没有密码。**

## Windows下使用 ADB登录系统

### 1.连接OTG线

将开发板配套的两根typec线，一根 直接连接至 开发板 `黑色字体序号 3.OTG烧录接口` 另一头连接至电脑的USB接口，开发板默认有系统，接通otg电源线就会通电并直接启动。

### 2.安装Windows板ADB

点击链接下载Windows版ADB工具 [adb-tools](https://gitlab.com/dongshanpi/tools/-/raw/main/ADB.7z)
下载完成后解压，可以看到如下目录，

![adb-tools-dir](assets/post/README/adb-tools-dir.png)

然后 我们单独 拷贝 上一层的 **platform-tools** 文件夹到任意 目录，拷贝完成后，记住这个 目录位置，我们接下来要把这个 路径添加至 Windows系统环境变量里。

![adb-tools-dir](assets/post/README/adb-tools-dir-001.png)

我这里是把它单独拷贝到了 D盘，我的目录是 `D:\platform-tools` 接下来 我需要把它单独添加到Windows系统环境变量里面才可以在任意位置使用adb命令。

![adb-tools-windows_config_001](assets/post/README/adb-tools-windows_config_001.png)

添加到 Windows系统环境变量里面
![adb-tools-windows_config_001](assets/post/README/adb-tools-windows_config_002.png)

### 3.打开cmd连接开发板

打开CMD Windows 命令提示符方式有两种
方式1：直接在Windows10/11搜索对话框中输入  cmd 在弹出的软件中点击  `命令提示符`
方式2：同时按下 wind + r 键，输入 cmd 命令，按下确认 就可以自动打开 `命令提示符`

![adb-tools-windows_config_003](assets/post/README/adb-tools-windows_config_003.png)

打开命令提示符，输出 adb命令可以直接看到我们的adb已经配置成功

![adb-tools-windows_config_004](assets/post/README/adb-tools-windows_config_004.png)

连接好开发板的 OTG 并将其连接至电脑上，然后 输入 adb shell就可以自动登录系统

``` shell
C:\System> adb shell
* daemon not running. starting it now on port 5037 *
* daemon started successfully *

 _____  _              __     _
|_   _||_| ___  _ _   |  |   |_| ___  _ _  _ _
  | |   _ |   ||   |  |  |__ | ||   || | ||_'_|
  | |  | || | || _ |  |_____||_||_|_||___||_,_|
  |_|  |_||_|_||_|_|  Tina is Based on OpenWrt!
 ----------------------------------------------
 Tina Linux
 ----------------------------------------------
root@TinaLinux:/#

```

ADB 也可以作为文件传输使用，例如：

``` shell
C:\System> adb push badapple.mp4 /mnt/UDISK   # 将 badapple.mp4 上传到开发板 /mnt/UDISK 目录内
```

``` shell
C:\System> adb pull /mnt/UDISK/badapple.mp4   # 将 /mnt/UDISK/badapple.mp4 下拉到当前目录内
```

**注意： 此方法目前只适用于 使用全志Tina-SDK 构建出来的系统。**

# 系统镜像下载

系统下载地址：https://github.com/YuzukiHD/TinyVision/releases

## TinaSDK-5.0

- [v851se_linux_tinyvision_uart0.zip](https://github.com/YuzukiHD/TinyVision/releases/download/0.0.2/v851se_linux_tinyvision_uart0.zip)
  - 默认TinaSDK编译出来
  - 支持ADB
  - 和默认SDK兼容性最好
  - OpenCV
  - NPU
  - Hardware encoder and decoder
  - 使用 PhoenixCard 刷写到SD卡


- [v851se_linux_tinyvision_uart0_raw.zip.zip](https://github.com/YuzukiHD/TinyVision/releases/download/0.0.2/v851se_linux_tinyvision_uart0_raw.zip.zip)
  - 默认TinaSDK编译出来，使用 OpenixCard 转换为标准格式固件
  - 支持ADB
  - 和默认SDK兼容性最好
  - OpenCV
  - NPU
  - Hardware encoder and decoder
  - 使用 win32diskimager 刷写到SD卡

## Debian12

- [tinyvision_debian12_sdcard.img](https://github.com/YuzukiHD/TinyVision/releases/download/0.0.1/tinyvision_debian12_sdcard.img.tar.gz)
  - 支持 debian 12发行版系统
  - 用户名 `root`
  - 密码 `tinyvision`
  - 使用 win32diskimager 刷写到SD卡

## OpenWrt-23.05

- [openwrt-yuzukihd-v851se-yuzuki_tinyvision-ext4-sysupgrade.img](https://github.com/YuzukiHD/TinyVision/releases/download/0.0.1/openwrt-yuzukihd-v851se-yuzuki_tinyvision-ext4-sysupgrade.img.gz)
  - 使用Linux kernel 6.x构建
  - 支持WOL
  - 支持LUCI配置
  - 支持百兆网卡等
  - 使用 win32diskimager 刷写到SD卡
- [openwrt-yuzukihd-v851se-yuzuki_tinyvision-squashfs-sysupgrade.img.gz](https://github.com/YuzukiHD/TinyVision/releases/download/0.0.1/openwrt-yuzukihd-v851se-yuzuki_tinyvision-squashfs-sysupgrade.img.gz)
  - 使用Linux kernel 6.x构建
  - 支持WOL
  - 支持LUCI配置
  - 支持百兆网卡等
  - 支持OTA
  - 使用 win32diskimager 刷写到SD卡

## USB摄像头固件

- [tinyvision_webcam.7z](https://github.com/YuzukiHD/TinyVision/releases/download/0.0.1/tinyvision_webcam.7z)
  - 将 TinyVision 作为 USB 摄像头
  - 1080p@30
  - Support mjpeg and h264
  - 使用 win32diskimager 刷写到SD卡

# 安装并配置开发环境

## 获取虚拟机系统

### 下载vmware虚拟机工具

使用浏览器打开网址    https://www.vmware.com/products/workstation-pro/workstation-pro-evaluation.html   参考下图箭头所示，点击下载安装 Windows版本的VMware Workstation ，点击 **DOWNLOAD NOW**  即可开始下载。

![vmwareworkstation_download_001](assets/post/README/vmwareworkstation_download_001.png)

下载完成后全部使用默认配置一步步安装即可。



### 获取Ubuntu系统镜像

* 使用浏览器打开  https://www.linuxvmimages.com/images/ubuntu-1804/     找到如下箭头所示位置，点击 **VMware Image** 下载。

![linuxvmimage_downlaod_001](assets/post/README/linuxvmimage_downlaod_001.png)

下载过程可能会持续 10 到 30 分钟，具体要依据网速而定。



## 运行虚拟机系统

1. 解压缩 虚拟机系统镜像压缩包，解压缩完成后，可以看到里面有如下两个文件，接下来，我们会使用 后缀名为 .vmx 这个 配置文件。

![ConfigHost_003](assets/post/README/ConfigHost_003.png)

2.  打开已经安装好的 vmware workstation 软件 点击左上角的 **文件** --> **打开** 找到上面的 Ubuntu_18.04.6_VM_LinuxVMImages.COM.vmx  文件，之后会弹出新的虚拟机对话框页面。

![ConfigHost_004](assets/post/README/ConfigHost_004.png)

3. 如下图所示为  为我们已经虚拟机的配置界面，那面我们可以 点击 红框 2 编辑虚拟机设置 里面 去调正 我们虚拟机的 内存 大小 和处理器个数，建议 最好 内存为 4GB 及以上，处理器至少4 个。 调整好以后，就可以 点击 **开启此虚拟机** 来运行此虚拟机了

![ConfigHost_005](assets/post/README/ConfigHost_005.png)

第一次打开会提示  一个 虚拟机已经复制的 对话框，我们这时，只需要 点击  我已复制虚拟机  就可以继续启动虚拟机系统了。

![ConfigHost_006](assets/post/README/ConfigHost_006.png)

等待数秒，系统就会自动启动了，启动以后 鼠标点击   **Ubuntu**  字样，就可以进入登录对话框，输入  密码 ubuntu 即可登录进入ubuntu系统内。

注意： 

**Ubuntu默认的用户名密码分别为 ubuntu ubuntu** 

**Ubuntu默认的用户名密码分别为 ubuntu ubuntu** 

**Ubuntu默认的用户名密码分别为 ubuntu ubuntu** 

**ubuntu默认需要联网，如果你的 Windows电脑已经可以访问Internet 互联网，ubuntu系统后就会自动共享 Windows电脑的网络 进行连接internet 网络。**



### 配置开发环境

* 安装必要软件包, 鼠标点击进入 ubuntu界面内，键盘同时 按下 **ctrl + alt + t** 三个按键会快速唤起，终端界面，唤起成功后，在终端里面执行如下命令进行安装必要依赖包。

```bash
sudo apt-get install -y  sed make binutils build-essential  gcc g++ bash patch gzip bzip2 perl  tar cpio unzip rsync file  bc wget python  cvs git mercurial rsync  subversion android-tools-mkbootimg vim  libssl-dev  android-tools-fastboot
```

如果你发现你的ubuntu虚拟机 第一次启动 无法 通过 windows下复制 命令 粘贴到 ubuntu内，则需要先手敲 执行如下命令 安装一个 用于 虚拟机和 windows共享剪切板的工具包。

```bash
sudo apt install open-vm-tools-desktop 
```

![ConfigHost_007](assets/post/README/ConfigHost_007.png)

安装完成后，点击右上角的 电源按钮，重启ubuntu系统，或者 直接输入 sudo reboot 命令进行重启。

这时就可以 通过windows端向ubuntu内粘贴文件，或者拷贝拷出文件了。

![ConfigHost_008](assets/post/README/ConfigHost_008.png)

做完这一步以后，就可以继续往下，进行开发了。

# Tina 4.0 Linux 开发

## Tina-SDK系统

- 此套构建系统基于全志单核 Arm Cortex-A7 SoC，搭载了 RISC-V 内核的V851s 芯片，适配了Tina 5.0主线版本，是专为智能 IP 摄像机设计的，支持人体检测和穿越报警等功能。

![](assets/post/README/OpenRemoved_Tina_Linux_System_software_development_Guide-3-1.jpg)

* SDK 下载解压操作步骤请参考  Tina-SDK开发章节内容。
* TinaSDK开发参考文档站点 https://tina.100ask.net/
  * 第一部分介绍了Tina-SDK源码的使用方式，包含源码目录功能，编译打包等命令。
  * 第二部分介绍了Bootloader相关的内容，主要包含uboot相关的使用说明。
  * 第三部分介绍了Linux所有的设备驱动开发的详细说明。
  * 第四部分介绍了Linux驱动之上的各类组件包库等的开发说明。
  * 第五部分介绍了Linux系统的相关操作，主要包含存储支持 打包 调试 优化等
  * 第六部分支持了一些应用demo示例，如LVGL GST等常用且较为丰富的综合项目

Tina 4.0 Linux是基于Linux内核开发的针对智能硬件类产品的嵌入式软件系统。Tina Linux基于OpenWrt-14.07 版本的软件开发包，包含了 Linux 系统开发用到的内核源码、驱动、工具、系统中间件与应用程序包。（该系统较老，且学习难度较大，建议使用Tina 5.0 Linux 开发）

**如果需要开发 Tina 4.0，请使用 Ubuntu 18.04 以下系统，高版本系统不支持！**

## 获取源码

Tina 4.0 开发环境请联系客服获取，用户名`admin`, 密码`admin`。

## 编译打包

编译打包命令如下：

```bash
source build/envsetup.sh
lunch
make -j32
pack
```

其中：

- source build/envsetup.sh ：获取环境变量
- lunch 会提供方案选项以供选择
- make -j32 ：编译，其中-j后面的数字参数为编译用的线程数，可根据开发者编译用的PC实际情况选择。
- pack : 打包，将编译好的固件打包成一个.img格式的固件，固件路径 `/out/`

## 适配板载 SD NAND

设备树中的 SDC2 节点修改如下，之后线刷即可

```
&sdc2 {
	non-removable;
	bus-width = <4>;
	mmc-ddr-3_3v;
	/*mmc-hs200-1_8v;*/
	/*mmc-hs400-1_8v;*/
	no-sdio;
	/delete-property/ no-sd;
	no-mmc;
	ctl-spec-caps = <0x8>;
	cap-mmc-highspeed;
	sunxi-signal-vol-sw-without-pmu;
	sunxi-power-save-mode;
	/*sunxi-dis-signal-vol-sw;*/
	max-frequency = <50000000>;
	/*vmmc-supply = <&reg_dcdc1>;*/
	/*emmc io vol 3.3v*/
	/*vqmmc-supply = <&reg_aldo1>;*/
	/*emmc io vol 1.8v*/
	/*vqmmc-supply = <&reg_eldo1>;*/
	status = "okay";
};
```

## 常见问题

### ERROR: reserving fdt memory region failed

![493ddf63-0376-48e6-9c89-99df48cd3797-image.png](assets/post/README/1704867277973-493ddf63-0376-48e6-9c89-99df48cd3797-image.png)

对于小内存设备需要配置 `CONFIG_SUNXI_MALLOC_LEN=0x1400000`

修改文件
`lichee/brandy-2.0/u-boot-2018/include/configs/sun8iw21p1.h`

把

```
define SUNXI_SYS_MALLOC_LEN	(32 << 20)
```

改为

```
#ifdef CONFIG_SUNXI_MALLOC_LEN
#define SUNXI_SYS_MALLOC_LEN	CONFIG_SUNXI_MALLOC_LEN
#else
#define SUNXI_SYS_MALLOC_LEN	(32 << 20)
#endif
```

修改文件
`brandy/brandy-2.0/u-boot-2018/drivers/mmc/sunxi_mmc.h`

把

```c
/* need malloc low len when flush unaligned addr cache */
#if  defined (CONFIG_MACH_SUN8IW18) || defined (CONFIG_MACH_SUN8IW19) || \
	(defined (CONFIG_MACH_SUN8IW20) && (CONFIG_SUNXI_MALLOC_LEN < 0x3700000))
#define SUNXI_MMC_MALLOC_LOW_LEN	(4 << 20)
#else
#define SUNXI_MMC_MALLOC_LOW_LEN        (16 << 20)
#endif
```

改为

```c
/* need malloc low len when flush unaligned addr cache */
#if  defined (CONFIG_MACH_SUN8IW18) || defined (CONFIG_MACH_SUN8IW19) || \
	(defined (CONFIG_MACH_SUN8IW20) && (CONFIG_SUNXI_MALLOC_LEN < 0x3700000)) || \
	(defined (CONFIG_MACH_SUN8IW21) && (CONFIG_SUNXI_MALLOC_LEN < 0x3700000))
#define SUNXI_MMC_MALLOC_LOW_LEN	(4 << 20)
#else
#define SUNXI_MMC_MALLOC_LOW_LEN        (16 << 20)
#endif
```

### Error: "distro bootcmd" not defined

SDK 默认配置是MBR格式，针对 NAND 设备。使用 PhoenixSuit 烧写的时候会自动识别存储器来判断使用GPT分区表还是MBR分区表。但是 PhoenixCard 刷写的时候无法识别到存储器，所以需要固件配置 GPT 或者 MBR，配置文件为`image.cfg`，如果没有配置 GPT 固件使用 MBR 格式固件，会导致PhoenixCard 将 boot1被写入 8K 偏移位，8K偏移位置正好是 GPT 分区表的位置，导致覆盖了 GPT 分区表，正确的操作应该是写入 128K 偏移，但是由于 SDK 内配置为MBR固件，而且PhoenixCard 无法读取目标设备是何种存储设备，所以PhoenixCard 默认写入 8K 偏移导致启动失败。

修改方法如下

编辑文件：`device/config/chips/v851se/configs/default/image.cfg` 加入一行，使打包成为 GPT 格式

```
    {filename = "sunxi_gpt.fex",       maintype = "12345678",        subtype = "1234567890___GPT",},
```

![df57a372-5466-488c-9852-c9ffe2c96de9-image.png](assets/post/README/1706261625737-df57a372-5466-488c-9852-c9ffe2c96de9-image.png)

# Tina 5.0 Linux 开发

AWOL 版本的 Tina Linux 使用的是 Tina5.0，OpenWrt 升级到了 21.05 版本，相较于商业量产版本的 Tina Linux 新了许多，而且支持更多新软件包。不过可惜的是 MPP 没有移植到 Tina5.0，不过 MPP 使用门槛较高，学习难度大，不是做产品也没必要研究。这里就研究下使用 AWOL 开源版本的 Tina Linux 与 OpenCV 框架开启摄像头拍照捕获视频。

## 准备开发环境

首先准备一台 Ubuntu 18.04 / Ubuntu 16.04 / Ubuntu 14.04 的虚拟机或实体机，其他系统没有测试过出 BUG 不管。

系统配置如下：

构建整个 SDK 项目对开发主机的要求相对较高。要求开发主机或者虚拟机的处理器至少为 4 核，内存容量为 16GB 或更高，硬盘容量为 500GB 或更高。

| 组件         | 最低配置            | 推荐配置                                         |
| ------------ | ------------------- | ------------------------------------------------ |
| 处理器 (CPU) | Intel Core i3-6100U | AMD Ryzen 9 5950X 或 Intel Core i9-12900K        |
| 内存 (RAM)   | 16GB DDR4           | 64GB  DDR5                                           |
| 硬盘 (存储)  | 512GB HDD           | 2TB NVMe SSD                                     |

如果很不幸您没满足最低16G内存，需要关闭OpenCV，Python3，Numpy编译，配置文件在末尾附录，覆盖文件 `openwrt/target/v851se/v851se-tinyvision/defconfig`

更新系统，安装基础软件包

```
sudo apt-get update
sudo apt-get upgrade -y
sudo apt-get install build-essential subversion git libncurses5-dev zlib1g-dev gawk flex bison quilt libssl-dev xsltproc libxml-parser-perl mercurial bzr ecj cvs unzip lsof python3 python2 python3-dev android-tools-mkbootimg python2 libpython3-dev
```

安装完成后还需要安装 i386 支持，SDK 有几个打包固件使用的程序是 32 位的，如果不安装就等着 `Segment fault` 吧。

```
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt install gcc-multilib 
sudo apt install libc6:i386 libstdc++6:i386 lib32z1
```

## 下载 AWOL Tina Linux BSP

### 注册一个 AWOL 账号

下载 SDK 需要使用 AWOL 的账号，前往 `https://bbs.aw-ol.com/` 注册一个就行。其中需要账号等级为 LV2，可以去这个帖子：https://bbs.aw-ol.com/topic/4158/share/1 水四条回复就有 LV2 等级了。

### 安装 repo 管理器

BSP 使用 `repo` 下载，首先安装 `repo `，这里建议使用国内镜像源安装

```bash
mkdir -p ~/.bin
PATH="${HOME}/.bin:${PATH}"
curl https://mirrors.bfsu.edu.cn/git/git-repo > ~/.bin/repo
chmod a+rx ~/.bin/repo
```

请注意这里使用的是临时安装，安装完成后重启终端就没有了，需要再次运行下面的命令才能使用，如何永久安装请自行百度。

```bash
PATH="${HOME}/.bin:${PATH}"
```

安装使用 `repo` 的过程中会遇到各种错误，请百度解决。repo 是谷歌开发的，repo 的官方服务器是谷歌的服务器，repo 每次运行时需要检查更新然后卡死，这是很正常的情况，所以在国内需要更换镜像源提高下载速度。将如下内容复制到你的`~/.bashrc` 里

```bash
echo export REPO_URL='https://mirrors.bfsu.edu.cn/git/git-repo' >> ~/.bashrc
source ~/.bashrc
```

如果您使用的是 dash、hash、 zsh 等 shell，请参照 shell 的文档配置。环境变量配置一个 `REPO_URL` 的地址

配置一下 git 身份认证，设置保存 git 账号密码不用每次都输入。

```bash
git config --global credential.helper store
```

### 新建文件夹保存 SDK

使用 `mkdir` 命令新建文件夹，保存之后需要拉取的 SDK，然后 `cd` 进入到刚才新建的文件夹中。

```bash
mkdir tina-v853-open
cd tina-v853-open
```

### 初始化 repo 仓库

使用 `repo init` 命令初始化仓库，`tina-v853-open` 的仓库地址是 `https://sdk.aw-ol.com/git_repo/V853Tina_Open/manifest.git` 需要执行命令：

```bash
repo init -u https://sdk.aw-ol.com/git_repo/V853Tina_Open/manifest.git -b master -m tina-v853-open.xml
```

### 拉取 SDK

```bash
repo sync
```

### 创建开发环境

```bash
repo start devboard-v853-tina-for-awol --all
```

## 适配 TinyVision 板子

刚才下载到的 SDK 只支持一个板子，售价 1999 的 `V853-Vision`  开发板，这里要添加自己的板子的适配。

下载支持包：

| 版本 | 下载地址                                                     |
| ---- | ------------------------------------------------------------ |
| 1.0  | https://github.com/YuzukiTsuru/YuzukiTsuru.GitHub.io/releases/download/2024-01-21-20240121/tina-bsp-tinyvision.tar.gz |
| 1.1  | https://github.com/YuzukiHD/TinyVision/releases/download/tina.0.0.1/tina-bsp-tinyvision.tar.gz |
| 1.2  | https://github.com/YuzukiHD/TinyVision/releases/download/tina.0.0.2/tina-bsp-tinyvision.tar.gz |
| 1.3  | https://github.com/YuzukiHD/TinyVision/releases/download/tina.0.0.2/tina-bsp-tinyvision_1.3.tar.gz |

或者可以在：https://github.com/YuzukiHD/TinyVision/tree/main/tina 下载到文件，不过这部分没预先下载软件包到 dl 文件夹所以编译的时候需要手动下载。

放到 SDK 的主目录下

![image-20240122151606422](assets/post/README/image-20240122151606422.png)

运行解压指令

``` bash
tar xvf tina-bsp-tinyvision.tar.gz
```

即可使 Tina SDK 支持 TinyVision 板子

![image-20240122151823777](assets/post/README/image-20240122151823777.png)

## 初始化 SDK 环境

每次开发之前都需要初始化 SDK 环境，命令如下

```
source build/envsetup.sh
```

然后按 1 选择 TinyVision

![image-20240122202904787](assets/post/README/image-20240122202904787.png)

## 适配 ISP 

Tina SDK 内置一个 libAWispApi 的包，支持在用户层对接 ISP，但是很可惜这个包没有适配 V85x 系列，这里就需要自行适配。其实适配很简单，SDK 已经提供了 lib 只是没提供编译支持。我们需要加上这个支持。

前往 `openwrt/package/allwinner/vision/libAWIspApi/machinfo` 文件夹中，新建一个文件夹 `v851se` ，然后新建文件 `build.mk` 写入如下配置：

``` 
ISP_DIR:=isp600
```

![image-20240122161729785](assets/post/README/image-20240122161729785.png)

对于  v851s，v853 也可以这样操作，然后 `m menuconfig` 勾选上这个包

![image-20240122202641560](assets/post/README/image-20240122202641560.png)

## 开启 camerademo 测试摄像头

进入 `m menuconfig` 进入如下页面进行配置。

```
Allwinner  --->
	Vision  --->
		<*> camerademo........................................ camerademo test sensor  --->
			[*]   Enabel vin isp support
```

编译系统然后烧录系统，运行命令 `camerademo` ，可以看到是正常拍摄照片的

![image-20240122162014027](assets/post/README/image-20240122162014027.png)

## 适配板载 SD NAND

设备树中的 SDC2 节点修改如下，之后线刷即可

```
&sdc2 {
	non-removable;
	bus-width = <4>;
	mmc-ddr-3_3v;
	/*mmc-hs200-1_8v;*/
	/*mmc-hs400-1_8v;*/
	no-sdio;
	/delete-property/ no-sd;
	no-mmc;
	ctl-spec-caps = <0x8>;
	cap-mmc-highspeed;
	sunxi-signal-vol-sw-without-pmu;
	sunxi-power-save-mode;
	/*sunxi-dis-signal-vol-sw;*/
	max-frequency = <50000000>;
	/*vmmc-supply = <&reg_dcdc1>;*/
	/*emmc io vol 3.3v*/
	/*vqmmc-supply = <&reg_aldo1>;*/
	/*emmc io vol 1.8v*/
	/*vqmmc-supply = <&reg_eldo1>;*/
	status = "okay";
};
```

## 适配 OpenCV 

### 勾选 OpenCV 包

`m menuconfig` 进入软件包配置，勾选 

```
OpenCV  --->
	<*> opencv....................................................... opencv libs
	[*]   Enabel sunxi vin isp support
```

### OpenCV 适配过程

**本部分的操作已经包含在 tina-bsp-tinyvision.tar.gz 中了，已经适配好了，如果不想了解如何适配 OpenCV 可以直接跳过这部分**

#### OpenCV 的多平面视频捕获支持

一般来说，如果不适配 OpenCV 直接开摄像头，会得到一个报错：

```
[  702.464977] [VIN_ERR]video0 has already stream off
[  702.473357] [VIN_ERR]gc2053_mipi is not used, video0 cannot be close!
VIDEOIO ERROR: V4L2: Unable to capture video memory.VIDEOIO ERROR: V4L: can't open camera by index 0
/dev/video0 does not support memory mapping
Could not open video device.
```

这是由于 OpenCV 的 V4L2 实现是使用的 `V4L2_CAP_VIDEO_CAPTURE` 标准，而 `sunxi-vin` 驱动的 RAW Sensor 平台使用的是 `V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE` ，导致了默认 OpenCV 的配置错误。

`V4L2_CAP_VIDEO_CAPTURE_MPLANE`和`V4L2_BUF_TYPE_VIDEO_CAPTURE`是 Video4Linux2（V4L2）框架中用于视频捕获的不同类型和能力标志。

1. `V4L2_CAP_VIDEO_CAPTURE_MPLANE`： 这个标志指示设备支持多平面（multi-plane）视频捕获。在多平面捕获中，图像数据可以分解成多个平面（planes），每个平面包含不同的颜色分量或者图像数据的不同部分。这种方式可以提高效率和灵活性，尤其适用于处理涉及多个颜色分量或者多个图像通道的视频流。
2. `V4L2_BUF_TYPE_VIDEO_CAPTURE`： 这个类型表示普通的单平面（single-plane）视频捕获。在单平面捕获中，图像数据以单个平面的形式存储，即所有的颜色分量或者图像数据都保存在一个平面中。

因此，区别在于支持的数据格式和存储方式。`V4L2_CAP_VIDEO_CAPTURE_MPLANE`表示设备支持多平面视频捕获，而`V4L2_BUF_TYPE_VIDEO_CAPTURE`表示普通的单平面视频捕获。

这里就需要通过检查`capability.capabilities`中是否包含`V4L2_CAP_VIDEO_CAPTURE`标志来确定是否支持普通的视频捕获类型。如果支持，那么将`type`设置为`V4L2_BUF_TYPE_VIDEO_CAPTURE`。

如果不支持普通的视频捕获类型，那么通过检查`capability.capabilities`中是否包含`V4L2_CAP_VIDEO_CAPTURE_MPLANE`标志来确定是否支持多平面视频捕获类型。如果支持，那么将`type`设置为`V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE`。

例如如下修改：

```diff
-    form.type                = V4L2_BUF_TYPE_VIDEO_CAPTURE;
-    form.fmt.pix.pixelformat = palette;
-    form.fmt.pix.field       = V4L2_FIELD_ANY;
-    form.fmt.pix.width       = width;
-    form.fmt.pix.height      = height;
+    if (capability.capabilities & V4L2_CAP_VIDEO_CAPTURE) {
+		form.type                = V4L2_BUF_TYPE_VIDEO_CAPTURE;
+		form.fmt.pix.pixelformat = palette;
+		form.fmt.pix.field       = V4L2_FIELD_NONE;
+		form.fmt.pix.width       = width;
+		form.fmt.pix.height      = height;
+	} else if (capability.capabilities & V4L2_CAP_VIDEO_CAPTURE_MPLANE) {
+        form.type = V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE;
+        form.fmt.pix_mp.width = width;
+        form.fmt.pix_mp.height = height;
+        form.fmt.pix_mp.pixelformat = palette;
+        form.fmt.pix_mp.field = V4L2_FIELD_NONE;
+	}
```

这段代码是在设置视频捕获的格式和参数时进行了修改。

原来的代码中，直接设置了`form.type`为`V4L2_BUF_TYPE_VIDEO_CAPTURE`，表示使用普通的视频捕获类型。然后设置了其他参数，如像素格式(`pixelformat`)、帧字段(`field`)、宽度(`width`)和高度(`height`)等。

修改后的代码进行了条件判断，根据设备的能力选择合适的视频捕获类型。如果设备支持普通的视频捕获类型（`V4L2_CAP_VIDEO_CAPTURE`标志被设置），则使用普通的视频捕获类型并设置相应的参数。如果设备支持多平面视频捕获类型（`V4L2_CAP_VIDEO_CAPTURE_MPLANE`标志被设置），则使用多平面视频捕获类型并设置相应的参数。

对于普通的视频捕获类型，设置的参数与原来的代码一致，只是将帧字段(`field`)从`V4L2_FIELD_ANY`改为`V4L2_FIELD_NONE`，表示不指定特定的帧字段。

对于多平面视频捕获类型，设置了新的参数，如多平面的宽度(`pix_mp.width`)、高度(`pix_mp.height`)、像素格式(`pix_mp.pixelformat`)和帧字段(`pix_mp.field`)等。

通过这个修改，可以根据设备的能力选择适当的视频捕获类型，并设置相应的参数，以满足不同设备的要求。

#### OpenCV 的 ISP 支持

OpenCV 默认不支持开启 RAW Sensor，不过现在需要配置为 OpenCV 开启 RAW Sensor 抓图，然后通过 OpenCV 送图到之前适配的 libAWispApi 库进行 ISP 处理。在这里增加一个函数作为 RAW Sensor 抓图的处理。

```c++
#ifdef __USE_VIN_ISP__
bool CvCaptureCAM_V4L::RAWSensor()
{
    struct v4l2_control ctrl;
    struct v4l2_queryctrl qc_ctrl;

    memset(&ctrl, 0, sizeof(struct v4l2_control));
    memset(&qc_ctrl, 0, sizeof(struct v4l2_queryctrl));
    ctrl.id = V4L2_CID_SENSOR_TYPE;
    qc_ctrl.id = V4L2_CID_SENSOR_TYPE;

    if (-1 == ioctl (deviceHandle, VIDIOC_QUERYCTRL, &qc_ctrl)){
        fprintf(stderr, "V4L2: %s QUERY V4L2_CID_SENSOR_TYPE failed\n", deviceName.c_str());
        return false;
    }

    if (-1 == ioctl(deviceHandle, VIDIOC_G_CTRL, &ctrl)) {
        fprintf(stderr, "V4L2: %s G_CTRL V4L2_CID_SENSOR_TYPE failed\n", deviceName.c_str());
        return false;
    }

    return ctrl.value == V4L2_SENSOR_TYPE_RAW;
}
#endif
```

这段代码的功能是检查V4L2摄像头设备的传感器类型是否为RAW格式。它使用了V4L2的ioctl函数来查询和获取传感器类型信息。具体步骤如下：

1. 定义了两个v4l2_control结构体变量`ctrl`和`qc_ctrl`，并初始化为零
2. 将`ctrl.id`和`qc_ctrl.id`分别设置为`V4L2_CID_SENSOR_TYPE`，表示要查询的控制和查询ID
3. 使用`ioctl`函数的VIDIOC_QUERYCTRL命令来查询传感器类型的控制信息，并将结果保存在`qc_ctrl`中
4. 如果查询失败（`ioctl`返回-1），则输出错误信息并返回false
5. 使用`ioctl`函数的VIDIOC_G_CTRL命令来获取传感器类型的当前值，并将结果保存在`ctrl`中
6. 如果获取失败（`ioctl`返回-1），则输出错误信息并返回false
7. 检查`ctrl.value`是否等于`V4L2_SENSOR_TYPE_RAW`，如果相等，则返回true，表示传感器类型为RAW格式；否则返回false

并且使用了`#ifdef __USE_VIN_ISP__`指令。这表示只有在定义了`__USE_VIN_ISP__`宏时，才会编译和执行这段代码

然后在 OpenCV 的 ` bool CvCaptureCAM_V4L::streaming(bool startStream)` 捕获流函数中添加 ISP 处理

```c++
#ifdef __USE_VIN_ISP__
	RawSensor = RAWSensor();

	if (startStream && RawSensor) {
		int VideoIndex = -1;

		sscanf(deviceName.c_str(), "/dev/video%d", &VideoIndex);

		IspPort = CreateAWIspApi();
		IspId = -1;
		IspId = IspPort->ispGetIspId(VideoIndex);
		if (IspId >= 0)
			IspPort->ispStart(IspId);
	} else if (RawSensor && IspId >= 0 && IspPort) {
		IspPort->ispStop(IspId);
		DestroyAWIspApi(IspPort);
		IspPort = NULL;
		IspId = -1;
	}
#endif
```

这段代码是在条件编译`__USE_VIN_ISP__`的情况下进行了修改。

- 首先，它创建了一个`RawSensor`对象，并检查`startStream`和`RawSensor`是否为真。如果满足条件，接下来会解析设备名称字符串，提取出视频索引号。

- 然后，它调用`CreateAWIspApi()`函数创建了一个AWIspApi对象，并初始化变量`IspId`为-1。接着，通过调用`ispGetIspId()`函数获取指定视频索引号对应的ISP ID，并将其赋值给`IspId`。如果`IspId`大于等于0，表示获取到有效的ISP ID，就调用`ispStart()`函数启动ISP流处理。

- 如果不满足第一个条件，即`startStream`为假或者没有`RawSensor`对象，那么会检查`IspId`是否大于等于0并且`IspPort`对象是否存在。如果满足这些条件，说明之前已经启动了ISP流处理，此时会调用`ispStop()`函数停止ISP流处理，并销毁`IspPort`对象。最后，将`IspPort`置为空指针，将`IspId`重置为-1。

这段代码主要用于控制图像信号处理（ISP）的启动和停止。根据条件的不同，可以选择在开始视频流捕获时启动ISP流处理，或者在停止视频流捕获时停止ISP流处理，以便对视频数据进行处理和增强。

至于其他包括编译脚本的修改，全局变量定义等操作，可以参考补丁文件 `openwrt/package/thirdparty/vision/opencv/patches/0004-support-sunxi-vin-camera.patch` 

## 使用 OpenCV 捕获摄像头并且输出到屏幕上

### 快速测试

这个 DEMO 也已经包含在 tina-bsp-tinyvision.tar.gz 中了，可以快速测试这个 DEMO

运行 `m menuconfig`

```
OpenCV  --->
	<*> opencv....................................................... opencv libs
	[*]   Enabel sunxi vin isp support
	<*> opencv_camera.............................opencv_camera and display image
```

### 源码详解

编写一个程序，使用 OpenCV 捕获摄像头输出并且显示到屏幕上，程序如下：

```c++
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <linux/fb.h>
#include <signal.h>
#include <stdint.h>
#include <sys/ioctl.h>

#include <opencv2/opencv.hpp>

#define DISPLAY_X 240
#define DISPLAY_Y 240

static cv::VideoCapture cap;

struct framebuffer_info {
    uint32_t bits_per_pixel;
    uint32_t xres_virtual;
};

struct framebuffer_info get_framebuffer_info(const char* framebuffer_device_path)
{
    struct framebuffer_info info;
    struct fb_var_screeninfo screen_info;
    int fd = -1;
    fd = open(framebuffer_device_path, O_RDWR);
    if (fd >= 0) {
        if (!ioctl(fd, FBIOGET_VSCREENINFO, &screen_info)) {
            info.xres_virtual = screen_info.xres_virtual;
            info.bits_per_pixel = screen_info.bits_per_pixel;
        }
    }
    return info;
};

/* Signal handler */
static void terminate(int sig_no)
{
    printf("Got signal %d, exiting ...\n", sig_no);
    cap.release();
    exit(1);
}

static void install_sig_handler(void)
{
    signal(SIGBUS, terminate);
    signal(SIGFPE, terminate);
    signal(SIGHUP, terminate);
    signal(SIGILL, terminate);
    signal(SIGINT, terminate);
    signal(SIGIOT, terminate);
    signal(SIGPIPE, terminate);
    signal(SIGQUIT, terminate);
    signal(SIGSEGV, terminate);
    signal(SIGSYS, terminate);
    signal(SIGTERM, terminate);
    signal(SIGTRAP, terminate);
    signal(SIGUSR1, terminate);
    signal(SIGUSR2, terminate);
}

int main(int, char**)
{
    const int frame_width = 480;
    const int frame_height = 480;
    const int frame_rate = 30;

    install_sig_handler();

    framebuffer_info fb_info = get_framebuffer_info("/dev/fb0");

    cap.open(0);

    if (!cap.isOpened()) {
        std::cerr << "Could not open video device." << std::endl;
        return 1;
    }

    std::cout << "Successfully opened video device." << std::endl;
    cap.set(cv::CAP_PROP_FRAME_WIDTH, frame_width);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, frame_height);
    cap.set(cv::CAP_PROP_FPS, frame_rate);

    std::ofstream ofs("/dev/fb0");

    cv::Mat frame;
    cv::Mat trams_temp_fream;
    cv::Mat yuv_frame;

    while (true) {
        cap >> frame;
        if (frame.depth() != CV_8U) {
            std::cerr << "Not 8 bits per pixel and channel." << std::endl;
        } else if (frame.channels() != 3) {
            std::cerr << "Not 3 channels." << std::endl;
        } else {
            cv::transpose(frame, frame);
            cv::flip(frame, frame, 0);
            cv::resize(frame, frame, cv::Size(DISPLAY_X, DISPLAY_Y));
            int framebuffer_width = fb_info.xres_virtual;
            int framebuffer_depth = fb_info.bits_per_pixel;
            cv::Size2f frame_size = frame.size();
            cv::Mat framebuffer_compat;
            switch (framebuffer_depth) {
            case 16:
                cv::cvtColor(frame, framebuffer_compat, cv::COLOR_BGR2BGR565);
                for (int y = 0; y < frame_size.height; y++) {
                    ofs.seekp(y * framebuffer_width * 2);
                    ofs.write(reinterpret_cast<char*>(framebuffer_compat.ptr(y)), frame_size.width * 2);
                }
                break;
            case 32: {
                std::vector<cv::Mat> split_bgr;
                cv::split(frame, split_bgr);
                split_bgr.push_back(cv::Mat(frame_size, CV_8UC1, cv::Scalar(255)));
                cv::merge(split_bgr, framebuffer_compat);
                for (int y = 0; y < frame_size.height; y++) {
                    ofs.seekp(y * framebuffer_width * 4);
                    ofs.write(reinterpret_cast<char*>(framebuffer_compat.ptr(y)), frame_size.width * 4);
                }
            } break;
            default:
                std::cerr << "Unsupported depth of framebuffer." << std::endl;
            }
        }
    }
}
```

第一部分，处理 frame_buffer 信息：

```c++
// 引入头文件
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <linux/fb.h>
#include <signal.h>
#include <stdint.h>
#include <sys/ioctl.h>

#include <opencv2/opencv.hpp>

// 定义显示屏宽度和高度
#define DISPLAY_X 240
#define DISPLAY_Y 240

static cv::VideoCapture cap; // 视频流捕获对象

// 帧缓冲信息结构体
struct framebuffer_info {
    uint32_t bits_per_pixel; // 每个像素的位数
    uint32_t xres_virtual; // 虚拟屏幕的宽度
};

// 获取帧缓冲信息函数
struct framebuffer_info get_framebuffer_info(const char* framebuffer_device_path)
{
    struct framebuffer_info info;
    struct fb_var_screeninfo screen_info;
    int fd = -1;

    // 打开帧缓冲设备文件
    fd = open(framebuffer_device_path, O_RDWR);
    if (fd >= 0) {
        // 通过 ioctl 获取屏幕信息
        if (!ioctl(fd, FBIOGET_VSCREENINFO, &screen_info)) {
            info.xres_virtual = screen_info.xres_virtual; // 虚拟屏幕的宽度
            info.bits_per_pixel = screen_info.bits_per_pixel; // 每个像素的位数
        }
    }
    return info;
}
```

这段代码定义了一些常量、全局变量以及两个函数，并给出了相应的注释说明。具体注释如下：

- `#define DISPLAY_X 240`：定义显示屏的宽度为240。
- `#define DISPLAY_Y 240`：定义显示屏的高度为240。
- `static cv::VideoCapture cap;`：定义一个静态的OpenCV视频流捕获对象，用于捕获视频流。
- `struct framebuffer_info`：定义了一个帧缓冲信息的结构体。
  - `uint32_t bits_per_pixel`：每个像素的位数。
  - `uint32_t xres_virtual`：虚拟屏幕的宽度。
- `struct framebuffer_info get_framebuffer_info(const char* framebuffer_device_path)`：获取帧缓冲信息的函数。
  - `const char* framebuffer_device_path`：帧缓冲设备文件的路径。
  - `int fd = -1;`：初始化文件描述符为-1。
  - `fd = open(framebuffer_device_path, O_RDWR);`：打开帧缓冲设备文件，并将文件描述符保存在变量`fd`中。
  - `if (fd >= 0)`：检查文件是否成功打开。
  - `if (!ioctl(fd, FBIOGET_VSCREENINFO, &screen_info))`：通过ioctl获取屏幕信息，并将信息保存在变量`screen_info`中。
    - `FBIOGET_VSCREENINFO`：控制命令，用于获取屏幕信息。
    - `&screen_info`：屏幕信息结构体的指针。
  - `info.xres_virtual = screen_info.xres_virtual;`：将屏幕的虚拟宽度保存在帧缓冲信息结构体的字段`xres_virtual`中。
  - `info.bits_per_pixel = screen_info.bits_per_pixel;`：将每个像素的位数保存在帧缓冲信息结构体的字段`bits_per_pixel`中。
  - `return info;`：返回帧缓冲信息结构体。

第二部分，注册信号处理函数，用于 `ctrl-c` 之后关闭摄像头，防止下一次使用摄像头出现摄像头仍被占用的情况。

```c++
/* Signal handler */
static void terminate(int sig_no)
{
    printf("Got signal %d, exiting ...\n", sig_no);
    cap.release();
    exit(1);
}

static void install_sig_handler(void)
{
    signal(SIGBUS, terminate); // 当程序访问一个不合法的内存地址时发送的信号
    signal(SIGFPE, terminate); // 浮点异常信号
    signal(SIGHUP, terminate); // 终端断开连接信号
    signal(SIGILL, terminate); // 非法指令信号
    signal(SIGINT, terminate); // 中断进程信号
    signal(SIGIOT, terminate); // IOT 陷阱信号
    signal(SIGPIPE, terminate); // 管道破裂信号
    signal(SIGQUIT, terminate); // 停止进程信号
    signal(SIGSEGV, terminate); // 无效的内存引用信号
    signal(SIGSYS, terminate); // 非法系统调用信号
    signal(SIGTERM, terminate); // 终止进程信号
    signal(SIGTRAP, terminate); // 跟踪/断点陷阱信号
    signal(SIGUSR1, terminate); // 用户定义信号1
    signal(SIGUSR2, terminate); // 用户定义信号2
}
```

这段代码定义了两个函数，并给出了相应的注释说明。具体注释如下：

- `static void terminate(int sig_no)`：信号处理函数。
  - `int sig_no`：接收到的信号编号。
  - `printf("Got signal %d, exiting ...\n", sig_no);`：打印接收到的信号编号。
  - `cap.release();`：释放视频流捕获对象。
  - `exit(1);`：退出程序。
- `static void install_sig_handler(void)`：安装信号处理函数。
  - `signal(SIGBUS, terminate);`：为SIGBUS信号安装信号处理函数。
  - `signal(SIGFPE, terminate);`：为SIGFPE信号安装信号处理函数。
  - `signal(SIGHUP, terminate);`：为SIGHUP信号安装信号处理函数。
  - `signal(SIGILL, terminate);`：为SIGILL信号安装信号处理函数。
  - `signal(SIGINT, terminate);`：为SIGINT信号安装信号处理函数。
  - `signal(SIGIOT, terminate);`：为SIGIOT信号安装信号处理函数。
  - `signal(SIGPIPE, terminate);`：为SIGPIPE信号安装信号处理函数。
  - `signal(SIGQUIT, terminate);`：为SIGQUIT信号安装信号处理函数。
  - `signal(SIGSEGV, terminate);`：为SIGSEGV信号安装信号处理函数。
  - `signal(SIGSYS, terminate);`：为SIGSYS信号安装信号处理函数。
  - `signal(SIGTERM, terminate);`：为SIGTERM信号安装信号处理函数。
  - `signal(SIGTRAP, terminate);`：为SIGTRAP信号安装信号处理函数。
  - `signal(SIGUSR1, terminate);`：为SIGUSR1信号安装信号处理函数。
  - `signal(SIGUSR2, terminate);`：为SIGUSR2信号安装信号处理函数。

这段代码的功能是安装信号处理函数，用于捕获和处理不同类型的信号。当程序接收到指定的信号时，会调用`terminate`函数进行处理。

具体而言，`terminate`函数会打印接收到的信号编号，并释放视频流捕获对象`cap`，然后调用`exit(1)`退出程序。

`install_sig_handler`函数用于为多个信号注册同一个信号处理函数`terminate`，使得当这些信号触发时，都会执行相同的处理逻辑。

第三部分，主函数：

```c++
int main(int, char**)
{
    const int frame_width = 480;
    const int frame_height = 480;
    const int frame_rate = 30;

    install_sig_handler(); // 安装信号处理函数

    framebuffer_info fb_info = get_framebuffer_info("/dev/fb0"); // 获取帧缓冲区信息

    cap.open(0); // 打开摄像头

    if (!cap.isOpened()) {
        std::cerr << "Could not open video device." << std::endl;
        return 1;
    }

    std::cout << "Successfully opened video device." << std::endl;
    cap.set(cv::CAP_PROP_FRAME_WIDTH, frame_width);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, frame_height);
    cap.set(cv::CAP_PROP_FPS, frame_rate);

    std::ofstream ofs("/dev/fb0"); // 打开帧缓冲区

    cv::Mat frame;
    cv::Mat trams_temp_fream;
    cv::Mat yuv_frame;

    while (true) {
        cap >> frame; // 读取一帧图像
        if (frame.depth() != CV_8U) { // 判断是否为8位每通道像素
            std::cerr << "Not 8 bits per pixel and channel." << std::endl;
        } else if (frame.channels() != 3) { // 判断是否为3通道
            std::cerr << "Not 3 channels." << std::endl;
        } else {
            cv::transpose(frame, frame); // 图像转置
            cv::flip(frame, frame, 0); // 图像翻转
            cv::resize(frame, frame, cv::Size(DISPLAY_X, DISPLAY_Y)); // 改变图像大小
            int framebuffer_width = fb_info.xres_virtual;
            int framebuffer_depth = fb_info.bits_per_pixel;
            cv::Size2f frame_size = frame.size();
            cv::Mat framebuffer_compat;
            switch (framebuffer_depth) {
            case 16:
                cv::cvtColor(frame, framebuffer_compat, cv::COLOR_BGR2BGR565);
                for (int y = 0; y < frame_size.height; y++) {
                    ofs.seekp(y * framebuffer_width * 2);
                    ofs.write(reinterpret_cast<char*>(framebuffer_compat.ptr(y)), frame_size.width * 2);
                }
                break;
            case 32: {
                std::vector<cv::Mat> split_bgr;
                cv::split(frame, split_bgr);
                split_bgr.push_back(cv::Mat(frame_size, CV_8UC1, cv::Scalar(255)));
                cv::merge(split_bgr, framebuffer_compat);
                for (int y = 0; y < frame_size.height; y++) {
                    ofs.seekp(y * framebuffer_width * 4);
                    ofs.write(reinterpret_cast<char*>(framebuffer_compat.ptr(y)), frame_size.width * 4);
                }
            } break;
            default:
                std::cerr << "Unsupported depth of framebuffer." << std::endl;
            }
        }
    }

    return 0;
}
```

这段代码主要实现了从摄像头获取图像并将其显示在帧缓冲区中。具体流程如下：

- 定义了常量`frame_width`、`frame_height`和`frame_rate`表示图像的宽度、高度和帧率。
- 调用`install_sig_handler()`函数安装信号处理函数。
- 调用`get_framebuffer_info("/dev/fb0")`函数获取帧缓冲区信息。
- 调用`cap.open(0)`打开摄像头，并进行错误检查。
- 调用`cap.set()`函数设置摄像头的参数。
- 调用`std::ofstream ofs("/dev/fb0")`打开帧缓冲区。
- 循环读取摄像头的每一帧图像，对其进行转置、翻转、缩放等操作，然后将其写入帧缓冲区中。

如果读取的图像不是8位每通道像素或者不是3通道，则会输出错误信息。如果帧缓冲区的深度不受支持，则也会输出错误信息。

## 使用 Python3 操作 OpenCV

### 勾选 OpenCV-Python3 包

`m menuconfig` 进入软件包配置，勾选 

```
OpenCV  --->
	<*> opencv....................................................... opencv libs
	[*]   Enabel sunxi vin isp support
	[*]   Enabel opencv python3 binding support
```

![image-20240122202827423](assets/post/README/image-20240122202827423.png)

然后编译固件即可，请注意 Python3 编译非常慢，而且需要编译机有16G以上内存，需要耐心等待下。

编写一个 Python 脚本，执行上面的相同操作

```python
import cv2
import numpy as np

DISPLAY_X = 240
DISPLAY_Y = 240

frame_width = 480
frame_height = 480
frame_rate = 30

cap = cv2.VideoCapture(0) # 打开摄像头

if not cap.isOpened():
    print("Could not open video device.")
    exit(1)

print("Successfully opened video device.")
cap.set(cv2.CAP_PROP_FRAME_WIDTH, frame_width)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, frame_height)
cap.set(cv2.CAP_PROP_FPS, frame_rate)

ofs = open("/dev/fb0", "wb") # 打开帧缓冲区

while True:
    ret, frame = cap.read() # 读取一帧图像
    if frame.dtype != np.uint8 or frame.ndim != 3:
        print("Not 8 bits per pixel and channel.")
    elif frame.shape[2] != 3:
        print("Not 3 channels.")
    else:
        frame = cv2.transpose(frame) # 图像转置
        frame = cv2.flip(frame, 0) # 图像翻转
        frame = cv2.resize(frame, (DISPLAY_X, DISPLAY_Y)) # 改变图像大小
        framebuffer_width = DISPLAY_X
		_ = open("/sys/class/graphics/fb0/bits_per_pixel", "r")
		framebuffer_depth = int(_.read()[:2])
		_.close()
        frame_size = frame.shape
        framebuffer_compat = np.zeros(frame_size, dtype=np.uint8)
        if framebuffer_depth == 16:
            framebuffer_compat = cv2.cvtColor(frame, cv2.COLOR_BGR2BGR565)
            for y in range(frame_size[0]):
                ofs.seek(y * framebuffer_width * 2)
                ofs.write(framebuffer_compat[y].tobytes())
        elif framebuffer_depth == 32:
            split_bgr = cv2.split(frame)
            split_bgr.append(np.full((frame_size[0], frame_size[1]), 255, dtype=np.uint8))
            framebuffer_compat = cv2.merge(split_bgr)
            for y in range(frame_size[0]):
                ofs.seek(y * framebuffer_width * 4)
                ofs.write(framebuffer_compat[y].tobytes())
        else:
            print("Unsupported depth of framebuffer.")

cap.release()
ofs.close()

```

## 编译系统

初始化 SDK 环境。

```
source build/envsetup.sh
```

然后就是编译 SDK 输出固件

```
mp -j32
```

如果出现错误，请再次运行 

```
mp -j1 V=s 
```

以单线程编译解决依赖关系，并且输出全部编译 LOG 方便排查错误。

## 线刷固件

### 修改 U-boot 支持线刷固件

U-Boot 默认配置的是使用 SDC2 也就是 TinyVision 的 SD-NAND 刷写固件。同时也支持使用 SDC0 也就是 TF 卡烧写固件，但是需要手动配置一下 U-Boot。否则会出现如下问题，U-Boot 去初始化不存在的 SD NAND 导致刷不进系统。

![image-20240122155351715](assets/post/README/image-20240122155351715.png)

前往文件夹 `brandy/brandy-2.0/u-boot-2018/drivers/sunxi_flash/mmc/sdmmc.c` 

找到第 188 行，将 `return sdmmc_init_for_sprite(0, 2);` 修改为 `return sdmmc_init_for_sprite(0, 0);`

![image-20240122155513106](assets/post/README/image-20240122155513106.png)

修改后需要重新编译固件。插入空白的 TF 卡，如果不是空白的 TF 卡可能出现芯片不进入烧录模式。

![image-20240122160030117](assets/post/README/image-20240122160030117.png)

出现 `try card 0` 开始下载到 TF 卡内

## USB 摄像头输入

有些场景需要使用 USB 摄像头输入，配置如下

开启 USB UVC 支持 `m kernel_menuconfig`

```
-> Device Drivers
	-> Multimedia support (MEDIA_SUPPORT [=y])
		-> Media USB Adapters (MEDIA_USB_SUPPORT [=y])
			-> USB Video Class (UVC) (USB_VIDEO_CLASS [=y]) 
```

之后编译系统，启动，将 USB 切换为 HOST 模式（默认是 Device）

```
cat /sys/devices/platform/soc/usbc0/usb_host
```

这里测试使用的是采集卡，输出如下，可以看到 Video0 已经出来了

![image-20240613193430159](assets/post/README/image-20240613193430159.png)

测试摄像头，运行 `camerademo` 拍照，拍摄的照片位于 `/tmp` 文件夹下

![image-20240613200649722](assets/post/README/image-20240613200649722.png)

## 搭建 RTSP 服务作为网络摄像头

> 来自：使用tinyvision制作简单的网络摄像机IPC https://bbs.aw-ol.com/topic/5484/share/1

用v4l2读取摄像头图像 然后用硬件编码器把图像编码 最后把编码数据传给rtsp服务器 这样外部就可以直接拉流播放了

提供的系统里有个摄像头测试程序camerademo 能用v4l2读取摄像头图像 sdk里有源码 把源码简单修改一下接口对接

提供的系统里有个硬件编码器测试程序encodertest 能把图像编码成h264数据 直接运行是不能使用的 它的参数解析有问题 需要修改源码的长宽和文件输入输出路径 重新编译才能使用
注意 sdk里面有多个编码器操作例子 只看到一个是接口符合sdk里面的编码器操作接口 其他都是不能用的老接口
能用的encodertest源码路径

`openwrt/package/allwinner/multimedia/tina_multimedia_demo/encodertest/mpp_src`

rtsp部分是网上找的一个编程实现的简单的rtsp服务器 相当于推流加服务器 外部直接拉流就行

源码附件：[使用tinyvision制作简单的网络摄像机IPC附件.zip](https://bbs.aw-ol.com/assets/uploads/files/1718389213264-使用tinyvision制作简单的网络摄像机ipc附件.zip)

下载后有三个文件：包括应用程序，测试工具，个源码工程

![image-20240615123304934](assets/post/README/image-20240615123304934.png)

### 使用预编译的程序测试 RTSP

先用adb把程序传进板子

```
adb push tinyvisionIpcV1 /root
```

使用命令添加执行权限

```
chmod +x tinyvisionIpcV1
```

使用ifconfig配网

```
ifconfig eth0 192.168.2.17 broadcast 192.168.2.255 netmask 255.255.255.0 up
ifconfig lo 127.0.0.1 up
route add default gw 192.168.2.1
```

仅支持一种参数格式 参数为 长 宽 帧率，执行例子

```
./tinyvisionIpcV1 640 480 30
```

执行时不加参数时默认参数为 640 480 30

当参数不支持时v4l2会打印出不同的参数 不会自动调整为相近的适合参数

v4l2打印的帧率有时候不对 以程序每秒打印的摄像头帧率为准

验证过的参数：

```
1920 1080 20
1280 720 30
640 480 30
```

摄像头读图像帧使用v4l2框架 输出格式是NV21 参数不支持基本上是摄像头不支持导致的

默认操作设备/dev/video0 使用前检查有没这个设备 接了摄像头 摄像头驱动加载成功基本都会有这个设备
可以使用系统自带的camerademo排查操作摄像头有没问题

编码器是用的sdk提供的硬编码 输入NV21输出H264

程序运行时会每秒打印编码帧率 这个帧率不是编码器最大帧率 是工作时的帧率 摄像头帧率低会导致编码器帧率低
可以使用系统自带的encodertest排查编码器有没问题

rtsp是网上找的一个编程实现的简单的rtsp服务器 相当于推流加服务器 外部直接拉流就行

```
```

rtsp端口为554 路径为/live
拉流流例子 ip要换成板子的ip
rtsp://192.168.2.17/live

```
```

ffmpeg拉流使用方法

在pc上解压ffmpeg压缩包 用cmd进入ffmpeg bin目录执行命令 记得换ip

```
ffplay.exe -rtsp_transport tcp  rtsp://192.168.2.17/live
```

参数-rtsp_transport tcp的意思是以tcp的方式建立rtsp链接 不写默认是udp 用tcp可以减少丢包花屏情况

### 自行编译

工程使用cmake构建

需要安装cmake

```
apt-get install cmake
```

需要修改CMakeLists.txt里指定的编译器路径和头文件库文件路径

然后在CMakeLists.txt所在路径执行一次命令

```
cmake .
```

产生makefile 然后执行

```
make
```

注意 sdk的gcc使用时要求导出变量STAGING_DIR

```
export STAGING_DIR="/root/tina-v853-open/out/v851se/tinyvision/openwrt/staging_dir/"
```

# Tina Linux NPU 开发

TinyVision V851s 使用 OpenCV + NPU 实现 Mobilenet v2 物体识别。上一篇已经介绍了如何使用 TinyVision 与 OpenCV 开摄像头，本篇将使用已经训练完成并且转换后的模型来介绍对接 NPU 实现物体识别的功能。

## MobileNet V2 

MobileNet V2是一种轻量级的卷积神经网络（CNN）架构，专门设计用于在移动设备和嵌入式设备上进行计算资源受限的实时图像分类和目标检测任务。

以下是MobileNet V2的一些关键特点和创新之处：

1. Depthwise Separable Convolution（深度可分离卷积）：MobileNet V2使用了深度可分离卷积，将标准卷积分解为两个步骤：depthwise convolution（深度卷积）和pointwise convolution（逐点卷积）。这种分解方式可以显著减少计算量和参数数量，从而提高模型的轻量化程度。

2. Inverted Residuals with Linear Bottlenecks（带线性瓶颈的倒残差结构）：MobileNet V2引入了带有线性瓶颈的倒残差结构，以增加模型的非线性表示能力。这种结构在每个残差块的中间层采用较低维度的逐点卷积来减少计算量，并使用扩张卷积来增加感受野，使网络能够更好地捕捉图像中的细节和全局信息。

3. Width Multiplier（宽度乘数）：MobileNet V2提供了一个宽度乘数参数，可以根据计算资源的限制来调整模型的宽度。通过减少每个层的通道数，可以进一步减小模型的体积和计算量，适应不同的设备和应用场景。

4. Linear Bottlenecks（线性瓶颈）：为了减少非线性激活函数对模型性能的影响，MobileNet V2使用线性激活函数来缓解梯度消失问题。这种线性激活函数在倒残差结构的中间层中使用，有助于提高模型的收敛速度和稳定性。

总体而言，MobileNet V2通过深度可分离卷积、倒残差结构和宽度乘数等技术，实现了较高的模型轻量化程度和计算效率，使其成为在资源受限的移动设备上进行实时图像分类和目标检测的理想选择。

## NPU

V851s 芯片内置一颗 NPU，其处理性能为最大 0.5 TOPS 并有 128KB 内部高速缓存用于高速数据交换

### NPU 系统架构

NPU 的系统架构如下图所示：

![image-20220712100607889](assets/post/README/image-20220712100607889.png)

上层的应用程序可以通过加载模型与数据到 NPU 进行计算，也可以使用 NPU 提供的软件 API 操作 NPU 执行计算。

NPU包括三个部分：可编程引擎（Programmable Engines，PPU）、神经网络引擎（Neural Network Engine，NN）和各级缓存。

可编程引擎可以使用 EVIS 硬件加速指令与 Shader 语言进行编程，也可以实现激活函数等操作。

神经网络引擎包含 NN 核心与 Tensor Process Fabric（TPF，图中简写为 Fabric） 两个部分。NN核心一般计算卷积操作， Tensor Process Fabric 则是作为 NN 核心中的高速数据交换的通路。算子是由可编程引擎与神经网络引擎共同实现的。

NPU 支持 UINT8，INT8，INT16 三种数据格式。

### NPU 模型转换

NPU 使用的模型是 NPU 自定义的一类模型结构，不能直接将网络训练出的模型直接导入 NPU 进行计算。这就需要将网络训练出的转换模型到 NPU 的模型上。

NPU 的模型转换步骤如下图所示：

![image-20220712113105463](assets/post/README/image-20220712112951142.png)

NPU 模型转换包括准备阶段、量化阶段与验证阶段。

#### 准备阶段

首先我们把准备好模型使用工具导入，并创建配置文件。

这时候工具会把模型导入并转换为 NPU 所使用的网络模型、权重模型与配置文件。

配置文件用于对网络的输入和输出的参数进行描述以及配置。这些参数包括输入/输出 tensor 的形状、归一化系数 (均值/零点)、图像格式、tensor 的输出格式、后处理方式等等。

#### 量化阶段

由于训练好的神经网络对数据精度以及噪声的不敏感，因此可以通过量化将参数从浮点数转换为定点数。这样做有两个优点：

（1）减少了数据量，进而可以使用容量更小的存储设备，节省了成本；

（2）由于数据量减少，浮点转化为定点数也大大降低了系统的计算量，也提高了计算的速度。

但是量化也有一个致命缺陷——会导致精度的丢失。

由于浮点数转换为定点数时会大大降低数据量，导致实际的权重参数准确度降低。在简单的网络里这不是什么大问题，但是如果是复杂的多层多模型的网络，每一层微小的误差都会导致最终数据的错误。

那么，可以不量化直接使用原来的数据吗？当然是可以的。

但是由于使用的是浮点数，无法将数据导入到只支持定点运算的 NN 核心进行计算，这就需要可编程引擎来代替 NN 核进行计算，这样可以大大降低运算效率。

另外，在进行量化过程时，不仅对参数进行了量化，也会对输入输出的数据进行量化。如果模型没有输入数据，就不知道输入输出的数据范围。这时候我们就需要准备一些具有代表性的输入来参与量化。这些输入数据一般从训练模型的数据集里获得，例如图片数据集里的图片。

另外选择的数据集不一定要把所有训练数据全部加入量化，通常我们选择几百张能够代表所有场景的输入数据就即可。理论上说，量化数据放入得越多，量化后精度可能更好，但是到达一定阈值后效果增长将会非常缓慢甚至不再增长。

#### 验证阶段

由于上一阶段对模型进行了量化导致了精度的丢失，就需要对每个阶段的模型进行验证，对比结果是否一致。

首先我们需要使用非量化情况下的模型运行生成每一层的 tensor 作为 Golden tensor。输入的数据可以是数据集中的任意一个数据。然后量化后使用预推理相同的数据再次输出一次 tensor，对比这一次输出的每一层的 tensor 与 Golden tensor 的差别。

如果差别较大可以尝试更换量化模型和量化方式。差别不大即可使用 IDE 进行仿真。也可以直接部署到 V851s 上进行测试。

此时测试同样会输出 tensor 数据，对比这一次输出的每一层的 tensor 与 Golden tensor 的差别，差别不大即可集成到 APP 中了。

### NPU 的开发流程

NPU 开发完整的流程如下图所示:

![image-20240126194601436](assets/post/README/image-20240126194601436.png)

#### 模型训练

在模型训练阶段，用户根据需求和实际情况选择合适的框架（如Caffe、TensorFlow 等）使用数据集进行训练得到符合需求的模型，此模型可称为预训练模型。也可直接使用已经训练好的模型。V851s 的 NPU 支持包括分类、检测、跟踪、人脸、姿态估计、分割、深度、语音、像素处理等各个场景90 多个公开模型。

#### 模型转换

在模型转化阶段，通过Acuity Toolkit 把预训练模型和少量训练数据转换为NPU 可用的模型NBG文件。
一般步骤如下：

1. 模型导入，生成网络结构文件、网络权重文件、输入描述文件和输出描述文件。
2. 模型量化，生成量化描述文件和熵值文件，可改用不同的量化方式。
3. 仿真推理，可逐一对比float 和其他量化精度的仿真结果的相似度，评估量化后的精度是否满足要求。
4. 模型导出，生成端侧代码和*.nb 文件，可编辑输出描述文件的配置，配置是否添加后处理节点等。

#### 模型部署及应用开发

在模型部署阶段，就是基于VIPLite API 开发应用程序实现业务逻辑。

## OpenCV + NPU 源码解析

完整的代码已经上传Github开源，前往以下地址：https://github.com/YuzukiHD/TinyVision/tree/main/tina/openwrt/package/thirdparty/vision/opencv_camera_mobilenet_v2_ssd/src

**【[注意，运行这里的DEMO请先移植LCD驱动！！ ](#lcd-模组驱动)】**

否则报错 `Unsupported depth of framebuffer`

![image-20240320180529300](assets/post/README/image-20240320180529300.png)

### Mobilenet v2 前处理

```c
void get_input_data(const cv::Mat& sample, uint8_t* input_data, int input_h, int input_w, const float* mean, const float* scale){
    cv::Mat img;
    if (sample.channels() == 1)
        cv::cvtColor(sample, img, cv::COLOR_GRAY2RGB);
    else
        cv::cvtColor(sample, img, cv::COLOR_BGR2RGB);
    cv::resize(img, img, cv::Size(input_h, input_w));
    uint8_t* img_data = img.data;
    /* nhwc to nchw */
    for (int h = 0; h < input_h; h++) {
        for (int w = 0; w < input_w; w++) {
            for (int c = 0; c < 3; c++) {
                int in_index = h * input_w * 3 + w * 3 + c;
                int out_index = c * input_h * input_w + h * input_w + w;
                input_data[out_index] = (uint8_t)(img_data[in_index]);	//uint8
            }
        }
    }
}

uint8_t *mbv2_ssd_preprocess(const cv::Mat& sample, int input_size, int img_channel) {
	const float mean[3] = {127, 127, 127};
	const float scale[3] = {0.0078125, 0.0078125, 0.0078125};
	int img_size = input_size * input_size * img_channel;
	uint8_t *tensor_data = NULL;
	tensor_data = (uint8_t *)malloc(1 * img_size * sizeof(uint8_t));
	get_input_data(sample, tensor_data, input_size, input_size, mean, scale);
    return tensor_data;
}
```

这段C++代码是用于对输入图像进行预处理，以便输入到MobileNet V2 SSD模型中进行目标检测。

1. `get_input_data`函数：
   - 该函数对输入的图像进行预处理，将其转换为适合MobileNet V2 SSD模型输入的格式。
   - 首先，对输入图像进行通道格式的转换，确保图像通道顺序符合模型要求（RGB格式）。
   - 然后，将图像大小调整为指定的输入尺寸（`input_h * input_w`）。
   - 最后，将处理后的图像数据按照特定顺序（NCHW格式）填充到`input_data`数组中，以便作为模型的输入数据使用。

2. `mbv2_ssd_preprocess`函数：
   - 该函数是对输入图像进行 MobileNet V2 SSD 模型的预处理，并返回处理后的数据。
   - 在函数内部，首先定义了图像各通道的均值（mean）和缩放比例（scale）。
   - 然后计算了输入图像的总大小，并分配了相应大小的内存空间用于存储预处理后的数据。
   - 调用了`get_input_data`函数对输入图像进行预处理，将处理后的数据存储在`tensor_data`中，并最终返回该数据指针。

总的来说，这段代码的功能是将输入图像进行预处理，以适应MobileNet V2 SSD模型的输入要求，并返回预处理后的数据供模型使用。同时需要注意，在使用完`tensor_data`后，需要在适当的时候释放相应的内存空间，以避免内存泄漏问题。

### Mobilenet v2 后处理

这部分分为来讲:

```cpp
// 比较函数，用于按照分数对Bbox_t对象进行排序
bool comp(const Bbox_t &a, const Bbox_t &b) {
    return a.score > b.score;
}

// 计算两个框之间的交集面积
static inline float intersection_area(const Bbox_t& a, const Bbox_t& b) {
    // 将框表示为cv::Rect_<float>对象
    cv::Rect_<float> rect_a(a.xmin, a.ymin, a.xmax-a.xmin, a.ymax-a.ymin);
    cv::Rect_<float> rect_b(b.xmin, b.ymin, b.xmax-b.xmin, b.ymax-b.ymin);
    
    // 计算两个矩形的交集
    cv::Rect_<float> inter = rect_a & rect_b;
    
    // 返回交集的面积
    return inter.area();
}

// 非极大值抑制算法（NMS）
static void nms_sorted_bboxes(const std::vector<Bbox_t>& bboxs, std::vector<int>& picked, float nms_threshold) {
    picked.clear();
    const int n = bboxs.size();
    
    // 创建存储每个框面积的向量
    std::vector<float> areas(n);
    
    // 计算每个框的面积并存储
    for (int i = 0; i < n; i++){
        areas[i] = (bboxs[i].xmax - bboxs[i].xmin) * (bboxs[i].ymax - bboxs[i].ymin);
    }
    
    // 对每个框进行遍历
    for (int i = 0; i < n; i++) {
        const Bbox_t& a = bboxs[i];
        int keep = 1;
        
        // 对已经选择的框进行遍历
        for (int j = 0; j < (int)picked.size(); j++) {
            const Bbox_t& b = bboxs[picked[j]];
            
            // 计算交集和并集面积
            float inter_area = intersection_area(a, b);
            float union_area = areas[i] + areas[picked[j]] - inter_area;
            
            // 计算交并比
            if (inter_area / union_area > nms_threshold)
                keep = 0; // 如果交并比大于阈值，则不选择该框
        }
        
        // 如果符合条件则选择该框，加入到结果向量中
        if (keep)
            picked.push_back(i);
    }
}
```

这段代码实现了目标检测中常用的非极大值抑制算法（NMS）。`comp`函数用于对`Bbox_t`对象按照分数进行降序排序。`intersection_area`函数用于计算两个框之间的交集面积。`nms_sorted_bboxes`函数是NMS算法的具体实现，它接受一个已经按照分数排序的框的向量`bboxs`，以及一个空的整数向量`picked`，用于存储保留下来的框的索引。`nms_threshold`是一个阈值，用于控制重叠度。

算法的步骤如下：

1. 清空存储结果的`picked`向量。
2. 获取框的个数`n`，创建一个用于存储每个框面积的向量`areas`。
3. 遍历每个框，计算其面积并存储到`areas`向量中。
4. 对每个框进行遍历，通过计算交并比来判断是否选择该框。如果交并比大于阈值，则不选择该框。
5. 如果符合条件，则选择该框，将其索引加入到`picked`向量中。
6. 完成非极大值抑制算法，`picked`向量中存储了保留下来的框的索引。

这个算法的作用是去除高度重叠的框，只保留得分最高的那个框，以减少冗余检测结果。

```c
cv::Mat detect_ssd(const cv::Mat& bgr, float **output) {
    // 定义阈值和常数
    float iou_threshold = 0.45;
    float conf_threshold = 0.5;
    const int inputH = 300;
    const int inputW = 300;
    const int outputClsSize = 21;
#if MBV2_SSD
    int output_dim_1 = 3000;
#else
    int output_dim_1 = 8732;
#endif

    // 计算输出数据的大小
    int size0 = 1 * output_dim_1 * outputClsSize;
    int size1 = 1 * output_dim_1 * 4;

    // 将输出数据转换为向量
    std::vector<float> scores_data(output[0], &output[0][size0-1]);
    std::vector<float> boxes_data(output[1], &output[1][size1-1]);

    // 获取分数和边界框的指针
    const float* scores = scores_data.data();
    const float* bboxes = boxes_data.data();

    // 计算缩放比例
    float scale_w = bgr.cols / (float)inputW;
    float scale_h = bgr.rows / (float)inputH;
    bool pass = true;

    // 创建存储检测结果的向量
    std::vector<Bbox_t> BBox;

    // 遍历每个框
    for(int i = 0; i < output_dim_1; i++) {
        std::vector<float> conf;
        // 获取每个框的置信度
        for(int j = 0; j < outputClsSize; j++) {
            conf.emplace_back(scores[i * outputClsSize + j]);
        }
        // 找到置信度最大的类别
        int max_index = std::max_element(conf.begin(), conf.end()) - conf.begin();
        // 如果类别不是背景类，并且置信度大于阈值，则选中该框
        if (max_index != 0) {
            if(conf[max_index] < conf_threshold)
                continue;
            Bbox_t b;
            // 根据缩放比例计算框的坐标和尺寸
            int left = bboxes[i * 4] * scale_w * 300;
            int top = bboxes[i * 4 + 1] * scale_h * 300;
            int right = bboxes[ i * 4 + 2] * scale_w * 300;
            int bottom = bboxes[i * 4 + 3] * scale_h * 300;
            // 确保坐标不超出图像范围
            b.xmin = std::max(0, left);
            b.ymin = std::max(0, top);
            b.xmax = right;
            b.ymax = bottom;
            b.score = conf[max_index];
            b.cls_idx = max_index;
            BBox.emplace_back(b);
        }
        conf.clear();
    }

    // 按照分数对框进行排序
    std::sort(BBox.begin(), BBox.end(), comp);

    // 应用非极大值抑制算法，获取保留的框的索引
    std::vector<int> keep_index;
    nms_sorted_bboxes(BBox, keep_index, iou_threshold);

    // 创建存储框位置的向量
    std::vector<cv::Rect> bbox_per_frame;

    // 遍历保留的框，绘制框和标签
    for(int i = 0; i < keep_index.size(); i++) {
        int left = BBox[keep_index[i]].xmin;
        int top = BBox[keep_index[i]].ymin;
        int right = BBox[keep_index[i]].xmax;
        int bottom = BBox[keep_index[i]].ymax;
        int width = right - left;
        int height = bottom - top;
        int center_x = left + width / 2;
        cv::rectangle(bgr, cv::Point(left, top), cv::Point(right, bottom), cv::Scalar(0, 0, 255), 1);
        char text[256];
        sprintf(text, "%s %.1f%%", class_names[BBox[keep_index[i]].cls_idx], BBox[keep_index[i]].score * 100);
        cv::putText(bgr, text, cv::Point(left, top), cv::FONT_HERSHEY_COMPLEX, 1, cv::Scalar(0, 255, 255), 1, 8, 0);
        bbox_per_frame.emplace_back(left, top, width, height);
    }

    // 返回绘制了框和标签的图像
    return bgr;
}
```

这段代码主要用于处理模型的输出结果，将输出数据转换为向量，并计算缩放比例，然后创建一个向量来存储检测结果。

具体步骤如下：

1. 定义了一些阈值和常数，包括IOU阈值（`iou_threshold`）、置信度阈值（`conf_threshold`）、输入图像的高度和宽度（`inputH`和`inputW`）、输出类别数量（`outputClsSize`）、输出维度（`output_dim_1`）。
2. 计算输出数据的大小，分别为类别得分数据的大小（`size0`）和边界框数据的大小（`size1`）。
3. 将输出数据转换为向量，分别为类别得分数据向量（`scores_data`）和边界框数据向量（`boxes_data`）。
4. 获取类别得分和边界框的指针，分别为`scores`和`bboxes`。
5. 计算图像的缩放比例，根据输入图像的尺寸和模型输入尺寸之间的比例计算得到。
6. 创建一个向量`BBox`，用于存储检测结果。该向量的类型为`Bbox_t`
7. 遍历每一个框（共有`output_dim_1`个框）。
8. 获取每一个框的各个类别的置信度，并将其存储在`conf`向量中。
9. 找到置信度最大的类别，并记录其下标`max_index`。
10. 如果最大置信度的类别不是背景类，并且置信度大于设定的阈值，则选中该框。
11. 根据缩放比例计算框的坐标和尺寸，其中`left`、`top`、`right`和`bottom`分别表示框的左上角和右下角的坐标。
12. 确保框的坐标不超出图像范围，并将目标框的信息（包括位置、置信度、类别等）存储在`Bbox_t`类型的变量`b`中。
13. 将`b`加入到`BBox`向量中。
14. 清空`conf`向量，为下一个框的检测做准备。
15. 对所有检测到的目标框按照置信度从高到低排序；
16. 应用非极大值抑制算法，筛选出重叠度较小的目标框，并将保留的目标框的索引存储在`keep_index`向量中；
17. 遍历保留的目标框，对每个目标框进行绘制和标注；
18. 在图像上用矩形框标出目标框的位置和大小，并在矩形框内添加目标类别和置信度；
19. 将绘制好的目标框信息（包括左上角坐标、宽度和高度）存储在`bbox_per_frame`向量中；
20. 返回绘制好的图像。

需要注意的是，该代码使用了OpenCV库中提供的绘制矩形框和添加文字的相关函数。其中`cv::rectangle()`函数用于绘制矩形框，`cv::putText()`函数用于在矩形框内添加目标类别和置信度。

### 获取显示屏的参数信息

```c
// 帧缓冲器信息结构体，包括每个像素的位数和虚拟分辨率
struct framebuffer_info {
    uint32_t bits_per_pixel;
    uint32_t xres_virtual;
};

// 获取帧缓冲器的信息函数，接受设备路径作为参数
struct framebuffer_info get_framebuffer_info(const char* framebuffer_device_path)
{
    struct framebuffer_info info;
    struct fb_var_screeninfo screen_info;
    int fd = -1;

    // 打开设备文件
    fd = open(framebuffer_device_path, O_RDWR);

    // 如果成功打开设备文件，则使用 ioctl 函数获取屏幕信息
    if (fd >= 0) {
        if (!ioctl(fd, FBIOGET_VSCREENINFO, &screen_info)) {
            info.xres_virtual = screen_info.xres_virtual;   // 虚拟分辨率
            info.bits_per_pixel = screen_info.bits_per_pixel;   // 像素位数
        }
    }

    return info;
};
```

这段代码的用途是获取帧缓冲器的信息。

具体来说：

1. `framebuffer_info` 是一个结构体，用于存储帧缓冲器的信息，包括每个像素的位数和虚拟分辨率。

2. `get_framebuffer_info` 是一个函数，用于获取帧缓冲器的信息。它接受帧缓冲器设备路径作为参数，打开设备文件并使用 ioctl 函数获取屏幕信息，然后将信息存储在 `framebuffer_info` 结构体中并返回。

### 信号处理函数

注册信号处理函数，用于 `ctrl-c` 之后关闭摄像头，防止下一次使用摄像头出现摄像头仍被占用的情况。

```c++
/* Signal handler */
static void terminate(int sig_no)
{
    printf("Got signal %d, exiting ...\n", sig_no);
    cap.release();
    exit(1);
}

static void install_sig_handler(void)
{
    signal(SIGBUS, terminate); // 当程序访问一个不合法的内存地址时发送的信号
    signal(SIGFPE, terminate); // 浮点异常信号
    signal(SIGHUP, terminate); // 终端断开连接信号
    signal(SIGILL, terminate); // 非法指令信号
    signal(SIGINT, terminate); // 中断进程信号
    signal(SIGIOT, terminate); // IOT 陷阱信号
    signal(SIGPIPE, terminate); // 管道破裂信号
    signal(SIGQUIT, terminate); // 停止进程信号
    signal(SIGSEGV, terminate); // 无效的内存引用信号
    signal(SIGSYS, terminate); // 非法系统调用信号
    signal(SIGTERM, terminate); // 终止进程信号
    signal(SIGTRAP, terminate); // 跟踪/断点陷阱信号
    signal(SIGUSR1, terminate); // 用户定义信号1
    signal(SIGUSR2, terminate); // 用户定义信号2
}
```

这段代码定义了两个函数，并给出了相应的注释说明。具体注释如下：

- `static void terminate(int sig_no)`：信号处理函数。
  - `int sig_no`：接收到的信号编号。
  - `printf("Got signal %d, exiting ...\n", sig_no);`：打印接收到的信号编号。
  - `cap.release();`：释放视频流捕获对象。
  - `exit(1);`：退出程序。
- `static void install_sig_handler(void)`：安装信号处理函数。
  - `signal(SIGBUS, terminate);`：为SIGBUS信号安装信号处理函数。
  - `signal(SIGFPE, terminate);`：为SIGFPE信号安装信号处理函数。
  - `signal(SIGHUP, terminate);`：为SIGHUP信号安装信号处理函数。
  - `signal(SIGILL, terminate);`：为SIGILL信号安装信号处理函数。
  - `signal(SIGINT, terminate);`：为SIGINT信号安装信号处理函数。
  - `signal(SIGIOT, terminate);`：为SIGIOT信号安装信号处理函数。
  - `signal(SIGPIPE, terminate);`：为SIGPIPE信号安装信号处理函数。
  - `signal(SIGQUIT, terminate);`：为SIGQUIT信号安装信号处理函数。
  - `signal(SIGSEGV, terminate);`：为SIGSEGV信号安装信号处理函数。
  - `signal(SIGSYS, terminate);`：为SIGSYS信号安装信号处理函数。
  - `signal(SIGTERM, terminate);`：为SIGTERM信号安装信号处理函数。
  - `signal(SIGTRAP, terminate);`：为SIGTRAP信号安装信号处理函数。
  - `signal(SIGUSR1, terminate);`：为SIGUSR1信号安装信号处理函数。
  - `signal(SIGUSR2, terminate);`：为SIGUSR2信号安装信号处理函数。

这段代码的功能是安装信号处理函数，用于捕获和处理不同类型的信号。当程序接收到指定的信号时，会调用`terminate`函数进行处理。

具体而言，`terminate`函数会打印接收到的信号编号，并释放视频流捕获对象`cap`，然后调用`exit(1)`退出程序。

`install_sig_handler`函数用于为多个信号注册同一个信号处理函数`terminate`，使得当这些信号触发时，都会执行相同的处理逻辑。

### 主循环

```cpp
int main(int argc, char *argv[])
{
    const int frame_width = 480; // 视频帧宽度
    const int frame_height = 480; // 视频帧高度
    const int frame_rate = 30; // 视频帧率

    char* nbg = "/usr/lib/model/mobilenet_v2_ssd.nb"; // 模型文件路径

    install_sig_handler(); // 安装信号处理程序

    framebuffer_info fb_info = get_framebuffer_info("/dev/fb0"); // 获取帧缓冲区信息

    cap.open(0); // 打开视频设备

    if (!cap.isOpened()) {
        std::cerr << "Could not open video device." << std::endl; // 如果打开视频设备失败，则输出错误信息并返回
        return 1;
    }

    std::cout << "Successfully opened video device." << std::endl; // 成功打开视频设备，输出成功信息
    cap.set(cv::CAP_PROP_FRAME_WIDTH, frame_width); // 设置视频帧宽度
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, frame_height); // 设置视频帧高度
    cap.set(cv::CAP_PROP_FPS, frame_rate); // 设置视频帧率
    std::ofstream ofs("/dev/fb0"); // 打开帧缓冲区文件
    cv::Mat frame; // 创建用于存储视频帧的 Mat 对象

    awnn_init(7 * 1024 * 1024); // 初始化 AWNN 库
    Awnn_Context_t *context = awnn_create(nbg); // 创建 AWNN 上下文
    if (NULL == context){
        std::cerr << "fatal error, awnn_create failed." << std::endl; // 如果创建 AWNN 上下文失败，则输出致命错误信息并返回
        return -1;
    }
    /* copy input */
    uint32_t input_width = 300; // 输入图像宽度
    uint32_t input_height = 300; // 输入图像高度
    uint32_t input_depth = 3; // 输入图像通道数
    uint32_t sz = input_width * input_height * input_depth; // 输入图像数据总大小

    uint8_t* plant_data = NULL; // 定义输入图像数据指针，初始化为 NULL
    
    while (true) {
    // 从视频设备中读取一帧图像
    cap >> frame;

    // 检查图像的位深度是否为8位和通道数是否为3
    if (frame.depth() != CV_8U) {
        std::cerr << "不是8位每像素和通道。" << std::endl;
    } else if (frame.channels() != 3) {
        std::cerr << "不是3个通道。" << std::endl;
    } else {
        // 转置和翻转图像以调整其方向
        cv::transpose(frame, frame);
        cv::flip(frame, frame, 0);

        // 将图像大小调整为所需的输入宽度和高度
        cv::resize(frame, frame, cv::Size(input_width, input_height));

        // 对MobileNetV2 SSD模型进行预处理
        plant_data = mbv2_ssd_preprocess(frame, input_width, input_depth);

        // 设置AWNN上下文的输入缓冲区
        uint8_t *input_buffers[1] = {plant_data};
        awnn_set_input_buffers(context, input_buffers);

        // 运行AWNN上下文进行模型推理
        awnn_run(context);

        // 从AWNN上下文中获取输出缓冲区
        float **results = awnn_get_output_buffers(context);

        // 使用SSD模型进行目标检测并更新图像
        frame = detect_ssd(frame, results);

        // 将图像大小调整为显示尺寸
        cv::resize(frame, frame, cv::Size(DISPLAY_X, DISPLAY_Y));

        // 获取帧缓冲区的宽度和位深度
        int framebuffer_width = fb_info.xres_virtual;
        int framebuffer_depth = fb_info.bits_per_pixel;

        // 根据帧缓冲区的位深度将图像转换为兼容格式
        cv::Size2f frame_size = frame.size();
        cv::Mat framebuffer_compat;
        switch (framebuffer_depth) {
            case 16:
                // 将BGR转换为BGR565格式以适用于16位帧缓冲区
                cv::cvtColor(frame, framebuffer_compat, cv::COLOR_BGR2BGR565);

                // 将转换后的图像写入帧缓冲区文件
                for (int y = 0; y < frame_size.height; y++) {
                    ofs.seekp(y * framebuffer_width * 2);
                    ofs.write(reinterpret_cast<char*>(framebuffer_compat.ptr(y)), frame_size.width * 2);
                }
                break;
            case 32:
                // 将图像分解为BGR通道并添加一个alpha通道以适用于32位帧缓冲区
                std::vector<cv::Mat> split_bgr;
                cv::split(frame, split_bgr);
                split_bgr.push_back(cv::Mat(frame_size, CV_8UC1, cv::Scalar(255)));
                cv::merge(split_bgr, framebuffer_compat);

                // 将转换后的图像写入帧缓冲区文件
                for (int y = 0; y < frame_size.height; y++) {
                    ofs.seekp(y * framebuffer_width * 4);
                    ofs.write(reinterpret_cast<char*>(framebuffer_compat.ptr(y)), frame_size.width * 4);
                }
                break;
            default:
                std::cerr << "不支持的帧缓冲区位深度。" << std::endl;
        }

        // 释放为plant_data分配的内存空间
        free(plant_data);
    }
}
```

这段代码主要实现了以下功能：

1. 定义了视频帧的宽度、高度和帧率。
2. 指定了模型文件的路径。
3. 安装信号处理程序。
4. 获取帧缓冲区的信息。
5. 打开视频设备，并设置视频帧的宽度、高度和帧率。
6. 打开帧缓冲区文件，用于后续操作。
7. 初始化 AWNN 库，并分配一定大小的内存。
8. 创建 AWNN 上下文。
9. 定义输入图像的宽度、高度和通道数，并计算输入图像数据的总大小。
10. 声明一个输入图像数据指针。

11. 主循环函数，用于不断从视频设备中获取视频帧并进行处理和展示。

具体的步骤如下：

1. 使用`cap`对象从视频设备中获取一帧图像，并将其存储在`frame`中。
2. 检查图像的位深度是否为8位（CV_8U），如果不是，则输出错误信息。
3. 检查图像的通道数是否为3，如果不是，则输出错误信息。
4. 对图像进行转置和翻转操作，以调整图像的方向。
5. 将图像的大小调整为设定的输入宽度和高度。
6. 调用`mbv2_ssd_preprocess`函数对图像进行预处理，并将结果存储在`plant_data`中。
7. 将`plant_data`设置为AWNN上下文的输入缓冲区。
8. 运行AWNN上下文，执行模型推理。
9. 使用`detect_ssd`函数对图像进行目标检测，得到检测结果的可视化图像。
10. 将图像的大小调整为设定的显示宽度和高度。
11. 根据帧缓冲区的位深度，将图像转换为与帧缓冲区兼容的格式，并写入帧缓冲区文件。
12. 释放`plant_data`的内存空间。
13. 循环回到第1步，继续获取和处理下一帧图像。

这段代码主要完成了从视频设备获取图像、预处理图像、执行模型推理、目标检测和将结果写入帧缓冲区文件等一系列操作，以实现实时目标检测并在显示设备上展示检测结果。

## 效果展示

![image-20240126200516520](assets/post/README/image-20240126200516520.png)

# OpenWrt 编译开发

TinyVision自带百兆网口接口+摄像头接口支持，支持 Current stable series: OpenWrt 23.05 系统，可以做一个 轻量级的IPC摄像头，里面运行主线系统，选择合适的内核版本  一键 编译生成系统镜像。

* openwrt-23.05源码:   https://github.com/YuzukiHD/OpenWrt/tree/openwrt-23.05
* OpenWrt-23.05目录结构，OpenWrt-23.05.tar.gz 压缩包 md5值 2b10a86405aa4d045bc2134e98d3f6d8 请确保压缩包文件一致性。

``` bash
ubuntu@ubuntu1804:~/$ md5sum OpenWrt-23.05.tar.gz 
ubuntu@ubuntu1804:~/$ tree -L 1
.
├── bin
├── BSDmakefile
├── build_dir
├── config
├── Config.in
├── COPYING
├── dl
├── feeds
├── feeds.conf.default
├── include
├── key-build
├── key-build.pub
├── key-build.ucert
├── key-build.ucert.revoke
├── LICENSES
├── Makefile
├── package
├── README.md
├── rules.mk
├── scripts
├── staging_dir
├── target
├── tmp
├── toolchain
└── tools

14 directories, 11 files

```


* 源码存放在百度网盘： https://pan.baidu.com/s/1a0uS7kqXiEdKFFgIJ3HF5g?pwd=qm83  提取码：qm83，打包的源码只是提供加速下载，Git上源码实时更新建议使用Github的源码，实在下载不下来再用这个。
* git仓库位置  https://github.com/YuzukiHD/OpenWrt/

## 编译

获取镜像后，进行解压缩，建议使用百度网盘版本，因为网络问题，可能导致某些软件包无法正常下载，编译报错。

解压压缩包后，执行 make menuconfig 进入到配置界面，

```shell
ubuntu@ubuntu1804:~/OpenWrt$ make menuconfig 
```

参考下图红框所示，三个选项选中 为 TinyVision开发板，保证一模一样。
![image-20231216174136154](assets/post/README/Openwrt-config.jpg)
选中完成后，保存退出，继续执行make 命令即可开始编译。

```shell
ubuntu@ubuntu1804:~/OpenWrt$ make  

```

如果你不想使用压缩包，而是从头获取源码，需要在 make menuconfig选中开发板之前 执行  ` ./scripts/feeds update -a ` 命令检查远端仓库和本地仓库的差异进行更新，之后执行 `./scripts/feeds install -a` 来安装远端更新。

```shell
ubuntu@ubuntu1804:~/OpenWrt$ ./scripts/feeds update -a
Updating feed 'packages' from 'https://github.com/openwrt/packages.git;openwrt-23.05' ...
remote: Enumerating objects: 101, done.
remote: Counting objects: 100% (101/101), done.
remote: Compressing objects: 100% (44/44), done.
remote: Total 68 (delta 44), reused 45 (delta 21), pack-reused 0
Unpacking objects: 100% (68/68), done.
From https://github.com/openwrt/packages
   421e2c75a..d26bbd792  openwrt-23.05 -> origin/openwrt-23.05
Updating 421e2c75a..d26bbd792
Fast-forward
 admin/btop/Makefile                                       |  7 ++++---
 lang/rust/Makefile                                        |  4 ++--
 lang/rust/patches/0001-Update-xz2-and-use-it-static.patch | 14 +++++++-------
 lang/rust/patches/0002-rustc-bootstrap-cache.patch        | 10 +++++-----
 lang/rust/patches/0003-bump-libc-deps-to-0.2.146.patch    | 28 ----------------------------
 lang/rust/rust-values.mk                                  |  6 ++++++
 net/adblock-fast/Makefile                                 |  2 +-
 net/adblock-fast/files/etc/init.d/adblock-fast            |  2 +-
 net/dnsproxy/Makefile                                     |  4 ++--
 net/sing-box/Makefile                                     |  9 ++-------
 net/travelmate/Makefile                                   |  2 +-
 net/travelmate/files/travelmate.sh                        | 12 +++++++++++-
 net/uspot/Makefile                                        | 10 ++++++----
 net/v2ray-geodata/Makefile                                | 12 ++++++------
 net/v2raya/Makefile                                       |  6 +++---
 15 files changed, 57 insertions(+), 71 deletions(-)
Updating feed 'luci' from 'https://github.com/openwrt/luci.git;openwrt-23.05' ...
remote: Enumerating objects: 49, done.
remote: Counting objects: 100% (49/49), done.
remote: Compressing objects: 100% (18/18), done.
remote: Total 31 (delta 12), reused 25 (delta 6), pack-reused 0
Unpacking objects: 100% (31/31), done.
From https://github.com/openwrt/luci
   11a1a43..fa4b280  openwrt-23.05 -> origin/openwrt-23.05
Updating 11a1a43..fa4b280
Fast-forward
 applications/luci-app-firewall/htdocs/luci-static/resources/view/firewall/rules.js                  |  3 +++
 applications/luci-app-https-dns-proxy/Makefile                                                      |  2 +-
 applications/luci-app-https-dns-proxy/htdocs/luci-static/resources/view/https-dns-proxy/overview.js |  8 ++++----
 themes/luci-theme-openwrt-2020/htdocs/luci-static/openwrt2020/cascade.css                           | 13 +++++++++++++
 4 files changed, 21 insertions(+), 5 deletions(-)
Updating feed 'routing' from 'https://github.com/openwrt/routing.git;openwrt-23.05' ...
Already up to date.
Updating feed 'telephony' from 'https://github.com/openwrt/telephony.git;openwrt-23.05' ...
Already up to date.
Create index file './feeds/packages.index' 
Collecting package info: done
Create index file './feeds/luci.index' 
Collecting package info: done
Create index file './feeds/routing.index' 
Create index file './feeds/telephony.index' 
ubuntu@ubuntu1804:~/Downloads/TinyVision/OpenWrt$ ./scripts/feeds install -a
Installing all packages from feed packages.
Installing all packages from feed luci.
Installing all packages from feed routing.
Installing all packages from feed telephony.
ubuntu@ubuntu1804:~/OpenWrt$ 

```

## 烧写镜像

系统编译完成后，镜像输出在 `build_dir/target-arm_cortex-a7+neon-vfpv4_musl_eabi/linux-yuzukihd_v851se/tmp/` 目录下，名称为 `openwrt-yuzukihd-v851se-yuzuki_tinyvision-squashfs-sysupgrade.img.gz` 需要先使用 `tar -xvf` 进行解压缩，之后 使用 `dd if` 命令 完整写入sd卡设备，或者 使用 `wind32diskimage`工具。 或者使用 `balenaEtcher` 等 进行烧录。

# Debian 12 构建与编译

## 构建 SyterKit 作为 Bootloader

SyterKit 是一个纯裸机框架，用于 TinyVision 或者其他 v851se/v851s/v851s3/v853 等芯片的开发板，SyterKit 使用 CMake 作为构建系统构建，支持多种应用与多种外设驱动。同时 SyterKit 也具有启动引导的功能，可以替代 U-Boot 实现快速启动

### 获取 SyterKit 源码

SyterKit 源码位于GitHub，可以前往下载。

```shell
git clone https://github.com/YuzukiHD/SyterKit.git
```

### 从零构建 SyterKit

构建 SyterKit 非常简单，只需要在 Linux 操作系统中安装配置环境即可编译。SyterKit 需要的软件包有：

- `gcc-arm-none-eabi`
- `CMake`

对于常用的 Ubuntu 系统，可以通过如下命令安装

```shell
sudo apt-get update
sudo apt-get install gcc-arm-none-eabi cmake build-essential -y
```

然后新建一个文件夹存放编译的输出文件，并且进入这个文件夹

```shell
mkdir build
cd build
```

然后运行命令编译 SyterKit

```shell
cmake ..
make
```

![f6cd8396-6b9e-4171-a32f-b6e908fa1fb9-image.png](assets/post/README/1702729920306-f6cd8396-6b9e-4171-a32f-b6e908fa1fb9-image.png)

编译后的可执行文件位于 `build/app` 中，这里包括 SyterKit 的多种APP可供使用。

![ecd7330e-1281-4296-9de7-0433e12fef2f-image.png](assets/post/README/1702729933404-ecd7330e-1281-4296-9de7-0433e12fef2f-image.png)

这里我们使用的是 `syter_boot` 作为启动引导。进入 syter_boot 文件夹，可以看到这些文件

![d631adb8-9d69-4f38-99f4-f080a3d04cc4-image.png](assets/post/README/1702729955121-d631adb8-9d69-4f38-99f4-f080a3d04cc4-image.png)

由于 TinyVision 是 TF 卡启动，所以我们需要用到 `syter_boot_bin_card.bin`

![0bee1188-3372-4a0a-94c3-5ae19322eab3-image.png](assets/post/README/1702729964449-0bee1188-3372-4a0a-94c3-5ae19322eab3-image.png)

## 编译 Linux-6.1 内核

由于 Debian 12 配套的内核是 Linux 6.1 LTS，所以这里我们选择构建 Linux 6.1 版本内核。

### 搭建编译环境

安装一些必要的安装包

```plaintext
sudo apt-get update && sudo apt-get install -y gcc-arm-none-eabi gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf build-essential libncurses5-dev zlib1g-dev gawk flex bison quilt libssl-dev xsltproc libxml-parser-perl mercurial bzr ecj cvs unzip lsof
```

### 获取内核源码

内核源码托管在 Github 上，可以直接获取到，这里使用 `--depth=1` 指定 git 深度为 1 加速下载。

```plaintext
git clone http://github.com/YuzukiHD/TinyVision --depth=1
```

然后进入内核文件夹

```plaintext
cd kernel/linux-6.1
```

### 配置内核选项

应用 defconfig

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm tinyvision_defconfig
```

进入 `menuconfig` 配置选项

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm menuconfig
```

进入 `General Setup ->`，选中 `Control Group Support`

![image-20231221104449523](assets/post/README/image-20231221104449523.png)

![image-20231221122711591](assets/post/README/image-20231221122711591.png)

前往 `File Systems` 找到 `FUSE (Filesystem in Userspace) support`

![image-20231221104607368](assets/post/README/image-20231221104607368.png)

前往 `File Systems` 找到 `Inotify support for userspace`

![image-20231221122848948](assets/post/README/image-20231221122848948.png)

编译内核

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm
```

## 使用 debootstrap 构建 debian rootfs

### 准备环境，依赖

下载安装依赖环境

```plaintext
sudo apt install debootstrap qemu qemu-user-static qemu-system qemu-utils qemu-system-misc binfmt-support dpkg-cross debian-ports-archive-keyring --no-install-recommends
```

生成目标镜像，配置环境，这里我们生成一个 1024M 的镜像文件用于存放 rootfs

```shell
dd if=/dev/zero of=rootfs.img bs=1M count=1024
mkdir rootfs
mkfs.ext4 rootfs.img
sudo mount rootfs.img rootfs
```

### 开始构建基础 rootfs

这里我们选择最新的 debian12 (bookwarm) 作为目标镜像，使用清华源来构建，输出到目标目录 rootfs_data 文件夹中。新版本的 debootstrap 只需要运行一次即可完成两次 stage 的操作，相较于老版本方便许多。

```shell
sudo debootstrap --arch=armhf bookworm rootfs_data https://mirrors.tuna.tsinghua.edu.cn/debian/
```

![image-20231221093653561](assets/post/README/image-20231221093653561.png)

看到 `I: Base system installed successfully.` 就是构建完成了

![image-20231221094602269](assets/post/README/image-20231221094602269.png)

等待构建完成后，使用chroot进入到目录，这里编写一个挂载脚本方便挂载使用，新建文件 `ch-mount.sh` 并写入以下内容：

```bash
#!/bin/bash

function mnt() {
    echo "MOUNTING"
    sudo mount -t proc /proc ${2}proc
    sudo mount -t sysfs /sys ${2}sys
    sudo mount -o bind /dev ${2}dev
    sudo mount -o bind /dev/pts ${2}dev/pts		
    sudo chroot ${2}
}

function umnt() {
    echo "UNMOUNTING"
    sudo umount ${2}proc
    sudo umount ${2}sys
    sudo umount ${2}dev/pts
    sudo umount ${2}dev

}

if [ "$1" == "-m" ] && [ -n "$2" ] ;
then
    mnt $1 $2
elif [ "$1" == "-u" ] && [ -n "$2" ];
then
    umnt $1 $2
else
    echo ""
    echo "Either 1'st, 2'nd or both parameters were missing"
    echo ""
    echo "1'st parameter can be one of these: -m(mount) OR -u(umount)"
    echo "2'nd parameter is the full path of rootfs directory(with trailing '/')"
    echo ""
    echo "For example: ch-mount -m /media/sdcard/"
    echo ""
    echo 1st parameter : ${1}
    echo 2nd parameter : ${2}
fi
```

然后赋予脚本执行的权限

```shell
chmod 777 ch-mount.sh
```

- 使用 `./ch-mount.sh -m rootfs_data` 挂载
- 使用 `./ch-mount.sh -u rootfs_data` 卸载

执行挂载，可以看到进入了 debian 的 rootfs

![image-20231221094725953](assets/post/README/image-20231221094725953.png)

配置系统字符集，选择 en_US 作为默认字符集

```shell
export LC_ALL=en_US.UTF-8
apt-get install locales
dpkg-reconfigure locales
```

选择一个就可以

![image-20231221095332517](assets/post/README/image-20231221095332517.png)

直接 OK 下一步

![image-20231221095409399](assets/post/README/image-20231221095409399.png)

安装 Linux 基础工具

```plaintext
apt install sudo ssh openssh-server net-tools ethtool wireless-tools network-manager iputils-ping rsyslog alsa-utils bash-completion gnupg busybox kmod wget git curl --no-install-recommends
```

安装编译工具

```bash
apt install build-essential
```

安装 Linux nerd 工具

```plaintext
apt install vim nano neofetch
```

设置本机入口 ip 地址

```plaintext
cat <<EOF > /etc/hosts
127.0.0.1       localhost
127.0.1.1       $HOST
::1             localhost ip6-localhost ip6-loopback
ff02::1         ip6-allnodes
ff02::2         ip6-allrouters
EOF
```

配置网卡

```plaintext
mkdir -p /etc/network
cat >/etc/network/interfaces <<EOF
auto lo
iface lo inet loopback

auto eth0
iface eth0 inet dhcp
EOF
```

配置 DNS 地址

```plaintext
cat >/etc/resolv.conf <<EOF
nameserver 1.1.1.1
nameserver 8.8.8.8
EOF
```

配置分区

```plaintext
cat >/etc/fstab <<EOF
#<file system> <mount point>   <type>  <options>       <dump>  <pass>
/dev/mmcblk0p1  /boot   vfat    defaults                0       0
/dev/mmcblk0p2  /       ext4    defaults,noatime        0       1
EOF
```

配置 root 密码

```plaintext
passwd
```

配置主机名

```plaintext
echo TinyVision > /etc/hostname
```

退出 chroot

```plaintext
exit
```

取消挂载 chroot

```plaintext
./ch-mount.sh -u rootfs_data/
```

### 拷贝 rootfs 到镜像中

```plaintext
sudo cp -raf rootfs_data/* rootfs
```

取消挂载

```plaintext
sudo umount rootfs
```

至此 debian rootfs 就制作好了。

## 打包固件

编译完成 bootloader，内核，rootfs 后，还需要打包固件成为可以 dd 写入的固件，这里我们使用 genimage 工具来生成构建。

## 生成刷机镜像

编译内核后，可以在文件夹 `arch/arm/boot/dts/allwinner` 生成`sun8i-v851se-tinyvision.dtb` ，在文件夹`arch/arm/boot` 生成 `zImage` ，把他们拷贝出来。

![33140ec9-fd56-4cef-9250-ffa210b74178.png](assets/post/README/1702731217300-33140ec9-fd56-4cef-9250-ffa210b74178.png)

然后将 `sun8i-v851se-tinyvision.dtb` 改名为 `sunxi.dtb` ，这个设备树名称是定义在 SyterKit 源码中的，如果之前修改了 SyterKit 的源码需要修改到对应的名称，SyterKit 会去读取这个设备树。

然后编写一个 `config.txt` 作为配置文件

```plaintext
[configs]
bootargs=root=/dev/mmcblk0p2 earlyprintk=sunxi-uart,0x02500000 loglevel=2 initcall_debug=0 rootwait console=ttyS0 init=/sbin/init
mac_addr=4a:13:e4:f9:79:75
bootdelay=3
```

### 安装 GENIMAGE

这里我们使用 genimage 作为打包工具

```plaintext
sudo apt-get install libconfuse-dev #安装genimage依赖库
sudo apt-get install genext2fs      # 制作镜像时genimage将会用到
git clone https://github.com/pengutronix/genimage.git
cd genimage
./autogen.sh                        # 配置生成configure
./configure                         # 配置生成makefile
make
sudo make install
```

编译后运行试一试，这里正常

![8dd643b9-5f40-4b9e-a355-457fd80d8c5b.png](assets/post/README/1702731225454-8dd643b9-5f40-4b9e-a355-457fd80d8c5b.png)

### 使用 GENIMAGE 打包固件

编写 genimage.cfg 作为打包的配置

```cfg
image boot.vfat {
	vfat {
		files = {
			"zImage",
			"sunxi.dtb",
			"config.txt"
		}
	}
	size = 32M
}

image sdcard.img {
	hdimage {}

	partition boot0 {
		in-partition-table = "no"
		image = "syter_boot_bin_card.bin"
		offset = 8K
	}

	partition boot0-gpt {
		in-partition-table = "no"
		image = "syter_boot_bin_card.bin"
		offset = 128K
	}

	partition kernel {
		partition-type = 0xC
		bootable = "true"
		image = "boot.vfat"
	}
	
	partition rootfs {
		partition-type = 0x83
		bootable = "true"
		image = "rootfs.img"
	}
}
```

由于genimage的脚本比较复杂，所以编写一个 `genimage.sh` 作为简易使用的工具

```sh
#!/usr/bin/env bash

die() {
  cat <<EOF >&2
Error: $@

Usage: ${0} -c GENIMAGE_CONFIG_FILE
EOF
  exit 1
}

# Parse arguments and put into argument list of the script
opts="$(getopt -n "${0##*/}" -o c: -- "$@")" || exit $?
eval set -- "$opts"

GENIMAGE_TMP="${BUILD_DIR}/genimage.tmp"

while true ; do
	case "$1" in
	-c)
	  GENIMAGE_CFG="${2}";
	  shift 2 ;;
	--) # Discard all non-option parameters
	  shift 1;
	  break ;;
	*)
	  die "unknown option '${1}'" ;;
	esac
done

[ -n "${GENIMAGE_CFG}" ] || die "Missing argument"

# Pass an empty rootpath. genimage makes a full copy of the given rootpath to
# ${GENIMAGE_TMP}/root so passing TARGET_DIR would be a waste of time and disk
# space. We don't rely on genimage to build the rootfs image, just to insert a
# pre-built one in the disk image.

trap 'rm -rf "${ROOTPATH_TMP}"' EXIT
ROOTPATH_TMP="$(mktemp -d)"
GENIMAGE_TMP="$(mktemp -d)"
rm -rf "${GENIMAGE_TMP}"

genimage \
	--rootpath "${ROOTPATH_TMP}"     \
	--tmppath "${GENIMAGE_TMP}"    \
	--inputpath "${BINARIES_DIR}"  \
	--outputpath "${BINARIES_DIR}" \
	--config "${GENIMAGE_CFG}"
```

准备完成，文件如下所示

![8986491d-003b-479e-9ef0-01f3c93ca43c.png](assets/post/README/1702731236382-8986491d-003b-479e-9ef0-01f3c93ca43c.png)

运行命令进行打包

```plaintext
chmod 777 genimage.sh
./genimage.sh -c genimage.cfg
```

![1ad6cdd4-59b6-4089-a5f4-2aac0e3538ef.png](assets/post/README/1702731309228-1ad6cdd4-59b6-4089-a5f4-2aac0e3538ef.png)

打包完成，可以找到 `sdcard.img`

使用软件烧录固件到TF卡上

![d06e037d-102f-46cc-80c1-49b47f72b8b1.png](assets/post/README/1702731317182-d06e037d-102f-46cc-80c1-49b47f72b8b1.png)

# 主线内核开发

## SyterKit

SyterKit 是一个纯裸机框架，用于 TinyVision 或者其他 v851se/v851s/v851s3/v853 等芯片的开发板，SyterKit 使用 CMake 作为构建系统构建，支持多种应用与多种外设驱动。同时 SyterKit 也具有启动引导的功能，可以替代 U-Boot 实现快速启动

### 获取 SyterKit 源码

SyterKit 源码位于GitHub，可以前往下载。

```shell
git clone https://github.com/YuzukiHD/SyterKit.git
```

### 从零构建 SyterKit

构建 SyterKit 非常简单，只需要在 Linux 操作系统中安装配置环境即可编译。SyterKit 需要的软件包有：

- `gcc-arm-none-eabi`
- `CMake`

对于常用的 Ubuntu 系统，可以通过如下命令安装

```shell
sudo apt-get update
sudo apt-get install gcc-arm-none-eabi cmake build-essential -y
```

然后新建一个文件夹存放编译的输出文件，并且进入这个文件夹

```shell
mkdir build
cd build
```

然后运行命令编译 SyterKit

```shell
cmake ..
make
```

![image-20231216174136154](assets/post/README/image-20231216174136154.png)

编译后的可执行文件位于 `build/app` 中，这里包括 SyterKit 的多种APP可供使用。

![image-20231216173846369](assets/post/README/image-20231216173846369.png)

这里我们使用的是 `syter_boot` 作为启动引导。进入 syter_boot 文件夹，可以看到这些文件

![image-20231216174210790](assets/post/README/image-20231216174210790.png)

由于 TinyVision 是 TF 卡启动，所以我们需要用到 `syter_boot_bin_card.bin`

![image-20231216174311727](assets/post/README/image-20231216174311727.png)

## 移植 Linux 6.7 主线

有了启动引导，接下来是移植 Linux 6.7 主线，前往 https://kernel.org/ 找到 Linux 6.7，选择 `tarball` 下载

![image-20231216174444070](assets/post/README/image-20231216174444070.png)

下载后解压缩

```shell
tar xvf linux-6.7-rc5.tar.gz
```

进入 linux 6.7 目录，开始移植相关驱动。

### 搭建 Kernel 相关环境

Kernel 编译需要一些软件包，需要提前安装。

```plaintext
sudo apt-get update && sudo apt-get install -y gcc-arm-none-eabi gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf build-essential libncurses5-dev zlib1g-dev gawk flex bison quilt libssl-dev xsltproc libxml-parser-perl mercurial bzr ecj cvs unzip lsof
```

安装完成后可以尝试编译一下，看看能不能编译通过，先应用配置文件

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm sunxi_defconfig
```

![image-20231216181640653](assets/post/README/image-20231216181640653.png)

然后尝试编译

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm
```

可以用 `-j32` 来加速编译，`32` 指的是使用32线程编译，一般cpu有几个核心就设置几线程

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm -j32
```

正常编译

![image-20231216183011911](assets/post/README/image-20231216183011911.png)

### 移植 clk 驱动

这里提供已经适配修改后的驱动：https://github.com/YuzukiHD/TinyVision/tree/main/kernel/linux-6.7-driver 可以直接使用。

也可以参考 https://github.com/YuzukiHD/TinyVision/tree/main/kernel/bsp/drivers/clk 中的驱动移植。

进入文件夹 `include/dt-bindings/clock/` 新建文件 `sun8i-v851se-ccu.h` ，将 CLK 填入

![image-20231216182350741](assets/post/README/image-20231216182350741.png)

进入 `include/dt-bindings/reset` 新建文件 `sun8i-v851se-ccu.h` 将 RST 填入

![image-20231216182941392](assets/post/README/image-20231216182941392.png)

进入 `drivers/clk/sunxi-ng` 找到 `sunxi-ng` clk 驱动，复制文件`ccu-sun20i-d1.c` 和 `ccu-sun20i-d1.h` 文件并改名为 `ccu-sun8i-v851se.c` ，`ccu-sun8i-v851se.h` 作为模板。

![image-20231216180413415](assets/post/README/image-20231216180413415.png)

将文件中的 `SUN20I_D1` 改为 `SUN8I_V851SE`

![image-20231216180653502](assets/post/README/image-20231216180653502.png)

打开芯片数据手册[V851SX_Datasheet_V1.2.pdf](https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/V851SX_Datasheet_V1.2.pdf)，找到 CCU 章节

![image-20231216180748419](assets/post/README/image-20231216180748419.png)

对照手册编写驱动文件适配 V851se 平台。

然后找到 `drivers/clk/sunxi-ng/Kconfig` 文件，增加刚才编写的驱动的 Kconfig 说明

![image-20231216181118674](assets/post/README/image-20231216181118674.png)

```plaintext
config SUN8I_V851SE_CCU
	tristate "Support for the Allwinner V851se CCU"
	default y
	depends on MACH_SUN8I || COMPILE_TEST
```

同时打开 `drivers/clk/sunxi-ng/Makefile`

![image-20231216181248375](assets/post/README/image-20231216181248375.png)

```plaintext
obj-$(CONFIG_SUN8I_V851SE_CCU)	+= sun8i-v851se-ccu.o

sun8i-v851se-ccu-y		+= ccu-sun8i-v851se.o
```

来检查一下是否移植成功，先查看 `menuconfig`，找到 `Device Drivers > Common Clock Framework`，查看是否有 V851se 平台选项出现

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm menuconfig
```

![image-20231216183207387](assets/post/README/image-20231216183207387.png)

编译测试，有几处未使用的变量的警告，无视即可。

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm 
```

![image-20231216183406918](assets/post/README/image-20231216183406918.png)

正常编译成功

### 移植 pinctrl 驱动

这里提供已经适配修改后的驱动：https://github.com/YuzukiHD/TinyVision/tree/main/kernel/linux-6.7-driver 可以直接使用。

前往`drivers/pinctrl/sunxi/` 新建文件 `pinctrl-sun8i-v851se.c`

![image-20231216183716548](assets/post/README/image-20231216183716548.png)

打开 [V851SE_PINOUT_V1.0.xlsx](https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/V851SE_PINOUT_V1.0.xlsx) 对照填入PIN的值与功能。

![image-20231216183825726](assets/post/README/image-20231216183825726.png)

同样的，修改 `drivers/pinctrl/sunxi/Kconfig` 增加选项

![image-20231216184038601](assets/post/README/image-20231216184038601.png)

修改 `drivers/pinctrl/sunxi/Makefile` 增加路径

![image-20231216184126988](assets/post/README/image-20231216184126988.png)

来检查一下是否移植成功，先查看 `menuconfig`，找到 `> Device Drivers > Pin controllers`，查看是否有 V851se 平台选项出现

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm menuconfig
```

![image-20231216184259987](assets/post/README/image-20231216184259987.png)

编译测试，编译通过

```plaintext
CROSS_COMPILE=arm-linux-gnueabihf- make ARCH=arm 
```

![image-20231216184649676](assets/post/README/image-20231216184649676.png)

### 编写设备树

这里提供已经适配修改后的驱动：https://github.com/YuzukiHD/TinyVision/tree/main/kernel/linux-6.7-driver/dts 可以直接使用。

![image-20231216185413254](assets/post/README/image-20231216185413254.png)

这部分直接给结果了，把上面适配的设备树放到`/home/yuzuki/WorkSpace/aa/linux-6.7-rc5/arch/arm/boot/dts/allwinner/` ，修改 `/home/yuzuki/WorkSpace/aa/linux-6.7-rc5/arch/arm/boot/dts/allwinner/Makefile`

![image-20231216185113539](assets/post/README/image-20231216185113539.png)

```plaintext
sun8i-v851se-tinyvision.dtb
```

![image-20231216185530270](assets/post/README/image-20231216185530270.png)

## 生成刷机镜像

编译内核后，可以在文件夹 `arch/arm/boot/dts/allwinner` 生成`sun8i-v851se-tinyvision.dtb` ，在文件夹`arch/arm/boot` 生成 `zImage` ，把他们拷贝出来。

![image-20231216191248458](assets/post/README/image-20231216191248458.png)

然后将 `sun8i-v851se-tinyvision.dtb` 改名为 `sunxi.dtb` ，这个设备树名称是定义在 SyterKit 源码中的，如果之前修改了 SyterKit 的源码需要修改到对应的名称，SyterKit 会去读取这个设备树。

然后编写一个 `config.txt` 作为配置文件

```plaintext
[configs]
bootargs=cma=4M root=/dev/mmcblk0p2 init=/sbin/init console=ttyS0,115200 earlyprintk=sunxi-uart,0x02500000 rootwait clk_ignore_unused 
mac_addr=4a:13:e4:f9:79:75
bootdelay=3
```

### 安装 genimage

这里我们使用 genimage 作为打包工具

```plaintext
sudo apt-get install libconfuse-dev #安装genimage依赖库
sudo apt-get install genext2fs      # 制作镜像时genimage将会用到
git clone https://github.com/pengutronix/genimage.git
cd genimage
./autogen.sh                        # 配置生成configure
./configure                         # 配置生成makefile
make
sudo make install
```

编译后运行试一试，这里正常

![image-20231216192512837](assets/post/README/image-20231216192512837.png)

### 使用 genimage 打包固件

编写 genimage.cfg 作为打包的配置

```cfg
image boot.vfat {
	vfat {
		files = {
			"zImage",
			"sunxi.dtb",
			"config.txt"
		}
	}
	size = 8M
}

image sdcard.img {
	hdimage {}

	partition boot0 {
		in-partition-table = "no"
		image = "syter_boot_bin_card.bin"
		offset = 8K
	}

	partition boot0-gpt {
		in-partition-table = "no"
		image = "syter_boot_bin_card.bin"
		offset = 128K
	}

	partition kernel {
		partition-type = 0xC
		bootable = "true"
		image = "boot.vfat"
	}
}
```

由于genimage的脚本比较复杂，所以编写一个 `genimage.sh` 作为简易使用的工具

```sh
#!/usr/bin/env bash

die() {
  cat <<EOF >&2
Error: $@

Usage: ${0} -c GENIMAGE_CONFIG_FILE
EOF
  exit 1
}

# Parse arguments and put into argument list of the script
opts="$(getopt -n "${0##*/}" -o c: -- "$@")" || exit $?
eval set -- "$opts"

GENIMAGE_TMP="${BUILD_DIR}/genimage.tmp"

while true ; do
	case "$1" in
	-c)
	  GENIMAGE_CFG="${2}";
	  shift 2 ;;
	--) # Discard all non-option parameters
	  shift 1;
	  break ;;
	*)
	  die "unknown option '${1}'" ;;
	esac
done

[ -n "${GENIMAGE_CFG}" ] || die "Missing argument"

# Pass an empty rootpath. genimage makes a full copy of the given rootpath to
# ${GENIMAGE_TMP}/root so passing TARGET_DIR would be a waste of time and disk
# space. We don't rely on genimage to build the rootfs image, just to insert a
# pre-built one in the disk image.

trap 'rm -rf "${ROOTPATH_TMP}"' EXIT
ROOTPATH_TMP="$(mktemp -d)"
GENIMAGE_TMP="$(mktemp -d)"
rm -rf "${GENIMAGE_TMP}"

genimage \
	--rootpath "${ROOTPATH_TMP}"     \
	--tmppath "${GENIMAGE_TMP}"    \
	--inputpath "${BINARIES_DIR}"  \
	--outputpath "${BINARIES_DIR}" \
	--config "${GENIMAGE_CFG}"
```

准备完成，文件如下所示

![image-20231216192612594](assets/post/README/image-20231216192612594.png)

运行命令进行打包

```plaintext
chmod 777 genimage.sh
./genimage.sh -c genimage.cfg
```

![image-20231216192702018](assets/post/README/image-20231216192702018.png)

打包完成，可以找到 `sdcard.img`

![image-20231216192757467](assets/post/README/image-20231216192757467.png)

使用软件烧录固件到TF卡上

![image-20231216192825808](assets/post/README/image-20231216192825808.png)

## 测试

插卡，上电，成功启动系统

![image-20231216193758046](assets/post/README/image-20231216193758046.png)

可以看到 Linux 版本是 6.7.0

![image-20231216193814799](assets/post/README/image-20231216193814799.png)

# Buildroot 开发

buildroot系统是一套基于Makefile管理的构建系统框架

``` ba
ubuntu@ubuntu1804:~/buildroot-2023.02.8$ tree -L 1
.
├── arch
├── board
├── boot
├── CHANGES
├── Config.in
├── Config.in.legacy
├── configs
├── COPYING
├── defconfig
├── DEVELOPERS
├── dl
├── docs
├── fs
├── linux
├── Makefile
├── Makefile.legacy
├── output
├── package
├── README
├── support
├── system
├── toolchain
└── utils

15 directories, 9 files
ubuntu@ubuntu1804:~/buildroot-2023.02.8$ 
```

## 获取源码

- 网盘链接：https://pan.baidu.com/s/19QFDR_ssy6SJeRMzm5lVDw?pwd=b4nh 提取码：b4nh

## 解压配置

```shell
ubuntu@ubuntu1804:~$ cd buildroot-2023.02.8/
ubuntu@ubuntu1804:~/buildroot-2023.02.8$ ls
arch   boot     Config.in         configs  DEVELOPERS  docs  linux     Makefile.legacy  package  support  toolchain
board  CHANGES  Config.in.legacy  COPYING  dl          fs    Makefile  output           README   system   utils
ubuntu@ubuntu1804:~/buildroot-2023.02.8$ ls configs/tinyvision_defconfig 
configs/tinyvision_defconfig
ubuntu@ubuntu1804:~/buildroot-2023.02.8$  
```

## 编译

```shell
ubuntu@ubuntu1804:~/buildroot-2023.02.8$  make tinyvision_defconfig
#
# configuration written to /home/ubuntu/buildroot-2023.02.8/.config
#
ubuntu@ubuntu1804:~/buildroot-2023.02.8$ make
/usr/bin/make -j1  O=/home/ubuntu/buildroot-2023.02.8/output HOSTCC="/usr/bin/gcc" HOSTCXX="/usr/bin/g++" syncconfig
```

注意： 不要使用 `make clean` 命令 清理仓库。

## 烧写

```shell
ubuntu@ubuntu1804:~/buildroot-2023.02.8$ ls output/images/
boot.vfat    rootfs.ext4  sun8i-v851se-tinyvision.dtb  sunxi.dtb           tinyvision_sdcard.img
rootfs.ext2  rootfs.tar   sun8i-v851s-tinyvision.dtb   syter_boot_bin.bin  zImage
ubuntu@ubuntu1804:~/buildroot-2023.02.8$ 
```

系统编译完成后，镜像输出在 `output/images/` 目录下，名称为 `tinyvision_sdcard.img` 使用 `dd if` 命令 完整写入sd卡设备，或者 使用 Win32diskimage 工具。 或者使用 balenaEtcher 等 进行烧录。

# LCD 模组驱动

TinyVision 配套 LCD 模组使用 ST7789V 作为主控，模组大小为1.4寸。

## Linux 5.15 内核适配

### 驱动勾选

由于使用的是 SPI0，所以 TinyVision 的 LCD 模块并不支持使用MIPI-DBI进行驱动，这里我们使用普通的SPI模拟时序。

### 勾选 SPI 驱动

这里我们使用 SPI-NG 驱动，勾选 `<*> SPI NG Driver Support for Allwinner SoCs`

![image-20240117100904335](assets/post/README/image-20240117100904335.png)

### 勾选 Linux FrameBuffer 驱动

前往如下地址，勾选驱动

```
Device Drivers  --->
	Graphics support  --->
		Frame buffer Devices  --->
			<*> Support for frame buffer devices
		Console display driver support  --->
			[*] Framebuffer Console support
			[*]   Map the console to the primary display device
	[*] Staging drivers  --->
		<*>   Support for small TFT LCD display modules  --->
		<*>   FB driver for the ST7789V LCD Controller
```

### 适配 FBTFT 的设备树接口

进入内核文件夹，找到 `kernel/linux-5.15/drivers/staging/fbtft/fbtft-core.c`

添加头文件

```c
#include <linux/gpio.h>
#include <linux/of_gpio.h>
```

修改 `fbtft_request_one_gpio` 函数，如下

```c
static int fbtft_request_one_gpio(struct fbtft_par *par,
                  const char *name, int index,
                  struct gpio_desc **gpiop)
{
    struct device *dev = par->info->device;
    struct device_node *node = dev->of_node;
    int gpio, flags, ret = 0;
    enum of_gpio_flags of_flags;

    if (of_find_property(node, name, NULL)) {
        gpio = of_get_named_gpio_flags(node, name, index, &of_flags);
        if (gpio == -ENOENT)
            return 0;
        if (gpio == -EPROBE_DEFER)
            return gpio;
        if (gpio < 0) {
            dev_err(dev,
                "failed to get '%s' from DT\n", name);
            return gpio;
        }
        flags = (of_flags & OF_GPIO_ACTIVE_LOW) ? GPIOF_OUT_INIT_LOW :
                            GPIOF_OUT_INIT_HIGH;
        ret = devm_gpio_request_one(dev, gpio, flags,
                        dev->driver->name);
        if (ret) {
            dev_err(dev,
                "gpio_request_one('%s'=%d) failed with %d\n",
                name, gpio, ret);
            return ret;
        }

        *gpiop = gpio_to_desc(gpio);
        fbtft_par_dbg(DEBUG_REQUEST_GPIOS, par, "%s: '%s' = GPIO%d\n",
                            __func__, name, gpio);
    }

    return ret;
}
```

### 编写配套屏幕 ST7789v 驱动

进入内核文件夹，找到 `kernel/linux-5.15/drivers/staging/fbtft/fb_st7789v.c` 修改文件如下：

```c
// SPDX-License-Identifier: GPL-2.0+
/*
 * FB driver for the ST7789V LCD Controller
 *
 * Copyright (C) 2015 Dennis Menschel
 */

#include <linux/bitops.h>
#include <linux/delay.h>
#include <linux/gpio/consumer.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/interrupt.h>
#include <linux/completion.h>
#include <linux/module.h>

#include <video/mipi_display.h>

#include "fbtft.h"

#define DRVNAME "fb_st7789v"

#define DEFAULT_GAMMA \
	"70 2C 2E 15 10 09 48 33 53 0B 19 18 20 25\n" \
	"70 2C 2E 15 10 09 48 33 53 0B 19 18 20 25"

#define HSD20_IPS_GAMMA \
	"D0 05 0A 09 08 05 2E 44 45 0F 17 16 2B 33\n" \
	"D0 05 0A 09 08 05 2E 43 45 0F 16 16 2B 33"

#define HSD20_IPS 1

/**
 * enum st7789v_command - ST7789V display controller commands
 *
 * @PORCTRL: porch setting
 * @GCTRL: gate control
 * @VCOMS: VCOM setting
 * @VDVVRHEN: VDV and VRH command enable
 * @VRHS: VRH set
 * @VDVS: VDV set
 * @VCMOFSET: VCOM offset set
 * @PWCTRL1: power control 1
 * @PVGAMCTRL: positive voltage gamma control
 * @NVGAMCTRL: negative voltage gamma control
 *
 * The command names are the same as those found in the datasheet to ease
 * looking up their semantics and usage.
 *
 * Note that the ST7789V display controller offers quite a few more commands
 * which have been omitted from this list as they are not used at the moment.
 * Furthermore, commands that are compliant with the MIPI DCS have been left
 * out as well to avoid duplicate entries.
 */
enum st7789v_command {
	PORCTRL = 0xB2,
	GCTRL = 0xB7,
	VCOMS = 0xBB,
	VDVVRHEN = 0xC2,
	VRHS = 0xC3,
	VDVS = 0xC4,
	VCMOFSET = 0xC5,
	PWCTRL1 = 0xD0,
	PVGAMCTRL = 0xE0,
	NVGAMCTRL = 0xE1,
};

#define MADCTL_BGR BIT(3) /* bitmask for RGB/BGR order */
#define MADCTL_MV BIT(5) /* bitmask for page/column order */
#define MADCTL_MX BIT(6) /* bitmask for column address order */
#define MADCTL_MY BIT(7) /* bitmask for page address order */

/* 60Hz for 16.6ms, configured as 2*16.6ms */
#define PANEL_TE_TIMEOUT_MS  33

static struct completion panel_te; /* completion for panel TE line */
static int irq_te; /* Linux IRQ for LCD TE line */

static irqreturn_t panel_te_handler(int irq, void *data)
{
	complete(&panel_te);
	return IRQ_HANDLED;
}

/**
 * init_display() - initialize the display controller
 *
 * @par: FBTFT parameter object
 *
 * Most of the commands in this init function set their parameters to the
 * same default values which are already in place after the display has been
 * powered up. (The main exception to this rule is the pixel format which
 * would default to 18 instead of 16 bit per pixel.)
 * Nonetheless, this sequence can be used as a template for concrete
 * displays which usually need some adjustments.
 *
 * Return: 0 on success, < 0 if error occurred.
 */
static int init_display(struct fbtft_par *par)
{
    par->fbtftops.reset(par);
    mdelay(50);
    write_reg(par,0x36,0x00);
    write_reg(par,0x3A,0x05);
    write_reg(par,0xB2,0x1F,0x1F,0x00,0x33,0x33);
    write_reg(par,0xB7,0x35);
    write_reg(par,0xBB,0x20);
    write_reg(par,0xC0,0x2C);
    write_reg(par,0xC2,0x01);
    write_reg(par,0xC3,0x01);
    write_reg(par,0xC4,0x18);
    write_reg(par,0xC6,0x13);
    write_reg(par,0xD0,0xA4,0xA1);
    write_reg(par,0xE0,0xF0,0x04,0x07,0x04,0x04,0x04,0x25,0x33,0x3C,0x36,0x14,0x12,0x29,0x30);
    write_reg(par,0xE1,0xF0,0x02,0x04,0x05,0x05,0x21,0x25,0x32,0x3B,0x38,0x12,0x14,0x27,0x31);
    write_reg(par,0xE4,0x1D,0x00,0x00);
	write_reg(par,0x21);
    write_reg(par,0x11);
    mdelay(50);
    write_reg(par,0x29);
    mdelay(200);
    return 0;
}

/*
 * write_vmem() - write data to display.
 * @par: FBTFT parameter object.
 * @offset: offset from screen_buffer.
 * @len: the length of data to be writte.
 *
 * Return: 0 on success, or a negative error code otherwise.
 */
static int write_vmem(struct fbtft_par *par, size_t offset, size_t len)
{
	struct device *dev = par->info->device;
	int ret;

	if (irq_te) {
		enable_irq(irq_te);
		reinit_completion(&panel_te);
		ret = wait_for_completion_timeout(&panel_te,
						  msecs_to_jiffies(PANEL_TE_TIMEOUT_MS));
		if (ret == 0)
			dev_err(dev, "wait panel TE timeout\n");

		disable_irq(irq_te);
	}

	switch (par->pdata->display.buswidth) {
	case 8:
		ret = fbtft_write_vmem16_bus8(par, offset, len);
		break;
	case 9:
		ret = fbtft_write_vmem16_bus9(par, offset, len);
		break;
	case 16:
		ret = fbtft_write_vmem16_bus16(par, offset, len);
		break;
	default:
		dev_err(dev, "Unsupported buswidth %d\n",
			par->pdata->display.buswidth);
		ret = 0;
		break;
	}

	return ret;
}

/**
 * set_var() - apply LCD properties like rotation and BGR mode
 *
 * @par: FBTFT parameter object
 *
 * Return: 0 on success, < 0 if error occurred.
 */
static int set_var(struct fbtft_par *par)
{
	u8 madctl_par = 0;

	if (par->bgr)
		madctl_par |= MADCTL_BGR;
	switch (par->info->var.rotate) {
	case 0:
		break;
	case 90:
		madctl_par |= (MADCTL_MV | MADCTL_MY);
		break;
	case 180:
		madctl_par |= (MADCTL_MX | MADCTL_MY);
		break;
	case 270:
		madctl_par |= (MADCTL_MV | MADCTL_MX);
		break;
	default:
		return -EINVAL;
	}
	write_reg(par, MIPI_DCS_SET_ADDRESS_MODE, madctl_par);
	return 0;
}

/**
 * set_gamma() - set gamma curves
 *
 * @par: FBTFT parameter object
 * @curves: gamma curves
 *
 * Before the gamma curves are applied, they are preprocessed with a bitmask
 * to ensure syntactically correct input for the display controller.
 * This implies that the curves input parameter might be changed by this
 * function and that illegal gamma values are auto-corrected and not
 * reported as errors.
 *
 * Return: 0 on success, < 0 if error occurred.
 */
static int set_gamma(struct fbtft_par *par, u32 *curves)
{
	int i;
	int j;
	int c; /* curve index offset */

	/*
	 * Bitmasks for gamma curve command parameters.
	 * The masks are the same for both positive and negative voltage
	 * gamma curves.
	 */
	static const u8 gamma_par_mask[] = {
		0xFF, /* V63[3:0], V0[3:0]*/
		0x3F, /* V1[5:0] */
		0x3F, /* V2[5:0] */
		0x1F, /* V4[4:0] */
		0x1F, /* V6[4:0] */
		0x3F, /* J0[1:0], V13[3:0] */
		0x7F, /* V20[6:0] */
		0x77, /* V36[2:0], V27[2:0] */
		0x7F, /* V43[6:0] */
		0x3F, /* J1[1:0], V50[3:0] */
		0x1F, /* V57[4:0] */
		0x1F, /* V59[4:0] */
		0x3F, /* V61[5:0] */
		0x3F, /* V62[5:0] */
	};

	for (i = 0; i < par->gamma.num_curves; i++) {
		c = i * par->gamma.num_values;
		for (j = 0; j < par->gamma.num_values; j++)
			curves[c + j] &= gamma_par_mask[j];
		write_reg(par, PVGAMCTRL + i,
			  curves[c + 0],  curves[c + 1],  curves[c + 2],
			  curves[c + 3],  curves[c + 4],  curves[c + 5],
			  curves[c + 6],  curves[c + 7],  curves[c + 8],
			  curves[c + 9],  curves[c + 10], curves[c + 11],
			  curves[c + 12], curves[c + 13]);
	}
	return 0;
}

/**
 * blank() - blank the display
 *
 * @par: FBTFT parameter object
 * @on: whether to enable or disable blanking the display
 *
 * Return: 0 on success, < 0 if error occurred.
 */
static int blank(struct fbtft_par *par, bool on)
{
	if (on)
		write_reg(par, MIPI_DCS_SET_DISPLAY_OFF);
	else
		write_reg(par, MIPI_DCS_SET_DISPLAY_ON);
	return 0;
}

static void set_addr_win(struct fbtft_par *par, int xs, int ys, int xe, int ye)
{
	switch(par->info->var.rotate)
	{
		case   0: 
			break;
 		case  90: 
			xs+=80;xe+=80;
			break;
	 	case 180:
	 		break;
	 	case 270: 
			xs+=80;xe+=80;
	 		break;
	 	default :
			break;
	}
	write_reg(par, MIPI_DCS_SET_COLUMN_ADDRESS,
		  (xs >> 8) & 0xFF, xs & 0xFF, (xe >> 8) & 0xFF, xe & 0xFF);

	write_reg(par, MIPI_DCS_SET_PAGE_ADDRESS,
		  (ys >> 8) & 0xFF, ys & 0xFF, (ye >> 8) & 0xFF, ye & 0xFF);

	write_reg(par, MIPI_DCS_WRITE_MEMORY_START);
}

static void reset(struct fbtft_par *par)
{
    if (!par->gpio.reset)
        return;
    gpiod_set_value_cansleep(par->gpio.reset, 1);
    msleep(10);
    gpiod_set_value_cansleep(par->gpio.reset, 0);
    msleep(200);
    gpiod_set_value_cansleep(par->gpio.reset, 1);
    msleep(10);
	gpiod_set_value_cansleep(par->gpio.cs, 1);  /* Activate chip */
}

static struct fbtft_display display = {
	.regwidth = 8,
	.width = 240,
	.height = 240,
	.gamma_num = 2,
	.gamma_len = 14,
	.gamma = HSD20_IPS_GAMMA,
	.fbtftops = {
		.init_display = init_display,
		.set_addr_win = set_addr_win,
		.write_vmem = write_vmem,
		.set_var = set_var,
		.set_gamma = set_gamma,
		.blank = blank,
		.reset = reset,
	},
};

FBTFT_REGISTER_DRIVER(DRVNAME, "sitronix,st7789v", &display);

MODULE_ALIAS("spi:" DRVNAME);
MODULE_ALIAS("platform:" DRVNAME);
MODULE_ALIAS("spi:st7789v");
MODULE_ALIAS("platform:st7789v");

MODULE_DESCRIPTION("FB driver for the ST7789V LCD Controller");
MODULE_AUTHOR("Dennis Menschel");
MODULE_LICENSE("GPL");
```

### 编写设备树

```
&pio {
	spi0_pins_default: spi0@0 {
		pins = "PC0", "PC2", "PC3"; /* clk, mosi, miso */
		function = "spi0";
		drive-strength = <10>;
	};

	spi0_pins_cs: spi0@1 {
		pins = "PC1", "PC4", "PC5"; /* cs, wp, hold */
		function = "spi0";
		drive-strength = <10>;
		bias-pull-up;
	};

	spi0_pins_lcd: spi0@2 {
		pins = "PC0", "PC2"; /* clk, mosi */
		function = "spi0";
		drive-strength = <10>;
	};

	spi0_pins_lcd_cs: spi0@3 {
		pins = "PC1"; /* cs */
		function = "spi0";
		drive-strength = <10>;
	};

	spi0_pins_sleep: spi0@4 {
		pins = "PC0", "PC2", "PC3", "PC1", "PC4", "PC5";
		function = "gpio_in";
		drive-strength = <10>;
	};
};

&spi0 {
	pinctrl-0 = <&spi0_pins_lcd &spi0_pins_lcd_cs>;
	pinctrl-1 = <&spi0_pins_sleep>;
	pinctrl-names = "default", "sleep";
	sunxi,spi-bus-mode = <SUNXI_SPI_BUS_MASTER>;
	sunxi,spi-cs-mode = <SUNXI_SPI_CS_AUTO>;
	status = "okay";

	st7789v@0 {
    	status = "okay";
    	compatible = "sitronix,st7789v";
		reg = <0>;
		spi-max-frequency = <30000000>;
		rotate = <0>;
		bgr;
		fps = <30>;
		buswidth = <8>;
		reset = <&pio PC 5 GPIO_ACTIVE_LOW>;
		dc = <&pio PC 4 GPIO_ACTIVE_LOW>;
		debug = <1>;
	};
};
```

## Linux 4.9 内核适配

### 驱动勾选

由于使用的是 SPI0，所以 TinyVision 的 LCD 模块并不支持使用MIPI-DBI进行驱动，这里我们使用普通的SPI模拟时序。

### 勾选 SPI 驱动

这里我们使用 SPI-NG 驱动，勾选 `Device Drivers  ---> [*] SPI support  ---><*>   SUNXI SPI Controller`

![image-20240320180743441](assets/post/README/image-20240320180743441.png)

### 勾选 Linux FrameBuffer 驱动

前往如下地址，勾选驱动

```
Device Drivers  --->
	Graphics support  --->
		Frame buffer Devices  --->
			<*> Support for frame buffer devices
		Console display driver support  --->
			[*] Framebuffer Console support
			[*]   Map the console to the primary display device
	[*] Staging drivers  --->
		<*>   Support for small TFT LCD display modules  --->
		<*>   FB driver for the ST7789V LCD Controller
```

###  适配 FBTFT 的设备树接口

进入内核文件夹，找到 `lichee/linux-4.9/drivers/staging/fbtft/fbtft-core.c`

添加头文件

```
#include <linux/sunxi-gpio.h>
```

修改驱动注册接口

```c
static int fbtft_request_one_gpio(struct fbtft_par *par,
				  const char *name, int index, int *gpiop)
{
	struct device *dev = par->info->device;
	struct device_node *node = dev->of_node;
	int gpio, flags, ret = 0;
	struct gpio_config gpio_of_flags;

	if (of_find_property(node, name, NULL)) {
		gpio = of_get_named_gpio_flags(node, name, index, (enum of_gpio_flags *)&gpio_of_flags);
		if (gpio == -ENOENT)
			return 0;
		if (gpio == -EPROBE_DEFER)
			return gpio;
		if (gpio < 0) {
			dev_err(dev,
				"failed to get '%s' from DT\n", name);
			return gpio;
		}

		/* active low translates to initially low */
		flags = (gpio_of_flags.data & OF_GPIO_ACTIVE_LOW) ? GPIOF_OUT_INIT_LOW :
							GPIOF_OUT_INIT_HIGH;
		ret = devm_gpio_request_one(dev, gpio, flags,
						dev->driver->name);
		if (ret) {
			dev_err(dev,
				"gpio_request_one('%s'=%d) failed with %d\n",
				name, gpio, ret);
			return ret;
		}
		if (gpiop)
			*gpiop = gpio;
		fbtft_par_dbg(DEBUG_REQUEST_GPIOS, par, "%s: '%s' = GPIO%d\n",
							__func__, name, gpio);
	}
	return ret;
}

static int fbtft_request_gpios_dt(struct fbtft_par *par)
{
	int i;
	int ret;

	if (!par->info->device->of_node)
		return -EINVAL;

	ret = fbtft_request_one_gpio(par, "reset", 0, &par->gpio.reset);
	if (ret)
		return ret;
	ret = fbtft_request_one_gpio(par, "dc", 0, &par->gpio.dc);
	if (ret)
		return ret;
	ret = fbtft_request_one_gpio(par, "rd", 0, &par->gpio.rd);
	if (ret)
		return ret;
	ret = fbtft_request_one_gpio(par, "wr", 0, &par->gpio.wr);
	if (ret)
		return ret;
	ret = fbtft_request_one_gpio(par, "cs", 0, &par->gpio.cs);
	if (ret)
		return ret;
	ret = fbtft_request_one_gpio(par, "latch", 0, &par->gpio.latch);
	if (ret)
		return ret;
	for (i = 0; i < 16; i++) {
		ret = fbtft_request_one_gpio(par, "db", i,
						&par->gpio.db[i]);
		if (ret)
			return ret;
		ret = fbtft_request_one_gpio(par, "led", i,
						&par->gpio.led[i]);
		if (ret)
			return ret;
		ret = fbtft_request_one_gpio(par, "aux", i,
						&par->gpio.aux[i]);
		if (ret)
			return ret;
	}

	return 0;
}
```

### 编写配套屏幕 ST7789v 驱动

```c
/*
 * FB driver for the ST7789V LCD Controller
 *
 * Copyright (C) 2015 Dennis Menschel
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/bitops.h>
#include <linux/delay.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/gpio.h>
#include <video/mipi_display.h>

#include "fbtft.h"

#define DRVNAME "fb_st7789v"

#define DEFAULT_GAMMA \
	"70 2C 2E 15 10 09 48 33 53 0B 19 18 20 25\n" \
	"70 2C 2E 15 10 09 48 33 53 0B 19 18 20 25"

#define HSD20_IPS_GAMMA \
	"D0 05 0A 09 08 05 2E 44 45 0F 17 16 2B 33\n" \
	"D0 05 0A 09 08 05 2E 43 45 0F 16 16 2B 33"

/**
 * enum st7789v_command - ST7789V display controller commands
 *
 * @PORCTRL: porch setting
 * @GCTRL: gate control
 * @VCOMS: VCOM setting
 * @VDVVRHEN: VDV and VRH command enable
 * @VRHS: VRH set
 * @VDVS: VDV set
 * @VCMOFSET: VCOM offset set
 * @PWCTRL1: power control 1
 * @PVGAMCTRL: positive voltage gamma control
 * @NVGAMCTRL: negative voltage gamma control
 *
 * The command names are the same as those found in the datasheet to ease
 * looking up their semantics and usage.
 *
 * Note that the ST7789V display controller offers quite a few more commands
 * which have been omitted from this list as they are not used at the moment.
 * Furthermore, commands that are compliant with the MIPI DCS have been left
 * out as well to avoid duplicate entries.
 */
enum st7789v_command {
	PORCTRL = 0xB2,
	GCTRL = 0xB7,
	VCOMS = 0xBB,
	VDVVRHEN = 0xC2,
	VRHS = 0xC3,
	VDVS = 0xC4,
	VCMOFSET = 0xC5,
	PWCTRL1 = 0xD0,
	PVGAMCTRL = 0xE0,
	NVGAMCTRL = 0xE1,
};

#define MADCTL_BGR BIT(3) /* bitmask for RGB/BGR order */
#define MADCTL_MV BIT(5) /* bitmask for page/column order */
#define MADCTL_MX BIT(6) /* bitmask for column address order */
#define MADCTL_MY BIT(7) /* bitmask for page address order */

/**
 * init_display() - initialize the display controller
 *
 * @par: FBTFT parameter object
 *
 * Most of the commands in this init function set their parameters to the
 * same default values which are already in place after the display has been
 * powered up. (The main exception to this rule is the pixel format which
 * would default to 18 instead of 16 bit per pixel.)
 * Nonetheless, this sequence can be used as a template for concrete
 * displays which usually need some adjustments.
 *
 * Return: 0 on success, < 0 if error occurred.
 */
static int init_display(struct fbtft_par *par)
{
    par->fbtftops.reset(par);
    mdelay(50);
    write_reg(par,0x36,0x00);
    write_reg(par,0x3A,0x05);
    write_reg(par,0xB2,0x1F,0x1F,0x00,0x33,0x33);
    write_reg(par,0xB7,0x35);
    write_reg(par,0xBB,0x20);
    write_reg(par,0xC0,0x2C);
    write_reg(par,0xC2,0x01);
    write_reg(par,0xC3,0x01);
    write_reg(par,0xC4,0x18);
    write_reg(par,0xC6,0x13);
    write_reg(par,0xD0,0xA4,0xA1);
    write_reg(par,0xE0,0xF0,0x04,0x07,0x04,0x04,0x04,0x25,0x33,0x3C,0x36,0x14,0x12,0x29,0x30);
    write_reg(par,0xE1,0xF0,0x02,0x04,0x05,0x05,0x21,0x25,0x32,0x3B,0x38,0x12,0x14,0x27,0x31);
    write_reg(par,0xE4,0x1D,0x00,0x00);
	write_reg(par,0x21);
    write_reg(par,0x11);
    mdelay(50);
    write_reg(par,0x29);
    mdelay(200);
    return 0;
	return 0;
}

/**
 * set_var() - apply LCD properties like rotation and BGR mode
 *
 * @par: FBTFT parameter object
 *
 * Return: 0 on success, < 0 if error occurred.
 */
static int set_var(struct fbtft_par *par)
{
	u8 madctl_par = 0;

	if (par->bgr)
		madctl_par |= MADCTL_BGR;
	switch (par->info->var.rotate) {
	case 0:
		break;
	case 90:
		madctl_par |= (MADCTL_MV | MADCTL_MY);
		break;
	case 180:
		madctl_par |= (MADCTL_MX | MADCTL_MY);
		break;
	case 270:
		madctl_par |= (MADCTL_MV | MADCTL_MX);
		break;
	default:
		return -EINVAL;
	}
	write_reg(par, MIPI_DCS_SET_ADDRESS_MODE, madctl_par);
	return 0;
}

/**
 * set_gamma() - set gamma curves
 *
 * @par: FBTFT parameter object
 * @curves: gamma curves
 *
 * Before the gamma curves are applied, they are preprocessed with a bitmask
 * to ensure syntactically correct input for the display controller.
 * This implies that the curves input parameter might be changed by this
 * function and that illegal gamma values are auto-corrected and not
 * reported as errors.
 *
 * Return: 0 on success, < 0 if error occurred.
 */
static int set_gamma(struct fbtft_par *par, unsigned long *curves)
{
	int i;
	int j;
	int c; /* curve index offset */

	/*
	 * Bitmasks for gamma curve command parameters.
	 * The masks are the same for both positive and negative voltage
	 * gamma curves.
	 */
	const u8 gamma_par_mask[] = {
		0xFF, /* V63[3:0], V0[3:0]*/
		0x3F, /* V1[5:0] */
		0x3F, /* V2[5:0] */
		0x1F, /* V4[4:0] */
		0x1F, /* V6[4:0] */
		0x3F, /* J0[1:0], V13[3:0] */
		0x7F, /* V20[6:0] */
		0x77, /* V36[2:0], V27[2:0] */
		0x7F, /* V43[6:0] */
		0x3F, /* J1[1:0], V50[3:0] */
		0x1F, /* V57[4:0] */
		0x1F, /* V59[4:0] */
		0x3F, /* V61[5:0] */
		0x3F, /* V62[5:0] */
	};

	for (i = 0; i < par->gamma.num_curves; i++) {
		c = i * par->gamma.num_values;
		for (j = 0; j < par->gamma.num_values; j++)
			curves[c + j] &= gamma_par_mask[j];
		write_reg(
			par, PVGAMCTRL + i,
			curves[c + 0], curves[c + 1], curves[c + 2],
			curves[c + 3], curves[c + 4], curves[c + 5],
			curves[c + 6], curves[c + 7], curves[c + 8],
			curves[c + 9], curves[c + 10], curves[c + 11],
			curves[c + 12], curves[c + 13]);
	}
	return 0;
}

/**
 * blank() - blank the display
 *
 * @par: FBTFT parameter object
 * @on: whether to enable or disable blanking the display
 *
 * Return: 0 on success, < 0 if error occurred.
 */
static int blank(struct fbtft_par *par, bool on)
{
	if (on)
		write_reg(par, MIPI_DCS_SET_DISPLAY_OFF);
	else
		write_reg(par, MIPI_DCS_SET_DISPLAY_ON);
	return 0;
}

static void set_addr_win(struct fbtft_par *par, int xs, int ys, int xe, int ye)
{
	switch(par->info->var.rotate)
	{
		case   0: 
			break;
 		case  90: 
			xs+=80;xe+=80;
			break;
	 	case 180:
	 		break;
	 	case 270: 
			xs+=80;xe+=80;
	 		break;
	 	default :
			break;
	}
	write_reg(par, MIPI_DCS_SET_COLUMN_ADDRESS,
		  (xs >> 8) & 0xFF, xs & 0xFF, (xe >> 8) & 0xFF, xe & 0xFF);

	write_reg(par, MIPI_DCS_SET_PAGE_ADDRESS,
		  (ys >> 8) & 0xFF, ys & 0xFF, (ye >> 8) & 0xFF, ye & 0xFF);

	write_reg(par, MIPI_DCS_WRITE_MEMORY_START);
}

static void reset(struct fbtft_par *par)
{
	if (par->gpio.reset == -1)
		return;
	fbtft_par_dbg(DEBUG_RESET, par, "%s()\n", __func__);
	gpio_set_value(par->gpio.reset, 1);
	mdelay(20);
	gpio_set_value(par->gpio.reset, 0);
	mdelay(20);
	gpio_set_value(par->gpio.reset, 1);
	mdelay(120);
}

static struct fbtft_display display = {
	.regwidth = 8,
	.width = 240,
	.height = 240,
	.gamma_num = 2,
	.gamma_len = 14,
	.gamma = HSD20_IPS_GAMMA,
	.fbtftops = {
		.init_display = init_display,
		.set_addr_win = set_addr_win,
		.set_var = set_var,
		.set_gamma = set_gamma,
		.blank = blank,
		.reset = reset,
	},
};

FBTFT_REGISTER_DRIVER(DRVNAME, "sitronix,st7789v", &display);

MODULE_ALIAS("spi:" DRVNAME);
MODULE_ALIAS("platform:" DRVNAME);
MODULE_ALIAS("spi:st7789v");
MODULE_ALIAS("platform:st7789v");

MODULE_DESCRIPTION("FB driver for the ST7789V LCD Controller");
MODULE_AUTHOR("Dennis Menschel");
MODULE_LICENSE("GPL");
```

### 编写设备树

```
&pio {
	spi0_pins_a: spi0@0 {
		allwinner,pins = "PC0", "PC2", "PC3";
		allwinner,pname = "spi0_sclk", "spi0_mosi", "spi0_miso";
		allwinner,function = "spi0";
		allwinner,muxsel = <4>;
		allwinner,drive = <1>;
		allwinner,pull = <0>;
	};

	spi0_pins_b: spi0@1 {
		allwinner,pins = "PC1", "PC5", "PC4";
		allwinner,pname = "spi0_cs0", "spi0_hold", "spi0_wp";
		allwinner,function = "spi0";
		allwinner,muxsel = <4>;
		allwinner,drive = <1>;
		allwinner,pull = <1>;   // only CS should be pulled up
	};

	spi0_pins_c: spi0@2 {
		allwinner,pins = "PC0", "PC1", "PC2", "PC3", "PC4", "PC5";
		allwinner,function = "io_disabled";
		allwinner,muxsel = <7>;
		allwinner,drive = <1>;
		allwinner,pull = <0>;
	};

	spi0_pins_lcd: spi0@3 {
		allwinner,pins = "PC0", "PC2"; /* clk, mosi */
		allwinner,function = "spi0";
		allwinner,muxsel = <4>;
		allwinner,drive = <1>;
		allwinner,pull = <0>;
	};

	spi0_pins_lcd_cs: spi0@4 {
		allwinner,pins = "PC1"; /* cs */
		allwinner,function = "spi0";
		allwinner,muxsel = <4>;
		allwinner,pull = <1>;
		allwinner,drive = <1>;
	};
};

&spi0 {
	clock-frequency = <100000000>;
	pinctrl-0 = <&spi0_pins_lcd &spi0_pins_lcd_cs>;
	pinctrl-1 = <&spi0_pins_c>;
	pinctrl-names = "default", "sleep";
	spi_slave_mode = <0>;
	spi_dbi_enable = <0>;
	spi0_cs_number = <1>;
	status = "okay";

	st7789v@0 {
    	status = "okay";
    	compatible = "sitronix,st7789v";
		reg = <0>;
		spi-max-frequency = <30000000>;
		rotate = <0>;
		bgr;
		fps = <30>;
		buswidth = <8>;
		reset = <&pio PC 5 1 1 2 1>;
		dc = <&pio PC 4 1 1 2 0>;
		debug = <1>;
	};
};
```

## 显示 Linux 终端

前往驱动勾选如下选项

```
Device Drivers  --->
	Graphics support  --->
		Frame buffer Devices  --->
			<*> Support for frame buffer devices
		Console display driver support  --->
			[*] Framebuffer Console support
			[*]   Map the console to the primary display device
```

![image-20240117101158050](assets/post/README/image-20240117101158050.png)

然后在 `bootargs` 添加一行 `console=tty0` 即可显示。

# WIFI 驱动

TinyVision 使用GPIO引出WIFI模块，配套的WIFI模块主控芯片为 AIC8800D80

文章中的资源下下载地址：https://github.com/YuzukiHD/YuzukiHD.github.io/releases/tag/20240112

## Linux 4.9 内核驱动移植

### Linux 4.9 BSP 内核驱动

下载驱动后获得驱动的 `tar.gz` 压缩包

![image-20240115145222134](assets/post/README/image-20240115145222134.png)

解压后找到如下驱动与文件夹

![image-20240115145406939](assets/post/README/image-20240115145406939.png)

进入内核，找到 `linux-4.9/drivers/net/wireless` 文件夹中，新建文件夹`aic8800` 并且把上面的驱动与文件夹放入刚刚创建好的 `aic8800` 中。

![image-20240115145530599](assets/post/README/image-20240115145530599.png)

修改 `linux-4.9/drivers/net/wireless/Kconfig` ，增加一行

```c
source "drivers/net/wireless/aic8800/Kconfig"
```

![image-20240115145601334](assets/post/README/image-20240115145601334.png)

修改 `linux-4.9/drivers/net/wireless/Makefile` ，增加一行

```c
obj-$(CONFIG_AIC_WLAN_SUPPORT) += aic8800/
```

![image-20240115145650592](assets/post/README/image-20240115145650592.png)

进入内核配置页，找到并勾选如下选项。

```
Device Drivers  --->
	[*] Network device support  --->
		[*]   Wireless LAN  --->
			[*]   AIC wireless Support
				  Enable Chip Interface (SDIO interface support)  --->
			<M>   AIC8800 wlan Support
			<M>   AIC8800 bluetooth Support (UART)
```

![image-20240115150856511](assets/post/README/image-20240115150856511.png)

编译后可以找到对应的驱动程序

![image-20240115150831849](assets/post/README/image-20240115150831849.png)

其加载顺序是

```
insmod aic8800_bsp.ko
insmod aic8800_fdrv.ko
insmod aic8800_btlpm.ko
```

### Linux 4.9 BSP 内核设备树

设备树配置如下，参考电路原理图，REG_ON 为 PE6，HOSTWAKE 为 PE7

```dts
wlan: wlan@0 {
	compatible    = "allwinner,sunxi-wlan";
	pinctrl-names = "default";
	clock-names   = "32k-fanout0";
	clocks        = <&clk_fanout0>;
	wlan_busnum   = <0x1>;
	wlan_regon    = <&pio PE 6 1 0x1 0x2 0>;
	wlan_hostwake = <&pio PE 7 14 0x1 0x2 0>;
	chip_en;
	power_en;
	status        = "okay";
	wakeup-source;
};
```

![image-20240115151211548](assets/post/README/image-20240115151211548.png)

### Tina SDK 移植

Tina SDK 基于OpenWrt 提供了一些自动化方案，可以参考 OpenWrt 的方法来移植这些驱动。

#### WIFI 固件移植

下载得到 `aic8800-firmware.tar.gz` 这里面包含着 WIFI 使用的固件

!> 注意，如果您的WIFI模块是 AIC8800D80 请下载 AIC8800D80 的固件（2024年4月后 WIFI 模块均升级为 AIC8800D80 模块）

![image-20240115151604351](assets/post/README/image-20240115151604351.png)

解压后拷贝到 `openwrt/openwrt/package/firmware/linux-firmware/aic8800` 即可（Tina 5.0已经内置，客服给的4.0才需要这样）

![image-20240115151709361](assets/post/README/image-20240115151709361.png)

然后找到 `target/allwinner/v851se-common/modules.mk` 文件，在末尾添加如下内容

```makefile
define KernelPackage/net-aic8800
  SUBMENU:=$(WIRELESS_MENU)
  TITLE:=aic8800 support (staging)
  DEPENDS:=+@IPV6 +@USES_AICSEMI
  KCONFIG:=\
    CONFIG_AIC8800_BTLPM_SUPPORT=m \
    CONFIG_AIC8800_WLAN_SUPPORT=m \
    CONFIG_AIC_WLAN_SUPPORT=m \
    CONFIG_PM=y \
    CONFIG_RFKILL=y \
    CONFIG_RFKILL_PM=y \
    CONFIG_RFKILL_GPIO=y

  FILES+=$(LINUX_DIR)/drivers/net/wireless/aic8800/aic8800_bsp/aic8800_bsp.ko
  FILES+=$(LINUX_DIR)/drivers/net/wireless/aic8800/aic8800_btlpm/aic8800_btlpm.ko
  FILES+=$(LINUX_DIR)/drivers/net/wireless/aic8800/aic8800_fdrv/aic8800_fdrv.ko
  AUTOLOAD:=$(call AutoProbe,aic8800_bsp aic8800_btlpm aic8800_fdrv)
endef

define KernelPackage/net-aic8800/description
 Kernel modules for aic8800 support
endef

$(eval $(call KernelPackage,net-aic8800))
```

通过这些内容可以使 Tina 自动去内核文件夹将 ko 打包进文件系统。

![image-20240115151917530](assets/post/README/image-20240115151917530.png)

#### 配置自动装载模块

修改文件：`target/allwinner/v851se-tinyvision/busybox-init-base-files/etc/init.d/rc.modules` 增加如下内容，每次开机的时候就会自动装载模块

```c
#!/bin/sh
insmod /lib/modules/4.9.191/aic8800_bsp.ko
insmod /lib/modules/4.9.191/aic8800_fdrv.ko
insmod /lib/modules/4.9.191/aic8800_btlpm.ko
```

#### 配置网络进程

新建文件 `target/allwinner/v851se-tinyvision/busybox-init-base-files/etc/init.d/S50wifidaemon` 写入如下内容，每次开机装载模块后便初始化WIFI和配置WIFI模式

```
#!/bin/sh
#
# Start wifi_daemon....
#

start() {
      printf "Starting wifi_daemon....: "
	  wifi_daemon
	  sleep 2
	  wifi -o sta
}

stop() {
	printf "Stopping wifi_daemon: "
}

case "$1" in
    start)
	start
	;;
    stop)
	stop
	;;
    restart|reload)
	stop
	start
	;;
  *)
	echo "Usage: $0 {start|stop|restart}"
	exit 1
esac

exit $?
```

#### 配置 WIFI 固件

进入 Tina 配置页面，打开如下功能

```
Allwinner  --->
	Wireless  --->
		<*> wifimanager-v2.0................................... Tina wifimanager-v2.0
		-*- wirelesscommon............................. Allwinner Wi-Fi/BT Public lib

Firmware  ---> 
	<*> aic8800-firmware.................................... AIC aic8800 firmware

Kernel modules  --->
	Wireless Drivers  --->
		<*> kmod-net-aic8800............................... aic8800 support (staging)
```

### 测试

上电启动，可以看到 LOG 正常挂载 WIFI

![image-20240115152521341](assets/post/README/image-20240115152521341.png)

可以看到正常初始化进程

![image-20240115152554437](assets/post/README/image-20240115152554437.png)

## Linux 5.15 内核驱动移植

### Linux 5.15 内核驱动

下载驱动后获得驱动的 `tar.gz` 压缩包

![image-20240115145222134](assets/post/README/image-20240115145222134.png)

解压后找到如下驱动与文件夹

![image-20240115145406939](assets/post/README/image-20240115145406939.png)

由于 Linux 5.15 需要保证内核的主线化，不可将非主线的第三方驱动放置于内核文件夹中，所以将驱动放置于 `bsp` 文件夹中。

进入`bsp`，找到 `bsp/drivers/net/wireless` 文件夹中，新建文件夹`aic8800` 并且把上面的驱动与文件夹放入刚刚创建好的 `aic8800` 中。

![image-20240115161401833](assets/post/README/image-20240115161401833.png)

修改 `bsp/drivers/net/wireless/Kconfig` ，增加一行

```c
source "bsp/drivers/net/wireless/aic8800/Kconfig"
```

![image-20240115163522102](assets/post/README/image-20240115163522102.png)

修改 `bsp/drivers/net/wireless/Makefile` ，增加一行

```c
obj-$(CONFIG_AIC_WLAN_SUPPORT) += aic8800/
```

![image-20240115145650592](assets/post/README/image-20240115145650592.png)

 修改 `bsp/drivers/net/wireless/aic8800/Kconfig`，修改为 `bsp` 的索引

![image-20240115163428151](assets/post/README/image-20240115163428151.png)

```
if AIC_WLAN_SUPPORT
source "bsp/drivers/net/wireless/aic8800/aic8800_fdrv/Kconfig"
source "bsp/drivers/net/wireless/aic8800/aic8800_btlpm/Kconfig"
endif

if AIC_INTF_USB
source "bsp/drivers/net/wireless/aic8800/aic8800_btusb/Kconfig"
endif
```

进入内核配置页，找到并勾选如下选项。

```
[*] Networking support  --->
	<*>   Bluetooth subsystem support  --->
		[*]   Bluetooth Classic (BR/EDR) features (NEW)
		<*>     RFCOMM protocol support
		[*]       RFCOMM TTY support
		[*]   Bluetooth Low Energy (LE) features
		[*]   Export Bluetooth internals in debugfs
			  Bluetooth device drivers  --->
				  <*> HCI UART driver
				  [*]   UART (H4) protocol support
	-*-   Wireless  --->
		<*>   cfg80211 - wireless configuration API
		[ ]     nl80211 testmode command
		[ ]     enable developer warnings
		[ ]     cfg80211 certification onus
		[*]     enable powersave by default
		[ ]     cfg80211 DebugFS entries
		[*]     support CRDA
		[*]     cfg80211 wireless extensions compatibility 
		<*>   Generic IEEE 802.11 Networking Stack (mac80211)
	<*>   RF switch subsystem support  --->
		[*]   RF switch input support
		<*>   GPIO RFKILL driver

Device Drivers  --->
	Network device support  --->
		[*]   Wireless LAN  --->
			[*]   AIC wireless Support
				  Enable Chip Interface (SDIO interface support)  --->
			<M>   AIC8800 wlan Support
			<M>   AIC8800 bluetooth Support (UART)
	Misc Devices Drivers  --->
		<*> Allwinner rfkill driver
		<*> Allwinner Network MAC Addess Manager
```

### Linux 5.15 内核设备树

```
&rfkill {
	compatible = "allwinner,sunxi-rfkill";
	chip_en;
	power_en;
	pinctrl-0;
	pinctrl-names;
	status = "okay";

	/* wlan session */
	wlan {
		compatible    = "allwinner,sunxi-wlan";
		wlan_busnum   = <0x1>;
		wlan_regon    = <&pio PE 6 GPIO_ACTIVE_HIGH>;
		wlan_hostwake = <&pio PE 7 GPIO_ACTIVE_HIGH>;
		wakeup-source;
	};

	/* bt session */
	bt {
		compatible    = "allwinner,sunxi-bt";
		bt_rst_n      = <&pio PE 8 GPIO_ACTIVE_LOW>;
	};
};

&addr_mgt {
	compatible     = "allwinner,sunxi-addr_mgt";
	type_addr_wifi = <0x0>;
	type_addr_bt   = <0x0>;
	type_addr_eth  = <0x0>;
	status         = "okay";
};

&btlpm {
	compatible  = "allwinner,sunxi-btlpm";
	uart_index  = <0x2>;
	bt_wake     = <&pio PE 9 GPIO_ACTIVE_HIGH>;
	bt_hostwake = <&pio PE 10 GPIO_ACTIVE_HIGH>; /* unused */
	wakeup-source;
	status      = "okay";
};
```

编译时可以看到生成的对应的 ko 模块

![image-20240115164630796](assets/post/README/image-20240115164630796.png)

### 测试

由于 Linux 5.15 不绑定 Tina，所以这里直接使用现成的 `debian rootfs` 来做测试。

使用上面编译出来的内核与ko驱动，并且将固件放置于 rootfs 对应的 `/lib/firmware/` 文件夹中

# E907 小核开发

## E907 平台

玄铁E907 是一款完全可综合的高端 MCU 处理器。它兼容 RV32IMAC 指令集，提供可观的整型性能提升以及高能效的浮点性能。E907 的主要特性包括：单双精度浮点单元，以及快速中断响应。

![img](assets/post/README/E907特性.jpg)

在V85x平台中使用的E907为RV32IMAC，不包括 P 指令集。

## 芯片架构图

![image-20230215122305111](assets/post/README/image-20230215122305111.png)

## 相关内存分布

![image-20230215122626778](assets/post/README/image-20230215122626778.png)

![image-20230215122648192](assets/post/README/image-20230215122648192.png)

## E907 子系统框图

![image-20230215122832524](assets/post/README/image-20230215122832524.png)

具体的寄存器配置项这里就不过多介绍了，具体可以参考数据手册

V853 的异构系统通讯在硬件上使用的是 MSGBOX，在软件层面上使用的是 AMP 与 RPMsg 通讯协议。其中 A7 上基于 Linux 标准的 RPMsg 驱动框架，E907基于 OpenAMP 异构通信框架。

### AMP 与 RPMsg

V851 所带有的 A7 主核心与 E907 辅助核心是完全不同的两个核心，为了最大限度的发挥他们的性能，协同完成某一任务，所以在不同的核心上面运行的系统也各不相同。这些不同架构的核心以及他们上面所运行的软件组合在一起，就成了 AMP 系统 （Asymmetric Multiprocessing System, 异构多处理系统）。

由于两个核心存在的目的是协同的处理，因此在异构多处理系统中往往会形成 Master - Remote 结构。主核心启动后启动从核心。当两个核心上的系统都启动完成后，他们之间就通过 IPC（Inter Processor Communication）方式进行通信，而 RPMsg 就是 IPC 中的一种。

在AMP系统中，两个核心通过共享内存的方式进行通信。两个核心通过 AMP 中断来传递讯息。内存的管理由主核负责。

![image-20220704155816774](assets/post/README/image-20220704155816774.png)

## 软件适配

这部分使用BSP开发包即可，配置设备树如下：

```
reserved-memory {                               // 配置预留内存区间
	e907_dram: riscv_memserve {                 // riscv 核心使用的内存
		reg = <0x0 0x43c00000 0x0 0x00400000>;  // 起始地址 0x43c00000 长度 4MB
		no-map;
	};

	vdev0buffer: vdev0buffer@0x43000000 {       // vdev设备buffer预留内存
		compatible = "shared-dma-pool";
		reg = <0x0 0x43000000 0x0 0x40000>;
		no-map;
	};

	vdev0vring0: vdev0vring0@0x43040000 {       // 通讯使用的vring设备0
		reg = <0x0 0x43040000 0x0 0x20000>;
		no-map;
	};

	vdev0vring1: vdev0vring1@0x43060000 {       // 通讯使用的vring设备1
		reg = <0x0 0x43060000 0x0 0x20000>;
		no-map;
	};
};

e907_rproc: e907_rproc@0 {                      // rproc相关配置
	compatible = "allwinner,sun8iw21p1-e907-rproc";
	clock-frequency = <600000000>;
	memory-region = <&e907_dram>, <&vdev0buffer>,
				<&vdev0vring0>, <&vdev0vring1>;

	mboxes = <&msgbox 0>;
	mbox-names = "mbox-chan";
	iommus = <&mmu_aw 5 1>;

	memory-mappings =
			/* DA 	         len         PA */
			/* DDR for e907  */
			< 0x43c00000 0x00400000 0x43c00000 >;
	core-name = "sun8iw21p1-e907";
	firmware-name = "melis-elf";
	status = "okay";
};

rpbuf_controller0: rpbuf_controller@0 {        // rpbuf配置
	compatible = "allwinner,rpbuf-controller";
	remoteproc = <&e907_rproc>;
	ctrl_id = <0>;	/* index of /dev/rpbuf_ctrl */
	iommus = <&mmu_aw 5 1>;
	status = "okay";
};

rpbuf_sample: rpbuf_sample@0 {
	compatible = "allwinner,rpbuf-sample";
	rpbuf = <&rpbuf_controller0>;
	status = "okay";
};

msgbox: msgbox@3003000 {                       // msgbox配置
	compatible = "allwinner,sunxi-msgbox";
	#mbox-cells = <1>;
	reg = <0x0 0x03003000 0x0 0x1000>,
		<0x0 0x06020000 0x0 0x1000>;
	interrupts = <GIC_SPI 0 IRQ_TYPE_LEVEL_HIGH>,
				<GIC_SPI 1 IRQ_TYPE_LEVEL_HIGH>;
	clocks = <&clk_msgbox0>;
	clock-names = "msgbox0";
	local_id = <0>;
	status = "okay";
};

e907_standby: e907_standby@0 {
	compatible = "allwinner,sunxi-e907-standby";

	firmware = "riscv.fex";
	mboxes = <&msgbox 1>;
	mbox-names = "mbox-chan";
	power-domains = <&pd V853_PD_E907>;
	status = "okay";
};
```

## 内存划分

在设备树配置小核心使用的内存，包括小核自己使用的内存，设备通信内存，回环内存等等，这里E907 运行在 DRAM 内。内存起始地址可以在数据手册查到。

![image-20230215131405440](assets/post/README/image-20230215131405440.png)

通常来说我们把内存地址设置到末尾，例如这里使用的 V851s，拥有 64MByte 内存，则内存范围为 `0x40000000 - 0x44000000`，这里配置到 `0x43c00000` 即可。对于 V853s 拥有 128M 内存则可以设置到 `0x47C00000`，以此类推。对于交换区内存则可以配置在附近。

```
reserved-memory {                               // 配置预留内存区间
	e907_dram: riscv_memserve {                 // riscv 核心使用的内存
		reg = <0x0 0x43c00000 0x0 0x00400000>;  // 起始地址 0x43c00000 长度 4MB
		no-map;
	};

	vdev0buffer: vdev0buffer@0x43000000 {       // vdev设备buffer预留内存
		compatible = "shared-dma-pool";
		reg = <0x0 0x43000000 0x0 0x40000>;
		no-map;
	};

	vdev0vring0: vdev0vring0@0x43040000 {       // 通讯使用的vring设备0
		reg = <0x0 0x43040000 0x0 0x20000>;
		no-map;
	};

	vdev0vring1: vdev0vring1@0x43060000 {       // 通讯使用的vring设备1
		reg = <0x0 0x43060000 0x0 0x20000>;
		no-map;
	};
};
```

然后需要配置下 `e907` 的链接脚本，找到 `e907_rtos/rtos/source/projects/v851-e907-lizard/kernel.lds`  将 `ORIGIN` 配置为上面预留的内存。

```
MEMORY
{
   /*DRAM_KERNEL: 4M */
   DRAM_SEG_KRN (rwx) : ORIGIN = 0x43c00000, LENGTH = 0x00400000
}
```

然后配置小核的 `defconfig` 位于 `e907_rtos/rtos/source/projects/v851-e907-lizard/configs/defconfig` 配置与其对应即可。

```
CONFIG_DRAM_PHYBASE=0x43c00000
CONFIG_DRAM_VIRTBASE=0x43c00000
CONFIG_DRAM_SIZE=0x0400000
```

## 配置启动小核

配置启动小核的流程如下，这里只讨论使用 linux 启动小核的情况，不讨论快启相关。

![img](assets/post/README/2022-07-19-15-33-28-image.png)

1. 加载固件
   1. 调用 `firmware` 接口获取文件系统中的固件
   2. 解析固件的 `resource_table` 段，该段有如下内容
      1. 声明需要的内存（`Linux` 为其分配，设备树配置）
      2. 声明使用的 `vdev`（固定为一个）
      3. 声明使用的 `vring`（固定为两个）
   3. 将固件加载到指定地址
2. 注册 `rpmsg virtio` 设备
   1. 提供 `vdev->ops`（基于 `virtio` 接口实现的）
   2. 与 `rpmsg_bus` 驱动匹配，完成 `rpmsg` 初始化
3. 启动小核
   1. 调用 `rproc->ops->start`

## 1. 加载固件

驱动位于 `kernel/linux-4.9/drivers/remoteproc/sunxi_rproc_firmware.c`

首先调用 `sunxi_request_firmware` 函数

```c
int sunxi_request_firmware(const struct firmware **fw, const char *name, struct device *dev)
{
	int ret, index;
	struct firmware *fw_p = NULL;
	u32 img_addr, img_len;

	ret = sunxi_find_firmware_storage();
	if (ret < 0) {
		dev_warn(dev, "Can't finded boot_package head\n");
		return -ENODEV;
	}

	index = ret;

	ret = sunxi_firmware_get_info(dev, index, name, &img_addr, &img_len);
	if (ret < 0) {
		dev_warn(dev, "failed to read boot_package item\n");
		ret = -EFAULT;
		goto out;
	}

	ret = sunxi_firmware_get_data(dev, index, img_addr, img_len, &fw_p);
	if (ret < 0) {
		dev_err(dev, "failed to read Firmware\n");
		ret = -ENOMEM;
		goto out;
	}

	*fw = fw_p;
out:
	return ret;
}
```

驱动会从固件的特定位置读取，使用函数 `sunxi_find_firmware_storage`，这里会去固定的位置查找固件，位置包括 `lib/firmware`，`/dev/mtd0`. `/dev/mtd1`, `/dev/mmcblk0` 等位置。对于Linux启动我们只需要放置于 `lib/firmware ` 即可。

```c
static int sunxi_find_firmware_storage(void)
{
	struct firmware_head_info *head;
	int i, len, ret;
	loff_t pos;
	const char *path;
	u32 flag;

	len = sizeof(*head);
	head = kmalloc(len, GFP_KERNEL);
	if (!head)
		return -ENOMEM;

	ret = sunxi_get_storage_type();

	for (i = 0; i < ARRAY_SIZE(firmware_storages); i++) {
		path = firmware_storages[i].path;
		pos = firmware_storages[i].head_off;
		flag = firmware_storages[i].flag;

		if (flag != ret)
			continue;

		pr_debug("try to open %s\n", path);

		ret = sunxi_firmware_read(path, head, len, &pos, flag);
		if (ret < 0)
			pr_err("open %s failed,ret=%d\n", path, ret);

		if (ret != len)
			continue;

		if (head->magic == FIRMWARE_MAGIC) {
			kfree(head);
			return i;
		}
	}

	kfree(head);

	return -ENODEV;
}
```

## 2. 配置时钟

配置`clk`与小核的 `boot` 选项，驱动位于`kernel/linux-4.9/drivers/remoteproc/sunxi_rproc_boot.c ` 可以自行参考

```c
struct sunxi_core *sunxi_remote_core_find(const char *name);

int sunxi_core_init(struct sunxi_core *core);

void sunxi_core_deinit(struct sunxi_core *core);

int sunxi_core_start(struct sunxi_core *core);

int sunxi_core_is_start(struct sunxi_core *core);

int sunxi_core_stop(struct sunxi_core *core);

void sunxi_core_set_start_addr(struct sunxi_core *core, u32 addr);

void sunxi_core_set_freq(struct sunxi_core *core, u32 freq);
```

### 使用 debugfs 加载固件

由于已经对外注册了接口，这里只需要使用命令即可启动小核心。假设小核的`elf`名字叫`e907.elf` 并且已经放置进 `lib/firmware` 文件夹

```
echo e907.elf > /sys/kernel/debug/remoteproc/remoteproc0/firmware
echo start > /sys/kernel/debug/remoteproc/remoteproc0/state
```

## E907 小核开发

这里提供了一个 `RTOS` 以供开发使用，此 `RTOS` 基于 RTT 内核。地址 [https://github.com/YuzukiHD/TinyVision/tree/main/kernel/rtos](https://github.com/YuzukiHD/TinyVision/tree/main/kernel/rtos)

## 搭建开发环境

使用 git 命令下载（不可以直接到 Github 下载 zip，会破坏超链接与文件属性）

```
git clone --depth=1 https://github.com/YuzukiHD/TinyVision.git
```

然后复制到当前目录下

```
 cp -rf TinyVision/kernel/rtos . && cd rtos
```

下载编译工具链到指定目录

```
cd rtos/tools/xcompiler/on_linux/compiler/ && wget https://github.com/YuzukiHD/Yuzukilizard/releases/download/Compiler.0.0.1/riscv64-elf-x86_64-20201104.tar.gz && cd -
```

![image-20230215133709126](assets/post/README/image-20230215133709126.png)

## 编译第一个 elf 系统

进入 `rtos/source` 文件夹

```
cd rtos/source/
```

![image-20230215133820910](assets/post/README/image-20230215133820910.png)

应用环境变量并加载方案

```
source melis-env.sh;lunch
```

![image-20230215133922058](assets/post/README/image-20230215133922058.png)

然后直接编译即可，他会自动解压配置工具链。编译完成后可以在 `ekernel/melis30.elf` 找到固件。

```
make -j
```

![image-20230215134015333](assets/post/README/image-20230215134015333.png)

## 配置小核系统

小核的编译框架与 `kernel` 类似，使用 `kconfig` 作为配置项。使用 `make menuconfig` 进入配置页。

![image-20230215134155560](assets/post/README/image-20230215134155560.png)

其余使用与标准 `menuconfig` 相同这里不过多赘述。

## 小核使用

### 小核使用 UART 输出 console

首先配置小核的 `PINMUX` 编辑文件 `rtos/rtos/source/projects/v851-e907-lizard/configs/sys_config.fex` 这里使用 `UART3` , 引脚为`PE12`, `PE13` , `mux` 为 7

```
[uart3]
uart_tx         = port:PE12<7><1><default><default>
uart_rx         = port:PE13<7><1><default><default>
```

然后配置使用 `uart3` 作为输出，运行 `make menuconfig` 居进入配置

```
 Kernel Setup  --->
 	Drivers Setup  --->
 		Melis Source Support  --->
 			[*] Support Serial Driver
 		SoC HAL Drivers  --->
 			Common Option  --->
 				[*] enable sysconfig                // 启用读取解析 sys_config.fex 功能
 			UART Devices  --->
 				[*] enable uart driver              // 启用驱动
 				[*]   support uart3 device          // 使用 uart3
 				(3)   cli uart port number          // cli 配置到 uart3
 Subsystem support  --->
 	devicetree support  --->
 		[*] support traditional fex configuration method parser. // 启用 sys_config.fex 解析器
```

到 `linux` 中配置设备树，将设备树配置相应的引脚与 `mux`

![2](assets/post/README/2.png)

如果设备树不做配置引脚和 `mux`，kernel会很贴心的帮你把没使用的 Pin 设置 `io_disable` 。由于使用的是 `iommu` 操作   `UART`  设备，会导致 `io`  不可使用。如下所示。

![4BBXHRX_1T@MH7K}{4TXNKY](assets/post/README/4BBXHRX_1T@MH7K}{4TXNKY.png)

![222](assets/post/README/222.png)

此外，还需要将 `uart3` 的节点配置 `disable`，否则 `kernel` 会优先占用此设备。

```
&uart3 {
        pinctrl-names = "default", "sleep";
        pinctrl-0 = <&uart3_pins_active>;
        pinctrl-1 = <&uart3_pins_sleep>;
        status = "disabled";
};
```

如果配置 `okay` 会出现以下提示。

```
uart: create mailbox fail
uart: irq for uart3 already enabled
uart: create mailbox fail
```

启动小核固件后就可以看到输出了

![image-20230215131216802](assets/post/README/image-20230215131216802.png)

## 核心通讯

### 建立通讯节点

启动小核后，使用 `eptdev_bind test 2` 建立两个通讯节点的监听，可以用 `rpmsg_list_listen` 命令查看监听节点。

![image-20230215135619996](assets/post/README/image-20230215135619996.png)

然后在 `Linux` 内创建通讯节点，由于我们上面启用了两个监听所以这里也开两个节点

```
echo test > /sys/class/rpmsg/rpmsg_ctrl0/open
echo test > /sys/class/rpmsg/rpmsg_ctrl0/open
```

![image-20230215135802471](assets/post/README/image-20230215135802471.png)

然后就可以在 `/dev/` 下看到通讯节点 `/dev/rpmsg0`，`/dev/rpmsg1`

![image-20230215135907700](assets/post/README/image-20230215135907700.png)

也可以在小核控制台看到节点的建立

![image-20230215140011440](assets/post/README/image-20230215140011440.png)

### 核心通讯

#### Linux -> e907

可以直接操作 Linux 端的节点，使用 `echo` 写入数据

```
echo "Linux Message 0" > /dev/rpmsg0
echo "Linux Message 0" > /dev/rpmsg1
```

![image-20230215140146824](assets/post/README/image-20230215140146824.png)

小核即可收到数据

![image-20230215140239518](assets/post/README/image-20230215140239518.png)

#### e907 -> Linux

使用命令 `eptdev_send` 用法 `eptdev_send <id> <data>`

```
eptdev_send 0 "E907 Message"
eptdev_send 1 "E907 Message"
```

![image-20230215140457024](assets/post/README/image-20230215140457024.png)

在 Linux 侧直接可以读取出来

```
cat /dev/rpmsg0
cat /dev/rpmsg1
```

![image-20230215140548983](assets/post/README/image-20230215140548983.png)

可以一直监听，例如多次发送数据

![image-20230215140641612](assets/post/README/image-20230215140641612.png)

Linux 侧获得的数据也会增加

![image-20230215140704356](assets/post/README/image-20230215140704356.png)

### 关闭通讯

Linux 侧关闭，操作控制节点，`echo <id>`  给节点即可 

```
echo 0 > /sys/class/rpmsg/rpmsg_ctrl0/close
echo 1 > /sys/class/rpmsg/rpmsg_ctrl0/close
```

![image-20230215140946705](assets/post/README/image-20230215140946705.png)

同时 E907 也会打印链接关闭

![image-20230215140935523](assets/post/README/image-20230215140935523.png)

## rpmsg 需知

1. 端点是 `rpmsg` 通信的基础；每个端点都有自己的 `src` 和 `dst` 地址，范围（1 - 1023，除了
   `0x35`）
2. `rpmsg` 每次发送数据最大为512 -16 字节；（数据块大小为 512，头部占用 16 字节）
3. `rpmsg` 使用 `name server` 机制，当 `E907` 创建的端点名，和 `linux` 注册的 `rpmsg` 驱动名一
   样的时候，`rpmsg bus` 总线会调用其 `probe` 接口。所以如果需要 `Linux `端主动发起创建端
   点并通知 `e907`，则需要借助上面提到的 `rpmsg_ctrl` 驱动。
4. `rpmsg`  是串行调用回调的，故建议  `rpmsg_driver`  的回调中不要调用耗时长的函数，避免影
   响其他 `rpmsg` 驱动的运行

## 自定义小核 APP

小核的程序入口位于 `e907_rtos/rtos/source/projects/v851-e907-lizard/src/main.c`

```
#include <stdio.h>
#include <openamp/sunxi_helper/openamp.h>

int app_entry(void *param)
{
    return 0;
}
```

可以自定义小核所运行的程序。

## 自定义小核命令

SDK 提供了 `FINSH_FUNCTION_EXPORT_ALIAS` 绑定方法，具体为

```
FINSH_FUNCTION_EXPORT_ALIAS(<函数名称>, <命令>, <命令的描述>)
```

例如编写一个 hello 命令，功能是输出 `Hello World`，描述为 `Show Hello World`

```c
int hello_cmd(int argc, const char **argv)
{
    printf("Hello World\n");
}
FINSH_FUNCTION_EXPORT_ALIAS(hello_cmd, hello, Show Hello World)
```

即可在小核找到命令与输出。

![image-20230215142007978](assets/post/README/image-20230215142007978.png)

# USB OTG 切换模式
## Linux 4.9 内核
切换到 Device 模式
```
cat /sys/devices/platform/soc/usbc0/usb_device
```
切换到 Host 模式
```
cat /sys/devices/platform/soc/usbc0/usb_host
```

## Linux 5.15 以上内核

切换到 Device 模式
```
cat /sys/devices/platform/soc@3000000/soc@3000000:usbc0@0/usb_device
```
切换到 Host 模式
```
cat /sys/devices/platform/soc@3000000/soc@3000000:usbc0@0/usb_host
```

## 设备树配置

```
&usbc0 {
	device_type = "usbc0";
	usb_port_type = <0x0>;
	usb_detect_type = <0x0>;
	usb_detect_mode = <0x0>;
	usb_id_gpio;
	usb_det_vbus_gpio;
	/* det_vbus_supply = <&usb_power_supply>; */
	usb_regulator_io = "nocare";
	usb_wakeup_suspend = <0>;
	usb_serial_unique = <0>;
	usb_serial_number = "20080411";
	status = "okay";
};
```

- `usb_port_type` 配置为0是Device模式，1是Host模式 2是OTG模式。
- `usb_id_gpio` 配置对应的USB ID引脚（TinyVision 无ID引脚）。
- `usb_det_vbus_gpio`,（TinyVision 无检测引脚） 需要根据实际情况进行配置:


# 内核驱动支持情况

TinyVision 支持多版本内核开发，具体外设支持情况如下

> 这里表述的内核驱动支持仅为部分重要模块驱动支持，对于次要模块这里略过。

✅: 支持— ❌: 暂不支持 — 🚫: 无计划支持 —⚠：支持但未完整测试

| 内核版本        | Linux 4.9.191 | Linux 5.15 | Linux 6.1 | Linux 6.7 主线 | 小核 E907 RT-Thread | SyterKit 纯裸机 |
| --------------- | ------------- | ---------- | --------- | -------------- | ------------------- | --------------- |
| SPI             | ✅             | ✅          | ✅         | ✅              | ✅                   | ✅               |
| TWI             | ✅             | ✅          | ✅         | ✅              | ✅                   | ✅               |
| PWM             | ✅             | ✅          | ✅         | ✅              | ✅                   | ✅               |
| UART            | ✅             | ✅          | ✅         | ✅              | ✅                   | ✅               |
| MMC             | ✅             | ✅          | ✅         | ✅              | 🚫                   | ✅               |
| GPIO            | ✅             | ✅          | ✅         | ✅              | ✅                   | ✅               |
| MIPI DBI Type C | ✅             | ✅          | ✅         | ✅              | ✅                   | ✅               |
| 内置100M网络    | ✅             | ✅          | ✅         | ❌              | 🚫                   | 🚫               |
| CE              | ✅             | ✅          | ⚠         | ✅              | 🚫                   | 🚫               |
| NPU             | ✅             | ⚠          | ⚠         | ✅              | 🚫                   | 🚫               |
| USB2.0          | ✅             | ✅          | ✅         | ✅              | 🚫                   | 🚫               |
| E907 小核启动   | ✅             | ✅          | ✅         | ✅              | ✅                   | ✅               |
| E907 小核控制   | ✅             | ⚠          | ⚠         | ✅              | ✅                   | 🚫               |
| G2D             | ✅             | ✅          | ✅         | ❌              | 🚫                   | 🚫               |
| 视频编码        | ✅             | ✅          | ✅         | ❌              | 🚫                   | 🚫               |
| 视频解码        | ✅             | ✅          | ✅         | ❌              | 🚫                   | 🚫               |
| MIPI CSI        | ✅             | ❌          | ❌         | ❌              | 🚫                   | 🚫               |
| GPADC           | ✅             | ✅          | ✅         | ✅              | 🚫                   | 🚫               |
| Audio           | ✅             | ❌          | ❌         | ❌              | 🚫                   | 🚫               |
| WIFI            | ✅             | ✅          | ✅         | ✅              | 🚫                   | 🚫               |

# 芯片规格对比

| 处理器规格             | V85x                                                      | XV1103/6                  |
| ---------------------- | --------------------------------------------------------- | ------------------------- |
| CPU                    | Cortex-A7 1.2GHz                                          | Cortex-A7 1.2GHz          |
| RISC-V                 | RISC-V **600MHz**                                         | RISC-V 400MHz             |
| NPU                    | **1TOPS** INT8,INT16                                      | 0.5TOPS INT4,INT8,INT16   |
| Memory                 | 16bit DDR2/DDR3                                           | 16bit DDR2/DDR3/**DDR4**  |
|                        | 512Mb/1Gb/2Gb/**4Gb/8Gb**                                 | 512Mb/1Gb/2Gb             |
| eMMC                   | eMMC **5.1**                                              | eMMC 4.51                 |
| SPI FLASH              | Octa SPI **8线**                                          | Quad SPI 4线              |
| ISP                    | 5M ISP 第6代ISP                                           | 5M ISP 第3代ISP           |
| AI ISP                 | **Low illumination AI ISP**                               | None                      |
| MIPI CSI               | 2xMIPI CSI                                                | 2xMIPI CSI                |
| MIPI DSI               | **1920×1200@60**                                          | None                      |
| RGB                    | 1920×1080@60 **RGB888**                                   | 1920×1080@60 RGB666       |
| DVP                    | **BT601**/BT656/BT1120                                    | BT656/BT1120              |
| Encoder H.265/H.265    | **3840×2160@15**/2560×1920@30                             | 3072×1728@25/2560×1440@30 |
| Net                    | **RGMII**/RMII/RMII Ethernet PHY                          | RMII Ethernet PHY         |
| USB                    | USB2.0 OTG                                                | USB2.0 OTG                |
| SDIO                   | **3**×SDIO/Support TF + eMMC + WIFI                       | 2×SDIO/Support TF + WIFI  |
| I2S                    | **2**×8CH I2S                                             | 1×8CH I2S                 |
| Codec                  | Audio Codec                                               | Audio Codec               |
| OS                     | TinaLinux/**OpenWRT/Buildroot/Debian/Mainline Linux 6.8** | Linux + Busybox           |
| 芯片价格（淘宝零售价） | 满配 V853 35元                                            | 满配 RV1106G3 38元        |

# 相关文档

## TinyVision 相关文档手册

- 电路原理图：https://github.com/YuzukiHD/TinyVision/tree/main/docs/hardware/TinyVision/schematic
- 3D 结构：https://github.com/YuzukiHD/TinyVision/tree/main/docs/hardware/TinyVision/3d
- BOM：https://github.com/YuzukiHD/TinyVision/tree/main/docs/hardware/TinyVision/bom
- Gerber：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/gerber/Gerber_PCB1_2023-11-13.zip
- V851 简述：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/V851S_Brief_CN_V1.0.pdf
- V851se 手册：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/V851SX_Datasheet_V1.2.pdf
- V851se 引脚定义：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/V851SE_PINOUT_V1.0.xlsx
- V851 原厂参考设计：https://github.com/YuzukiHD/TinyVision/tree/main/docs/hardware/TinyVision/datasheet/ReferenceDesign
- 主电源芯片：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/MPS-MP2122.pdf
- 3V3 电源芯片：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/Aerosemi-MT3520B.pdf
- CSI 接口电源 LDO：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/JSCJ-CJ6211BxxF.pdf
- SDNAND 存储芯片：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/CS-SEMI-CSNP1GCR01-BOW.pdf
- TF 卡槽：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision/datasheet/MUP-M617-2.pdf

## TinyVision WIFI 相关手册文档

- 电路原理图：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision-WIFI/schematic/SCH_TinyVision-WIFI_2023-11-18.pdf
- 3D 结构：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision-WIFI/3d/3D_PCB4_2023-11-18.zip
- Gerber：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision-WIFI/gerber/Gerber_PCB4_2023-11-18.zip
- WIFI 5 版本：
  - 基于 XR829
  - XR829 芯片简述：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision-WIFI/datasheet/XR829_Brief.pdf
  - XR829 芯片手册：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision-WIFI/datasheet/XR829_Datasheet.pdf

- WIFI 6 版本
  - 基于 AIC8800D80 系列模组


## TinyVision LCD 相关手册文档

- 电路原理图：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision-LCD/schematic/SCH_TinyVision-LCD_2023-11-18.pdf
- 3D 结构：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision-LCD/3d/3D_PCB5_2023-11-18.zip
- Gerber：https://github.com/YuzukiHD/TinyVision/blob/main/docs/hardware/TinyVision-LCD/gerber/Gerber_PCB5_2023-11-18.zip
- 屏幕 IC 手册：https://www.semiee.com/file2/72bc5f2fdf0d1b9f59fe2316bcc5f0f3/Sitronix/Sitronix-ST7789V2.pdf

# 相关工具

## 原厂工具

- 线刷工具[Windows/Linux]：https://github.com/YuzukiHD/TinyVision/blob/main/docs/tools/AllwinnertechPhoeniSuitRelease20230905.zip

![image-20231118145333944](assets/post/README/image-20231118145333944.png)

- ISP 调试工具[Windows]：https://github.com/YuzukiHD/TinyVision/blob/main/docs/tools/TigerISPv4.2.2.7z

![image-20231118144837348](assets/post/README/image-20231118144837348.png)

- XR829 系列
  - WIFI 性能测试工具[Linux/Android]：https://github.com/YuzukiHD/TinyVision/blob/main/docs/tools/xradio_wlan_rf_test_tools_v2.0.9-p1.zip
  - BT 性能测试工具[Linux]：https://github.com/YuzukiHD/TinyVision/blob/main/docs/tools/xradio_bt_rf_test_tools_v1.2.2.zip
  - WIFI 晶振频偏发射功率修改工具[Windows]：https://github.com/YuzukiHD/TinyVision/blob/main/docs/tools/xradio_sdd_editor_ex_v2.7.210115a-p1.zip


![image-20231118145056447](assets/post/README/image-20231118145056447.png)

## 开源社区工具

- Tina Linux 固件转换标准主线固件转换器 OpenixCard：https://github.com/YuzukiTsuru/OpenixCard

- 裸机开发利器 XFEL：https://github.com/xboot/xfel
- 主线固件烧录工具Win32 Disk Imager：https://sourceforge.net/projects/win32diskimager/


## 附录

### 小内存机器关闭编译 OpenCV, Python, Numpy

```
#
# Automatically generated file; DO NOT EDIT.
# OpenWrt Configuration
#
CONFIG_MODULES=y
CONFIG_HAVE_DOT_CONFIG=y
CONFIG_TARGET_v851se_tinyvision=y
CONFIG_TARGET_v851se_tinyvision_Default=y
CONFIG_TARGET_BOARD="v851se-tinyvision"
CONFIG_TARGET_SUBTARGET="generic"
CONFIG_TARGET_PROFILE="Default"
CONFIG_TARGET_ARCH_PACKAGES="arm_cortex-a7_neon"
CONFIG_DEFAULT_TARGET_OPTIMIZATION="-Os -pipe"
CONFIG_CPU_TYPE="cortex-a7+neon"
CONFIG_LINUX_4_9=y
CONFIG_DEFAULT_base-files=y
CONFIG_DEFAULT_busybox=y
CONFIG_DEFAULT_libc=y
CONFIG_DEFAULT_libgcc=y
CONFIG_HAS_FPU=y
CONFIG_AUDIO_SUPPORT=y
CONFIG_GPIO_SUPPORT=y
CONFIG_USB_SUPPORT=y
CONFIG_RTC_SUPPORT=y
CONFIG_USES_EXT4=y
CONFIG_arm=y
CONFIG_ARCH="arm"

#
# Target Images
#
# CONFIG_TARGET_ROOTFS_INITRAMFS is not set
CONFIG_EXTERNAL_CPIO=""

#
# Root filesystem archives
#
# CONFIG_TARGET_ROOTFS_CPIOGZ is not set
# CONFIG_TARGET_ROOTFS_TARGZ is not set

#
# Root filesystem images
#
# CONFIG_TARGET_ROOTFS_EXT4FS is not set
CONFIG_TARGET_ROOTFS_SQUASHFS=y
# CONFIG_KERNEL_SQUASHFS_XZ is not set
# CONFIG_KERNEL_SQUASHFS_LZ4 is not set
CONFIG_KERNEL_SQUASHFS_ZLIB=y
CONFIG_TARGET_SQUASHFS_BLOCK_SIZE=256
CONFIG_TARGET_UBIFS_FREE_SPACE_FIXUP=y
CONFIG_TARGET_UBIFS_JOURNAL_SIZE=""

#
# Image Options
#
# CONFIG_SUNXI_SD_BOOT_PART is not set
# CONFIG_SUNXI_SD_BOOT_KERNEL_FORMAT_UIMAGE is not set
CONFIG_SUNXI_SD_BOOT_KERNEL_FORMAT_BOOTIMG=y
# CONFIG_SUNXI_MKBOOTIMG_WITH_COMPRESS_KERNEL is not set
# CONFIG_SUNXI_MKBOOTIMG_ADD_DTB is not set
# CONFIG_SUNXI_SMALL_STORAGE_OTA is not set
# CONFIG_SUNXI_RECOVERY_INITRAMFS_PART is not set
CONFIG_SUNXI_RECOVERY_INITRAMFS_KERNEL_FORMAT_UIMAGE=y
# CONFIG_SUNXI_RECOVERY_INITRAMFS_KERNEL_FORMAT_BOOTIMG is not set
# CONFIG_SUNXI_SEPARATE_APP_FROM_ROOTFS is not set
# CONFIG_SUNXI_SEPARATE_DATA_FROM_ROOTFS is not set
# CONFIG_CUSTOMIZE_IMAGE_NAME is not set
# CONFIG_CUSTOMIZE_CONFIG_FILE is not set
CONFIG_TARGET_ROOTFS_INCLUDE_UIMAGE=y
CONFIG_TARGET_ROOTFS_INCLUDE_ZIMAGE=y
CONFIG_TARGET_ROOTFS_INCLUDE_FIT=y

#
# Kernel Image Compression Mode setting
#
# CONFIG_TARGET_KERNEL_COMPRESSION_MODE is not set

#
# Downsize root filesystem
#
# CONFIG_REDUCE_ROOTFS_SIZE is not set

#
# Optimize kernel size
#
# CONFIG_REDUCE_KERNEL_SIZE is not set

#
# Boot Time Optimization
#
# CONFIG_SUNXI_MAKE_REDUNDANT_ENV is not set
# end of Target Images

# CONFIG_EXPERIMENTAL is not set

#
# Global build settings
#
# CONFIG_COMPLILE_KERNEL64_USER32 is not set
# CONFIG_JSON_OVERVIEW_IMAGE_INFO is not set
# CONFIG_ALL_NONSHARED is not set
# CONFIG_ALL_KMODS is not set
# CONFIG_ALL is not set
# CONFIG_BUILDBOT is not set
# CONFIG_SIGNED_PACKAGES is not set
# CONFIG_SIGNATURE_CHECK is not set

#
# General build options
#
CONFIG_DISPLAY_SUPPORT=y
CONFIG_BUILD_PATENTED=y
# CONFIG_BUILD_NLS is not set
CONFIG_SHADOW_PASSWORDS=y
CONFIG_CLEAN_IPKG=y
# CONFIG_IPK_FILES_CHECKSUMS is not set
# CONFIG_INCLUDE_CONFIG is not set
# CONFIG_REPRODUCIBLE_DEBUG_INFO is not set
# CONFIG_COLLECT_KERNEL_DEBUG is not set
CONFIG_SKIP_KERNEL_BUILD=y

#
# Kernel build options
#
CONFIG_KERNEL_BUILD_USER=""
CONFIG_KERNEL_BUILD_DOMAIN=""
CONFIG_KERNEL_PRINTK=y
CONFIG_KERNEL_SWAP=y
# CONFIG_KERNEL_PROC_STRIPPED is not set
CONFIG_KERNEL_DEBUG_FS=y
# CONFIG_KERNEL_ARM_PMU is not set
# CONFIG_KERNEL_PERF_EVENTS is not set
# CONFIG_KERNEL_PROFILING is not set
# CONFIG_KERNEL_UBSAN is not set
# CONFIG_KERNEL_KCOV is not set
# CONFIG_KERNEL_TASKSTATS is not set
CONFIG_KERNEL_KALLSYMS=y
# CONFIG_KERNEL_FTRACE is not set
# CONFIG_KERNEL_DEBUG_KERNEL is not set
# CONFIG_KERNEL_DEBUG_INFO is not set
# CONFIG_KERNEL_DEBUG_LL_UART_NONE is not set
# CONFIG_KERNEL_DEBUG_LL is not set
# CONFIG_KERNEL_DYNAMIC_DEBUG is not set
# CONFIG_KERNEL_EARLY_PRINTK is not set
# CONFIG_KERNEL_KPROBES is not set
# CONFIG_KERNEL_AIO is not set
CONFIG_KERNEL_IO_URING=y
# CONFIG_KERNEL_FHANDLE is not set
# CONFIG_KERNEL_FANOTIFY is not set
# CONFIG_KERNEL_BLK_DEV_BSG is not set
# CONFIG_KERNEL_HUGETLB_PAGE is not set
# CONFIG_KERNEL_MAGIC_SYSRQ is not set
# CONFIG_KERNEL_DEBUG_PINCTRL is not set
# CONFIG_KERNEL_DEBUG_GPIO is not set
CONFIG_KERNEL_COREDUMP=y
CONFIG_KERNEL_ELF_CORE=y
# CONFIG_KERNEL_PROVE_LOCKING is not set
CONFIG_KERNEL_PRINTK_TIME=y
# CONFIG_KERNEL_SLABINFO is not set
CONFIG_KERNEL_PROC_PAGE_MONITOR=y
CONFIG_KERNEL_KEXEC=y
CONFIG_KERNEL_PROC_VMCORE=y
CONFIG_KERNEL_PROC_KCORE=y
CONFIG_KERNEL_CRASH_DUMP=y
# CONFIG_USE_RFKILL is not set
# CONFIG_USE_SPARSE is not set
CONFIG_KERNEL_DEVTMPFS=y
CONFIG_KERNEL_DEVTMPFS_MOUNT=y
CONFIG_KERNEL_KEYS=y
# CONFIG_KERNEL_PERSISTENT_KEYRINGS is not set
# CONFIG_KERNEL_KEYS_REQUEST_CACHE is not set
# CONFIG_KERNEL_BIG_KEYS is not set
# CONFIG_KERNEL_CGROUPS is not set
# CONFIG_KERNEL_NAMESPACES is not set
CONFIG_KERNEL_DEVPTS_MULTIPLE_INSTANCES=y
CONFIG_KERNEL_POSIX_MQUEUE=y
CONFIG_KERNEL_SECCOMP_FILTER=y
# CONFIG_KERNEL_SECCOMP is not set
CONFIG_KERNEL_IP_MROUTE=y
CONFIG_KERNEL_IPV6=y
CONFIG_KERNEL_IPV6_MULTIPLE_TABLES=y
CONFIG_KERNEL_IPV6_SUBTREES=y
CONFIG_KERNEL_IPV6_MROUTE=y
# CONFIG_KERNEL_IPV6_PIMSM_V2 is not set
CONFIG_KERNEL_IPV6_SEG6_LWTUNNEL=y
# CONFIG_KERNEL_LWTUNNEL_BPF is not set
# CONFIG_KERNEL_IP_PNP is not set

#
# Filesystem ACL and attr support options
#
# CONFIG_USE_FS_ACL_ATTR is not set
# CONFIG_KERNEL_FS_POSIX_ACL is not set
# CONFIG_KERNEL_BTRFS_FS_POSIX_ACL is not set
# CONFIG_KERNEL_EXT4_FS_POSIX_ACL is not set
# CONFIG_KERNEL_F2FS_FS_POSIX_ACL is not set
# CONFIG_KERNEL_JFFS2_FS_POSIX_ACL is not set
# CONFIG_KERNEL_TMPFS_POSIX_ACL is not set
# CONFIG_KERNEL_CIFS_ACL is not set
# CONFIG_KERNEL_HFS_FS_POSIX_ACL is not set
# CONFIG_KERNEL_HFSPLUS_FS_POSIX_ACL is not set
# CONFIG_KERNEL_NFS_ACL_SUPPORT is not set
# CONFIG_KERNEL_NFS_V3_ACL_SUPPORT is not set
# CONFIG_KERNEL_NFSD_V2_ACL_SUPPORT is not set
# CONFIG_KERNEL_NFSD_V3_ACL_SUPPORT is not set
# CONFIG_KERNEL_REISER_FS_POSIX_ACL is not set
# CONFIG_KERNEL_XFS_POSIX_ACL is not set
# CONFIG_KERNEL_JFS_POSIX_ACL is not set
# end of Filesystem ACL and attr support options

# CONFIG_KERNEL_DEVMEM is not set
# CONFIG_KERNEL_DEVKMEM is not set
CONFIG_KERNEL_SQUASHFS_FRAGMENT_CACHE_SIZE=3
# CONFIG_KERNEL_SQUASHFS_XATTR is not set
CONFIG_KERNEL_CC_OPTIMIZE_FOR_PERFORMANCE=y
# CONFIG_KERNEL_CC_OPTIMIZE_FOR_SIZE is not set
# CONFIG_KERNEL_AUDIT is not set
# CONFIG_KERNEL_SECURITY is not set
# CONFIG_KERNEL_SECURITY_NETWORK is not set
# CONFIG_KERNEL_SECURITY_SELINUX is not set
# CONFIG_KERNEL_EXT4_FS_SECURITY is not set
# CONFIG_KERNEL_F2FS_FS_SECURITY is not set
# CONFIG_KERNEL_UBIFS_FS_SECURITY is not set
# CONFIG_KERNEL_JFFS2_FS_SECURITY is not set
# end of Kernel build options

#
# Package build options
#
CONFIG_DEBUG=y
CONFIG_IPV6=y

#
# Stripping options
#
# CONFIG_NO_STRIP is not set
CONFIG_USE_STRIP=y
# CONFIG_USE_SSTRIP is not set
CONFIG_STRIP_ARGS="--strip-all"
CONFIG_STRIP_KERNEL_EXPORTS=y
# CONFIG_USE_MKLIBS is not set
CONFIG_USE_UCLIBCXX=y
# CONFIG_USE_LIBSTDCXX is not set

#
# Hardening build options
#
CONFIG_PKG_CHECK_FORMAT_SECURITY=y
# CONFIG_PKG_ASLR_PIE_NONE is not set
CONFIG_PKG_ASLR_PIE_REGULAR=y
# CONFIG_PKG_ASLR_PIE_ALL is not set
# CONFIG_PKG_CC_STACKPROTECTOR_NONE is not set
CONFIG_PKG_CC_STACKPROTECTOR_REGULAR=y
# CONFIG_PKG_CC_STACKPROTECTOR_STRONG is not set
# CONFIG_KERNEL_CC_STACKPROTECTOR_NONE is not set
CONFIG_KERNEL_CC_STACKPROTECTOR_REGULAR=y
# CONFIG_KERNEL_CC_STACKPROTECTOR_STRONG is not set
CONFIG_KERNEL_STACKPROTECTOR=y
# CONFIG_KERNEL_STACKPROTECTOR_STRONG is not set
CONFIG_PKG_FORTIFY_SOURCE_NONE=y
# CONFIG_PKG_FORTIFY_SOURCE_1 is not set
# CONFIG_PKG_FORTIFY_SOURCE_2 is not set
# CONFIG_PKG_RELRO_NONE is not set
# CONFIG_PKG_RELRO_PARTIAL is not set
CONFIG_PKG_RELRO_FULL=y
# CONFIG_SELINUX is not set
# end of Global build settings

# CONFIG_SYSTEM_INIT_PROCD is not set
CONFIG_SYSTEM_INIT_BUSYBOX=y
CONFIG_DEVEL=y
# CONFIG_BROKEN is not set
CONFIG_BINARY_FOLDER=""
CONFIG_DOWNLOAD_FOLDER=""
CONFIG_LOCALMIRROR=""
CONFIG_AUTOREBUILD=y
# CONFIG_AUTOREMOVE is not set
CONFIG_BUILD_SUFFIX=""
CONFIG_TARGET_ROOTFS_DIR=""
# CONFIG_CCACHE is not set
CONFIG_CCACHE_DIR=""
CONFIG_EXTERNAL_KERNEL_TREE="$(TINA_TOPDIR)/kernel/linux-$(KERNEL_PATCHVER)/"
CONFIG_KERNEL_GIT_CLONE_URI=""
# CONFIG_BUILD_LOG is not set
CONFIG_BUILD_LOG_DIR=""
# CONFIG_SRC_TREE_OVERRIDE is not set
CONFIG_EXTRA_OPTIMIZATION="-fno-caller-saves -fno-plt"
# CONFIG_TARGET_OPTIONS is not set
CONFIG_TARGET_OPTIMIZATION="-Os -pipe"
CONFIG_EXTERNAL_TOOLCHAIN=y
# CONFIG_NATIVE_TOOLCHAIN is not set
CONFIG_TARGET_NAME="arm-openwrt-linux"
CONFIG_TOOLCHAIN_PREFIX="arm-openwrt-linux-"
CONFIG_TOOLCHAIN_GCC_VERSION="8.4.0"
CONFIG_TOOLCHAIN_LIBC_VERSION="2.29"
CONFIG_TOOLCHAIN_ROOT="$(LICHEE_TOP_DIR)/prebuilt/rootfsbuilt/arm/toolchain-sunxi-musl-gcc-830/toolchain"
# CONFIG_EXTERNAL_TOOLCHAIN_LIBC_USE_GLIBC is not set
CONFIG_EXTERNAL_TOOLCHAIN_LIBC_USE_MUSL=y
CONFIG_TOOLCHAIN_LIBC="musl"
CONFIG_TOOLCHAIN_BIN_PATH="./usr/bin ./bin"
CONFIG_TOOLCHAIN_INC_PATH="./usr/include ./include"
CONFIG_TOOLCHAIN_LIB_PATH="./usr/lib ./lib"
# CONFIG_EXTRA_TARGET_ARCH is not set
CONFIG_EXTRA_BINUTILS_CONFIG_OPTIONS=""
CONFIG_EXTRA_GCC_CONFIG_OPTIONS=""
# CONFIG_GCC_DEFAULT_PIE is not set
# CONFIG_GCC_DEFAULT_SSP is not set
# CONFIG_SJLJ_EXCEPTIONS is not set
# CONFIG_INSTALL_GFORTRAN is not set
CONFIG_USE_MUSL=y
CONFIG_SSP_SUPPORT=y
CONFIG_USE_EXTERNAL_LIBC=y
CONFIG_BINUTILS_VERSION_2_34=y
CONFIG_BINUTILS_VERSION="2.34"
CONFIG_GCC_VERSION="8.4.0"
# CONFIG_GCC_USE_IREMAP is not set
CONFIG_LIBC="musl"
CONFIG_TARGET_SUFFIX="muslgnueabi"
CONFIG_IMAGEOPT=y
# CONFIG_PREINITOPT is not set
CONFIG_TARGET_PREINIT_SUPPRESS_STDERR=y
# CONFIG_TARGET_PREINIT_DISABLE_FAILSAFE is not set
CONFIG_TARGET_PREINIT_TIMEOUT=2
# CONFIG_TARGET_PREINIT_SHOW_NETMSG is not set
# CONFIG_TARGET_PREINIT_SUPPRESS_FAILSAFE_NETMSG is not set
CONFIG_TARGET_PREINIT_IFNAME=""
CONFIG_TARGET_PREINIT_IP="192.168.1.1"
CONFIG_TARGET_PREINIT_NETMASK="255.255.255.0"
CONFIG_TARGET_PREINIT_BROADCAST="192.168.1.255"
# CONFIG_INITOPT is not set
CONFIG_TARGET_INIT_PATH="/usr/sbin:/usr/bin:/sbin:/bin"
CONFIG_TARGET_INIT_ENV=""
CONFIG_TARGET_INIT_CMD="/sbin/init"
CONFIG_TARGET_INIT_SUPPRESS_STDERR=y
# CONFIG_VERSIONOPT is not set
CONFIG_PER_FEED_REPO=y
# CONFIG_FEED_packages is not set
# CONFIG_FEED_luci is not set
# CONFIG_FEED_routing is not set
# CONFIG_FEED_telephony is not set

#
# Base system
#
# CONFIG_PACKAGE_attendedsysupgrade-common is not set
# CONFIG_PACKAGE_auc is not set
# CONFIG_PACKAGE_block-mount is not set
# CONFIG_PACKAGE_blockd is not set
# CONFIG_PACKAGE_bridge is not set
CONFIG_PACKAGE_busybox=y
CONFIG_BUSYBOX_CUSTOM=y
CONFIG_BUSYBOX_DEFAULT_HAVE_DOT_CONFIG=y
# CONFIG_BUSYBOX_DEFAULT_DESKTOP is not set
# CONFIG_BUSYBOX_DEFAULT_EXTRA_COMPAT is not set
# CONFIG_BUSYBOX_DEFAULT_FEDORA_COMPAT is not set
CONFIG_BUSYBOX_DEFAULT_INCLUDE_SUSv2=y
CONFIG_BUSYBOX_DEFAULT_LONG_OPTS=y
CONFIG_BUSYBOX_DEFAULT_SHOW_USAGE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VERBOSE_USAGE=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_COMPRESS_USAGE is not set
CONFIG_BUSYBOX_DEFAULT_LFS=y
# CONFIG_BUSYBOX_DEFAULT_PAM is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_DEVPTS=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UTMP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_WTMP is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_PIDFILE=y
CONFIG_BUSYBOX_DEFAULT_PID_FILE_PATH="/var/run"
# CONFIG_BUSYBOX_DEFAULT_BUSYBOX is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SHOW_SCRIPT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INSTALLER is not set
# CONFIG_BUSYBOX_DEFAULT_INSTALL_NO_USR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SUID is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SUID_CONFIG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SUID_CONFIG_QUIET is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_PREFER_APPLETS=y
CONFIG_BUSYBOX_DEFAULT_BUSYBOX_EXEC_PATH="/proc/self/exe"
# CONFIG_BUSYBOX_DEFAULT_SELINUX is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CLEAN_UP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SYSLOG_INFO is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_SYSLOG=y
# CONFIG_BUSYBOX_DEFAULT_STATIC is not set
# CONFIG_BUSYBOX_DEFAULT_PIE is not set
# CONFIG_BUSYBOX_DEFAULT_NOMMU is not set
# CONFIG_BUSYBOX_DEFAULT_BUILD_LIBBUSYBOX is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LIBBUSYBOX_STATIC is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INDIVIDUAL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SHARED_BUSYBOX is not set
CONFIG_BUSYBOX_DEFAULT_CROSS_COMPILER_PREFIX=""
CONFIG_BUSYBOX_DEFAULT_SYSROOT=""
CONFIG_BUSYBOX_DEFAULT_EXTRA_CFLAGS=""
CONFIG_BUSYBOX_DEFAULT_EXTRA_LDFLAGS=""
CONFIG_BUSYBOX_DEFAULT_EXTRA_LDLIBS=""
# CONFIG_BUSYBOX_DEFAULT_USE_PORTABLE_CODE is not set
# CONFIG_BUSYBOX_DEFAULT_STACK_OPTIMIZATION_386 is not set
# CONFIG_BUSYBOX_DEFAULT_STATIC_LIBGCC is not set
CONFIG_BUSYBOX_DEFAULT_INSTALL_APPLET_SYMLINKS=y
# CONFIG_BUSYBOX_DEFAULT_INSTALL_APPLET_HARDLINKS is not set
# CONFIG_BUSYBOX_DEFAULT_INSTALL_APPLET_SCRIPT_WRAPPERS is not set
# CONFIG_BUSYBOX_DEFAULT_INSTALL_APPLET_DONT is not set
# CONFIG_BUSYBOX_DEFAULT_INSTALL_SH_APPLET_SYMLINK is not set
# CONFIG_BUSYBOX_DEFAULT_INSTALL_SH_APPLET_HARDLINK is not set
# CONFIG_BUSYBOX_DEFAULT_INSTALL_SH_APPLET_SCRIPT_WRAPPER is not set
CONFIG_BUSYBOX_DEFAULT_PREFIX="./_install"
# CONFIG_BUSYBOX_DEFAULT_DEBUG is not set
# CONFIG_BUSYBOX_DEFAULT_DEBUG_PESSIMIZE is not set
# CONFIG_BUSYBOX_DEFAULT_DEBUG_SANITIZE is not set
# CONFIG_BUSYBOX_DEFAULT_UNIT_TEST is not set
# CONFIG_BUSYBOX_DEFAULT_WERROR is not set
# CONFIG_BUSYBOX_DEFAULT_WARN_SIMPLE_MSG is not set
CONFIG_BUSYBOX_DEFAULT_NO_DEBUG_LIB=y
# CONFIG_BUSYBOX_DEFAULT_DMALLOC is not set
# CONFIG_BUSYBOX_DEFAULT_EFENCE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_USE_BSS_TAIL is not set
# CONFIG_BUSYBOX_DEFAULT_FLOAT_DURATION is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_RTMINMAX is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_RTMINMAX_USE_LIBC_DEFINITIONS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_BUFFERS_USE_MALLOC is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_BUFFERS_GO_ON_STACK=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_BUFFERS_GO_IN_BSS is not set
CONFIG_BUSYBOX_DEFAULT_PASSWORD_MINLEN=6
CONFIG_BUSYBOX_DEFAULT_MD5_SMALL=1
CONFIG_BUSYBOX_DEFAULT_SHA3_SMALL=1
CONFIG_BUSYBOX_DEFAULT_FEATURE_FAST_TOP=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_ETC_NETWORKS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_ETC_SERVICES is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_EDITING=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_EDITING_MAX_LEN=512
# CONFIG_BUSYBOX_DEFAULT_FEATURE_EDITING_VI is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_EDITING_HISTORY=256
# CONFIG_BUSYBOX_DEFAULT_FEATURE_EDITING_SAVEHISTORY is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_EDITING_SAVE_ON_EXIT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_REVERSE_SEARCH is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_TAB_COMPLETION=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_USERNAME_COMPLETION is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_EDITING_FANCY_PROMPT=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_EDITING_WINCH is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_EDITING_ASK_TERMINAL is not set
# CONFIG_BUSYBOX_DEFAULT_LOCALE_SUPPORT is not set
# CONFIG_BUSYBOX_DEFAULT_UNICODE_SUPPORT is not set
# CONFIG_BUSYBOX_DEFAULT_UNICODE_USING_LOCALE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHECK_UNICODE_IN_ENV is not set
CONFIG_BUSYBOX_DEFAULT_SUBST_WCHAR=0
CONFIG_BUSYBOX_DEFAULT_LAST_SUPPORTED_WCHAR=0
# CONFIG_BUSYBOX_DEFAULT_UNICODE_COMBINING_WCHARS is not set
# CONFIG_BUSYBOX_DEFAULT_UNICODE_WIDE_WCHARS is not set
# CONFIG_BUSYBOX_DEFAULT_UNICODE_BIDI_SUPPORT is not set
# CONFIG_BUSYBOX_DEFAULT_UNICODE_NEUTRAL_TABLE is not set
# CONFIG_BUSYBOX_DEFAULT_UNICODE_PRESERVE_BROKEN is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_NON_POSIX_CP=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VERBOSE_CP_MESSAGE is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_USE_SENDFILE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_COPYBUF_KB=4
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SKIP_ROOTFS is not set
CONFIG_BUSYBOX_DEFAULT_MONOTONIC_SYSCALL=y
CONFIG_BUSYBOX_DEFAULT_IOCTL_HEX2STR_ERROR=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HWIB is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SEAMLESS_XZ is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SEAMLESS_LZMA is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SEAMLESS_BZ2 is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_SEAMLESS_GZ=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SEAMLESS_Z is not set
# CONFIG_BUSYBOX_DEFAULT_AR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_AR_LONG_FILENAMES is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_AR_CREATE is not set
# CONFIG_BUSYBOX_DEFAULT_UNCOMPRESS is not set
CONFIG_BUSYBOX_DEFAULT_GUNZIP=y
CONFIG_BUSYBOX_DEFAULT_ZCAT=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_GUNZIP_LONG_OPTIONS is not set
CONFIG_BUSYBOX_DEFAULT_BUNZIP2=y
CONFIG_BUSYBOX_DEFAULT_BZCAT=y
# CONFIG_BUSYBOX_DEFAULT_UNLZMA is not set
# CONFIG_BUSYBOX_DEFAULT_LZCAT is not set
# CONFIG_BUSYBOX_DEFAULT_LZMA is not set
# CONFIG_BUSYBOX_DEFAULT_UNXZ is not set
# CONFIG_BUSYBOX_DEFAULT_XZCAT is not set
# CONFIG_BUSYBOX_DEFAULT_XZ is not set
# CONFIG_BUSYBOX_DEFAULT_BZIP2 is not set
CONFIG_BUSYBOX_DEFAULT_BZIP2_SMALL=0
CONFIG_BUSYBOX_DEFAULT_FEATURE_BZIP2_DECOMPRESS=y
# CONFIG_BUSYBOX_DEFAULT_CPIO is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CPIO_O is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CPIO_P is not set
# CONFIG_BUSYBOX_DEFAULT_DPKG is not set
# CONFIG_BUSYBOX_DEFAULT_DPKG_DEB is not set
CONFIG_BUSYBOX_DEFAULT_GZIP=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_GZIP_LONG_OPTIONS is not set
CONFIG_BUSYBOX_DEFAULT_GZIP_FAST=0
# CONFIG_BUSYBOX_DEFAULT_FEATURE_GZIP_LEVELS is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_GZIP_DECOMPRESS=y
# CONFIG_BUSYBOX_DEFAULT_LZOP is not set
# CONFIG_BUSYBOX_DEFAULT_UNLZOP is not set
# CONFIG_BUSYBOX_DEFAULT_LZOPCAT is not set
# CONFIG_BUSYBOX_DEFAULT_LZOP_COMPR_HIGH is not set
# CONFIG_BUSYBOX_DEFAULT_RPM is not set
# CONFIG_BUSYBOX_DEFAULT_RPM2CPIO is not set
CONFIG_BUSYBOX_DEFAULT_TAR=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_LONG_OPTIONS is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_CREATE=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_AUTODETECT is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_FROM=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_OLDGNU_COMPATIBILITY is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_OLDSUN_COMPATIBILITY is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_GNU_EXTENSIONS=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_TO_COMMAND is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_UNAME_GNAME is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_NOPRESERVE_TIME is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TAR_SELINUX is not set
# CONFIG_BUSYBOX_DEFAULT_UNZIP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UNZIP_CDF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UNZIP_BZIP2 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UNZIP_LZMA is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UNZIP_XZ is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LZMA_FAST is not set
CONFIG_BUSYBOX_DEFAULT_BASENAME=y
CONFIG_BUSYBOX_DEFAULT_CAT=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CATN is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CATV is not set
CONFIG_BUSYBOX_DEFAULT_CHGRP=y
CONFIG_BUSYBOX_DEFAULT_CHMOD=y
CONFIG_BUSYBOX_DEFAULT_CHOWN=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHOWN_LONG_OPTIONS is not set
CONFIG_BUSYBOX_DEFAULT_CHROOT=y
# CONFIG_BUSYBOX_DEFAULT_CKSUM is not set
# CONFIG_BUSYBOX_DEFAULT_COMM is not set
CONFIG_BUSYBOX_DEFAULT_CP=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CP_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CP_REFLINK is not set
CONFIG_BUSYBOX_DEFAULT_CUT=y
CONFIG_BUSYBOX_DEFAULT_DATE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_DATE_ISOFMT=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DATE_NANO is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DATE_COMPAT is not set
CONFIG_BUSYBOX_DEFAULT_DD=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_DD_SIGNAL_HANDLING=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DD_THIRD_STATUS_LINE is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_DD_IBS_OBS=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DD_STATUS is not set
CONFIG_BUSYBOX_DEFAULT_DF=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DF_FANCY is not set
CONFIG_BUSYBOX_DEFAULT_DIRNAME=y
# CONFIG_BUSYBOX_DEFAULT_DOS2UNIX is not set
# CONFIG_BUSYBOX_DEFAULT_UNIX2DOS is not set
CONFIG_BUSYBOX_DEFAULT_DU=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_DU_DEFAULT_BLOCKSIZE_1K=y
CONFIG_BUSYBOX_DEFAULT_ECHO=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FANCY_ECHO=y
CONFIG_BUSYBOX_DEFAULT_ENV=y
# CONFIG_BUSYBOX_DEFAULT_EXPAND is not set
# CONFIG_BUSYBOX_DEFAULT_UNEXPAND is not set
CONFIG_BUSYBOX_DEFAULT_EXPR=y
CONFIG_BUSYBOX_DEFAULT_EXPR_MATH_SUPPORT_64=y
# CONFIG_BUSYBOX_DEFAULT_FACTOR is not set
CONFIG_BUSYBOX_DEFAULT_FALSE=y
# CONFIG_BUSYBOX_DEFAULT_FOLD is not set
CONFIG_BUSYBOX_DEFAULT_HEAD=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FANCY_HEAD=y
# CONFIG_BUSYBOX_DEFAULT_HOSTID is not set
CONFIG_BUSYBOX_DEFAULT_ID=y
# CONFIG_BUSYBOX_DEFAULT_GROUPS is not set
# CONFIG_BUSYBOX_DEFAULT_INSTALL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INSTALL_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_LINK is not set
CONFIG_BUSYBOX_DEFAULT_LN=y
# CONFIG_BUSYBOX_DEFAULT_LOGNAME is not set
CONFIG_BUSYBOX_DEFAULT_LS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LS_FILETYPES=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LS_FOLLOWLINKS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LS_RECURSIVE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LS_WIDTH=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LS_SORTFILES=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LS_TIMESTAMPS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LS_USERNAME=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LS_COLOR=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LS_COLOR_IS_DEFAULT=y
CONFIG_BUSYBOX_DEFAULT_MD5SUM=y
# CONFIG_BUSYBOX_DEFAULT_SHA1SUM is not set
CONFIG_BUSYBOX_DEFAULT_SHA256SUM=y
# CONFIG_BUSYBOX_DEFAULT_SHA512SUM is not set
# CONFIG_BUSYBOX_DEFAULT_SHA3SUM is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_MD5_SHA1_SUM_CHECK=y
CONFIG_BUSYBOX_DEFAULT_MKDIR=y
CONFIG_BUSYBOX_DEFAULT_MKFIFO=y
CONFIG_BUSYBOX_DEFAULT_MKNOD=y
CONFIG_BUSYBOX_DEFAULT_MKTEMP=y
CONFIG_BUSYBOX_DEFAULT_MV=y
CONFIG_BUSYBOX_DEFAULT_NICE=y
# CONFIG_BUSYBOX_DEFAULT_NL is not set
# CONFIG_BUSYBOX_DEFAULT_NOHUP is not set
# CONFIG_BUSYBOX_DEFAULT_NPROC is not set
# CONFIG_BUSYBOX_DEFAULT_OD is not set
# CONFIG_BUSYBOX_DEFAULT_PASTE is not set
# CONFIG_BUSYBOX_DEFAULT_PRINTENV is not set
CONFIG_BUSYBOX_DEFAULT_PRINTF=y
CONFIG_BUSYBOX_DEFAULT_PWD=y
CONFIG_BUSYBOX_DEFAULT_READLINK=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_READLINK_FOLLOW=y
# CONFIG_BUSYBOX_DEFAULT_REALPATH is not set
CONFIG_BUSYBOX_DEFAULT_RM=y
CONFIG_BUSYBOX_DEFAULT_RMDIR=y
CONFIG_BUSYBOX_DEFAULT_SEQ=y
# CONFIG_BUSYBOX_DEFAULT_SHRED is not set
# CONFIG_BUSYBOX_DEFAULT_SHUF is not set
CONFIG_BUSYBOX_DEFAULT_SLEEP=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FANCY_SLEEP=y
CONFIG_BUSYBOX_DEFAULT_SORT=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SORT_BIG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SORT_OPTIMIZE_MEMORY is not set
# CONFIG_BUSYBOX_DEFAULT_SPLIT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SPLIT_FANCY is not set
# CONFIG_BUSYBOX_DEFAULT_STAT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_STAT_FORMAT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_STAT_FILESYSTEM is not set
# CONFIG_BUSYBOX_DEFAULT_STTY is not set
# CONFIG_BUSYBOX_DEFAULT_SUM is not set
CONFIG_BUSYBOX_DEFAULT_SYNC=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SYNC_FANCY is not set
CONFIG_BUSYBOX_DEFAULT_FSYNC=y
# CONFIG_BUSYBOX_DEFAULT_TAC is not set
CONFIG_BUSYBOX_DEFAULT_TAIL=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FANCY_TAIL=y
CONFIG_BUSYBOX_DEFAULT_TEE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_TEE_USE_BLOCK_IO=y
CONFIG_BUSYBOX_DEFAULT_TEST=y
CONFIG_BUSYBOX_DEFAULT_TEST1=y
CONFIG_BUSYBOX_DEFAULT_TEST2=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_TEST_64=y
# CONFIG_BUSYBOX_DEFAULT_TIMEOUT is not set
CONFIG_BUSYBOX_DEFAULT_TOUCH=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TOUCH_NODEREF is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_TOUCH_SUSV3=y
CONFIG_BUSYBOX_DEFAULT_TR=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TR_CLASSES is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TR_EQUIV is not set
CONFIG_BUSYBOX_DEFAULT_TRUE=y
# CONFIG_BUSYBOX_DEFAULT_TRUNCATE is not set
# CONFIG_BUSYBOX_DEFAULT_TTY is not set
CONFIG_BUSYBOX_DEFAULT_UNAME=y
CONFIG_BUSYBOX_DEFAULT_UNAME_OSNAME="GNU/Linux"
# CONFIG_BUSYBOX_DEFAULT_BB_ARCH is not set
CONFIG_BUSYBOX_DEFAULT_UNIQ=y
# CONFIG_BUSYBOX_DEFAULT_UNLINK is not set
# CONFIG_BUSYBOX_DEFAULT_USLEEP is not set
# CONFIG_BUSYBOX_DEFAULT_UUDECODE is not set
# CONFIG_BUSYBOX_DEFAULT_BASE32 is not set
# CONFIG_BUSYBOX_DEFAULT_BASE64 is not set
# CONFIG_BUSYBOX_DEFAULT_UUENCODE is not set
CONFIG_BUSYBOX_DEFAULT_WC=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_WC_LARGE is not set
# CONFIG_BUSYBOX_DEFAULT_WHO is not set
# CONFIG_BUSYBOX_DEFAULT_W is not set
# CONFIG_BUSYBOX_DEFAULT_USERS is not set
# CONFIG_BUSYBOX_DEFAULT_WHOAMI is not set
CONFIG_BUSYBOX_DEFAULT_YES=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VERBOSE is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_PRESERVE_HARDLINKS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_HUMAN_READABLE=y
# CONFIG_BUSYBOX_DEFAULT_CHVT is not set
CONFIG_BUSYBOX_DEFAULT_CLEAR=y
# CONFIG_BUSYBOX_DEFAULT_DEALLOCVT is not set
# CONFIG_BUSYBOX_DEFAULT_DUMPKMAP is not set
# CONFIG_BUSYBOX_DEFAULT_FGCONSOLE is not set
# CONFIG_BUSYBOX_DEFAULT_KBD_MODE is not set
# CONFIG_BUSYBOX_DEFAULT_LOADFONT is not set
# CONFIG_BUSYBOX_DEFAULT_SETFONT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SETFONT_TEXTUAL_MAP is not set
CONFIG_BUSYBOX_DEFAULT_DEFAULT_SETFONT_DIR=""
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LOADFONT_PSF2 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LOADFONT_RAW is not set
# CONFIG_BUSYBOX_DEFAULT_LOADKMAP is not set
# CONFIG_BUSYBOX_DEFAULT_OPENVT is not set
CONFIG_BUSYBOX_DEFAULT_RESET=y
# CONFIG_BUSYBOX_DEFAULT_RESIZE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_RESIZE_PRINT is not set
# CONFIG_BUSYBOX_DEFAULT_SETCONSOLE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SETCONSOLE_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_SETKEYCODES is not set
# CONFIG_BUSYBOX_DEFAULT_SETLOGCONS is not set
# CONFIG_BUSYBOX_DEFAULT_SHOWKEY is not set
# CONFIG_BUSYBOX_DEFAULT_PIPE_PROGRESS is not set
# CONFIG_BUSYBOX_DEFAULT_RUN_PARTS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_RUN_PARTS_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_RUN_PARTS_FANCY is not set
CONFIG_BUSYBOX_DEFAULT_START_STOP_DAEMON=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_START_STOP_DAEMON_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_START_STOP_DAEMON_FANCY is not set
CONFIG_BUSYBOX_DEFAULT_WHICH=y
# CONFIG_BUSYBOX_DEFAULT_MINIPS is not set
# CONFIG_BUSYBOX_DEFAULT_NUKE is not set
# CONFIG_BUSYBOX_DEFAULT_RESUME is not set
# CONFIG_BUSYBOX_DEFAULT_RUN_INIT is not set
CONFIG_BUSYBOX_DEFAULT_AWK=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_AWK_LIBM=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_AWK_GNU_EXTENSIONS=y
CONFIG_BUSYBOX_DEFAULT_CMP=y
# CONFIG_BUSYBOX_DEFAULT_DIFF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DIFF_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DIFF_DIR is not set
# CONFIG_BUSYBOX_DEFAULT_ED is not set
# CONFIG_BUSYBOX_DEFAULT_PATCH is not set
CONFIG_BUSYBOX_DEFAULT_SED=y
CONFIG_BUSYBOX_DEFAULT_VI=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_MAX_LEN=1024
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_8BIT is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_COLON=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_YANKMARK=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_SEARCH=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_REGEX_SEARCH is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_USE_SIGNALS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_DOT_CMD=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_READONLY=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_SETOPTS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_SET=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_WIN_RESIZE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_ASK_TERMINAL=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_UNDO is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_UNDO_QUEUE is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_VI_UNDO_QUEUE_MAX=0
CONFIG_BUSYBOX_DEFAULT_FEATURE_ALLOW_EXEC=y
CONFIG_BUSYBOX_DEFAULT_FIND=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_PRINT0=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_MTIME=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_MMIN=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_PERM=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_TYPE=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_EXECUTABLE is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_XDEV=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_MAXDEPTH=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_NEWER=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_INUM is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_EXEC=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_EXEC_PLUS is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_USER=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_GROUP=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_NOT=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_DEPTH=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_PAREN=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_SIZE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_PRUNE=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_QUIT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_DELETE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_EMPTY is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_PATH=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_REGEX=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_CONTEXT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FIND_LINKS is not set
CONFIG_BUSYBOX_DEFAULT_GREP=y
CONFIG_BUSYBOX_DEFAULT_EGREP=y
CONFIG_BUSYBOX_DEFAULT_FGREP=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_GREP_CONTEXT=y
CONFIG_BUSYBOX_DEFAULT_XARGS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_XARGS_SUPPORT_CONFIRMATION=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_XARGS_SUPPORT_QUOTES=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_XARGS_SUPPORT_TERMOPT=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_XARGS_SUPPORT_ZERO_TERM=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_XARGS_SUPPORT_REPL_STR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_XARGS_SUPPORT_PARALLEL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_XARGS_SUPPORT_ARGS_FILE is not set
# CONFIG_BUSYBOX_DEFAULT_BOOTCHARTD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_BOOTCHARTD_BLOATED_HEADER is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_BOOTCHARTD_CONFIG_FILE is not set
CONFIG_BUSYBOX_DEFAULT_HALT=y
CONFIG_BUSYBOX_DEFAULT_POWEROFF=y
CONFIG_BUSYBOX_DEFAULT_REBOOT=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_WAIT_FOR_INIT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CALL_TELINIT is not set
CONFIG_BUSYBOX_DEFAULT_TELINIT_PATH=""
# CONFIG_BUSYBOX_DEFAULT_INIT is not set
# CONFIG_BUSYBOX_DEFAULT_LINUXRC is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_USE_INITTAB is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_KILL_REMOVED is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_KILL_DELAY=0
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INIT_SCTTY is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INIT_SYSLOG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INIT_QUIET is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INIT_COREDUMPS is not set
CONFIG_BUSYBOX_DEFAULT_INIT_TERMINAL_TYPE=""
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INIT_MODIFY_CMDLINE is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_SHADOWPASSWDS=y
# CONFIG_BUSYBOX_DEFAULT_USE_BB_PWD_GRP is not set
# CONFIG_BUSYBOX_DEFAULT_USE_BB_SHADOW is not set
# CONFIG_BUSYBOX_DEFAULT_USE_BB_CRYPT is not set
# CONFIG_BUSYBOX_DEFAULT_USE_BB_CRYPT_SHA is not set
# CONFIG_BUSYBOX_DEFAULT_ADD_SHELL is not set
# CONFIG_BUSYBOX_DEFAULT_REMOVE_SHELL is not set
# CONFIG_BUSYBOX_DEFAULT_ADDGROUP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_ADDUSER_TO_GROUP is not set
# CONFIG_BUSYBOX_DEFAULT_ADDUSER is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHECK_NAMES is not set
CONFIG_BUSYBOX_DEFAULT_LAST_ID=0
CONFIG_BUSYBOX_DEFAULT_FIRST_SYSTEM_ID=0
CONFIG_BUSYBOX_DEFAULT_LAST_SYSTEM_ID=0
# CONFIG_BUSYBOX_DEFAULT_CHPASSWD is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_DEFAULT_PASSWD_ALGO="md5"
# CONFIG_BUSYBOX_DEFAULT_CRYPTPW is not set
# CONFIG_BUSYBOX_DEFAULT_MKPASSWD is not set
# CONFIG_BUSYBOX_DEFAULT_DELUSER is not set
# CONFIG_BUSYBOX_DEFAULT_DELGROUP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DEL_USER_FROM_GROUP is not set
# CONFIG_BUSYBOX_DEFAULT_GETTY is not set
CONFIG_BUSYBOX_DEFAULT_LOGIN=y
CONFIG_BUSYBOX_DEFAULT_LOGIN_SESSION_AS_CHILD=y
# CONFIG_BUSYBOX_DEFAULT_LOGIN_SCRIPTS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_NOLOGIN is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SECURETTY is not set
CONFIG_BUSYBOX_DEFAULT_PASSWD=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_PASSWD_WEAK_CHECK=y
# CONFIG_BUSYBOX_DEFAULT_SU is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SU_SYSLOG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SU_CHECKS_SHELLS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SU_BLANK_PW_NEEDS_SECURE_TTY is not set
# CONFIG_BUSYBOX_DEFAULT_SULOGIN is not set
# CONFIG_BUSYBOX_DEFAULT_VLOCK is not set
# CONFIG_BUSYBOX_DEFAULT_CHATTR is not set
# CONFIG_BUSYBOX_DEFAULT_FSCK is not set
# CONFIG_BUSYBOX_DEFAULT_LSATTR is not set
# CONFIG_BUSYBOX_DEFAULT_TUNE2FS is not set
# CONFIG_BUSYBOX_DEFAULT_MODPROBE_SMALL is not set
# CONFIG_BUSYBOX_DEFAULT_DEPMOD is not set
# CONFIG_BUSYBOX_DEFAULT_INSMOD is not set
# CONFIG_BUSYBOX_DEFAULT_LSMOD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LSMOD_PRETTY_2_6_OUTPUT is not set
# CONFIG_BUSYBOX_DEFAULT_MODINFO is not set
# CONFIG_BUSYBOX_DEFAULT_MODPROBE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MODPROBE_BLACKLIST is not set
# CONFIG_BUSYBOX_DEFAULT_RMMOD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CMDLINE_MODULE_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_2_4_MODULES is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INSMOD_VERSION_CHECKING is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INSMOD_KSYMOOPS_SYMBOLS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INSMOD_LOADINKMEM is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INSMOD_LOAD_MAP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INSMOD_LOAD_MAP_FULL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHECK_TAINTED_MODULE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INSMOD_TRY_MMAP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MODUTILS_ALIAS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MODUTILS_SYMBOLS is not set
CONFIG_BUSYBOX_DEFAULT_DEFAULT_MODULES_DIR=""
CONFIG_BUSYBOX_DEFAULT_DEFAULT_DEPMOD_FILE=""
# CONFIG_BUSYBOX_DEFAULT_ACPID is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_ACPID_COMPAT is not set
# CONFIG_BUSYBOX_DEFAULT_BLKDISCARD is not set
# CONFIG_BUSYBOX_DEFAULT_BLKID is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_BLKID_TYPE is not set
# CONFIG_BUSYBOX_DEFAULT_BLOCKDEV is not set
# CONFIG_BUSYBOX_DEFAULT_CAL is not set
# CONFIG_BUSYBOX_DEFAULT_CHRT is not set
CONFIG_BUSYBOX_DEFAULT_DMESG=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_DMESG_PRETTY=y
# CONFIG_BUSYBOX_DEFAULT_EJECT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_EJECT_SCSI is not set
# CONFIG_BUSYBOX_DEFAULT_FALLOCATE is not set
# CONFIG_BUSYBOX_DEFAULT_FATATTR is not set
# CONFIG_BUSYBOX_DEFAULT_FBSET is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FBSET_FANCY is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FBSET_READMODE is not set
# CONFIG_BUSYBOX_DEFAULT_FDFORMAT is not set
# CONFIG_BUSYBOX_DEFAULT_FDISK is not set
# CONFIG_BUSYBOX_DEFAULT_FDISK_SUPPORT_LARGE_DISKS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FDISK_WRITABLE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_AIX_LABEL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SGI_LABEL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SUN_LABEL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_OSF_LABEL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_GPT_LABEL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FDISK_ADVANCED is not set
# CONFIG_BUSYBOX_DEFAULT_FINDFS is not set
CONFIG_BUSYBOX_DEFAULT_FLOCK=y
# CONFIG_BUSYBOX_DEFAULT_FDFLUSH is not set
# CONFIG_BUSYBOX_DEFAULT_FREERAMDISK is not set
# CONFIG_BUSYBOX_DEFAULT_FSCK_MINIX is not set
# CONFIG_BUSYBOX_DEFAULT_FSFREEZE is not set
# CONFIG_BUSYBOX_DEFAULT_FSTRIM is not set
# CONFIG_BUSYBOX_DEFAULT_GETOPT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_GETOPT_LONG is not set
CONFIG_BUSYBOX_DEFAULT_HEXDUMP=y
# CONFIG_BUSYBOX_DEFAULT_HD is not set
# CONFIG_BUSYBOX_DEFAULT_XXD is not set
CONFIG_BUSYBOX_DEFAULT_HWCLOCK=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HWCLOCK_ADJTIME_FHS is not set
# CONFIG_BUSYBOX_DEFAULT_IONICE is not set
# CONFIG_BUSYBOX_DEFAULT_IPCRM is not set
# CONFIG_BUSYBOX_DEFAULT_IPCS is not set
# CONFIG_BUSYBOX_DEFAULT_LAST is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LAST_FANCY is not set
# CONFIG_BUSYBOX_DEFAULT_LOSETUP is not set
# CONFIG_BUSYBOX_DEFAULT_LSPCI is not set
# CONFIG_BUSYBOX_DEFAULT_LSUSB is not set
# CONFIG_BUSYBOX_DEFAULT_MDEV is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MDEV_CONF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MDEV_RENAME is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MDEV_RENAME_REGEXP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MDEV_EXEC is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MDEV_LOAD_FIRMWARE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MDEV_DAEMON is not set
# CONFIG_BUSYBOX_DEFAULT_MESG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MESG_ENABLE_ONLY_GROUP is not set
# CONFIG_BUSYBOX_DEFAULT_MKE2FS is not set
# CONFIG_BUSYBOX_DEFAULT_MKFS_EXT2 is not set
# CONFIG_BUSYBOX_DEFAULT_MKFS_MINIX is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MINIX2 is not set
# CONFIG_BUSYBOX_DEFAULT_MKFS_REISER is not set
# CONFIG_BUSYBOX_DEFAULT_MKDOSFS is not set
# CONFIG_BUSYBOX_DEFAULT_MKFS_VFAT is not set
CONFIG_BUSYBOX_DEFAULT_MKSWAP=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MKSWAP_UUID is not set
# CONFIG_BUSYBOX_DEFAULT_MORE is not set
CONFIG_BUSYBOX_DEFAULT_MOUNT=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_FAKE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_VERBOSE is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_HELPERS=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_LABEL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_NFS is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_CIFS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_FLAGS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_FSTAB=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_OTHERTAB is not set
# CONFIG_BUSYBOX_DEFAULT_MOUNTPOINT is not set
# CONFIG_BUSYBOX_DEFAULT_NOLOGIN is not set
# CONFIG_BUSYBOX_DEFAULT_NOLOGIN_DEPENDENCIES is not set
# CONFIG_BUSYBOX_DEFAULT_NSENTER is not set
CONFIG_BUSYBOX_DEFAULT_PIVOT_ROOT=y
# CONFIG_BUSYBOX_DEFAULT_RDATE is not set
# CONFIG_BUSYBOX_DEFAULT_RDEV is not set
# CONFIG_BUSYBOX_DEFAULT_READPROFILE is not set
# CONFIG_BUSYBOX_DEFAULT_RENICE is not set
# CONFIG_BUSYBOX_DEFAULT_REV is not set
# CONFIG_BUSYBOX_DEFAULT_RTCWAKE is not set
# CONFIG_BUSYBOX_DEFAULT_SCRIPT is not set
# CONFIG_BUSYBOX_DEFAULT_SCRIPTREPLAY is not set
# CONFIG_BUSYBOX_DEFAULT_SETARCH is not set
# CONFIG_BUSYBOX_DEFAULT_LINUX32 is not set
# CONFIG_BUSYBOX_DEFAULT_LINUX64 is not set
# CONFIG_BUSYBOX_DEFAULT_SETPRIV is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SETPRIV_DUMP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SETPRIV_CAPABILITIES is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SETPRIV_CAPABILITY_NAMES is not set
# CONFIG_BUSYBOX_DEFAULT_SETSID is not set
CONFIG_BUSYBOX_DEFAULT_SWAPON=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_SWAPON_DISCARD=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_SWAPON_PRI=y
CONFIG_BUSYBOX_DEFAULT_SWAPOFF=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SWAPONOFF_LABEL is not set
CONFIG_BUSYBOX_DEFAULT_SWITCH_ROOT=y
# CONFIG_BUSYBOX_DEFAULT_TASKSET is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TASKSET_FANCY is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TASKSET_CPULIST is not set
# CONFIG_BUSYBOX_DEFAULT_UEVENT is not set
CONFIG_BUSYBOX_DEFAULT_UMOUNT=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_UMOUNT_ALL=y
# CONFIG_BUSYBOX_DEFAULT_UNSHARE is not set
# CONFIG_BUSYBOX_DEFAULT_WALL is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_LOOP=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MOUNT_LOOP_CREATE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MTAB_SUPPORT is not set
# CONFIG_BUSYBOX_DEFAULT_VOLUMEID is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_BCACHE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_BTRFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_CRAMFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_EROFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_EXFAT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_EXT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_F2FS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_FAT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_HFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_ISO9660 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_JFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_LFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_LINUXRAID is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_LINUXSWAP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_LUKS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_MINIX is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_NILFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_NTFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_OCFS2 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_REISERFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_ROMFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_SQUASHFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_SYSV is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_UBIFS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_UDF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_VOLUMEID_XFS is not set
# CONFIG_BUSYBOX_DEFAULT_ADJTIMEX is not set
# CONFIG_BUSYBOX_DEFAULT_BBCONFIG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_COMPRESS_BBCONFIG is not set
# CONFIG_BUSYBOX_DEFAULT_BC is not set
# CONFIG_BUSYBOX_DEFAULT_DC is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DC_BIG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DC_LIBM is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_BC_INTERACTIVE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_BC_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_BEEP is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_BEEP_FREQ=0
CONFIG_BUSYBOX_DEFAULT_FEATURE_BEEP_LENGTH_MS=0
# CONFIG_BUSYBOX_DEFAULT_CHAT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHAT_NOFAIL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHAT_TTY_HIFI is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHAT_IMPLICIT_CR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHAT_SWALLOW_OPTS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHAT_SEND_ESCAPES is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHAT_VAR_ABORT_LEN is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CHAT_CLR_ABORT is not set
# CONFIG_BUSYBOX_DEFAULT_CONSPY is not set
CONFIG_BUSYBOX_DEFAULT_CROND=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CROND_D is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CROND_CALL_SENDMAIL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_CROND_SPECIAL_TIMES is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_CROND_DIR="/etc"
CONFIG_BUSYBOX_DEFAULT_CRONTAB=y
# CONFIG_BUSYBOX_DEFAULT_DEVFSD is not set
# CONFIG_BUSYBOX_DEFAULT_DEVFSD_MODLOAD is not set
# CONFIG_BUSYBOX_DEFAULT_DEVFSD_FG_NP is not set
# CONFIG_BUSYBOX_DEFAULT_DEVFSD_VERBOSE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_DEVFS is not set
# CONFIG_BUSYBOX_DEFAULT_DEVMEM is not set
# CONFIG_BUSYBOX_DEFAULT_FBSPLASH is not set
# CONFIG_BUSYBOX_DEFAULT_FLASH_ERASEALL is not set
# CONFIG_BUSYBOX_DEFAULT_FLASH_LOCK is not set
# CONFIG_BUSYBOX_DEFAULT_FLASH_UNLOCK is not set
# CONFIG_BUSYBOX_DEFAULT_FLASHCP is not set
# CONFIG_BUSYBOX_DEFAULT_HDPARM is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HDPARM_GET_IDENTITY is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HDPARM_HDIO_SCAN_HWIF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HDPARM_HDIO_DRIVE_RESET is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HDPARM_HDIO_TRISTATE_HWIF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HDPARM_HDIO_GETSET_DMA is not set
# CONFIG_BUSYBOX_DEFAULT_HEXEDIT is not set
# CONFIG_BUSYBOX_DEFAULT_I2CGET is not set
# CONFIG_BUSYBOX_DEFAULT_I2CSET is not set
# CONFIG_BUSYBOX_DEFAULT_I2CDUMP is not set
# CONFIG_BUSYBOX_DEFAULT_I2CDETECT is not set
# CONFIG_BUSYBOX_DEFAULT_I2CTRANSFER is not set
# CONFIG_BUSYBOX_DEFAULT_INOTIFYD is not set
CONFIG_BUSYBOX_DEFAULT_LESS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_MAXLINES=9999999
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_BRACKETS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_FLAGS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_TRUNCATE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_MARKS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_REGEXP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_WINCH is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_ASK_TERMINAL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_DASHCMD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_LINENUMS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_RAW is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LESS_ENV is not set
CONFIG_BUSYBOX_DEFAULT_LOCK=y
# CONFIG_BUSYBOX_DEFAULT_LSSCSI is not set
# CONFIG_BUSYBOX_DEFAULT_MAKEDEVS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MAKEDEVS_LEAF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_MAKEDEVS_TABLE is not set
# CONFIG_BUSYBOX_DEFAULT_MAN is not set
# CONFIG_BUSYBOX_DEFAULT_MICROCOM is not set
# CONFIG_BUSYBOX_DEFAULT_MIM is not set
# CONFIG_BUSYBOX_DEFAULT_MT is not set
# CONFIG_BUSYBOX_DEFAULT_NANDWRITE is not set
# CONFIG_BUSYBOX_DEFAULT_NANDDUMP is not set
# CONFIG_BUSYBOX_DEFAULT_PARTPROBE is not set
# CONFIG_BUSYBOX_DEFAULT_RAIDAUTORUN is not set
# CONFIG_BUSYBOX_DEFAULT_READAHEAD is not set
# CONFIG_BUSYBOX_DEFAULT_RFKILL is not set
# CONFIG_BUSYBOX_DEFAULT_RUNLEVEL is not set
# CONFIG_BUSYBOX_DEFAULT_RX is not set
# CONFIG_BUSYBOX_DEFAULT_SETFATTR is not set
# CONFIG_BUSYBOX_DEFAULT_SETSERIAL is not set
CONFIG_BUSYBOX_DEFAULT_STRINGS=y
CONFIG_BUSYBOX_DEFAULT_TIME=y
# CONFIG_BUSYBOX_DEFAULT_TS is not set
# CONFIG_BUSYBOX_DEFAULT_TTYSIZE is not set
# CONFIG_BUSYBOX_DEFAULT_UBIATTACH is not set
# CONFIG_BUSYBOX_DEFAULT_UBIDETACH is not set
# CONFIG_BUSYBOX_DEFAULT_UBIMKVOL is not set
# CONFIG_BUSYBOX_DEFAULT_UBIRMVOL is not set
# CONFIG_BUSYBOX_DEFAULT_UBIRSVOL is not set
# CONFIG_BUSYBOX_DEFAULT_UBIUPDATEVOL is not set
# CONFIG_BUSYBOX_DEFAULT_UBIRENAME is not set
# CONFIG_BUSYBOX_DEFAULT_VOLNAME is not set
# CONFIG_BUSYBOX_DEFAULT_WATCHDOG is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_IPV6=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UNIX_LOCAL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_PREFER_IPV4_ADDRESS is not set
CONFIG_BUSYBOX_DEFAULT_VERBOSE_RESOLUTION_ERRORS=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TLS_SHA1 is not set
# CONFIG_BUSYBOX_DEFAULT_ARP is not set
# CONFIG_BUSYBOX_DEFAULT_ARPING is not set
CONFIG_BUSYBOX_DEFAULT_BRCTL=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_BRCTL_FANCY=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_BRCTL_SHOW=y
# CONFIG_BUSYBOX_DEFAULT_DNSD is not set
# CONFIG_BUSYBOX_DEFAULT_ETHER_WAKE is not set
# CONFIG_BUSYBOX_DEFAULT_FTPD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FTPD_WRITE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FTPD_ACCEPT_BROKEN_LIST is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FTPD_AUTHENTICATION is not set
# CONFIG_BUSYBOX_DEFAULT_FTPGET is not set
# CONFIG_BUSYBOX_DEFAULT_FTPPUT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_FTPGETPUT_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_HOSTNAME is not set
# CONFIG_BUSYBOX_DEFAULT_DNSDOMAINNAME is not set
# CONFIG_BUSYBOX_DEFAULT_HTTPD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_RANGES is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_SETUID is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_BASIC_AUTH is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_AUTH_MD5 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_CGI is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_ENCODE_URL_STR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_ERROR_PAGES is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_PROXY is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_GZIP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_ETAG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_LAST_MODIFIED is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_DATE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_HTTPD_ACL_IP is not set
CONFIG_BUSYBOX_DEFAULT_IFCONFIG=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_IFCONFIG_STATUS=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IFCONFIG_SLIP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_IFCONFIG_HW=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_IFCONFIG_BROADCAST_PLUS=y
# CONFIG_BUSYBOX_DEFAULT_IFENSLAVE is not set
# CONFIG_BUSYBOX_DEFAULT_IFPLUGD is not set
# CONFIG_BUSYBOX_DEFAULT_IFUP is not set
# CONFIG_BUSYBOX_DEFAULT_IFDOWN is not set
CONFIG_BUSYBOX_DEFAULT_IFUPDOWN_IFSTATE_PATH=""
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IFUPDOWN_IP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IFUPDOWN_IPV4 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IFUPDOWN_IPV6 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IFUPDOWN_MAPPING is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IFUPDOWN_EXTERNAL_DHCP is not set
# CONFIG_BUSYBOX_DEFAULT_INETD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INETD_SUPPORT_BUILTIN_ECHO is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INETD_SUPPORT_BUILTIN_TIME is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_INETD_RPC is not set
CONFIG_BUSYBOX_DEFAULT_IP=y
# CONFIG_BUSYBOX_DEFAULT_IPADDR is not set
# CONFIG_BUSYBOX_DEFAULT_IPLINK is not set
# CONFIG_BUSYBOX_DEFAULT_IPROUTE is not set
# CONFIG_BUSYBOX_DEFAULT_IPTUNNEL is not set
# CONFIG_BUSYBOX_DEFAULT_IPRULE is not set
# CONFIG_BUSYBOX_DEFAULT_IPNEIGH is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_IP_ADDRESS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_IP_LINK=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_IP_ROUTE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_IP_ROUTE_DIR="/etc/iproute2"
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IP_TUNNEL is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_IP_RULE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_IP_NEIGH=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IP_RARE_PROTOCOLS is not set
# CONFIG_BUSYBOX_DEFAULT_IPCALC is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IPCALC_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IPCALC_FANCY is not set
# CONFIG_BUSYBOX_DEFAULT_FAKEIDENTD is not set
# CONFIG_BUSYBOX_DEFAULT_NAMEIF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_NAMEIF_EXTENDED is not set
# CONFIG_BUSYBOX_DEFAULT_NBDCLIENT is not set
CONFIG_BUSYBOX_DEFAULT_NC=y
# CONFIG_BUSYBOX_DEFAULT_NETCAT is not set
# CONFIG_BUSYBOX_DEFAULT_NC_SERVER is not set
# CONFIG_BUSYBOX_DEFAULT_NC_EXTRA is not set
# CONFIG_BUSYBOX_DEFAULT_NC_110_COMPAT is not set
CONFIG_BUSYBOX_DEFAULT_NETMSG=y
CONFIG_BUSYBOX_DEFAULT_NETSTAT=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_NETSTAT_WIDE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_NETSTAT_PRG=y
# CONFIG_BUSYBOX_DEFAULT_NSLOOKUP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_NSLOOKUP_BIG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_NSLOOKUP_LONG_OPTIONS is not set
CONFIG_BUSYBOX_DEFAULT_NSLOOKUP_OPENWRT=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_NSLOOKUP_OPENWRT_LONG_OPTIONS is not set
CONFIG_BUSYBOX_DEFAULT_NTPD=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_NTPD_SERVER=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_NTPD_CONF is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_NTP_AUTH is not set
CONFIG_BUSYBOX_DEFAULT_PING=y
CONFIG_BUSYBOX_DEFAULT_PING6=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_FANCY_PING=y
# CONFIG_BUSYBOX_DEFAULT_PSCAN is not set
CONFIG_BUSYBOX_DEFAULT_ROUTE=y
# CONFIG_BUSYBOX_DEFAULT_SLATTACH is not set
# CONFIG_BUSYBOX_DEFAULT_SSL_CLIENT is not set
# CONFIG_BUSYBOX_DEFAULT_TC is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TC_INGRESS is not set
# CONFIG_BUSYBOX_DEFAULT_TCPSVD is not set
# CONFIG_BUSYBOX_DEFAULT_UDPSVD is not set
# CONFIG_BUSYBOX_DEFAULT_TELNET is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TELNET_TTYPE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TELNET_AUTOLOGIN is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TELNET_WIDTH is not set
# CONFIG_BUSYBOX_DEFAULT_TELNETD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TELNETD_STANDALONE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TELNETD_INETD_WAIT is not set
# CONFIG_BUSYBOX_DEFAULT_TFTP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TFTP_PROGRESS_BAR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TFTP_HPA_COMPAT is not set
# CONFIG_BUSYBOX_DEFAULT_TFTPD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TFTP_GET is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TFTP_PUT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TFTP_BLOCKSIZE is not set
# CONFIG_BUSYBOX_DEFAULT_TFTP_DEBUG is not set
# CONFIG_BUSYBOX_DEFAULT_TLS is not set
CONFIG_BUSYBOX_DEFAULT_TRACEROUTE=y
CONFIG_BUSYBOX_DEFAULT_TRACEROUTE6=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_TRACEROUTE_VERBOSE=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TRACEROUTE_USE_ICMP is not set
# CONFIG_BUSYBOX_DEFAULT_TUNCTL is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TUNCTL_UG is not set
# CONFIG_BUSYBOX_DEFAULT_VCONFIG is not set
# CONFIG_BUSYBOX_DEFAULT_WGET is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_WGET_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_WGET_STATUSBAR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_WGET_AUTHENTICATION is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_WGET_TIMEOUT is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_WGET_HTTPS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_WGET_OPENSSL is not set
# CONFIG_BUSYBOX_DEFAULT_WHOIS is not set
# CONFIG_BUSYBOX_DEFAULT_ZCIP is not set
# CONFIG_BUSYBOX_DEFAULT_UDHCPD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCPD_BASE_IP_ON_MAC is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCPD_WRITE_LEASES_EARLY is not set
CONFIG_BUSYBOX_DEFAULT_DHCPD_LEASES_FILE=""
# CONFIG_BUSYBOX_DEFAULT_DUMPLEASES is not set
# CONFIG_BUSYBOX_DEFAULT_DHCPRELAY is not set
CONFIG_BUSYBOX_DEFAULT_UDHCPC=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCPC_ARPING is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCPC_SANITIZEOPT is not set
CONFIG_BUSYBOX_DEFAULT_UDHCPC_DEFAULT_SCRIPT="/usr/share/udhcpc/default.script"
# CONFIG_BUSYBOX_DEFAULT_UDHCPC6 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCPC6_RFC3646 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCPC6_RFC4704 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCPC6_RFC4833 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCPC6_RFC5970 is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCP_PORT is not set
CONFIG_BUSYBOX_DEFAULT_UDHCP_DEBUG=0
CONFIG_BUSYBOX_DEFAULT_UDHCPC_SLACK_FOR_BUGGY_SERVERS=80
CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCP_RFC3397=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UDHCP_8021Q is not set
CONFIG_BUSYBOX_DEFAULT_IFUPDOWN_UDHCPC_CMD_OPTIONS=""
# CONFIG_BUSYBOX_DEFAULT_LPD is not set
# CONFIG_BUSYBOX_DEFAULT_LPR is not set
# CONFIG_BUSYBOX_DEFAULT_LPQ is not set
# CONFIG_BUSYBOX_DEFAULT_MAKEMIME is not set
# CONFIG_BUSYBOX_DEFAULT_POPMAILDIR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_POPMAILDIR_DELIVERY is not set
# CONFIG_BUSYBOX_DEFAULT_REFORMIME is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_REFORMIME_COMPAT is not set
# CONFIG_BUSYBOX_DEFAULT_SENDMAIL is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_MIME_CHARSET=""
CONFIG_BUSYBOX_DEFAULT_FREE=y
# CONFIG_BUSYBOX_DEFAULT_FUSER is not set
# CONFIG_BUSYBOX_DEFAULT_IOSTAT is not set
CONFIG_BUSYBOX_DEFAULT_KILL=y
CONFIG_BUSYBOX_DEFAULT_KILLALL=y
# CONFIG_BUSYBOX_DEFAULT_KILLALL5 is not set
# CONFIG_BUSYBOX_DEFAULT_LSOF is not set
# CONFIG_BUSYBOX_DEFAULT_MPSTAT is not set
# CONFIG_BUSYBOX_DEFAULT_NMETER is not set
CONFIG_BUSYBOX_DEFAULT_PGREP=y
# CONFIG_BUSYBOX_DEFAULT_PKILL is not set
CONFIG_BUSYBOX_DEFAULT_PIDOF=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_PIDOF_SINGLE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_PIDOF_OMIT is not set
# CONFIG_BUSYBOX_DEFAULT_PMAP is not set
# CONFIG_BUSYBOX_DEFAULT_POWERTOP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_POWERTOP_INTERACTIVE is not set
CONFIG_BUSYBOX_DEFAULT_PS=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_PS_WIDE=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_PS_LONG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_PS_TIME is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_PS_UNUSUAL_SYSTEMS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_PS_ADDITIONAL_COLUMNS is not set
# CONFIG_BUSYBOX_DEFAULT_PSTREE is not set
# CONFIG_BUSYBOX_DEFAULT_PWDX is not set
# CONFIG_BUSYBOX_DEFAULT_SMEMCAP is not set
CONFIG_BUSYBOX_DEFAULT_BB_SYSCTL=y
CONFIG_BUSYBOX_DEFAULT_TOP=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TOP_INTERACTIVE is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_TOP_CPU_USAGE_PERCENTAGE=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_TOP_CPU_GLOBAL_PERCENTS=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TOP_SMP_CPU is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TOP_DECIMALS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TOP_SMP_PROCESS is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_TOPMEM is not set
CONFIG_BUSYBOX_DEFAULT_UPTIME=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_UPTIME_UTMP_SUPPORT is not set
# CONFIG_BUSYBOX_DEFAULT_WATCH is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SHOW_THREADS is not set
# CONFIG_BUSYBOX_DEFAULT_CHPST is not set
# CONFIG_BUSYBOX_DEFAULT_SETUIDGID is not set
# CONFIG_BUSYBOX_DEFAULT_ENVUIDGID is not set
# CONFIG_BUSYBOX_DEFAULT_ENVDIR is not set
# CONFIG_BUSYBOX_DEFAULT_SOFTLIMIT is not set
# CONFIG_BUSYBOX_DEFAULT_RUNSV is not set
# CONFIG_BUSYBOX_DEFAULT_RUNSVDIR is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_RUNSVDIR_LOG is not set
# CONFIG_BUSYBOX_DEFAULT_SV is not set
CONFIG_BUSYBOX_DEFAULT_SV_DEFAULT_SERVICE_DIR=""
# CONFIG_BUSYBOX_DEFAULT_SVC is not set
# CONFIG_BUSYBOX_DEFAULT_SVOK is not set
# CONFIG_BUSYBOX_DEFAULT_SVLOGD is not set
# CONFIG_BUSYBOX_DEFAULT_CHCON is not set
# CONFIG_BUSYBOX_DEFAULT_GETENFORCE is not set
# CONFIG_BUSYBOX_DEFAULT_GETSEBOOL is not set
# CONFIG_BUSYBOX_DEFAULT_LOAD_POLICY is not set
# CONFIG_BUSYBOX_DEFAULT_MATCHPATHCON is not set
# CONFIG_BUSYBOX_DEFAULT_RUNCON is not set
# CONFIG_BUSYBOX_DEFAULT_SELINUXENABLED is not set
# CONFIG_BUSYBOX_DEFAULT_SESTATUS is not set
# CONFIG_BUSYBOX_DEFAULT_SETENFORCE is not set
# CONFIG_BUSYBOX_DEFAULT_SETFILES is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SETFILES_CHECK_OPTION is not set
# CONFIG_BUSYBOX_DEFAULT_RESTORECON is not set
# CONFIG_BUSYBOX_DEFAULT_SETSEBOOL is not set
CONFIG_BUSYBOX_DEFAULT_SH_IS_ASH=y
# CONFIG_BUSYBOX_DEFAULT_SH_IS_HUSH is not set
# CONFIG_BUSYBOX_DEFAULT_SH_IS_NONE is not set
# CONFIG_BUSYBOX_DEFAULT_BASH_IS_ASH is not set
# CONFIG_BUSYBOX_DEFAULT_BASH_IS_HUSH is not set
CONFIG_BUSYBOX_DEFAULT_BASH_IS_NONE=y
CONFIG_BUSYBOX_DEFAULT_SHELL_ASH=y
CONFIG_BUSYBOX_DEFAULT_ASH=y
# CONFIG_BUSYBOX_DEFAULT_ASH_OPTIMIZE_FOR_SIZE is not set
CONFIG_BUSYBOX_DEFAULT_ASH_INTERNAL_GLOB=y
CONFIG_BUSYBOX_DEFAULT_ASH_BASH_COMPAT=y
# CONFIG_BUSYBOX_DEFAULT_ASH_BASH_SOURCE_CURDIR is not set
# CONFIG_BUSYBOX_DEFAULT_ASH_BASH_NOT_FOUND_HOOK is not set
CONFIG_BUSYBOX_DEFAULT_ASH_JOB_CONTROL=y
CONFIG_BUSYBOX_DEFAULT_ASH_ALIAS=y
# CONFIG_BUSYBOX_DEFAULT_ASH_RANDOM_SUPPORT is not set
CONFIG_BUSYBOX_DEFAULT_ASH_EXPAND_PRMT=y
# CONFIG_BUSYBOX_DEFAULT_ASH_IDLE_TIMEOUT is not set
# CONFIG_BUSYBOX_DEFAULT_ASH_MAIL is not set
CONFIG_BUSYBOX_DEFAULT_ASH_ECHO=y
CONFIG_BUSYBOX_DEFAULT_ASH_PRINTF=y
CONFIG_BUSYBOX_DEFAULT_ASH_TEST=y
# CONFIG_BUSYBOX_DEFAULT_ASH_HELP is not set
CONFIG_BUSYBOX_DEFAULT_ASH_GETOPTS=y
CONFIG_BUSYBOX_DEFAULT_ASH_CMDCMD=y
# CONFIG_BUSYBOX_DEFAULT_CTTYHACK is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH is not set
# CONFIG_BUSYBOX_DEFAULT_SHELL_HUSH is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_BASH_COMPAT is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_BRACE_EXPANSION is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_LINENO_VAR is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_BASH_SOURCE_CURDIR is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_INTERACTIVE is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_SAVEHISTORY is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_JOB is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_TICK is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_IF is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_LOOPS is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_CASE is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_FUNCTIONS is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_LOCAL is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_RANDOM_SUPPORT is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_MODE_X is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_ECHO is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_PRINTF is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_TEST is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_HELP is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_EXPORT is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_EXPORT_N is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_READONLY is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_KILL is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_WAIT is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_COMMAND is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_TRAP is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_TYPE is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_TIMES is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_READ is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_SET is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_UNSET is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_ULIMIT is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_UMASK is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_GETOPTS is not set
# CONFIG_BUSYBOX_DEFAULT_HUSH_MEMLEAK is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_SH_MATH=y
CONFIG_BUSYBOX_DEFAULT_FEATURE_SH_MATH_64=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SH_MATH_BASE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SH_EXTRA_QUIET is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SH_STANDALONE is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_SH_NOFORK=y
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SH_READ_FRAC is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SH_HISTFILESIZE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SH_EMBEDDED_SCRIPTS is not set
# CONFIG_BUSYBOX_DEFAULT_KLOGD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_KLOGD_KLOGCTL is not set
CONFIG_BUSYBOX_DEFAULT_LOGGER=y
# CONFIG_BUSYBOX_DEFAULT_LOGREAD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_LOGREAD_REDUCED_LOCKING is not set
# CONFIG_BUSYBOX_DEFAULT_SYSLOGD is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_ROTATE_LOGFILE is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_REMOTE_LOG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SYSLOGD_DUP is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SYSLOGD_CFG is not set
# CONFIG_BUSYBOX_DEFAULT_FEATURE_SYSLOGD_PRECISE_TIMESTAMPS is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_SYSLOGD_READ_BUFFER_SIZE=0
# CONFIG_BUSYBOX_DEFAULT_FEATURE_IPC_SYSLOG is not set
CONFIG_BUSYBOX_DEFAULT_FEATURE_IPC_SYSLOG_BUFFER_SIZE=0
# CONFIG_BUSYBOX_DEFAULT_FEATURE_KMSG_SYSLOG is not set
CONFIG_BUSYBOX_CONFIG_HAVE_DOT_CONFIG=y

#
# Settings
#
# CONFIG_BUSYBOX_CONFIG_DESKTOP is not set
# CONFIG_BUSYBOX_CONFIG_EXTRA_COMPAT is not set
# CONFIG_BUSYBOX_CONFIG_FEDORA_COMPAT is not set
# CONFIG_BUSYBOX_CONFIG_INCLUDE_SUSv2 is not set
CONFIG_BUSYBOX_CONFIG_LONG_OPTS=y
# CONFIG_BUSYBOX_CONFIG_SHOW_USAGE is not set
CONFIG_BUSYBOX_CONFIG_LFS=y
# CONFIG_BUSYBOX_CONFIG_PAM is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_DEVPTS=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_UTMP is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_PIDFILE=y
CONFIG_BUSYBOX_CONFIG_PID_FILE_PATH="/var/run"
# CONFIG_BUSYBOX_CONFIG_BUSYBOX is not set
# CONFIG_BUSYBOX_CONFIG_INSTALL_NO_USR is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_SUID=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_SUID_CONFIG is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_PREFER_APPLETS=y
CONFIG_BUSYBOX_CONFIG_BUSYBOX_EXEC_PATH="/proc/self/exe"
# CONFIG_BUSYBOX_CONFIG_SELINUX is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_CLEAN_UP is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SYSLOG_INFO is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_SYSLOG=y

#
# Build Options
#
# CONFIG_BUSYBOX_CONFIG_STATIC is not set
# CONFIG_BUSYBOX_CONFIG_PIE is not set
# CONFIG_BUSYBOX_CONFIG_NOMMU is not set
CONFIG_BUSYBOX_CONFIG_CROSS_COMPILER_PREFIX=""
CONFIG_BUSYBOX_CONFIG_SYSROOT=""
CONFIG_BUSYBOX_CONFIG_EXTRA_CFLAGS=""
CONFIG_BUSYBOX_CONFIG_EXTRA_LDFLAGS=""
CONFIG_BUSYBOX_CONFIG_EXTRA_LDLIBS=""
# CONFIG_BUSYBOX_CONFIG_USE_PORTABLE_CODE is not set
# CONFIG_BUSYBOX_CONFIG_STACK_OPTIMIZATION_386 is not set
# CONFIG_BUSYBOX_CONFIG_STATIC_LIBGCC is not set

#
# Installation Options ("make install" behavior)
#
CONFIG_BUSYBOX_CONFIG_INSTALL_APPLET_SYMLINKS=y
# CONFIG_BUSYBOX_CONFIG_INSTALL_APPLET_HARDLINKS is not set
# CONFIG_BUSYBOX_CONFIG_INSTALL_APPLET_SCRIPT_WRAPPERS is not set
# CONFIG_BUSYBOX_CONFIG_INSTALL_APPLET_DONT is not set
CONFIG_BUSYBOX_CONFIG_PREFIX="./_install"

#
# Debugging Options
#
# CONFIG_BUSYBOX_CONFIG_DEBUG is not set
# CONFIG_BUSYBOX_CONFIG_DEBUG_SANITIZE is not set
# CONFIG_BUSYBOX_CONFIG_UNIT_TEST is not set
# CONFIG_BUSYBOX_CONFIG_WERROR is not set
# CONFIG_BUSYBOX_CONFIG_WARN_SIMPLE_MSG is not set
CONFIG_BUSYBOX_CONFIG_NO_DEBUG_LIB=y
# CONFIG_BUSYBOX_CONFIG_DMALLOC is not set
# CONFIG_BUSYBOX_CONFIG_EFENCE is not set

#
# Library Tuning
#
# CONFIG_BUSYBOX_CONFIG_FEATURE_USE_BSS_TAIL is not set
# CONFIG_BUSYBOX_CONFIG_FLOAT_DURATION is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_RTMINMAX is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_BUFFERS_USE_MALLOC is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_BUFFERS_GO_ON_STACK=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_BUFFERS_GO_IN_BSS is not set
CONFIG_BUSYBOX_CONFIG_PASSWORD_MINLEN=6
CONFIG_BUSYBOX_CONFIG_MD5_SMALL=1
CONFIG_BUSYBOX_CONFIG_SHA3_SMALL=1
CONFIG_BUSYBOX_CONFIG_FEATURE_FAST_TOP=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_ETC_NETWORKS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_ETC_SERVICES is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_EDITING=y
CONFIG_BUSYBOX_CONFIG_FEATURE_EDITING_MAX_LEN=512
# CONFIG_BUSYBOX_CONFIG_FEATURE_EDITING_VI is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_EDITING_HISTORY=256
# CONFIG_BUSYBOX_CONFIG_FEATURE_EDITING_SAVEHISTORY is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_REVERSE_SEARCH is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_TAB_COMPLETION=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_USERNAME_COMPLETION is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_EDITING_FANCY_PROMPT=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_EDITING_WINCH is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_EDITING_ASK_TERMINAL is not set
# CONFIG_BUSYBOX_CONFIG_LOCALE_SUPPORT is not set
# CONFIG_BUSYBOX_CONFIG_UNICODE_SUPPORT is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_NON_POSIX_CP=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_VERBOSE_CP_MESSAGE is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_USE_SENDFILE is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_COPYBUF_KB=4
# CONFIG_BUSYBOX_CONFIG_FEATURE_SKIP_ROOTFS is not set
# CONFIG_BUSYBOX_CONFIG_MONOTONIC_SYSCALL is not set
CONFIG_BUSYBOX_CONFIG_IOCTL_HEX2STR_ERROR=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_HWIB is not set
# end of Settings

#
# Applets
#

#
# Archival Utilities
#
# CONFIG_BUSYBOX_CONFIG_FEATURE_SEAMLESS_XZ is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SEAMLESS_LZMA is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SEAMLESS_BZ2 is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SEAMLESS_GZ is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SEAMLESS_Z is not set
# CONFIG_BUSYBOX_CONFIG_AR is not set
# CONFIG_BUSYBOX_CONFIG_UNCOMPRESS is not set
# CONFIG_BUSYBOX_CONFIG_GUNZIP is not set
# CONFIG_BUSYBOX_CONFIG_ZCAT is not set
# CONFIG_BUSYBOX_CONFIG_BUNZIP2 is not set
# CONFIG_BUSYBOX_CONFIG_BZCAT is not set
# CONFIG_BUSYBOX_CONFIG_UNLZMA is not set
# CONFIG_BUSYBOX_CONFIG_LZCAT is not set
# CONFIG_BUSYBOX_CONFIG_LZMA is not set
# CONFIG_BUSYBOX_CONFIG_UNXZ is not set
# CONFIG_BUSYBOX_CONFIG_XZCAT is not set
# CONFIG_BUSYBOX_CONFIG_XZ is not set
# CONFIG_BUSYBOX_CONFIG_BZIP2 is not set
# CONFIG_BUSYBOX_CONFIG_CPIO is not set
# CONFIG_BUSYBOX_CONFIG_DPKG is not set
# CONFIG_BUSYBOX_CONFIG_DPKG_DEB is not set
# CONFIG_BUSYBOX_CONFIG_GZIP is not set
# CONFIG_BUSYBOX_CONFIG_LZOP is not set
# CONFIG_BUSYBOX_CONFIG_UNLZOP is not set
# CONFIG_BUSYBOX_CONFIG_LZOPCAT is not set
# CONFIG_BUSYBOX_CONFIG_RPM is not set
# CONFIG_BUSYBOX_CONFIG_RPM2CPIO is not set
# CONFIG_BUSYBOX_CONFIG_TAR is not set
# CONFIG_BUSYBOX_CONFIG_UNZIP is not set
# end of Archival Utilities

#
# Coreutils
#
CONFIG_BUSYBOX_CONFIG_BASENAME=y
CONFIG_BUSYBOX_CONFIG_CAT=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_CATN is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_CATV is not set
# CONFIG_BUSYBOX_CONFIG_CHGRP is not set
CONFIG_BUSYBOX_CONFIG_CHMOD=y
CONFIG_BUSYBOX_CONFIG_CHOWN=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_CHOWN_LONG_OPTIONS is not set
CONFIG_BUSYBOX_CONFIG_CHROOT=y
CONFIG_BUSYBOX_CONFIG_CKSUM=y
# CONFIG_BUSYBOX_CONFIG_COMM is not set
CONFIG_BUSYBOX_CONFIG_CP=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_CP_LONG_OPTIONS is not set
CONFIG_BUSYBOX_CONFIG_CUT=y
CONFIG_BUSYBOX_CONFIG_DATE=y
CONFIG_BUSYBOX_CONFIG_FEATURE_DATE_ISOFMT=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_DATE_NANO is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_DATE_COMPAT is not set
CONFIG_BUSYBOX_CONFIG_DD=y
CONFIG_BUSYBOX_CONFIG_FEATURE_DD_SIGNAL_HANDLING=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_DD_THIRD_STATUS_LINE is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_DD_IBS_OBS=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_DD_STATUS is not set
# CONFIG_BUSYBOX_CONFIG_DF is not set
CONFIG_BUSYBOX_CONFIG_DIRNAME=y
# CONFIG_BUSYBOX_CONFIG_DOS2UNIX is not set
# CONFIG_BUSYBOX_CONFIG_UNIX2DOS is not set
CONFIG_BUSYBOX_CONFIG_DU=y
CONFIG_BUSYBOX_CONFIG_FEATURE_DU_DEFAULT_BLOCKSIZE_1K=y
CONFIG_BUSYBOX_CONFIG_ECHO=y
CONFIG_BUSYBOX_CONFIG_FEATURE_FANCY_ECHO=y
CONFIG_BUSYBOX_CONFIG_ENV=y
# CONFIG_BUSYBOX_CONFIG_EXPAND is not set
# CONFIG_BUSYBOX_CONFIG_UNEXPAND is not set
CONFIG_BUSYBOX_CONFIG_EXPR=y
CONFIG_BUSYBOX_CONFIG_EXPR_MATH_SUPPORT_64=y
# CONFIG_BUSYBOX_CONFIG_FACTOR is not set
# CONFIG_BUSYBOX_CONFIG_FALSE is not set
# CONFIG_BUSYBOX_CONFIG_FOLD is not set
# CONFIG_BUSYBOX_CONFIG_HEAD is not set
# CONFIG_BUSYBOX_CONFIG_HOSTID is not set
# CONFIG_BUSYBOX_CONFIG_ID is not set
# CONFIG_BUSYBOX_CONFIG_GROUPS is not set
# CONFIG_BUSYBOX_CONFIG_INSTALL is not set
# CONFIG_BUSYBOX_CONFIG_LINK is not set
CONFIG_BUSYBOX_CONFIG_LN=y
# CONFIG_BUSYBOX_CONFIG_LOGNAME is not set
CONFIG_BUSYBOX_CONFIG_LS=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_LS_FILETYPES is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_LS_FOLLOWLINKS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_LS_RECURSIVE=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_LS_WIDTH is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_LS_SORTFILES=y
CONFIG_BUSYBOX_CONFIG_FEATURE_LS_TIMESTAMPS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_LS_USERNAME=y
CONFIG_BUSYBOX_CONFIG_FEATURE_LS_COLOR=y
CONFIG_BUSYBOX_CONFIG_FEATURE_LS_COLOR_IS_DEFAULT=y
CONFIG_BUSYBOX_CONFIG_MD5SUM=y
# CONFIG_BUSYBOX_CONFIG_SHA1SUM is not set
# CONFIG_BUSYBOX_CONFIG_SHA256SUM is not set
# CONFIG_BUSYBOX_CONFIG_SHA512SUM is not set
# CONFIG_BUSYBOX_CONFIG_SHA3SUM is not set

#
# Common options for md5sum, sha1sum, sha256sum, sha512sum, sha3sum
#
CONFIG_BUSYBOX_CONFIG_FEATURE_MD5_SHA1_SUM_CHECK=y
CONFIG_BUSYBOX_CONFIG_MKDIR=y
# CONFIG_BUSYBOX_CONFIG_MKFIFO is not set
# CONFIG_BUSYBOX_CONFIG_MKNOD is not set
# CONFIG_BUSYBOX_CONFIG_MKTEMP is not set
CONFIG_BUSYBOX_CONFIG_MV=y
# CONFIG_BUSYBOX_CONFIG_NICE is not set
# CONFIG_BUSYBOX_CONFIG_NL is not set
# CONFIG_BUSYBOX_CONFIG_NOHUP is not set
# CONFIG_BUSYBOX_CONFIG_NPROC is not set
# CONFIG_BUSYBOX_CONFIG_OD is not set
# CONFIG_BUSYBOX_CONFIG_PASTE is not set
# CONFIG_BUSYBOX_CONFIG_PRINTENV is not set
# CONFIG_BUSYBOX_CONFIG_PRINTF is not set
CONFIG_BUSYBOX_CONFIG_PWD=y
CONFIG_BUSYBOX_CONFIG_READLINK=y
CONFIG_BUSYBOX_CONFIG_FEATURE_READLINK_FOLLOW=y
# CONFIG_BUSYBOX_CONFIG_REALPATH is not set
CONFIG_BUSYBOX_CONFIG_RM=y
# CONFIG_BUSYBOX_CONFIG_RMDIR is not set
CONFIG_BUSYBOX_CONFIG_SEQ=y
# CONFIG_BUSYBOX_CONFIG_SHRED is not set
# CONFIG_BUSYBOX_CONFIG_SHUF is not set
CONFIG_BUSYBOX_CONFIG_SLEEP=y
CONFIG_BUSYBOX_CONFIG_FEATURE_FANCY_SLEEP=y
# CONFIG_BUSYBOX_CONFIG_SORT is not set
# CONFIG_BUSYBOX_CONFIG_SPLIT is not set
# CONFIG_BUSYBOX_CONFIG_STAT is not set
# CONFIG_BUSYBOX_CONFIG_STTY is not set
# CONFIG_BUSYBOX_CONFIG_SUM is not set
CONFIG_BUSYBOX_CONFIG_SYNC=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_SYNC_FANCY is not set
# CONFIG_BUSYBOX_CONFIG_FSYNC is not set
# CONFIG_BUSYBOX_CONFIG_TAC is not set
CONFIG_BUSYBOX_CONFIG_TAIL=y
CONFIG_BUSYBOX_CONFIG_FEATURE_FANCY_TAIL=y
# CONFIG_BUSYBOX_CONFIG_TEE is not set
# CONFIG_BUSYBOX_CONFIG_TEST is not set
CONFIG_BUSYBOX_CONFIG_TEST1=y
CONFIG_BUSYBOX_CONFIG_TEST2=y
CONFIG_BUSYBOX_CONFIG_FEATURE_TEST_64=y
# CONFIG_BUSYBOX_CONFIG_TIMEOUT is not set
CONFIG_BUSYBOX_CONFIG_TOUCH=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_TOUCH_NODEREF is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_TOUCH_SUSV3 is not set
CONFIG_BUSYBOX_CONFIG_TR=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_TR_CLASSES is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_TR_EQUIV is not set
# CONFIG_BUSYBOX_CONFIG_TRUE is not set
# CONFIG_BUSYBOX_CONFIG_TRUNCATE is not set
# CONFIG_BUSYBOX_CONFIG_TTY is not set
CONFIG_BUSYBOX_CONFIG_UNAME=y
CONFIG_BUSYBOX_CONFIG_UNAME_OSNAME="GNU/Linux"
# CONFIG_BUSYBOX_CONFIG_BB_ARCH is not set
# CONFIG_BUSYBOX_CONFIG_UNIQ is not set
# CONFIG_BUSYBOX_CONFIG_UNLINK is not set
CONFIG_BUSYBOX_CONFIG_USLEEP=y
# CONFIG_BUSYBOX_CONFIG_UUDECODE is not set
# CONFIG_BUSYBOX_CONFIG_BASE32 is not set
# CONFIG_BUSYBOX_CONFIG_BASE64 is not set
# CONFIG_BUSYBOX_CONFIG_UUENCODE is not set
# CONFIG_BUSYBOX_CONFIG_WC is not set
# CONFIG_BUSYBOX_CONFIG_WHOAMI is not set
# CONFIG_BUSYBOX_CONFIG_YES is not set

#
# Common options
#
# CONFIG_BUSYBOX_CONFIG_FEATURE_VERBOSE is not set

#
# Common options for cp and mv
#
CONFIG_BUSYBOX_CONFIG_FEATURE_PRESERVE_HARDLINKS=y

#
# Common options for df, du, ls
#
CONFIG_BUSYBOX_CONFIG_FEATURE_HUMAN_READABLE=y
# end of Coreutils

#
# Console Utilities
#
# CONFIG_BUSYBOX_CONFIG_CHVT is not set
# CONFIG_BUSYBOX_CONFIG_CLEAR is not set
# CONFIG_BUSYBOX_CONFIG_DEALLOCVT is not set
# CONFIG_BUSYBOX_CONFIG_DUMPKMAP is not set
# CONFIG_BUSYBOX_CONFIG_FGCONSOLE is not set
# CONFIG_BUSYBOX_CONFIG_KBD_MODE is not set
# CONFIG_BUSYBOX_CONFIG_LOADFONT is not set
# CONFIG_BUSYBOX_CONFIG_SETFONT is not set
# CONFIG_BUSYBOX_CONFIG_LOADKMAP is not set
# CONFIG_BUSYBOX_CONFIG_OPENVT is not set
# CONFIG_BUSYBOX_CONFIG_RESET is not set
# CONFIG_BUSYBOX_CONFIG_RESIZE is not set
# CONFIG_BUSYBOX_CONFIG_SETCONSOLE is not set
# CONFIG_BUSYBOX_CONFIG_SETKEYCODES is not set
# CONFIG_BUSYBOX_CONFIG_SETLOGCONS is not set
# CONFIG_BUSYBOX_CONFIG_SHOWKEY is not set
# end of Console Utilities

#
# Debian Utilities
#
# CONFIG_BUSYBOX_CONFIG_PIPE_PROGRESS is not set
# CONFIG_BUSYBOX_CONFIG_RUN_PARTS is not set
CONFIG_BUSYBOX_CONFIG_START_STOP_DAEMON=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_START_STOP_DAEMON_LONG_OPTIONS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_START_STOP_DAEMON_FANCY is not set
# CONFIG_BUSYBOX_CONFIG_WHICH is not set
# end of Debian Utilities

#
# klibc-utils
#
# CONFIG_BUSYBOX_CONFIG_MINIPS is not set
# CONFIG_BUSYBOX_CONFIG_NUKE is not set
# CONFIG_BUSYBOX_CONFIG_RESUME is not set
# CONFIG_BUSYBOX_CONFIG_RUN_INIT is not set
# end of klibc-utils

#
# Editors
#
CONFIG_BUSYBOX_CONFIG_AWK=y
CONFIG_BUSYBOX_CONFIG_FEATURE_AWK_LIBM=y
CONFIG_BUSYBOX_CONFIG_FEATURE_AWK_GNU_EXTENSIONS=y
# CONFIG_BUSYBOX_CONFIG_CMP is not set
# CONFIG_BUSYBOX_CONFIG_DIFF is not set
# CONFIG_BUSYBOX_CONFIG_ED is not set
# CONFIG_BUSYBOX_CONFIG_PATCH is not set
CONFIG_BUSYBOX_CONFIG_SED=y
CONFIG_BUSYBOX_CONFIG_VI=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_MAX_LEN=1024
# CONFIG_BUSYBOX_CONFIG_FEATURE_VI_8BIT is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_COLON=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_YANKMARK=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_SEARCH=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_USE_SIGNALS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_DOT_CMD=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_READONLY=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_SETOPTS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_SET=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_WIN_RESIZE=y
CONFIG_BUSYBOX_CONFIG_FEATURE_VI_ASK_TERMINAL=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_VI_UNDO is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_ALLOW_EXEC=y
# end of Editors

#
# Finding Utilities
#
# CONFIG_BUSYBOX_CONFIG_FIND is not set
CONFIG_BUSYBOX_CONFIG_GREP=y
# CONFIG_BUSYBOX_CONFIG_EGREP is not set
CONFIG_BUSYBOX_CONFIG_FGREP=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_GREP_CONTEXT is not set
CONFIG_BUSYBOX_CONFIG_XARGS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_XARGS_SUPPORT_CONFIRMATION=y
CONFIG_BUSYBOX_CONFIG_FEATURE_XARGS_SUPPORT_QUOTES=y
CONFIG_BUSYBOX_CONFIG_FEATURE_XARGS_SUPPORT_TERMOPT=y
CONFIG_BUSYBOX_CONFIG_FEATURE_XARGS_SUPPORT_ZERO_TERM=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_XARGS_SUPPORT_REPL_STR is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_XARGS_SUPPORT_PARALLEL is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_XARGS_SUPPORT_ARGS_FILE is not set
# end of Finding Utilities

#
# Init Utilities
#
# CONFIG_BUSYBOX_CONFIG_BOOTCHARTD is not set
# CONFIG_BUSYBOX_CONFIG_HALT is not set
CONFIG_BUSYBOX_CONFIG_POWEROFF=y
CONFIG_BUSYBOX_CONFIG_REBOOT=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_WAIT_FOR_INIT is not set
CONFIG_BUSYBOX_CONFIG_INIT=y
# CONFIG_BUSYBOX_CONFIG_LINUXRC is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_USE_INITTAB=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_KILL_REMOVED is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_INIT_SCTTY=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_INIT_SYSLOG is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_INIT_QUIET=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_INIT_COREDUMPS is not set
CONFIG_BUSYBOX_CONFIG_INIT_TERMINAL_TYPE=""
# CONFIG_BUSYBOX_CONFIG_FEATURE_INIT_MODIFY_CMDLINE is not set
# end of Init Utilities

#
# Login/Password Management Utilities
#
# CONFIG_BUSYBOX_CONFIG_FEATURE_SHADOWPASSWDS is not set
# CONFIG_BUSYBOX_CONFIG_USE_BB_PWD_GRP is not set
# CONFIG_BUSYBOX_CONFIG_USE_BB_CRYPT is not set
# CONFIG_BUSYBOX_CONFIG_ADD_SHELL is not set
# CONFIG_BUSYBOX_CONFIG_REMOVE_SHELL is not set
# CONFIG_BUSYBOX_CONFIG_ADDGROUP is not set
# CONFIG_BUSYBOX_CONFIG_ADDUSER is not set
# CONFIG_BUSYBOX_CONFIG_CHPASSWD is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_DEFAULT_PASSWD_ALGO="md5"
# CONFIG_BUSYBOX_CONFIG_CRYPTPW is not set
# CONFIG_BUSYBOX_CONFIG_MKPASSWD is not set
# CONFIG_BUSYBOX_CONFIG_DELUSER is not set
# CONFIG_BUSYBOX_CONFIG_DELGROUP is not set
CONFIG_BUSYBOX_CONFIG_GETTY=y
CONFIG_BUSYBOX_CONFIG_LOGIN=y
# CONFIG_BUSYBOX_CONFIG_LOGIN_SESSION_AS_CHILD is not set
# CONFIG_BUSYBOX_CONFIG_LOGIN_SCRIPTS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_NOLOGIN is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SECURETTY is not set
CONFIG_BUSYBOX_CONFIG_PASSWD=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_PASSWD_WEAK_CHECK is not set
# CONFIG_BUSYBOX_CONFIG_SU is not set
# CONFIG_BUSYBOX_CONFIG_SULOGIN is not set
# CONFIG_BUSYBOX_CONFIG_VLOCK is not set
# end of Login/Password Management Utilities

#
# Linux Ext2 FS Progs
#
# CONFIG_BUSYBOX_CONFIG_CHATTR is not set
# CONFIG_BUSYBOX_CONFIG_FSCK is not set
# CONFIG_BUSYBOX_CONFIG_LSATTR is not set
# CONFIG_BUSYBOX_CONFIG_TUNE2FS is not set
# end of Linux Ext2 FS Progs

#
# Linux Module Utilities
#
# CONFIG_BUSYBOX_CONFIG_MODPROBE_SMALL is not set
# CONFIG_BUSYBOX_CONFIG_DEPMOD is not set
CONFIG_BUSYBOX_CONFIG_INSMOD=y
CONFIG_BUSYBOX_CONFIG_LSMOD=y
CONFIG_BUSYBOX_CONFIG_FEATURE_LSMOD_PRETTY_2_6_OUTPUT=y
# CONFIG_BUSYBOX_CONFIG_MODINFO is not set
CONFIG_BUSYBOX_CONFIG_MODPROBE=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_MODPROBE_BLACKLIST is not set
CONFIG_BUSYBOX_CONFIG_RMMOD=y

#
# Options common to multiple modutils
#
CONFIG_BUSYBOX_CONFIG_FEATURE_CMDLINE_MODULE_OPTIONS=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_2_4_MODULES is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_CHECK_TAINTED_MODULE is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_INSMOD_TRY_MMAP is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_MODUTILS_ALIAS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_MODUTILS_SYMBOLS is not set
CONFIG_BUSYBOX_CONFIG_DEFAULT_MODULES_DIR=""
CONFIG_BUSYBOX_CONFIG_DEFAULT_DEPMOD_FILE=""
# end of Linux Module Utilities

#
# Linux System Utilities
#
# CONFIG_BUSYBOX_CONFIG_ACPID is not set
# CONFIG_BUSYBOX_CONFIG_BLKDISCARD is not set
# CONFIG_BUSYBOX_CONFIG_BLKID is not set
# CONFIG_BUSYBOX_CONFIG_BLOCKDEV is not set
# CONFIG_BUSYBOX_CONFIG_CAL is not set
# CONFIG_BUSYBOX_CONFIG_CHRT is not set
CONFIG_BUSYBOX_CONFIG_DMESG=y
CONFIG_BUSYBOX_CONFIG_FEATURE_DMESG_PRETTY=y
# CONFIG_BUSYBOX_CONFIG_EJECT is not set
# CONFIG_BUSYBOX_CONFIG_FALLOCATE is not set
# CONFIG_BUSYBOX_CONFIG_FATATTR is not set
# CONFIG_BUSYBOX_CONFIG_FBSET is not set
# CONFIG_BUSYBOX_CONFIG_FDFORMAT is not set
# CONFIG_BUSYBOX_CONFIG_FDISK is not set
# CONFIG_BUSYBOX_CONFIG_FINDFS is not set
CONFIG_BUSYBOX_CONFIG_FLOCK=y
# CONFIG_BUSYBOX_CONFIG_FDFLUSH is not set
# CONFIG_BUSYBOX_CONFIG_FREERAMDISK is not set
# CONFIG_BUSYBOX_CONFIG_FSCK_MINIX is not set
# CONFIG_BUSYBOX_CONFIG_FSFREEZE is not set
# CONFIG_BUSYBOX_CONFIG_FSTRIM is not set
# CONFIG_BUSYBOX_CONFIG_GETOPT is not set
CONFIG_BUSYBOX_CONFIG_HEXDUMP=y
# CONFIG_BUSYBOX_CONFIG_HD is not set
# CONFIG_BUSYBOX_CONFIG_XXD is not set
CONFIG_BUSYBOX_CONFIG_HWCLOCK=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_HWCLOCK_ADJTIME_FHS is not set
# CONFIG_BUSYBOX_CONFIG_IONICE is not set
# CONFIG_BUSYBOX_CONFIG_IPCRM is not set
# CONFIG_BUSYBOX_CONFIG_IPCS is not set
CONFIG_BUSYBOX_CONFIG_LOSETUP=y
# CONFIG_BUSYBOX_CONFIG_LSPCI is not set
# CONFIG_BUSYBOX_CONFIG_LSUSB is not set
# CONFIG_BUSYBOX_CONFIG_MDEV is not set
# CONFIG_BUSYBOX_CONFIG_MESG is not set
# CONFIG_BUSYBOX_CONFIG_MKE2FS is not set
# CONFIG_BUSYBOX_CONFIG_MKFS_EXT2 is not set
# CONFIG_BUSYBOX_CONFIG_MKFS_MINIX is not set
# CONFIG_BUSYBOX_CONFIG_MKFS_REISER is not set
# CONFIG_BUSYBOX_CONFIG_MKDOSFS is not set
# CONFIG_BUSYBOX_CONFIG_MKFS_VFAT is not set
# CONFIG_BUSYBOX_CONFIG_MKSWAP is not set
# CONFIG_BUSYBOX_CONFIG_MORE is not set
CONFIG_BUSYBOX_CONFIG_MOUNT=y
CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_FAKE=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_VERBOSE is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_HELPERS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_LABEL is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_NFS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_CIFS is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_FLAGS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_FSTAB=y
CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_OTHERTAB=y
# CONFIG_BUSYBOX_CONFIG_MOUNTPOINT is not set
# CONFIG_BUSYBOX_CONFIG_NSENTER is not set
CONFIG_BUSYBOX_CONFIG_PIVOT_ROOT=y
# CONFIG_BUSYBOX_CONFIG_RDATE is not set
# CONFIG_BUSYBOX_CONFIG_RDEV is not set
# CONFIG_BUSYBOX_CONFIG_READPROFILE is not set
# CONFIG_BUSYBOX_CONFIG_RENICE is not set
# CONFIG_BUSYBOX_CONFIG_REV is not set
# CONFIG_BUSYBOX_CONFIG_RTCWAKE is not set
# CONFIG_BUSYBOX_CONFIG_SCRIPT is not set
# CONFIG_BUSYBOX_CONFIG_SCRIPTREPLAY is not set
# CONFIG_BUSYBOX_CONFIG_SETARCH is not set
# CONFIG_BUSYBOX_CONFIG_LINUX32 is not set
# CONFIG_BUSYBOX_CONFIG_LINUX64 is not set
# CONFIG_BUSYBOX_CONFIG_SETPRIV is not set
CONFIG_BUSYBOX_CONFIG_SETSID=y
# CONFIG_BUSYBOX_CONFIG_SWAPON is not set
# CONFIG_BUSYBOX_CONFIG_SWAPOFF is not set
# CONFIG_BUSYBOX_CONFIG_SWITCH_ROOT is not set
# CONFIG_BUSYBOX_CONFIG_TASKSET is not set
# CONFIG_BUSYBOX_CONFIG_UEVENT is not set
CONFIG_BUSYBOX_CONFIG_UMOUNT=y
CONFIG_BUSYBOX_CONFIG_FEATURE_UMOUNT_ALL=y
# CONFIG_BUSYBOX_CONFIG_UNSHARE is not set

#
# Common options for mount/umount
#
CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_LOOP=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_MOUNT_LOOP_CREATE is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_MTAB_SUPPORT is not set
# CONFIG_BUSYBOX_CONFIG_VOLUMEID is not set
# end of Linux System Utilities

#
# Miscellaneous Utilities
#
# CONFIG_BUSYBOX_CONFIG_ADJTIMEX is not set
# CONFIG_BUSYBOX_CONFIG_BBCONFIG is not set
# CONFIG_BUSYBOX_CONFIG_BC is not set
# CONFIG_BUSYBOX_CONFIG_DC is not set
# CONFIG_BUSYBOX_CONFIG_BEEP is not set
# CONFIG_BUSYBOX_CONFIG_CHAT is not set
# CONFIG_BUSYBOX_CONFIG_CONSPY is not set
CONFIG_BUSYBOX_CONFIG_CROND=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_CROND_D is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_CROND_CALL_SENDMAIL is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_CROND_SPECIAL_TIMES is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_CROND_DIR="/etc"
CONFIG_BUSYBOX_CONFIG_CRONTAB=y
# CONFIG_BUSYBOX_CONFIG_DEVFSD is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_DEVFS is not set
# CONFIG_BUSYBOX_CONFIG_DEVMEM is not set
# CONFIG_BUSYBOX_CONFIG_FBSPLASH is not set
# CONFIG_BUSYBOX_CONFIG_FLASH_ERASEALL is not set
# CONFIG_BUSYBOX_CONFIG_FLASH_LOCK is not set
# CONFIG_BUSYBOX_CONFIG_FLASH_UNLOCK is not set
# CONFIG_BUSYBOX_CONFIG_FLASHCP is not set
# CONFIG_BUSYBOX_CONFIG_HDPARM is not set
# CONFIG_BUSYBOX_CONFIG_HEXEDIT is not set
# CONFIG_BUSYBOX_CONFIG_I2CGET is not set
# CONFIG_BUSYBOX_CONFIG_I2CSET is not set
# CONFIG_BUSYBOX_CONFIG_I2CDUMP is not set
# CONFIG_BUSYBOX_CONFIG_I2CDETECT is not set
# CONFIG_BUSYBOX_CONFIG_I2CTRANSFER is not set
# CONFIG_BUSYBOX_CONFIG_INOTIFYD is not set
CONFIG_BUSYBOX_CONFIG_LESS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_LESS_MAXLINES=9999999
# CONFIG_BUSYBOX_CONFIG_FEATURE_LESS_BRACKETS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_LESS_FLAGS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_LESS_TRUNCATE is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_LESS_MARKS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_LESS_REGEXP is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_LESS_WINCH is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_LESS_DASHCMD is not set
CONFIG_BUSYBOX_CONFIG_LOCK=y
# CONFIG_BUSYBOX_CONFIG_LSSCSI is not set
# CONFIG_BUSYBOX_CONFIG_MAKEDEVS is not set
# CONFIG_BUSYBOX_CONFIG_MAN is not set
# CONFIG_BUSYBOX_CONFIG_MICROCOM is not set
# CONFIG_BUSYBOX_CONFIG_MT is not set
# CONFIG_BUSYBOX_CONFIG_NANDWRITE is not set
# CONFIG_BUSYBOX_CONFIG_NANDDUMP is not set
# CONFIG_BUSYBOX_CONFIG_PARTPROBE is not set
# CONFIG_BUSYBOX_CONFIG_RAIDAUTORUN is not set
# CONFIG_BUSYBOX_CONFIG_READAHEAD is not set
# CONFIG_BUSYBOX_CONFIG_RFKILL is not set
# CONFIG_BUSYBOX_CONFIG_RX is not set
# CONFIG_BUSYBOX_CONFIG_SETFATTR is not set
# CONFIG_BUSYBOX_CONFIG_SETSERIAL is not set
# CONFIG_BUSYBOX_CONFIG_STRINGS is not set
CONFIG_BUSYBOX_CONFIG_TIME=y
# CONFIG_BUSYBOX_CONFIG_TS is not set
# CONFIG_BUSYBOX_CONFIG_TTYSIZE is not set
# CONFIG_BUSYBOX_CONFIG_UBIATTACH is not set
# CONFIG_BUSYBOX_CONFIG_UBIDETACH is not set
# CONFIG_BUSYBOX_CONFIG_UBIMKVOL is not set
# CONFIG_BUSYBOX_CONFIG_UBIRMVOL is not set
# CONFIG_BUSYBOX_CONFIG_UBIRSVOL is not set
# CONFIG_BUSYBOX_CONFIG_UBIUPDATEVOL is not set
# CONFIG_BUSYBOX_CONFIG_UBIRENAME is not set
# CONFIG_BUSYBOX_CONFIG_VOLNAME is not set
CONFIG_BUSYBOX_CONFIG_WATCHDOG=y
# end of Miscellaneous Utilities

#
# Networking Utilities
#
CONFIG_BUSYBOX_CONFIG_FEATURE_IPV6=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_UNIX_LOCAL is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_PREFER_IPV4_ADDRESS=y
CONFIG_BUSYBOX_CONFIG_VERBOSE_RESOLUTION_ERRORS=y
# CONFIG_BUSYBOX_CONFIG_ARP is not set
# CONFIG_BUSYBOX_CONFIG_ARPING is not set
CONFIG_BUSYBOX_CONFIG_BRCTL=y
CONFIG_BUSYBOX_CONFIG_FEATURE_BRCTL_FANCY=y
CONFIG_BUSYBOX_CONFIG_FEATURE_BRCTL_SHOW=y
# CONFIG_BUSYBOX_CONFIG_DNSD is not set
# CONFIG_BUSYBOX_CONFIG_ETHER_WAKE is not set
# CONFIG_BUSYBOX_CONFIG_FTPD is not set
# CONFIG_BUSYBOX_CONFIG_FTPGET is not set
# CONFIG_BUSYBOX_CONFIG_FTPPUT is not set
CONFIG_BUSYBOX_CONFIG_HOSTNAME=y
# CONFIG_BUSYBOX_CONFIG_DNSDOMAINNAME is not set
# CONFIG_BUSYBOX_CONFIG_HTTPD is not set
CONFIG_BUSYBOX_CONFIG_IFCONFIG=y
CONFIG_BUSYBOX_CONFIG_FEATURE_IFCONFIG_STATUS=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_IFCONFIG_SLIP is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_IFCONFIG_HW=y
CONFIG_BUSYBOX_CONFIG_FEATURE_IFCONFIG_BROADCAST_PLUS=y
# CONFIG_BUSYBOX_CONFIG_IFENSLAVE is not set
# CONFIG_BUSYBOX_CONFIG_IFPLUGD is not set
# CONFIG_BUSYBOX_CONFIG_IFUP is not set
# CONFIG_BUSYBOX_CONFIG_IFDOWN is not set
# CONFIG_BUSYBOX_CONFIG_INETD is not set
CONFIG_BUSYBOX_CONFIG_IP=y
# CONFIG_BUSYBOX_CONFIG_IPADDR is not set
# CONFIG_BUSYBOX_CONFIG_IPLINK is not set
# CONFIG_BUSYBOX_CONFIG_IPROUTE is not set
# CONFIG_BUSYBOX_CONFIG_IPTUNNEL is not set
# CONFIG_BUSYBOX_CONFIG_IPRULE is not set
# CONFIG_BUSYBOX_CONFIG_IPNEIGH is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_IP_ADDRESS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_IP_LINK=y
CONFIG_BUSYBOX_CONFIG_FEATURE_IP_ROUTE=y
CONFIG_BUSYBOX_CONFIG_FEATURE_IP_ROUTE_DIR="/etc/iproute2"
# CONFIG_BUSYBOX_CONFIG_FEATURE_IP_TUNNEL is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_IP_RULE=y
CONFIG_BUSYBOX_CONFIG_FEATURE_IP_NEIGH=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_IP_RARE_PROTOCOLS is not set
# CONFIG_BUSYBOX_CONFIG_IPCALC is not set
# CONFIG_BUSYBOX_CONFIG_FAKEIDENTD is not set
# CONFIG_BUSYBOX_CONFIG_NAMEIF is not set
# CONFIG_BUSYBOX_CONFIG_NBDCLIENT is not set
CONFIG_BUSYBOX_CONFIG_NC=y
# CONFIG_BUSYBOX_CONFIG_NETCAT is not set
# CONFIG_BUSYBOX_CONFIG_NC_SERVER is not set
# CONFIG_BUSYBOX_CONFIG_NC_EXTRA is not set
# CONFIG_BUSYBOX_CONFIG_NC_110_COMPAT is not set
CONFIG_BUSYBOX_CONFIG_NETMSG=y
CONFIG_BUSYBOX_CONFIG_NETSTAT=y
CONFIG_BUSYBOX_CONFIG_FEATURE_NETSTAT_WIDE=y
CONFIG_BUSYBOX_CONFIG_FEATURE_NETSTAT_PRG=y
# CONFIG_BUSYBOX_CONFIG_NSLOOKUP is not set
CONFIG_BUSYBOX_CONFIG_NSLOOKUP_OPENWRT=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_NSLOOKUP_OPENWRT_LONG_OPTIONS is not set
CONFIG_BUSYBOX_CONFIG_NTPD=y
CONFIG_BUSYBOX_CONFIG_FEATURE_NTPD_SERVER=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_NTPD_CONF is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_NTP_AUTH is not set
CONFIG_BUSYBOX_CONFIG_PING=y
CONFIG_BUSYBOX_CONFIG_PING6=y
CONFIG_BUSYBOX_CONFIG_FEATURE_FANCY_PING=y
# CONFIG_BUSYBOX_CONFIG_PSCAN is not set
CONFIG_BUSYBOX_CONFIG_ROUTE=y
# CONFIG_BUSYBOX_CONFIG_SLATTACH is not set
# CONFIG_BUSYBOX_CONFIG_SSL_CLIENT is not set
# CONFIG_BUSYBOX_CONFIG_TC is not set
# CONFIG_BUSYBOX_CONFIG_TCPSVD is not set
# CONFIG_BUSYBOX_CONFIG_UDPSVD is not set
# CONFIG_BUSYBOX_CONFIG_TELNET is not set
# CONFIG_BUSYBOX_CONFIG_TELNETD is not set
# CONFIG_BUSYBOX_CONFIG_TFTP is not set
# CONFIG_BUSYBOX_CONFIG_TFTPD is not set
# CONFIG_BUSYBOX_CONFIG_TLS is not set
CONFIG_BUSYBOX_CONFIG_TRACEROUTE=y
CONFIG_BUSYBOX_CONFIG_TRACEROUTE6=y
CONFIG_BUSYBOX_CONFIG_FEATURE_TRACEROUTE_VERBOSE=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_TRACEROUTE_USE_ICMP is not set
# CONFIG_BUSYBOX_CONFIG_TUNCTL is not set
# CONFIG_BUSYBOX_CONFIG_VCONFIG is not set
CONFIG_BUSYBOX_CONFIG_WGET=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_WGET_LONG_OPTIONS is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_WGET_STATUSBAR=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_WGET_AUTHENTICATION is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_WGET_TIMEOUT is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_WGET_HTTPS is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_WGET_OPENSSL is not set
# CONFIG_BUSYBOX_CONFIG_WHOIS is not set
# CONFIG_BUSYBOX_CONFIG_ZCIP is not set
# CONFIG_BUSYBOX_CONFIG_UDHCPD is not set
# CONFIG_BUSYBOX_CONFIG_DUMPLEASES is not set
# CONFIG_BUSYBOX_CONFIG_DHCPRELAY is not set
CONFIG_BUSYBOX_CONFIG_UDHCPC=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_UDHCPC_ARPING is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_UDHCPC_SANITIZEOPT is not set
CONFIG_BUSYBOX_CONFIG_UDHCPC_DEFAULT_SCRIPT="/usr/share/udhcpc/default.script"
# CONFIG_BUSYBOX_CONFIG_UDHCPC6 is not set

#
# Common options for DHCP applets
#
# CONFIG_BUSYBOX_CONFIG_FEATURE_UDHCP_PORT is not set
CONFIG_BUSYBOX_CONFIG_UDHCP_DEBUG=0
CONFIG_BUSYBOX_CONFIG_UDHCPC_SLACK_FOR_BUGGY_SERVERS=80
CONFIG_BUSYBOX_CONFIG_FEATURE_UDHCP_RFC3397=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_UDHCP_8021Q is not set
# end of Networking Utilities

#
# Print Utilities
#
# CONFIG_BUSYBOX_CONFIG_LPD is not set
# CONFIG_BUSYBOX_CONFIG_LPR is not set
# CONFIG_BUSYBOX_CONFIG_LPQ is not set
# end of Print Utilities

#
# Mail Utilities
#
# CONFIG_BUSYBOX_CONFIG_MAKEMIME is not set
# CONFIG_BUSYBOX_CONFIG_POPMAILDIR is not set
# CONFIG_BUSYBOX_CONFIG_REFORMIME is not set
# CONFIG_BUSYBOX_CONFIG_SENDMAIL is not set
# end of Mail Utilities

#
# Process Utilities
#
# CONFIG_BUSYBOX_CONFIG_FREE is not set
# CONFIG_BUSYBOX_CONFIG_FUSER is not set
# CONFIG_BUSYBOX_CONFIG_IOSTAT is not set
CONFIG_BUSYBOX_CONFIG_KILL=y
CONFIG_BUSYBOX_CONFIG_KILLALL=y
# CONFIG_BUSYBOX_CONFIG_KILLALL5 is not set
CONFIG_BUSYBOX_CONFIG_LSOF=y
# CONFIG_BUSYBOX_CONFIG_MPSTAT is not set
# CONFIG_BUSYBOX_CONFIG_NMETER is not set
# CONFIG_BUSYBOX_CONFIG_PGREP is not set
# CONFIG_BUSYBOX_CONFIG_PKILL is not set
CONFIG_BUSYBOX_CONFIG_PIDOF=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_PIDOF_SINGLE is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_PIDOF_OMIT is not set
# CONFIG_BUSYBOX_CONFIG_PMAP is not set
# CONFIG_BUSYBOX_CONFIG_POWERTOP is not set
CONFIG_BUSYBOX_CONFIG_PS=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_PS_WIDE is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_PS_LONG=y
# CONFIG_BUSYBOX_CONFIG_PSTREE is not set
# CONFIG_BUSYBOX_CONFIG_PWDX is not set
# CONFIG_BUSYBOX_CONFIG_SMEMCAP is not set
CONFIG_BUSYBOX_CONFIG_BB_SYSCTL=y
CONFIG_BUSYBOX_CONFIG_TOP=y
CONFIG_BUSYBOX_CONFIG_FEATURE_TOP_INTERACTIVE=y
CONFIG_BUSYBOX_CONFIG_FEATURE_TOP_CPU_USAGE_PERCENTAGE=y
CONFIG_BUSYBOX_CONFIG_FEATURE_TOP_CPU_GLOBAL_PERCENTS=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_TOP_SMP_CPU is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_TOP_DECIMALS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_TOP_SMP_PROCESS=y
CONFIG_BUSYBOX_CONFIG_FEATURE_TOPMEM=y
# CONFIG_BUSYBOX_CONFIG_UPTIME is not set
# CONFIG_BUSYBOX_CONFIG_WATCH is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_SHOW_THREADS=y
# end of Process Utilities

#
# Runit Utilities
#
# CONFIG_BUSYBOX_CONFIG_CHPST is not set
# CONFIG_BUSYBOX_CONFIG_SETUIDGID is not set
# CONFIG_BUSYBOX_CONFIG_ENVUIDGID is not set
# CONFIG_BUSYBOX_CONFIG_ENVDIR is not set
# CONFIG_BUSYBOX_CONFIG_SOFTLIMIT is not set
# CONFIG_BUSYBOX_CONFIG_RUNSV is not set
# CONFIG_BUSYBOX_CONFIG_RUNSVDIR is not set
# CONFIG_BUSYBOX_CONFIG_SV is not set
# CONFIG_BUSYBOX_CONFIG_SVC is not set
# CONFIG_BUSYBOX_CONFIG_SVOK is not set
# CONFIG_BUSYBOX_CONFIG_SVLOGD is not set
# end of Runit Utilities

#
# Shells
#
CONFIG_BUSYBOX_CONFIG_SH_IS_ASH=y
# CONFIG_BUSYBOX_CONFIG_SH_IS_HUSH is not set
# CONFIG_BUSYBOX_CONFIG_SH_IS_NONE is not set
CONFIG_BUSYBOX_CONFIG_BASH_IS_ASH=y
# CONFIG_BUSYBOX_CONFIG_BASH_IS_HUSH is not set
# CONFIG_BUSYBOX_CONFIG_BASH_IS_NONE is not set
CONFIG_BUSYBOX_CONFIG_SHELL_ASH=y
CONFIG_BUSYBOX_CONFIG_ASH=y
CONFIG_BUSYBOX_CONFIG_ASH_OPTIMIZE_FOR_SIZE=y
# CONFIG_BUSYBOX_CONFIG_ASH_INTERNAL_GLOB is not set
CONFIG_BUSYBOX_CONFIG_ASH_BASH_COMPAT=y
# CONFIG_BUSYBOX_CONFIG_ASH_BASH_SOURCE_CURDIR is not set
# CONFIG_BUSYBOX_CONFIG_ASH_BASH_NOT_FOUND_HOOK is not set
CONFIG_BUSYBOX_CONFIG_ASH_JOB_CONTROL=y
CONFIG_BUSYBOX_CONFIG_ASH_ALIAS=y
CONFIG_BUSYBOX_CONFIG_ASH_RANDOM_SUPPORT=y
# CONFIG_BUSYBOX_CONFIG_ASH_EXPAND_PRMT is not set
# CONFIG_BUSYBOX_CONFIG_ASH_IDLE_TIMEOUT is not set
# CONFIG_BUSYBOX_CONFIG_ASH_MAIL is not set
CONFIG_BUSYBOX_CONFIG_ASH_ECHO=y
CONFIG_BUSYBOX_CONFIG_ASH_PRINTF=y
CONFIG_BUSYBOX_CONFIG_ASH_TEST=y
# CONFIG_BUSYBOX_CONFIG_ASH_HELP is not set
CONFIG_BUSYBOX_CONFIG_ASH_GETOPTS=y
# CONFIG_BUSYBOX_CONFIG_ASH_CMDCMD is not set
# CONFIG_BUSYBOX_CONFIG_CTTYHACK is not set
# CONFIG_BUSYBOX_CONFIG_HUSH is not set
# CONFIG_BUSYBOX_CONFIG_SHELL_HUSH is not set

#
# Options common to all shells
#
CONFIG_BUSYBOX_CONFIG_FEATURE_SH_MATH=y
CONFIG_BUSYBOX_CONFIG_FEATURE_SH_MATH_64=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_SH_MATH_BASE is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SH_EXTRA_QUIET is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SH_STANDALONE is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_SH_NOFORK=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_SH_READ_FRAC is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SH_HISTFILESIZE is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SH_EMBEDDED_SCRIPTS is not set
# end of Shells

#
# System Logging Utilities
#
# CONFIG_BUSYBOX_CONFIG_KLOGD is not set
# CONFIG_BUSYBOX_CONFIG_LOGGER is not set
# CONFIG_BUSYBOX_CONFIG_LOGREAD is not set
CONFIG_BUSYBOX_CONFIG_SYSLOGD=y
CONFIG_BUSYBOX_CONFIG_FEATURE_ROTATE_LOGFILE=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_REMOTE_LOG is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_SYSLOGD_DUP=y
# CONFIG_BUSYBOX_CONFIG_FEATURE_SYSLOGD_CFG is not set
# CONFIG_BUSYBOX_CONFIG_FEATURE_SYSLOGD_PRECISE_TIMESTAMPS is not set
CONFIG_BUSYBOX_CONFIG_FEATURE_SYSLOGD_READ_BUFFER_SIZE=256
CONFIG_BUSYBOX_CONFIG_FEATURE_IPC_SYSLOG=y
CONFIG_BUSYBOX_CONFIG_FEATURE_IPC_SYSLOG_BUFFER_SIZE=4
CONFIG_BUSYBOX_CONFIG_FEATURE_KMSG_SYSLOG=y
# end of System Logging Utilities

CONFIG_PACKAGE_busybox-init-base-files=y
CONFIG_BUSYBOX_INIT_BASE_FILES_OPTIONS=y
CONFIG_BUSYBOX_INIT_BASE_FILES_PATH="busybox-init-base-files"
# CONFIG_BUSYBOX_INIT_BASE_FILES_RC_LOG is not set
# CONFIG_BUSYBOX_INIT_BASE_FILES_RC_LOAD_SCRIPT is not set
# CONFIG_BUSYBOX_INIT_BASE_FILES_RC_MODULES is not set
# CONFIG_PACKAGE_busybox-selinux is not set
CONFIG_PACKAGE_ca-bundle=y
# CONFIG_PACKAGE_ca-certificates is not set
CONFIG_PACKAGE_dnsmasq=y
# CONFIG_PACKAGE_dnsmasq-dhcpv6 is not set
# CONFIG_PACKAGE_dnsmasq-full is not set
# CONFIG_PACKAGE_dropbear is not set
# CONFIG_PACKAGE_ead is not set
# CONFIG_PACKAGE_eudev is not set
# CONFIG_PACKAGE_firewall is not set
# CONFIG_PACKAGE_fstools is not set
# CONFIG_PACKAGE_fwtool is not set
# CONFIG_PACKAGE_getrandom is not set
CONFIG_PACKAGE_jsonfilter=y
# CONFIG_PACKAGE_libatomic is not set
CONFIG_PACKAGE_libc=y

#
# Configuration
#
CONFIG_LIBC_ROOT_DIR="$(CONFIG_TOOLCHAIN_ROOT)"
CONFIG_LIBC_FILE_SPEC="./lib/ld{-*.so,-*.so.*,*.so,*.so.*} ./lib/lib{anl,c,gomp,cidn,crypt,dl,m,nsl,nss_dns,nss_files,resolv,util,ssp}{-*.so,-*.so.*,.so,.so.*}"
# end of Configuration

CONFIG_PACKAGE_libgcc=y

#
# Configuration
#
CONFIG_LIBGCC_ROOT_DIR="$(CONFIG_TOOLCHAIN_ROOT)"
CONFIG_LIBGCC_FILE_SPEC="./lib/libgcc_s.so.*"
# end of Configuration

# CONFIG_PACKAGE_libgomp is not set
CONFIG_PACKAGE_libpthread=y

#
# Configuration
#
CONFIG_LIBPTHREAD_ROOT_DIR="$(CONFIG_TOOLCHAIN_ROOT)"
CONFIG_LIBPTHREAD_FILE_SPEC="./lib/libpthread{-*.so,.so.*}"
# end of Configuration

CONFIG_PACKAGE_librt=y

#
# Configuration
#
CONFIG_LIBRT_ROOT_DIR="$(CONFIG_TOOLCHAIN_ROOT)"
CONFIG_LIBRT_FILE_SPEC="./lib/librt{-*.so,.so.*}"
# end of Configuration

CONFIG_PACKAGE_libstdcpp=y

#
# Configuration
#
CONFIG_LIBSTDCPP_ROOT_DIR="$(CONFIG_TOOLCHAIN_ROOT)"
CONFIG_LIBSTDCPP_FILE_SPEC="./lib/libstdc++.so.*"
# end of Configuration

# CONFIG_PACKAGE_logd is not set
# CONFIG_PACKAGE_mtd is not set
CONFIG_PACKAGE_netifd=y
# CONFIG_PACKAGE_nft-qos is not set
# CONFIG_PACKAGE_om-watchdog is not set
# CONFIG_PACKAGE_openwrt-keyring is not set
# CONFIG_PACKAGE_opkg is not set
# CONFIG_PACKAGE_procd is not set
# CONFIG_PACKAGE_procd-selinux is not set
# CONFIG_PACKAGE_qos-scripts is not set
# CONFIG_PACKAGE_refpolicy is not set
# CONFIG_PACKAGE_resolveip is not set
# CONFIG_PACKAGE_rpcd is not set
# CONFIG_PACKAGE_selinux-policy is not set
# CONFIG_PACKAGE_snapshot-tool is not set
# CONFIG_PACKAGE_sqm-scripts is not set
# CONFIG_PACKAGE_sqm-scripts-extra is not set
# CONFIG_PACKAGE_swconfig is not set
# CONFIG_PACKAGE_ubox is not set
CONFIG_PACKAGE_ubus=y
CONFIG_PACKAGE_ubusd=y
# CONFIG_PACKAGE_ucert is not set
# CONFIG_PACKAGE_ucert-full is not set
# CONFIG_PACKAGE_uci is not set
# CONFIG_PACKAGE_urandom-seed is not set
# CONFIG_PACKAGE_urngd is not set
# CONFIG_PACKAGE_usign is not set
# CONFIG_PACKAGE_wireless-tools is not set
# CONFIG_PACKAGE_zram-swap is not set
# end of Base system

#
# Administration
#

#
# Zabbix
#
# CONFIG_PACKAGE_zabbix-agentd is not set

#
# SSL support
#
# CONFIG_ZABBIX_OPENSSL is not set
# CONFIG_ZABBIX_GNUTLS is not set
CONFIG_ZABBIX_NOSSL=y
# CONFIG_PACKAGE_zabbix-extra-network is not set
# CONFIG_PACKAGE_zabbix-extra-wifi is not set
# CONFIG_PACKAGE_zabbix-get is not set
# CONFIG_PACKAGE_zabbix-proxy is not set
# CONFIG_PACKAGE_zabbix-sender is not set
# CONFIG_PACKAGE_zabbix-server is not set

#
# Database Software
#
# CONFIG_ZABBIX_MYSQL is not set
CONFIG_ZABBIX_POSTGRESQL=y
# CONFIG_PACKAGE_zabbix-server-frontend is not set
# end of Zabbix

# CONFIG_PACKAGE_atop is not set
# CONFIG_PACKAGE_backuppc is not set
# CONFIG_PACKAGE_debian-archive-keyring is not set
# CONFIG_PACKAGE_debootstrap is not set
# CONFIG_PACKAGE_gkrellmd is not set
# CONFIG_PACKAGE_htop is not set
# CONFIG_PACKAGE_ipmitool is not set
# CONFIG_PACKAGE_monit is not set
# CONFIG_PACKAGE_monit-nossl is not set
# CONFIG_PACKAGE_muninlite is not set
# CONFIG_PACKAGE_netatop is not set
# CONFIG_PACKAGE_netdata is not set
# CONFIG_PACKAGE_nyx is not set
# CONFIG_PACKAGE_schroot is not set

#
# Configuration
#
# CONFIG_SCHROOT_BTRFS is not set
# CONFIG_SCHROOT_LOOPBACK is not set
# CONFIG_SCHROOT_LVM is not set
# CONFIG_SCHROOT_UUID is not set
# end of Configuration

# CONFIG_PACKAGE_sudo is not set
# CONFIG_PACKAGE_syslog-ng is not set
# end of Administration

#
# Allwinner
#

#
# Audio
#
# CONFIG_PACKAGE_aactd is not set
# CONFIG_PACKAGE_aactd-lib is not set
# CONFIG_PACKAGE_alsa-plugins-aw is not set
# CONFIG_PACKAGE_awrpaf_demo is not set
# CONFIG_PACKAGE_awrpaf_plugin is not set
# CONFIG_PACKAGE_libawrpaf is not set
# CONFIG_PACKAGE_tinymp3 is not set
# end of Audio

#
# Display
#
# CONFIG_PACKAGE_boot-play is not set
# CONFIG_PACKAGE_g2d-sample is not set
# CONFIG_PACKAGE_libgpu is not set
CONFIG_PACKAGE_libuapi=y
# CONFIG_SUNXI_DISPLAY_ONE is not set
CONFIG_SUNXI_DISPLAY_TWO=y
# CONFIG_SUNXI_ALLOC_CMA is not set
CONFIG_SUNXI_ALLOC_IOMMU=y
CONFIG_LUAPI_LAYER_ALLOC_CHN=y
# CONFIG_LUAPI_LAYER_ALLOC_LAY is not set
CONFIG_SUNXI_DISPLAY_DE=y
# CONFIG_SUNXI_DISPLAY_GPU is not set
# CONFIG_PACKAGE_yuview is not set
# end of Display

#
# Multimedia
#
# CONFIG_PACKAGE_decodertest is not set
# CONFIG_PACKAGE_encoderStressTest is not set
CONFIG_PACKAGE_encodertest=y
CONFIG_PACKAGE_jpegdecodedemo=y
CONFIG_PACKAGE_libcedarx=y

#
# Select cedarx configuration options
#

#
# Only need to play audio/video ---
#
# CONFIG_ONLY_ENABLE_AUDIO is not set
# CONFIG_ONLY_DISABLE_AUDIO is not set

#
# Middleware ---
#
CONFIG_TPLAYER=y
CONFIG_TRECORDER=y
CONFIG_DEFAULT_SOUNDCARD=0
CONFIG_DEFAULT_DEVICE=0
CONFIG_TMETADATARETRIVER=y
CONFIG_JPEGDECODER=y

#
# Video Encoders ---
#
CONFIG_CEDAR_VIDEO_ENCODER_ALL=y

#
# Muxers ---
#
CONFIG_CEDAR_MUXER_ALL=y
CONFIG_CEDAR_AAC_MUXER=y
CONFIG_CEDAR_TS_MUXER=y
CONFIG_CEDAR_MP4_MUXER=y

#
# Audio Encoders ---
#
CONFIG_CEDAR_AENCODER_ALL=y

#
# Video Decoders ---
#
CONFIG_CEDAR_VDECODER_H264=y
CONFIG_CEDAR_VDECODER_AVS=y
CONFIG_CEDAR_VDECODER_H265=y
CONFIG_CEDAR_VDECODER_MJPEG=y
CONFIG_CEDAR_VDECODER_MPEG2=y
CONFIG_CEDAR_VDECODER_MPEG4BASE=y
CONFIG_CEDAR_VDECODER_MPEG4DX=y
CONFIG_CEDAR_VDECODER_MPEG4H263=y
CONFIG_CEDAR_VDECODER_MPEG4NORMAL=y
# CONFIG_CEDAR_VDECODER_MPEG4VP6 is not set
CONFIG_CEDAR_VDECODER_VP8=y
# CONFIG_CEDAR_VDECODER_VP9 is not set
CONFIG_CEDAR_VDECODER_WMV3=y

#
# Audio Decoders ---
#
CONFIG_CEDAR_ADECODER_AAC=y
CONFIG_CEDAR_ADECODER_ALAC=y
CONFIG_CEDAR_ADECODER_AMR=y
CONFIG_CEDAR_ADECODER_APE=y
CONFIG_CEDAR_ADECODER_ATRC=y
CONFIG_CEDAR_ADECODER_FLAC=y
CONFIG_CEDAR_ADECODER_MP3=y
CONFIG_CEDAR_ADECODER_OGG=y
CONFIG_CEDAR_ADECODER_SIPR=y
CONFIG_CEDAR_ADECODER_WAV=y
CONFIG_CEDAR_ADECODER_RA=y
CONFIG_CEDAR_ADECODER_DSD=y
CONFIG_CEDAR_ADECODER_G729=y
CONFIG_CEDAR_ADECODER_OPUS=y

#
# Subtitle Decoders ---
#
CONFIG_CEDAR_SUBTITLE_SUPPORT=y

#
# Parsers ---
#
CONFIG_CEDAR_PARSER_ALL=y
CONFIG_CEDAR_PARSER_AAC=y
CONFIG_CEDAR_PARSER_MP3=y
CONFIG_CEDAR_PARSER_WAV=y
CONFIG_CEDAR_PARSER_ID3V2=y
CONFIG_CEDAR_PARSER_FLAC=y
CONFIG_CEDAR_PARSER_APE=y
CONFIG_CEDAR_PARSER_AMR=y
CONFIG_CEDAR_PARSER_ATRAC=y
CONFIG_CEDAR_PARSER_OGG=y
CONFIG_CEDAR_PARSER_TS=y
CONFIG_CEDAR_PARSER_MKV=y
CONFIG_CEDAR_PARSER_MOV=y
CONFIG_CEDAR_PARSER_AVI=y
CONFIG_CEDAR_PARSER_FLV=y
CONFIG_CEDAR_PARSER_ASF=y
CONFIG_CEDAR_PARSER_HLS=y
CONFIG_CEDAR_PARSER_MPG=y
CONFIG_CEDAR_PARSER_PLS=y

#
# Streams ---
#
CONFIG_CEDAR_STREAM_ALL=y
CONFIG_CEDAR_FILE_STREAM=y
CONFIG_CEDAR_HTTP_STREAM=y
CONFIG_CEDAR_HTTPS_STREAM=y
# CONFIG_CEDAR_RTSP_STREAM is not set

#
# OMX interface support ---
#
# CONFIG_OMX is not set
# end of Select cedarx configuration options

#
# Select Cedarx memory options
#
# CONFIG_CUSTOM_VBV_ENABLE is not set
# CONFIG_SCALE_DOWN_ENABLE is not set
# CONFIG_CUSTOM_FBM_NUM_ENABLE is not set
# CONFIG_USE_ION_BUF_ENABLE is not set
# CONFIG_CUSTOM_CACHE_ENABLE is not set
# end of Select Cedarx memory options

CONFIG_TR_YES_USE_VIN_ISP=y
# CONFIG_TR_NO_USE_VIN_ISP is not set
# CONFIG_PACKAGE_moduledemo is not set
# CONFIG_PACKAGE_tmetadataretrieverdemo is not set
CONFIG_PACKAGE_tplayerdemo=y
# CONFIG_PACKAGE_trecorderdemo is not set
# CONFIG_PACKAGE_xplayerdemo is not set
# end of Multimedia

#
# NPU
#
# CONFIG_PACKAGE_lenet is not set
CONFIG_PACKAGE_viplite-driver=y
# CONFIG_PACKAGE_vpm_run is not set
# CONFIG_PACKAGE_yolov3 is not set
# end of NPU

#
# Other
#
# CONFIG_PACKAGE_ir_test is not set
# CONFIG_PACKAGE_libsocket_db is not set
# CONFIG_PACKAGE_uart_test is not set
# CONFIG_PACKAGE_uevent-monitor is not set
# end of Other

#
# Power
#
# CONFIG_PACKAGE_healthd is not set
# CONFIG_PACKAGE_libscenemanager is not set
# CONFIG_PACKAGE_nativepower is not set
# CONFIG_PACKAGE_nativepower_utils is not set
# CONFIG_PACKAGE_powerkey is not set
# end of Power

#
# System
#
# CONFIG_PACKAGE_cpu_monitor is not set
# CONFIG_PACKAGE_mtop is not set
CONFIG_PACKAGE_ota-burnboot=y
CONFIG_PACKAGE_swupdate=y
CONFIG_SWUPDATE_CUSTOM=y
CONFIG_SWUPDATE_DEFAULT_HAVE_DOT_CONFIG=y
# CONFIG_SWUPDATE_DEFAULT_CURL is not set
# CONFIG_SWUPDATE_DEFAULT_CURL_SSL is not set
# CONFIG_SWUPDATE_DEFAULT_SYSTEMD is not set
CONFIG_SWUPDATE_DEFAULT_SCRIPTS=y
# CONFIG_SWUPDATE_DEFAULT_HW_COMPATIBILITY is not set
CONFIG_SWUPDATE_DEFAULT_SW_VERSIONS_FILE="/etc/sw-versions"
CONFIG_SWUPDATE_DEFAULT_SOCKET_CTRL_PATH=""
CONFIG_SWUPDATE_DEFAULT_SOCKET_PROGRESS_PATH=""
CONFIG_SWUPDATE_DEFAULT_SOCKET_REMOTE_HANDLER_DIRECTORY="/tmp/"
# CONFIG_SWUPDATE_DEFAULT_MTD is not set
# CONFIG_SWUPDATE_DEFAULT_LUA is not set
# CONFIG_SWUPDATE_DEFAULT_FEATURE_SYSLOG is not set
CONFIG_SWUPDATE_DEFAULT_CROSS_COMPILE=""
CONFIG_SWUPDATE_DEFAULT_SYSROOT=""
CONFIG_SWUPDATE_DEFAULT_EXTRA_CFLAGS=""
CONFIG_SWUPDATE_DEFAULT_EXTRA_LDFLAGS=""
CONFIG_SWUPDATE_DEFAULT_EXTRA_LDLIBS=""
# CONFIG_SWUPDATE_DEFAULT_DEBUG is not set
# CONFIG_SWUPDATE_DEFAULT_WERROR is not set
# CONFIG_SWUPDATE_DEFAULT_NOCLEANUP is not set
# CONFIG_SWUPDATE_DEFAULT_BOOTLOADER_EBG is not set
CONFIG_SWUPDATE_DEFAULT_UBOOT=y
# CONFIG_SWUPDATE_DEFAULT_BOOTLOADER_NONE is not set
# CONFIG_SWUPDATE_DEFAULT_BOOTLOADER_GRUB is not set
CONFIG_SWUPDATE_DEFAULT_UBOOT_FWENV="/etc/fw_env.config"
# CONFIG_SWUPDATE_DEFAULT_UBOOT_NEWAPI is not set
# CONFIG_SWUPDATE_DEFAULT_SSL_IMPL_NONE is not set
CONFIG_SWUPDATE_DEFAULT_SSL_IMPL_OPENSSL=y
# CONFIG_SWUPDATE_DEFAULT_SSL_IMPL_MBEDTLS is not set
# CONFIG_SWUPDATE_DEFAULT_DOWNLOAD is not set
# CONFIG_SWUPDATE_DEFAULT_DOWNLOAD_SSL is not set
# CONFIG_SWUPDATE_DEFAULT_CHANNEL_CURL is not set
# CONFIG_SWUPDATE_DEFAULT_HASH_VERIFY is not set
# CONFIG_SWUPDATE_DEFAULT_SIGNED_IMAGES is not set
# CONFIG_SWUPDATE_DEFAULT_ENCRYPTED_IMAGES is not set
# CONFIG_SWUPDATE_DEFAULT_SURICATTA is not set
# CONFIG_SWUPDATE_DEFAULT_WEBSERVER is not set
CONFIG_SWUPDATE_DEFAULT_GUNZIP=y
# CONFIG_SWUPDATE_DEFAULT_ZSTD is not set
CONFIG_SWUPDATE_DEFAULT_LIBCONFIG=y
CONFIG_SWUPDATE_DEFAULT_PARSERROOT=""
# CONFIG_SWUPDATE_DEFAULT_JSON is not set
# CONFIG_SWUPDATE_DEFAULT_SETSWDESCRIPTION is not set
# CONFIG_SWUPDATE_DEFAULT_UBIVOL is not set
CONFIG_SWUPDATE_DEFAULT_UBIVIDOFFSET=2048
CONFIG_SWUPDATE_DEFAULT_RAW=y
# CONFIG_SWUPDATE_DEFAULT_RDIFFHANDLER is not set
CONFIG_SWUPDATE_DEFAULT_SHELLSCRIPTHANDLER=y
# CONFIG_SWUPDATE_DEFAULT_ARCHIVE is not set
# CONFIG_SWUPDATE_DEFAULT_REMOTE_HANDLER is not set
# CONFIG_SWUPDATE_DEFAULT_SWUFORWARDER_HANDLER is not set
CONFIG_SWUPDATE_DEFAULT_BOOTLOADERHANDLER=y
CONFIG_SWUPDATE_DEFAULT_AWBOOT_HANDLER=y
# CONFIG_SWUPDATE_DEFAULT_UCFWHANDLER is not set
CONFIG_SWUPDATE_CONFIG_HAVE_LINUX=y
# CONFIG_SWUPDATE_CONFIG_HAVE_FREEBSD is not set
CONFIG_SWUPDATE_CONFIG_HAVE_DOT_CONFIG=y
CONFIG_SWUPDATE_CONFIG_HAVE_LUA=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBCONFIG=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBARCHIVE=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBCURL=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBGPIOD=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBMTD=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBUBI=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBUBOOTENV=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBEBGENV=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBZEROMQ=y
CONFIG_SWUPDATE_CONFIG_HAVE_ZLIB=y
CONFIG_SWUPDATE_CONFIG_HAVE_ZSTD=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBSSL=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBCRYPTO=y
CONFIG_SWUPDATE_CONFIG_HAVE_MBEDTLS=y
CONFIG_SWUPDATE_CONFIG_HAVE_JSON_C=y
CONFIG_SWUPDATE_CONFIG_HAVE_LIBWEBSOCKETS=y
# CONFIG_SWUPDATE_CONFIG_HAVE_URIPARSER is not set

#
# Swupdate Settings
#

#
# General Configuration
#
# CONFIG_SWUPDATE_CONFIG_CURL is not set
# CONFIG_SWUPDATE_CONFIG_CURL_SSL is not set
# CONFIG_SWUPDATE_CONFIG_SYSTEMD is not set
CONFIG_SWUPDATE_CONFIG_SCRIPTS=y
# CONFIG_SWUPDATE_CONFIG_HW_COMPATIBILITY is not set
CONFIG_SWUPDATE_CONFIG_SW_VERSIONS_FILE="/etc/sw-versions"

#
# Socket Paths
#
CONFIG_SWUPDATE_CONFIG_SOCKET_CTRL_PATH="/tmp/sockinstctrl"
CONFIG_SWUPDATE_CONFIG_SOCKET_PROGRESS_PATH="/tmp/swupdateprog"
CONFIG_SWUPDATE_CONFIG_SOCKET_REMOTE_HANDLER_DIRECTORY="/tmp/"
# end of Socket Paths

CONFIG_SWUPDATE_CONFIG_MTD=y
# CONFIG_SWUPDATE_CONFIG_LUA is not set
# CONFIG_SWUPDATE_CONFIG_FEATURE_SYSLOG is not set
# end of General Configuration

#
# Build Options
#
CONFIG_SWUPDATE_CONFIG_CROSS_COMPILE=""
CONFIG_SWUPDATE_CONFIG_SYSROOT=""
CONFIG_SWUPDATE_CONFIG_EXTRA_CFLAGS=""
CONFIG_SWUPDATE_CONFIG_EXTRA_LDFLAGS=""
CONFIG_SWUPDATE_CONFIG_EXTRA_LDLIBS=""
# end of Build Options

#
# Debugging Options
#
# CONFIG_SWUPDATE_CONFIG_DEBUG is not set
# CONFIG_SWUPDATE_CONFIG_WERROR is not set
# CONFIG_SWUPDATE_CONFIG_NOCLEANUP is not set
# end of Debugging Options
# end of Swupdate Settings

# CONFIG_SWUPDATE_CONFIG_BOOTLOADER_EBG is not set
CONFIG_SWUPDATE_CONFIG_UBOOT=y
# CONFIG_SWUPDATE_CONFIG_BOOTLOADER_NONE is not set
# CONFIG_SWUPDATE_CONFIG_BOOTLOADER_GRUB is not set
CONFIG_SWUPDATE_CONFIG_UBOOT_FWENV="/etc/fw_env.config"
# CONFIG_SWUPDATE_CONFIG_UBOOT_NEWAPI is not set
CONFIG_SWUPDATE_CONFIG_SSL_IMPL_NONE=y
# CONFIG_SWUPDATE_CONFIG_SSL_IMPL_OPENSSL is not set
# CONFIG_SWUPDATE_CONFIG_SSL_IMPL_MBEDTLS is not set
# CONFIG_SWUPDATE_CONFIG_DOWNLOAD is not set

#
# Hash checking needs an SSL implementation
#

#
# Image signature verification needs an SSL implementation
#

#
# Image encryption needs an SSL implementation
#
# CONFIG_SWUPDATE_CONFIG_SURICATTA is not set
# CONFIG_WEBSERVER is not set
CONFIG_SWUPDATE_CONFIG_GUNZIP=y
# CONFIG_SWUPDATE_CONFIG_ZSTD is not set

#
# Parser Features
#
CONFIG_SWUPDATE_CONFIG_LIBCONFIG=y
CONFIG_SWUPDATE_CONFIG_PARSERROOT=""
# CONFIG_SWUPDATE_CONFIG_JSON is not set
# CONFIG_SWUPDATE_CONFIG_SETSWDESCRIPTION is not set
# end of Parser Features

#
# Image Handlers
#
CONFIG_SWUPDATE_CONFIG_UBIVOL=y
# CONFIG_SWUPDATE_CONFIG_UBIATTACH is not set
# CONFIG_SWUPDATE_CONFIG_CFI is not set
# CONFIG_SWUPDATE_CONFIG_CFIHAMMING1 is not set
CONFIG_SWUPDATE_CONFIG_RAW=y
# CONFIG_SWUPDATE_CONFIG_RDIFFHANDLER is not set
CONFIG_SWUPDATE_CONFIG_SHELLSCRIPTHANDLER=y
# CONFIG_SWUPDATE_CONFIG_ARCHIVE is not set
# CONFIG_SWUPDATE_CONFIG_REMOTE_HANDLER is not set

#
# swuforward handler needs json-c and curl
#
CONFIG_SWUPDATE_CONFIG_BOOTLOADERHANDLER=y
CONFIG_SWUPDATE_CONFIG_AWBOOT_HANDLER=y
# CONFIG_SWUPDATE_CONFIG_SSBLSWITCH is not set
# CONFIG_SWUPDATE_CONFIG_UCFWHANDLER is not set
# end of Image Handlers

#
# Reduce size
#
# CONFIG_SWUPDATE_CONFIG_REMOVE_CLIENT is not set
# CONFIG_SWUPDATE_CONFIG_REMOVE_PROGRESS is not set
# CONFIG_SWUPDATE_CONFIG_REMOVE_AUTORUN is not set
# end of Reduce size
# end of System

#
# Testtools
#
# CONFIG_PACKAGE_tinatest is not set
# end of Testtools

#
# USB
#
# CONFIG_PACKAGE_MtpDaemon is not set
CONFIG_PACKAGE_adbd=y
# CONFIG_PACKAGE_adbd_auth_service is not set
# CONFIG_PACKAGE_libawadbauth is not set
# end of USB

#
# Vision
#
CONFIG_PACKAGE_camerademo=y
CONFIG_ENABLE_VIN_ISP=y
CONFIG_PACKAGE_libAWIspApi=y
# end of Vision

#
# Wireless
#
# CONFIG_PACKAGE_btmanager is not set
CONFIG_PACKAGE_wifimanager=y
CONFIG_PACKAGE_wifimanager-demo=y
# CONFIG_WMG_PROTOCOL_SOFTAP is not set
# CONFIG_WMG_PROTOCOL_BLE is not set
# CONFIG_WMG_PROTOCOL_XCONFIG is not set
# CONFIG_WMG_PROTOCOL_SOUNDWAVE is not set
CONFIG_PACKAGE_wirelesscommon=y
# end of Wireless
# end of Allwinner

#
# Boot Loaders
#
# end of Boot Loaders

#
# Development
#

#
# Libraries
#
# CONFIG_PACKAGE_libncurses-dev is not set
# CONFIG_PACKAGE_zlib-dev is not set
# end of Libraries

# CONFIG_PACKAGE_ar is not set
# CONFIG_PACKAGE_autoconf is not set
# CONFIG_PACKAGE_automake is not set
# CONFIG_PACKAGE_binutils is not set
# CONFIG_PACKAGE_diffutils is not set
# CONFIG_PACKAGE_gcc is not set
# CONFIG_PACKAGE_gdb is not set
# CONFIG_PACKAGE_gdbserver is not set
# CONFIG_PACKAGE_gitlab-runner is not set
# CONFIG_PACKAGE_libtool-bin is not set
# CONFIG_PACKAGE_lpc21isp is not set
# CONFIG_PACKAGE_lttng-tools is not set
# CONFIG_PACKAGE_m4 is not set
# CONFIG_PACKAGE_make is not set
# CONFIG_PACKAGE_meson is not set
# CONFIG_PACKAGE_ninja is not set
# CONFIG_PACKAGE_objdump is not set
# CONFIG_PACKAGE_packr is not set
# CONFIG_PACKAGE_patch is not set
# CONFIG_PACKAGE_pkg-config is not set
# CONFIG_PACKAGE_pkgconf is not set
# CONFIG_PACKAGE_trace-cmd is not set
# CONFIG_PACKAGE_trace-cmd-extra is not set
# end of Development

#
# Extra packages
#
# CONFIG_PACKAGE_jose is not set
# CONFIG_PACKAGE_libjose is not set
# CONFIG_PACKAGE_nginx is not set
# CONFIG_PACKAGE_nginx-mod-luci-ssl is not set
# CONFIG_PACKAGE_nginx-util is not set
# CONFIG_PACKAGE_tang is not set
# end of Extra packages

#
# Firmware
#

#
# ath10k Board-Specific Overrides
#
# end of ath10k Board-Specific Overrides

CONFIG_PACKAGE_aic8800-firmware=y
# CONFIG_PACKAGE_amd64-microcode is not set
# CONFIG_PACKAGE_amdgpu-firmware is not set
# CONFIG_PACKAGE_ar3k-firmware is not set
# CONFIG_PACKAGE_ath6k-firmware is not set
# CONFIG_PACKAGE_ath9k-htc-firmware is not set
# CONFIG_PACKAGE_b43legacy-firmware is not set
# CONFIG_PACKAGE_bnx2-firmware is not set
# CONFIG_PACKAGE_bnx2x-firmware is not set
CONFIG_FIRMWARE_PATH="/lib/firmware/"
CONFIG_XR829_USE_40M_SDD=y
# CONFIG_PACKAGE_brcmfmac-firmware-4329-sdio is not set
# CONFIG_PACKAGE_brcmfmac-firmware-43430-sdio-rpi-3b is not set
# CONFIG_PACKAGE_brcmfmac-firmware-43430-sdio-rpi-zero-w is not set
# CONFIG_PACKAGE_brcmfmac-firmware-43430a0-sdio is not set
# CONFIG_PACKAGE_brcmfmac-firmware-43455-sdio-rpi-3b-plus is not set
# CONFIG_PACKAGE_brcmfmac-firmware-43455-sdio-rpi-4b is not set
# CONFIG_PACKAGE_brcmfmac-firmware-43602a1-pcie is not set
# CONFIG_PACKAGE_brcmfmac-firmware-4366b1-pcie is not set
# CONFIG_PACKAGE_brcmfmac-firmware-4366c0-pcie is not set
# CONFIG_PACKAGE_brcmfmac-firmware-usb is not set
# CONFIG_PACKAGE_brcmsmac-firmware is not set
# CONFIG_PACKAGE_carl9170-firmware is not set
# CONFIG_PACKAGE_cypress-firmware-43012-sdio is not set
# CONFIG_PACKAGE_cypress-firmware-43340-sdio is not set
# CONFIG_PACKAGE_cypress-firmware-43362-sdio is not set
# CONFIG_PACKAGE_cypress-firmware-4339-sdio is not set
# CONFIG_PACKAGE_cypress-firmware-43430-sdio is not set
# CONFIG_PACKAGE_cypress-firmware-43455-sdio is not set
# CONFIG_PACKAGE_cypress-firmware-4354-sdio is not set
# CONFIG_PACKAGE_cypress-firmware-4356-pcie is not set
# CONFIG_PACKAGE_cypress-firmware-4356-sdio is not set
# CONFIG_PACKAGE_cypress-firmware-43570-pcie is not set
# CONFIG_PACKAGE_cypress-firmware-4373-sdio is not set
# CONFIG_PACKAGE_cypress-firmware-4373-usb is not set
# CONFIG_PACKAGE_cypress-firmware-54591-pcie is not set
# CONFIG_PACKAGE_e100-firmware is not set
# CONFIG_PACKAGE_edgeport-firmware is not set
# CONFIG_PACKAGE_eip197-mini-firmware is not set
# CONFIG_PACKAGE_ibt-firmware is not set
# CONFIG_PACKAGE_iwl3945-firmware is not set
# CONFIG_PACKAGE_iwl4965-firmware is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl100 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl1000 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl105 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl135 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl2000 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl2030 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl3160 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl3168 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl5000 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl5150 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl6000g2 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl6000g2a is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl6000g2b is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl6050 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl7260 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl7265 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl7265d is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl8260c is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl8265 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl9000 is not set
# CONFIG_PACKAGE_iwlwifi-firmware-iwl9260 is not set
# CONFIG_PACKAGE_libertas-sdio-firmware is not set
# CONFIG_PACKAGE_libertas-spi-firmware is not set
# CONFIG_PACKAGE_libertas-usb-firmware is not set
# CONFIG_PACKAGE_mt7601u-firmware is not set
# CONFIG_PACKAGE_mt7622bt-firmware is not set
# CONFIG_PACKAGE_mwifiex-pcie-firmware is not set
# CONFIG_PACKAGE_mwifiex-sdio-firmware is not set
# CONFIG_PACKAGE_mwl8k-firmware is not set
# CONFIG_PACKAGE_p54-pci-firmware is not set
# CONFIG_PACKAGE_p54-spi-firmware is not set
# CONFIG_PACKAGE_p54-usb-firmware is not set
# CONFIG_PACKAGE_prism54-firmware is not set
# CONFIG_PACKAGE_r8169-firmware is not set
# CONFIG_PACKAGE_r8723ds-firmware is not set
# CONFIG_PACKAGE_radeon-firmware is not set
# CONFIG_PACKAGE_rs9113-firmware is not set
# CONFIG_PACKAGE_rt2800-pci-firmware is not set
# CONFIG_PACKAGE_rt2800-usb-firmware is not set
# CONFIG_PACKAGE_rt61-pci-firmware is not set
# CONFIG_PACKAGE_rt73-usb-firmware is not set
# CONFIG_PACKAGE_rtl8188eu-firmware is not set
# CONFIG_PACKAGE_rtl8192ce-firmware is not set
# CONFIG_PACKAGE_rtl8192cu-firmware is not set
# CONFIG_PACKAGE_rtl8192de-firmware is not set
# CONFIG_PACKAGE_rtl8192eu-firmware is not set
# CONFIG_PACKAGE_rtl8192se-firmware is not set
# CONFIG_PACKAGE_rtl8192su-firmware is not set
# CONFIG_PACKAGE_rtl8723au-firmware is not set
# CONFIG_PACKAGE_rtl8723bu-firmware is not set
# CONFIG_PACKAGE_rtl8733bs-firmware is not set
# CONFIG_PACKAGE_rtl8821ae-firmware is not set
# CONFIG_PACKAGE_rtl8821cs-firmware is not set
# CONFIG_PACKAGE_rtl8822be-firmware is not set
# CONFIG_PACKAGE_rtl8822ce-firmware is not set
# CONFIG_PACKAGE_ti-3410-firmware is not set
# CONFIG_PACKAGE_ti-5052-firmware is not set
# CONFIG_PACKAGE_wil6210-firmware is not set
CONFIG_PACKAGE_wireless-regdb=y
# CONFIG_PACKAGE_wl12xx-firmware is not set
# CONFIG_PACKAGE_wl18xx-firmware is not set
# CONFIG_PACKAGE_xr819-firmware is not set
# CONFIG_PACKAGE_xr819a-firmware is not set
# CONFIG_PACKAGE_xr819s-firmware is not set
CONFIG_PACKAGE_xr829-firmware=y
# end of Firmware

#
# Fonts
#

#
# DejaVu
#
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuMathTeXGyre is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSans is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSans-Bold is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSans-BoldOblique is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSans-ExtraLight is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSans-Oblique is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSansCondensed is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSansCondensed-Bold is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSansCondensed-BoldOblique is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSansCondensed-Oblique is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSansMono is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSansMono-Bold is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSansMono-BoldOblique is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSansMono-Oblique is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSerif is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSerif-Bold is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSerif-BoldItalic is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSerif-Italic is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSerifCondensed is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSerifCondensed-Bold is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSerifCondensed-BoldItalic is not set
# CONFIG_PACKAGE_dejavu-fonts-ttf-DejaVuSerifCondensed-Italic is not set
# end of DejaVu
# end of Fonts

#
# Gui
#

#
# Directfb
#
# CONFIG_PACKAGE_directfb is not set
# CONFIG_PACKAGE_directfb-examples is not set
# end of Directfb

#
# Flutter
#
# end of Flutter

#
# Littlevgl
#
CONFIG_PACKAGE_lv_examples=y
CONFIG_LVGL8_USE_SUNXIFB_DOUBLE_BUFFER=y
CONFIG_LVGL8_USE_SUNXIFB_CACHE=y
CONFIG_LVGL8_USE_SUNXIFB_G2D=y
CONFIG_LVGL8_USE_SUNXIFB_G2D_ROTATE=y
# CONFIG_LVGL8_USE_FREETYPE is not set
# CONFIG_PACKAGE_lv_g2d_test is not set
# CONFIG_PACKAGE_lv_monitor is not set
# end of Littlevgl

#
# Minigui
#
# CONFIG_PACKAGE_libmg3d is not set
# CONFIG_PACKAGE_libmgeff is not set
# CONFIG_PACKAGE_libmgi is not set
# CONFIG_PACKAGE_libmgncs is not set
# CONFIG_PACKAGE_libmgp is not set
# CONFIG_PACKAGE_libmgplus is not set
# CONFIG_PACKAGE_libmgutils is not set
# CONFIG_PACKAGE_libminigui-gpl is not set
# CONFIG_PACKAGE_mg-samples is not set
# CONFIG_PACKAGE_mgncs4touch is not set
# CONFIG_PACKAGE_minigui-g2d-test is not set
# CONFIG_PACKAGE_minigui-res-be is not set
# CONFIG_PACKAGE_multimedia-test is not set
# CONFIG_PACKAGE_smart-music-player is not set
# CONFIG_PACKAGE_washing-machine is not set
# end of Minigui

#
# Qt
#
# CONFIG_PACKAGE_qt-easing is not set
# CONFIG_PACKAGE_qt-textures is not set
# CONFIG_PACKAGE_qt-washing-machine is not set
# CONFIG_PACKAGE_qt5-core is not set
CONFIG_QT5_USE_PREBUILT=y
# end of Qt
# end of Gui

#
# Kernel modules
#

#
# Block Devices
#
# CONFIG_PACKAGE_kmod-aoe is not set
# CONFIG_PACKAGE_kmod-block2mtd is not set
# CONFIG_PACKAGE_kmod-dax is not set
# CONFIG_PACKAGE_kmod-dm is not set
# CONFIG_PACKAGE_kmod-dm-raid is not set
# CONFIG_PACKAGE_kmod-iosched-bfq is not set
# CONFIG_PACKAGE_kmod-iscsi-initiator is not set
# CONFIG_PACKAGE_kmod-loop is not set
# CONFIG_PACKAGE_kmod-md-mod is not set
# CONFIG_PACKAGE_kmod-nbd is not set
# CONFIG_PACKAGE_kmod-scsi-cdrom is not set
# CONFIG_PACKAGE_kmod-scsi-core is not set
# CONFIG_PACKAGE_kmod-scsi-generic is not set
# CONFIG_PACKAGE_kmod-scsi-tape is not set
# end of Block Devices

#
# CAN Support
#
# CONFIG_PACKAGE_kmod-can is not set
# end of CAN Support

#
# Cryptographic API modules
#
# CONFIG_PACKAGE_kmod-crypto-aead is not set
# CONFIG_PACKAGE_kmod-crypto-arc4 is not set
# CONFIG_PACKAGE_kmod-crypto-authenc is not set
# CONFIG_PACKAGE_kmod-crypto-cbc is not set
# CONFIG_PACKAGE_kmod-crypto-ccm is not set
# CONFIG_PACKAGE_kmod-crypto-cmac is not set
# CONFIG_PACKAGE_kmod-crypto-crc32c is not set
# CONFIG_PACKAGE_kmod-crypto-ctr is not set
# CONFIG_PACKAGE_kmod-crypto-cts is not set
# CONFIG_PACKAGE_kmod-crypto-deflate is not set
# CONFIG_PACKAGE_kmod-crypto-des is not set
# CONFIG_PACKAGE_kmod-crypto-ecb is not set
# CONFIG_PACKAGE_kmod-crypto-ecdh is not set
# CONFIG_PACKAGE_kmod-crypto-echainiv is not set
# CONFIG_PACKAGE_kmod-crypto-fcrypt is not set
# CONFIG_PACKAGE_kmod-crypto-gcm is not set
# CONFIG_PACKAGE_kmod-crypto-gf128 is not set
# CONFIG_PACKAGE_kmod-crypto-ghash is not set
# CONFIG_PACKAGE_kmod-crypto-hash is not set
# CONFIG_PACKAGE_kmod-crypto-hmac is not set
# CONFIG_PACKAGE_kmod-crypto-hw-geode is not set
# CONFIG_PACKAGE_kmod-crypto-hw-hifn-795x is not set
# CONFIG_PACKAGE_kmod-crypto-hw-padlock is not set
# CONFIG_PACKAGE_kmod-crypto-hw-talitos is not set
# CONFIG_PACKAGE_kmod-crypto-kpp is not set
# CONFIG_PACKAGE_kmod-crypto-manager is not set
# CONFIG_PACKAGE_kmod-crypto-md4 is not set
# CONFIG_PACKAGE_kmod-crypto-md5 is not set
# CONFIG_PACKAGE_kmod-crypto-michael-mic is not set
# CONFIG_PACKAGE_kmod-crypto-misc is not set
# CONFIG_PACKAGE_kmod-crypto-null is not set
# CONFIG_PACKAGE_kmod-crypto-pcbc is not set
# CONFIG_PACKAGE_kmod-crypto-pcompress is not set
# CONFIG_PACKAGE_kmod-crypto-rmd160 is not set
# CONFIG_PACKAGE_kmod-crypto-rng is not set
# CONFIG_PACKAGE_kmod-crypto-seqiv is not set
# CONFIG_PACKAGE_kmod-crypto-sha1 is not set
# CONFIG_PACKAGE_kmod-crypto-sha256 is not set
# CONFIG_PACKAGE_kmod-crypto-sha512 is not set
# CONFIG_PACKAGE_kmod-crypto-test is not set
# CONFIG_PACKAGE_kmod-crypto-user is not set
# CONFIG_PACKAGE_kmod-crypto-wq is not set
# CONFIG_PACKAGE_kmod-crypto-xcbc is not set
# CONFIG_PACKAGE_kmod-crypto-xts is not set
# CONFIG_PACKAGE_kmod-cryptodev is not set
# end of Cryptographic API modules

#
# Filesystems
#
# CONFIG_PACKAGE_kmod-fs-afs is not set
# CONFIG_PACKAGE_kmod-fs-antfs is not set
# CONFIG_PACKAGE_kmod-fs-autofs4 is not set
# CONFIG_PACKAGE_kmod-fs-btrfs is not set
# CONFIG_PACKAGE_kmod-fs-cifs is not set
# CONFIG_PACKAGE_kmod-fs-configfs is not set
# CONFIG_PACKAGE_kmod-fs-cramfs is not set
# CONFIG_PACKAGE_kmod-fs-exfat is not set
# CONFIG_PACKAGE_kmod-fs-exportfs is not set
# CONFIG_PACKAGE_kmod-fs-ext4 is not set
# CONFIG_PACKAGE_kmod-fs-f2fs is not set
# CONFIG_PACKAGE_kmod-fs-fscache is not set
# CONFIG_PACKAGE_kmod-fs-hfs is not set
# CONFIG_PACKAGE_kmod-fs-hfsplus is not set
# CONFIG_PACKAGE_kmod-fs-isofs is not set
# CONFIG_PACKAGE_kmod-fs-jfs is not set
# CONFIG_PACKAGE_kmod-fs-ksmbd is not set
# CONFIG_PACKAGE_kmod-fs-minix is not set
# CONFIG_PACKAGE_kmod-fs-msdos is not set
# CONFIG_PACKAGE_kmod-fs-nfs is not set
# CONFIG_PACKAGE_kmod-fs-nfs-common is not set
# CONFIG_PACKAGE_kmod-fs-nfs-common-rpcsec is not set
# CONFIG_PACKAGE_kmod-fs-nfs-v3 is not set
# CONFIG_PACKAGE_kmod-fs-nfs-v4 is not set
# CONFIG_PACKAGE_kmod-fs-nfsd is not set
# CONFIG_PACKAGE_kmod-fs-ntfs is not set
# CONFIG_PACKAGE_kmod-fs-reiserfs is not set
# CONFIG_PACKAGE_kmod-fs-squashfs is not set
# CONFIG_PACKAGE_kmod-fs-udf is not set
# CONFIG_PACKAGE_kmod-fs-vfat is not set
# CONFIG_PACKAGE_kmod-fs-xfs is not set
# CONFIG_PACKAGE_kmod-fuse is not set
# end of Filesystems

#
# FireWire support
#
# end of FireWire support

#
# Hardware Monitoring Support
#
# CONFIG_PACKAGE_kmod-gl-mifi-mcu is not set
# CONFIG_PACKAGE_kmod-hwmon-ad7418 is not set
# CONFIG_PACKAGE_kmod-hwmon-adcxx is not set
# CONFIG_PACKAGE_kmod-hwmon-ads1015 is not set
# CONFIG_PACKAGE_kmod-hwmon-adt7410 is not set
# CONFIG_PACKAGE_kmod-hwmon-adt7475 is not set
# CONFIG_PACKAGE_kmod-hwmon-core is not set
# CONFIG_PACKAGE_kmod-hwmon-dme1737 is not set
# CONFIG_PACKAGE_kmod-hwmon-gpiofan is not set
# CONFIG_PACKAGE_kmod-hwmon-ina209 is not set
# CONFIG_PACKAGE_kmod-hwmon-ina2xx is not set
# CONFIG_PACKAGE_kmod-hwmon-it87 is not set
# CONFIG_PACKAGE_kmod-hwmon-lm63 is not set
# CONFIG_PACKAGE_kmod-hwmon-lm75 is not set
# CONFIG_PACKAGE_kmod-hwmon-lm77 is not set
# CONFIG_PACKAGE_kmod-hwmon-lm85 is not set
# CONFIG_PACKAGE_kmod-hwmon-lm90 is not set
# CONFIG_PACKAGE_kmod-hwmon-lm92 is not set
# CONFIG_PACKAGE_kmod-hwmon-lm95241 is not set
# CONFIG_PACKAGE_kmod-hwmon-ltc4151 is not set
# CONFIG_PACKAGE_kmod-hwmon-mcp3021 is not set
# CONFIG_PACKAGE_kmod-hwmon-pwmfan is not set
# CONFIG_PACKAGE_kmod-hwmon-sch5627 is not set
# CONFIG_PACKAGE_kmod-hwmon-sht21 is not set
# CONFIG_PACKAGE_kmod-hwmon-tmp102 is not set
# CONFIG_PACKAGE_kmod-hwmon-tmp103 is not set
# CONFIG_PACKAGE_kmod-hwmon-tmp421 is not set
# CONFIG_PACKAGE_kmod-hwmon-vid is not set
# CONFIG_PACKAGE_kmod-hwmon-w83793 is not set
# CONFIG_PACKAGE_kmod-pmbus-core is not set
# CONFIG_PACKAGE_kmod-pmbus-zl6100 is not set
# end of Hardware Monitoring Support

#
# I2C support
#
# CONFIG_PACKAGE_kmod-i2c-algo-bit is not set
# CONFIG_PACKAGE_kmod-i2c-algo-pca is not set
# CONFIG_PACKAGE_kmod-i2c-algo-pcf is not set
# CONFIG_PACKAGE_kmod-i2c-core is not set
# CONFIG_PACKAGE_kmod-i2c-gpio is not set
# CONFIG_PACKAGE_kmod-i2c-mux is not set
# CONFIG_PACKAGE_kmod-i2c-mux-gpio is not set
# CONFIG_PACKAGE_kmod-i2c-mux-pca9541 is not set
# CONFIG_PACKAGE_kmod-i2c-mux-pca954x is not set
# CONFIG_PACKAGE_kmod-i2c-pxa is not set
# CONFIG_PACKAGE_kmod-i2c-smbus is not set
# CONFIG_PACKAGE_kmod-i2c-tiny-usb is not set
# end of I2C support

#
# Industrial I/O Modules
#
# CONFIG_PACKAGE_kmod-iio-ad799x is not set
# CONFIG_PACKAGE_kmod-iio-am2315 is not set
# CONFIG_PACKAGE_kmod-iio-bh1750 is not set
# CONFIG_PACKAGE_kmod-iio-bme680 is not set
# CONFIG_PACKAGE_kmod-iio-bme680-i2c is not set
# CONFIG_PACKAGE_kmod-iio-bme680-spi is not set
# CONFIG_PACKAGE_kmod-iio-bmp280 is not set
# CONFIG_PACKAGE_kmod-iio-bmp280-i2c is not set
# CONFIG_PACKAGE_kmod-iio-bmp280-spi is not set
# CONFIG_PACKAGE_kmod-iio-ccs811 is not set
# CONFIG_PACKAGE_kmod-iio-core is not set
# CONFIG_PACKAGE_kmod-iio-fxas21002c is not set
# CONFIG_PACKAGE_kmod-iio-fxas21002c-i2c is not set
# CONFIG_PACKAGE_kmod-iio-fxas21002c-spi is not set
# CONFIG_PACKAGE_kmod-iio-fxos8700 is not set
# CONFIG_PACKAGE_kmod-iio-fxos8700-i2c is not set
# CONFIG_PACKAGE_kmod-iio-fxos8700-spi is not set
# CONFIG_PACKAGE_kmod-iio-hmc5843 is not set
# CONFIG_PACKAGE_kmod-iio-htu21 is not set
# CONFIG_PACKAGE_kmod-iio-kfifo-buf is not set
# CONFIG_PACKAGE_kmod-iio-lsm6dsx is not set
# CONFIG_PACKAGE_kmod-iio-lsm6dsx-i2c is not set
# CONFIG_PACKAGE_kmod-iio-lsm6dsx-spi is not set
# CONFIG_PACKAGE_kmod-iio-si7020 is not set
# CONFIG_PACKAGE_kmod-iio-sps30 is not set
# CONFIG_PACKAGE_kmod-iio-st_accel is not set
# CONFIG_PACKAGE_kmod-iio-st_accel-i2c is not set
# CONFIG_PACKAGE_kmod-iio-st_accel-spi is not set
# CONFIG_PACKAGE_kmod-iio-tsl4531 is not set
# CONFIG_PACKAGE_kmod-industrialio-triggered-buffer is not set
# end of Industrial I/O Modules

#
# Input modules
#
# CONFIG_PACKAGE_kmod-hid is not set
# CONFIG_PACKAGE_kmod-hid-generic is not set
CONFIG_PACKAGE_kmod-input-core=y
CONFIG_PACKAGE_kmod-input-evdev=y
# CONFIG_PACKAGE_kmod-input-gpio-encoder is not set
# CONFIG_PACKAGE_kmod-input-gpio-keys is not set
# CONFIG_PACKAGE_kmod-input-gpio-keys-polled is not set
# CONFIG_PACKAGE_kmod-input-joydev is not set
# CONFIG_PACKAGE_kmod-input-matrixkmap is not set
# CONFIG_PACKAGE_kmod-input-polldev is not set
# CONFIG_PACKAGE_kmod-input-touchscreen-ads7846 is not set
# CONFIG_PACKAGE_kmod-input-uinput is not set
# end of Input modules

#
# LED modules
#
# CONFIG_PACKAGE_kmod-leds-gpio is not set
# CONFIG_PACKAGE_kmod-leds-pca963x is not set
# CONFIG_PACKAGE_kmod-leds-uleds is not set
# CONFIG_PACKAGE_kmod-ledtrig-activity is not set
# CONFIG_PACKAGE_kmod-ledtrig-gpio is not set
# CONFIG_PACKAGE_kmod-ledtrig-oneshot is not set
# CONFIG_PACKAGE_kmod-ledtrig-pattern is not set
# CONFIG_PACKAGE_kmod-ledtrig-transient is not set
# end of LED modules

#
# Libraries
#
# CONFIG_PACKAGE_kmod-lib-cordic is not set
# CONFIG_PACKAGE_kmod-lib-crc-ccitt is not set
# CONFIG_PACKAGE_kmod-lib-crc-itu-t is not set
# CONFIG_PACKAGE_kmod-lib-crc16 is not set
# CONFIG_PACKAGE_kmod-lib-crc32c is not set
# CONFIG_PACKAGE_kmod-lib-crc7 is not set
# CONFIG_PACKAGE_kmod-lib-crc8 is not set
# CONFIG_PACKAGE_kmod-lib-lz4 is not set
# CONFIG_PACKAGE_kmod-lib-textsearch is not set
# CONFIG_PACKAGE_kmod-lib-zstd is not set
# end of Libraries

#
# Native Language Support
#
# CONFIG_PACKAGE_kmod-nls-base is not set
# CONFIG_PACKAGE_kmod-nls-cp1250 is not set
# CONFIG_PACKAGE_kmod-nls-cp1251 is not set
# CONFIG_PACKAGE_kmod-nls-cp437 is not set
# CONFIG_PACKAGE_kmod-nls-cp775 is not set
# CONFIG_PACKAGE_kmod-nls-cp850 is not set
# CONFIG_PACKAGE_kmod-nls-cp852 is not set
# CONFIG_PACKAGE_kmod-nls-cp862 is not set
# CONFIG_PACKAGE_kmod-nls-cp864 is not set
# CONFIG_PACKAGE_kmod-nls-cp866 is not set
# CONFIG_PACKAGE_kmod-nls-cp932 is not set
# CONFIG_PACKAGE_kmod-nls-cp936 is not set
# CONFIG_PACKAGE_kmod-nls-cp950 is not set
# CONFIG_PACKAGE_kmod-nls-iso8859-1 is not set
# CONFIG_PACKAGE_kmod-nls-iso8859-13 is not set
# CONFIG_PACKAGE_kmod-nls-iso8859-15 is not set
# CONFIG_PACKAGE_kmod-nls-iso8859-2 is not set
# CONFIG_PACKAGE_kmod-nls-iso8859-6 is not set
# CONFIG_PACKAGE_kmod-nls-iso8859-8 is not set
# CONFIG_PACKAGE_kmod-nls-koi8r is not set
# CONFIG_PACKAGE_kmod-nls-utf8 is not set
# end of Native Language Support

#
# Netfilter Extensions
#
# CONFIG_PACKAGE_kmod-arptables is not set
# CONFIG_PACKAGE_kmod-br-netfilter is not set
# CONFIG_PACKAGE_kmod-ebtables is not set
# CONFIG_PACKAGE_kmod-ebtables-ipv4 is not set
# CONFIG_PACKAGE_kmod-ebtables-ipv6 is not set
# CONFIG_PACKAGE_kmod-ebtables-watchers is not set
# CONFIG_PACKAGE_kmod-ip6tables is not set
# CONFIG_PACKAGE_kmod-ip6tables-extra is not set
# CONFIG_PACKAGE_kmod-ipt-account is not set
# CONFIG_PACKAGE_kmod-ipt-chaos is not set
# CONFIG_PACKAGE_kmod-ipt-checksum is not set
# CONFIG_PACKAGE_kmod-ipt-cluster is not set
# CONFIG_PACKAGE_kmod-ipt-clusterip is not set
# CONFIG_PACKAGE_kmod-ipt-compat-xtables is not set
# CONFIG_PACKAGE_kmod-ipt-condition is not set
# CONFIG_PACKAGE_kmod-ipt-conntrack is not set
# CONFIG_PACKAGE_kmod-ipt-conntrack-extra is not set
# CONFIG_PACKAGE_kmod-ipt-conntrack-label is not set
# CONFIG_PACKAGE_kmod-ipt-coova is not set
CONFIG_PACKAGE_kmod-ipt-core=y
# CONFIG_PACKAGE_kmod-ipt-debug is not set
# CONFIG_PACKAGE_kmod-ipt-delude is not set
# CONFIG_PACKAGE_kmod-ipt-dhcpmac is not set
# CONFIG_PACKAGE_kmod-ipt-dnetmap is not set
# CONFIG_PACKAGE_kmod-ipt-extra is not set
# CONFIG_PACKAGE_kmod-ipt-filter is not set
# CONFIG_PACKAGE_kmod-ipt-fuzzy is not set
# CONFIG_PACKAGE_kmod-ipt-geoip is not set
# CONFIG_PACKAGE_kmod-ipt-hashlimit is not set
# CONFIG_PACKAGE_kmod-ipt-iface is not set
# CONFIG_PACKAGE_kmod-ipt-ipmark is not set
# CONFIG_PACKAGE_kmod-ipt-ipopt is not set
# CONFIG_PACKAGE_kmod-ipt-ipp2p is not set
# CONFIG_PACKAGE_kmod-ipt-iprange is not set
# CONFIG_PACKAGE_kmod-ipt-ipsec is not set
# CONFIG_PACKAGE_kmod-ipt-ipset is not set
# CONFIG_PACKAGE_kmod-ipt-ipv4options is not set
# CONFIG_PACKAGE_kmod-ipt-led is not set
# CONFIG_PACKAGE_kmod-ipt-length2 is not set
# CONFIG_PACKAGE_kmod-ipt-logmark is not set
# CONFIG_PACKAGE_kmod-ipt-lscan is not set
# CONFIG_PACKAGE_kmod-ipt-lua is not set
# CONFIG_PACKAGE_kmod-ipt-nat is not set
# CONFIG_PACKAGE_kmod-ipt-nat-extra is not set
# CONFIG_PACKAGE_kmod-ipt-nat6 is not set
# CONFIG_PACKAGE_kmod-ipt-nathelper-rtsp is not set
# CONFIG_PACKAGE_kmod-ipt-nflog is not set
# CONFIG_PACKAGE_kmod-ipt-nfqueue is not set
# CONFIG_PACKAGE_kmod-ipt-offload is not set
# CONFIG_PACKAGE_kmod-ipt-physdev is not set
# CONFIG_PACKAGE_kmod-ipt-proto is not set
# CONFIG_PACKAGE_kmod-ipt-psd is not set
# CONFIG_PACKAGE_kmod-ipt-quota2 is not set
# CONFIG_PACKAGE_kmod-ipt-raw is not set
# CONFIG_PACKAGE_kmod-ipt-raw6 is not set
# CONFIG_PACKAGE_kmod-ipt-rpfilter is not set
# CONFIG_PACKAGE_kmod-ipt-sysrq is not set
# CONFIG_PACKAGE_kmod-ipt-tarpit is not set
# CONFIG_PACKAGE_kmod-ipt-tee is not set
# CONFIG_PACKAGE_kmod-ipt-tproxy is not set
# CONFIG_PACKAGE_kmod-ipt-u32 is not set
# CONFIG_PACKAGE_kmod-ipt-ulog is not set
# CONFIG_PACKAGE_kmod-netatop is not set
# CONFIG_PACKAGE_kmod-nf-conntrack is not set
# CONFIG_PACKAGE_kmod-nf-conntrack-netlink is not set
# CONFIG_PACKAGE_kmod-nf-conntrack6 is not set
# CONFIG_PACKAGE_kmod-nf-flow is not set
CONFIG_PACKAGE_kmod-nf-ipt=y
# CONFIG_PACKAGE_kmod-nf-ipt6 is not set
# CONFIG_PACKAGE_kmod-nf-ipvs is not set
# CONFIG_PACKAGE_kmod-nf-nat is not set
# CONFIG_PACKAGE_kmod-nf-nat6 is not set
# CONFIG_PACKAGE_kmod-nf-nathelper is not set
# CONFIG_PACKAGE_kmod-nf-nathelper-extra is not set
CONFIG_PACKAGE_kmod-nf-reject=y
# CONFIG_PACKAGE_kmod-nf-reject6 is not set
# CONFIG_PACKAGE_kmod-nfnetlink is not set
# CONFIG_PACKAGE_kmod-nfnetlink-log is not set
# CONFIG_PACKAGE_kmod-nfnetlink-queue is not set
# CONFIG_PACKAGE_kmod-nft-arp is not set
# CONFIG_PACKAGE_kmod-nft-bridge is not set
# CONFIG_PACKAGE_kmod-nft-core is not set
# CONFIG_PACKAGE_kmod-nft-fib is not set
# CONFIG_PACKAGE_kmod-nft-nat is not set
# CONFIG_PACKAGE_kmod-nft-nat6 is not set
# CONFIG_PACKAGE_kmod-nft-netdev is not set
# CONFIG_PACKAGE_kmod-nft-offload is not set
# CONFIG_PACKAGE_kmod-nft-queue is not set
# end of Netfilter Extensions

#
# Network Devices
#
# CONFIG_PACKAGE_kmod-dm9000 is not set
# CONFIG_PACKAGE_kmod-dummy is not set
# CONFIG_PACKAGE_kmod-ethoc is not set
# CONFIG_PACKAGE_kmod-hfcmulti is not set
# CONFIG_PACKAGE_kmod-hfcpci is not set
# CONFIG_PACKAGE_kmod-ifb is not set
# CONFIG_PACKAGE_kmod-libphy is not set
# CONFIG_PACKAGE_kmod-macvlan is not set
# CONFIG_PACKAGE_kmod-mdio-gpio is not set
# CONFIG_PACKAGE_kmod-mii is not set
# CONFIG_PACKAGE_kmod-of-mdio is not set
# CONFIG_PACKAGE_kmod-phy-bcm84881 is not set
# CONFIG_PACKAGE_kmod-phy-broadcom is not set
# CONFIG_PACKAGE_kmod-phy-realtek is not set
# CONFIG_PACKAGE_kmod-phylink is not set
# CONFIG_PACKAGE_kmod-sfp is not set
# CONFIG_PACKAGE_kmod-siit is not set
# CONFIG_PACKAGE_kmod-spi-ks8995 is not set
# CONFIG_PACKAGE_kmod-swconfig is not set
# CONFIG_PACKAGE_kmod-switch-bcm53xx is not set
# CONFIG_PACKAGE_kmod-switch-bcm53xx-mdio is not set
# CONFIG_PACKAGE_kmod-switch-ip17xx is not set
# CONFIG_PACKAGE_kmod-switch-rtl8306 is not set
# CONFIG_PACKAGE_kmod-switch-rtl8366-smi is not set
# CONFIG_PACKAGE_kmod-switch-rtl8366rb is not set
# CONFIG_PACKAGE_kmod-switch-rtl8366s is not set
# CONFIG_PACKAGE_kmod-switch-rtl8367b is not set
# CONFIG_PACKAGE_kmod-tg3 is not set
# end of Network Devices

#
# Network Support
#
# CONFIG_PACKAGE_kmod-atm is not set
# CONFIG_PACKAGE_kmod-ax25 is not set
# CONFIG_PACKAGE_kmod-bonding is not set
# CONFIG_PACKAGE_kmod-bpf-test is not set
# CONFIG_PACKAGE_kmod-dnsresolver is not set
# CONFIG_PACKAGE_kmod-fou is not set
# CONFIG_PACKAGE_kmod-fou6 is not set
# CONFIG_PACKAGE_kmod-geneve is not set
# CONFIG_PACKAGE_kmod-gre is not set
# CONFIG_PACKAGE_kmod-gre6 is not set
# CONFIG_PACKAGE_kmod-ip6-tunnel is not set
# CONFIG_PACKAGE_kmod-ipip is not set
# CONFIG_PACKAGE_kmod-ipsec is not set
# CONFIG_PACKAGE_kmod-iptunnel6 is not set
# CONFIG_PACKAGE_kmod-isdn4linux is not set
# CONFIG_PACKAGE_kmod-jool is not set
# CONFIG_PACKAGE_kmod-l2tp is not set
# CONFIG_PACKAGE_kmod-l2tp-eth is not set
# CONFIG_PACKAGE_kmod-l2tp-ip is not set
# CONFIG_PACKAGE_kmod-macremapper is not set
# CONFIG_PACKAGE_kmod-macsec is not set
# CONFIG_PACKAGE_kmod-misdn is not set
# CONFIG_PACKAGE_kmod-mpls is not set
# CONFIG_PACKAGE_kmod-nat46 is not set
# CONFIG_PACKAGE_kmod-netem is not set
# CONFIG_PACKAGE_kmod-netlink-diag is not set
# CONFIG_PACKAGE_kmod-nlmon is not set
# CONFIG_PACKAGE_kmod-nsh is not set
# CONFIG_PACKAGE_kmod-openvswitch is not set
# CONFIG_PACKAGE_kmod-openvswitch-geneve is not set
# CONFIG_PACKAGE_kmod-openvswitch-geneve-intree is not set
# CONFIG_PACKAGE_kmod-openvswitch-gre is not set
# CONFIG_PACKAGE_kmod-openvswitch-gre-intree is not set
# CONFIG_PACKAGE_kmod-openvswitch-intree is not set
# CONFIG_PACKAGE_kmod-openvswitch-lisp-intree is not set
# CONFIG_PACKAGE_kmod-openvswitch-stt-intree is not set
# CONFIG_PACKAGE_kmod-openvswitch-vxlan is not set
# CONFIG_PACKAGE_kmod-openvswitch-vxlan-intree is not set
# CONFIG_PACKAGE_kmod-pf-ring is not set
# CONFIG_PACKAGE_kmod-pktgen is not set
# CONFIG_PACKAGE_kmod-ppp is not set
# CONFIG_PACKAGE_kmod-sched is not set
# CONFIG_PACKAGE_kmod-sched-act-vlan is not set
# CONFIG_PACKAGE_kmod-sched-bpf is not set
# CONFIG_PACKAGE_kmod-sched-cake is not set
# CONFIG_PACKAGE_kmod-sched-connmark is not set
# CONFIG_PACKAGE_kmod-sched-core is not set
# CONFIG_PACKAGE_kmod-sched-ctinfo is not set
# CONFIG_PACKAGE_kmod-sched-flower is not set
# CONFIG_PACKAGE_kmod-sched-ipset is not set
# CONFIG_PACKAGE_kmod-sched-mqprio is not set
# CONFIG_PACKAGE_kmod-sctp is not set
# CONFIG_PACKAGE_kmod-sit is not set
# CONFIG_PACKAGE_kmod-slip is not set
# CONFIG_PACKAGE_kmod-tcp-bbr is not set
# CONFIG_PACKAGE_kmod-tcp-hybla is not set
# CONFIG_PACKAGE_kmod-trelay is not set
# CONFIG_PACKAGE_kmod-tun is not set
# CONFIG_PACKAGE_kmod-veth is not set
# CONFIG_PACKAGE_kmod-vxlan is not set
# CONFIG_PACKAGE_kmod-wireguard is not set
# end of Network Support

#
# Other modules
#
# CONFIG_PACKAGE_kmod-6lowpan is not set
# CONFIG_PACKAGE_kmod-ath3k is not set
# CONFIG_PACKAGE_kmod-bluetooth is not set
# CONFIG_PACKAGE_kmod-bluetooth-6lowpan is not set
# CONFIG_PACKAGE_kmod-btmrvl is not set
# CONFIG_PACKAGE_kmod-button-hotplug is not set
# CONFIG_PACKAGE_kmod-echo is not set
# CONFIG_PACKAGE_kmod-eeprom-93cx6 is not set
# CONFIG_PACKAGE_kmod-eeprom-at24 is not set
# CONFIG_PACKAGE_kmod-eeprom-at25 is not set
# CONFIG_PACKAGE_kmod-gpio-beeper is not set
# CONFIG_PACKAGE_kmod-gpio-button-hotplug is not set
# CONFIG_PACKAGE_kmod-gpio-dev is not set
# CONFIG_PACKAGE_kmod-gpio-mcp23s08 is not set
# CONFIG_PACKAGE_kmod-gpio-nxp-74hc164 is not set
# CONFIG_PACKAGE_kmod-gpio-pca953x is not set
# CONFIG_PACKAGE_kmod-gpio-pcf857x is not set
# CONFIG_PACKAGE_kmod-ikconfig is not set
# CONFIG_PACKAGE_kmod-it87-wdt is not set
# CONFIG_PACKAGE_kmod-itco-wdt is not set
# CONFIG_PACKAGE_kmod-keys-encrypted is not set
# CONFIG_PACKAGE_kmod-keys-trusted is not set
# CONFIG_PACKAGE_kmod-lp is not set
# CONFIG_PACKAGE_kmod-miscellaneous is not set
# CONFIG_PACKAGE_kmod-mmc is not set
# CONFIG_PACKAGE_kmod-mtd-rw is not set
# CONFIG_PACKAGE_kmod-mtdoops is not set
# CONFIG_PACKAGE_kmod-mtdram is not set
# CONFIG_PACKAGE_kmod-mtdtests is not set
# CONFIG_PACKAGE_kmod-parport-pc is not set
# CONFIG_PACKAGE_kmod-ppdev is not set
# CONFIG_PACKAGE_kmod-pps is not set
# CONFIG_PACKAGE_kmod-pps-gpio is not set
# CONFIG_PACKAGE_kmod-pps-ldisc is not set
# CONFIG_PACKAGE_kmod-ptp is not set
# CONFIG_PACKAGE_kmod-random-core is not set
# CONFIG_PACKAGE_kmod-rtc-ds1307 is not set
# CONFIG_PACKAGE_kmod-rtc-ds1374 is not set
# CONFIG_PACKAGE_kmod-rtc-ds1672 is not set
# CONFIG_PACKAGE_kmod-rtc-em3027 is not set
# CONFIG_PACKAGE_kmod-rtc-isl1208 is not set
# CONFIG_PACKAGE_kmod-rtc-pcf2123 is not set
# CONFIG_PACKAGE_kmod-rtc-pcf2127 is not set
# CONFIG_PACKAGE_kmod-rtc-pcf8563 is not set
# CONFIG_PACKAGE_kmod-rtc-pt7c4338 is not set
# CONFIG_PACKAGE_kmod-rtc-rs5c372a is not set
# CONFIG_PACKAGE_kmod-rtc-rx8025 is not set
# CONFIG_PACKAGE_kmod-rtc-s35390a is not set
# CONFIG_PACKAGE_kmod-sdhci is not set
# CONFIG_PACKAGE_kmod-serial-8250 is not set
# CONFIG_PACKAGE_kmod-serial-8250-exar is not set
# CONFIG_PACKAGE_kmod-softdog is not set
# CONFIG_PACKAGE_kmod-tpm is not set
# CONFIG_PACKAGE_kmod-tpm-i2c-atmel is not set
# CONFIG_PACKAGE_kmod-tpm-i2c-infineon is not set
# CONFIG_PACKAGE_kmod-w83627hf-wdt is not set
# CONFIG_PACKAGE_kmod-zram is not set
# end of Other modules

#
# PCMCIA support
#
# end of PCMCIA support

#
# SPI Support
#
# CONFIG_PACKAGE_kmod-mmc-spi is not set
# CONFIG_PACKAGE_kmod-spi-bitbang is not set
# CONFIG_PACKAGE_kmod-spi-dev is not set
# CONFIG_PACKAGE_kmod-spi-gpio is not set
# end of SPI Support

#
# Sound Support
#
# CONFIG_PACKAGE_kmod-sound-core is not set
# end of Sound Support

#
# USB Support
#
# CONFIG_PACKAGE_kmod-chaoskey is not set
# CONFIG_PACKAGE_kmod-usb-acm is not set
# CONFIG_PACKAGE_kmod-usb-atm is not set
# CONFIG_PACKAGE_kmod-usb-cm109 is not set
# CONFIG_PACKAGE_kmod-usb-core is not set
# CONFIG_PACKAGE_kmod-usb-dwc2 is not set
# CONFIG_PACKAGE_kmod-usb-dwc3 is not set
# CONFIG_PACKAGE_kmod-usb-hid is not set
# CONFIG_PACKAGE_kmod-usb-hid-cp2112 is not set
# CONFIG_PACKAGE_kmod-usb-ledtrig-usbport is not set
# CONFIG_PACKAGE_kmod-usb-net is not set
# CONFIG_PACKAGE_kmod-usb-net-aqc111 is not set
# CONFIG_PACKAGE_kmod-usb-net-asix is not set
# CONFIG_PACKAGE_kmod-usb-net-asix-ax88179 is not set
# CONFIG_PACKAGE_kmod-usb-net-cdc-eem is not set
# CONFIG_PACKAGE_kmod-usb-net-cdc-ether is not set
# CONFIG_PACKAGE_kmod-usb-net-cdc-mbim is not set
# CONFIG_PACKAGE_kmod-usb-net-cdc-ncm is not set
# CONFIG_PACKAGE_kmod-usb-net-cdc-subset is not set
# CONFIG_PACKAGE_kmod-usb-net-dm9601-ether is not set
# CONFIG_PACKAGE_kmod-usb-net-hso is not set
# CONFIG_PACKAGE_kmod-usb-net-huawei-cdc-ncm is not set
# CONFIG_PACKAGE_kmod-usb-net-ipheth is not set
# CONFIG_PACKAGE_kmod-usb-net-kalmia is not set
# CONFIG_PACKAGE_kmod-usb-net-kaweth is not set
# CONFIG_PACKAGE_kmod-usb-net-mcs7830 is not set
# CONFIG_PACKAGE_kmod-usb-net-pegasus is not set
# CONFIG_PACKAGE_kmod-usb-net-pl is not set
# CONFIG_PACKAGE_kmod-usb-net-qmi-wwan is not set
# CONFIG_PACKAGE_kmod-usb-net-rndis is not set
# CONFIG_PACKAGE_kmod-usb-net-rtl8150 is not set
# CONFIG_PACKAGE_kmod-usb-net-rtl8152 is not set
# CONFIG_PACKAGE_kmod-usb-net-sierrawireless is not set
# CONFIG_PACKAGE_kmod-usb-net-smsc95xx is not set
# CONFIG_PACKAGE_kmod-usb-net-sr9700 is not set
# CONFIG_PACKAGE_kmod-usb-ohci is not set
# CONFIG_PACKAGE_kmod-usb-printer is not set
# CONFIG_PACKAGE_kmod-usb-serial is not set
# CONFIG_PACKAGE_kmod-usb-serial-ark3116 is not set
# CONFIG_PACKAGE_kmod-usb-serial-belkin is not set
# CONFIG_PACKAGE_kmod-usb-serial-ch341 is not set
# CONFIG_PACKAGE_kmod-usb-serial-cp210x is not set
# CONFIG_PACKAGE_kmod-usb-serial-cypress-m8 is not set
# CONFIG_PACKAGE_kmod-usb-serial-edgeport is not set
# CONFIG_PACKAGE_kmod-usb-serial-ftdi is not set
# CONFIG_PACKAGE_kmod-usb-serial-garmin is not set
# CONFIG_PACKAGE_kmod-usb-serial-ipw is not set
# CONFIG_PACKAGE_kmod-usb-serial-keyspan is not set
# CONFIG_PACKAGE_kmod-usb-serial-mct is not set
# CONFIG_PACKAGE_kmod-usb-serial-mos7720 is not set
# CONFIG_PACKAGE_kmod-usb-serial-mos7840 is not set
# CONFIG_PACKAGE_kmod-usb-serial-option is not set
# CONFIG_PACKAGE_kmod-usb-serial-oti6858 is not set
# CONFIG_PACKAGE_kmod-usb-serial-pl2303 is not set
# CONFIG_PACKAGE_kmod-usb-serial-qualcomm is not set
# CONFIG_PACKAGE_kmod-usb-serial-sierrawireless is not set
# CONFIG_PACKAGE_kmod-usb-serial-simple is not set
# CONFIG_PACKAGE_kmod-usb-serial-ti-usb is not set
# CONFIG_PACKAGE_kmod-usb-serial-visor is not set
# CONFIG_PACKAGE_kmod-usb-storage is not set
# CONFIG_PACKAGE_kmod-usb-storage-extras is not set
# CONFIG_PACKAGE_kmod-usb-storage-uas is not set
# CONFIG_PACKAGE_kmod-usb-test is not set
# CONFIG_PACKAGE_kmod-usb-uhci is not set
# CONFIG_PACKAGE_kmod-usb-wdm is not set
# CONFIG_PACKAGE_kmod-usb-yealink is not set
# CONFIG_PACKAGE_kmod-usb2 is not set
# CONFIG_PACKAGE_kmod-usb3 is not set
# CONFIG_PACKAGE_kmod-usbip is not set
# CONFIG_PACKAGE_kmod-usbip-client is not set
# CONFIG_PACKAGE_kmod-usbip-server is not set
# CONFIG_PACKAGE_kmod-usbmon is not set
# end of USB Support

#
# Video Support
#
# CONFIG_PACKAGE_kmod-EISE-ISE is not set
# CONFIG_PACKAGE_kmod-backlight-pwm is not set
# CONFIG_PACKAGE_kmod-drm-kms-helper is not set
# CONFIG_PACKAGE_kmod-drm-ttm is not set
# CONFIG_PACKAGE_kmod-fb is not set
# CONFIG_PACKAGE_kmod-fb-cfb-copyarea is not set
# CONFIG_PACKAGE_kmod-fb-cfb-fillrect is not set
# CONFIG_PACKAGE_kmod-fb-cfb-imgblt is not set
# CONFIG_PACKAGE_kmod-fb-sys-fops is not set
# CONFIG_PACKAGE_kmod-fb-sys-ram is not set
# CONFIG_PACKAGE_kmod-fb-tft is not set
# CONFIG_PACKAGE_kmod-fb-tft-ili9486 is not set
CONFIG_PACKAGE_kmod-sunxi-g2d=y
# CONFIG_PACKAGE_kmod-video-core is not set
CONFIG_PACKAGE_kmod-vin-v4l2=y
# end of Video Support

#
# Virtualization
#
# end of Virtualization

#
# Voice over IP
#
# end of Voice over IP

#
# W1 support
#
# CONFIG_PACKAGE_kmod-w1 is not set
# end of W1 support

#
# WPAN 802.15.4 Support
#
# CONFIG_PACKAGE_kmod-at86rf230 is not set
# CONFIG_PACKAGE_kmod-atusb is not set
# CONFIG_PACKAGE_kmod-ca8210 is not set
# CONFIG_PACKAGE_kmod-cc2520 is not set
# CONFIG_PACKAGE_kmod-fakelb is not set
# CONFIG_PACKAGE_kmod-ieee802154 is not set
# CONFIG_PACKAGE_kmod-ieee802154-6lowpan is not set
# CONFIG_PACKAGE_kmod-mac802154 is not set
# CONFIG_PACKAGE_kmod-mrf24j40 is not set
# end of WPAN 802.15.4 Support

#
# Wireless Drivers
#
# CONFIG_PACKAGE_kmod-ar5523 is not set
# CONFIG_PACKAGE_kmod-ath is not set
# CONFIG_PACKAGE_kmod-ath6kl-sdio is not set
# CONFIG_PACKAGE_kmod-ath6kl-usb is not set
# CONFIG_PACKAGE_kmod-ath9k-htc is not set
# CONFIG_PACKAGE_kmod-carl9170 is not set
# CONFIG_PACKAGE_kmod-cfg80211 is not set
# CONFIG_PACKAGE_kmod-lib80211 is not set
# CONFIG_PACKAGE_kmod-libertas-sdio is not set
# CONFIG_PACKAGE_kmod-libertas-spi is not set
# CONFIG_PACKAGE_kmod-libertas-usb is not set
# CONFIG_PACKAGE_kmod-mac80211 is not set
# CONFIG_PACKAGE_kmod-mac80211-hwsim is not set
# CONFIG_PACKAGE_kmod-mt7601u is not set
# CONFIG_PACKAGE_kmod-mt7615-firmware is not set
# CONFIG_PACKAGE_kmod-mt7663-firmware-ap is not set
# CONFIG_PACKAGE_kmod-mt7663-firmware-sta is not set
# CONFIG_PACKAGE_kmod-mt76x0u is not set
# CONFIG_PACKAGE_kmod-mt76x2u is not set
# CONFIG_PACKAGE_kmod-mwifiex-sdio is not set
# CONFIG_PACKAGE_kmod-net-rtl8189fs is not set
# CONFIG_PACKAGE_kmod-net-rtl8192su is not set
# CONFIG_PACKAGE_kmod-net-xr819s is not set
# CONFIG_PACKAGE_kmod-net-xr819s-40M is not set
# CONFIG_PACKAGE_kmod-net-xr829 is not set
# CONFIG_PACKAGE_kmod-net-xr829-40M is not set
# CONFIG_PACKAGE_kmod-p54-common is not set
# CONFIG_PACKAGE_kmod-p54-usb is not set
# CONFIG_PACKAGE_kmod-rsi91x is not set
# CONFIG_PACKAGE_kmod-rsi91x-sdio is not set
# CONFIG_PACKAGE_kmod-rsi91x-usb is not set
# CONFIG_PACKAGE_kmod-rt2500-usb is not set
# CONFIG_PACKAGE_kmod-rt2800-usb is not set
# CONFIG_PACKAGE_kmod-rt2x00-lib is not set
# CONFIG_PACKAGE_kmod-rt73-usb is not set
# CONFIG_PACKAGE_kmod-rtl8187 is not set
# CONFIG_PACKAGE_kmod-rtl8192cu is not set
# CONFIG_PACKAGE_kmod-rtl8723bs is not set
# CONFIG_PACKAGE_kmod-rtl8812au-ct is not set
# CONFIG_PACKAGE_kmod-rtl8xxxu is not set
# CONFIG_PACKAGE_kmod-wl12xx is not set
# CONFIG_PACKAGE_kmod-wl18xx is not set
# CONFIG_PACKAGE_kmod-wlcore is not set
# CONFIG_PACKAGE_kmod-zd1211rw is not set
# end of Wireless Drivers

# CONFIG_PACKAGE_kmod-sunxi_nna_galcore is not set
# end of Kernel modules

#
# Languages
#

#
# Erlang
#
# CONFIG_PACKAGE_erlang is not set
# CONFIG_PACKAGE_erlang-asn1 is not set
# CONFIG_PACKAGE_erlang-compiler is not set
# CONFIG_PACKAGE_erlang-crypto is not set
# CONFIG_PACKAGE_erlang-erl-interface is not set
# CONFIG_PACKAGE_erlang-hipe is not set
# CONFIG_PACKAGE_erlang-inets is not set
# CONFIG_PACKAGE_erlang-mnesia is not set
# CONFIG_PACKAGE_erlang-os_mon is not set
# CONFIG_PACKAGE_erlang-public-key is not set
# CONFIG_PACKAGE_erlang-reltool is not set
# CONFIG_PACKAGE_erlang-runtime-tools is not set
# CONFIG_PACKAGE_erlang-snmp is not set
# CONFIG_PACKAGE_erlang-ssh is not set
# CONFIG_PACKAGE_erlang-ssl is not set
# CONFIG_PACKAGE_erlang-syntax-tools is not set
# CONFIG_PACKAGE_erlang-tools is not set
# CONFIG_PACKAGE_erlang-xmerl is not set
# end of Erlang

#
# Go
#
# CONFIG_PACKAGE_golang is not set

#
# Configuration
#
CONFIG_GOLANG_EXTERNAL_BOOTSTRAP_ROOT=""
CONFIG_GOLANG_BUILD_CACHE_DIR=""
# CONFIG_GOLANG_MOD_CACHE_WORLD_READABLE is not set
# end of Configuration

# CONFIG_PACKAGE_golang-doc is not set
# CONFIG_PACKAGE_golang-github-jedisct1-dnscrypt-proxy2-dev is not set
# CONFIG_PACKAGE_golang-github-nextdns-nextdns-dev is not set
# CONFIG_PACKAGE_golang-gitlab-yawning-obfs4-dev is not set
# CONFIG_PACKAGE_golang-src is not set
# CONFIG_PACKAGE_golang-torproject-tor-fw-helper-dev is not set
# end of Go

#
# Lua
#
# CONFIG_PACKAGE_dkjson is not set
# CONFIG_PACKAGE_json4lua is not set
# CONFIG_PACKAGE_ldbus is not set
# CONFIG_PACKAGE_libiwinfo-lua is not set
# CONFIG_PACKAGE_linotify is not set
# CONFIG_PACKAGE_lpeg is not set
# CONFIG_PACKAGE_lsqlite3 is not set
# CONFIG_PACKAGE_lua is not set
# CONFIG_PACKAGE_lua-argparse is not set
# CONFIG_PACKAGE_lua-bencode is not set
# CONFIG_PACKAGE_lua-bit32 is not set
# CONFIG_PACKAGE_lua-cjson is not set
# CONFIG_PACKAGE_lua-copas is not set
# CONFIG_PACKAGE_lua-coxpcall is not set
# CONFIG_PACKAGE_lua-ev is not set
# CONFIG_PACKAGE_lua-libmodbus is not set
# CONFIG_PACKAGE_lua-lzlib is not set
# CONFIG_PACKAGE_lua-md5 is not set
# CONFIG_PACKAGE_lua-mobdebug is not set
# CONFIG_PACKAGE_lua-mosquitto is not set
# CONFIG_PACKAGE_lua-openssl is not set
# CONFIG_PACKAGE_lua-penlight is not set
# CONFIG_PACKAGE_lua-rings is not set
# CONFIG_PACKAGE_lua-rs232 is not set
# CONFIG_PACKAGE_lua-sha2 is not set
# CONFIG_PACKAGE_lua-wsapi-base is not set
# CONFIG_PACKAGE_lua-wsapi-xavante is not set
# CONFIG_PACKAGE_lua-xavante is not set
# CONFIG_PACKAGE_lua5.3 is not set
# CONFIG_PACKAGE_luabitop is not set
# CONFIG_PACKAGE_luac is not set
# CONFIG_PACKAGE_luac5.3 is not set
# CONFIG_PACKAGE_luaexpat is not set
# CONFIG_PACKAGE_luafilesystem is not set
# CONFIG_PACKAGE_luajit is not set
# CONFIG_PACKAGE_lualanes is not set
# CONFIG_PACKAGE_luaposix is not set
# CONFIG_PACKAGE_luarocks is not set
# CONFIG_PACKAGE_luasec is not set
# CONFIG_PACKAGE_luasoap is not set
# CONFIG_PACKAGE_luasocket is not set
# CONFIG_PACKAGE_luasocket5.3 is not set
# CONFIG_PACKAGE_luasql-mysql is not set
# CONFIG_PACKAGE_luasql-pgsql is not set
# CONFIG_PACKAGE_luasql-sqlite3 is not set
# CONFIG_PACKAGE_luasrcdiet is not set
# CONFIG_PACKAGE_luv is not set
# CONFIG_PACKAGE_lyaml is not set
# CONFIG_PACKAGE_lzmq is not set
# CONFIG_PACKAGE_uuid is not set
# end of Lua

#
# Node.js
#
# CONFIG_PACKAGE_node is not set
# CONFIG_PACKAGE_node-arduino-firmata is not set
# CONFIG_PACKAGE_node-cylon is not set
# CONFIG_PACKAGE_node-cylon-firmata is not set
# CONFIG_PACKAGE_node-cylon-gpio is not set
# CONFIG_PACKAGE_node-cylon-i2c is not set
# CONFIG_PACKAGE_node-hid is not set
# CONFIG_PACKAGE_node-homebridge is not set
# CONFIG_PACKAGE_node-javascript-obfuscator is not set
# CONFIG_PACKAGE_node-npm is not set
# CONFIG_PACKAGE_node-serialport is not set
# CONFIG_PACKAGE_node-serialport-bindings is not set
# end of Node.js

#
# PHP7
#
# CONFIG_PACKAGE_php7 is not set
# end of PHP7

#
# PHP8
#
# CONFIG_PACKAGE_php8 is not set
# end of PHP8

#
# Perl
#
# CONFIG_PACKAGE_perl is not set
# end of Perl

#
# Python
#
# CONFIG_PACKAGE_libpython3 is not set
# CONFIG_PACKAGE_micropython is not set
# CONFIG_PACKAGE_micropython-lib is not set
# CONFIG_PACKAGE_python-pip-conf is not set
# CONFIG_PACKAGE_python3 is not set
# CONFIG_PACKAGE_python3-aiohttp is not set
# CONFIG_PACKAGE_python3-aiohttp-cors is not set
# CONFIG_PACKAGE_python3-apipkg is not set
# CONFIG_PACKAGE_python3-appdirs is not set
# CONFIG_PACKAGE_python3-asgiref is not set
# CONFIG_PACKAGE_python3-asn1crypto is not set
# CONFIG_PACKAGE_python3-astral is not set
# CONFIG_PACKAGE_python3-async-timeout is not set
# CONFIG_PACKAGE_python3-asyncio is not set
# CONFIG_PACKAGE_python3-atomicwrites is not set
# CONFIG_PACKAGE_python3-attrs is not set
# CONFIG_PACKAGE_python3-augeas is not set
# CONFIG_PACKAGE_python3-automat is not set
# CONFIG_PACKAGE_python3-awscli is not set
# CONFIG_PACKAGE_python3-babel is not set
# CONFIG_PACKAGE_python3-base is not set
# CONFIG_PACKAGE_python3-bcrypt is not set
# CONFIG_PACKAGE_python3-bidict is not set
# CONFIG_PACKAGE_python3-boto3 is not set
# CONFIG_PACKAGE_python3-botocore is not set
# CONFIG_PACKAGE_python3-bottle is not set
# CONFIG_PACKAGE_python3-cached-property is not set
# CONFIG_PACKAGE_python3-cachelib is not set
# CONFIG_PACKAGE_python3-cachetools is not set
# CONFIG_PACKAGE_python3-certifi is not set
# CONFIG_PACKAGE_python3-cffi is not set
# CONFIG_PACKAGE_python3-cgi is not set
# CONFIG_PACKAGE_python3-cgitb is not set
# CONFIG_PACKAGE_python3-chardet is not set
# CONFIG_PACKAGE_python3-ciso8601 is not set
# CONFIG_PACKAGE_python3-click is not set
# CONFIG_PACKAGE_python3-click-log is not set
# CONFIG_PACKAGE_python3-codecs is not set
# CONFIG_PACKAGE_python3-colorama is not set
# CONFIG_PACKAGE_python3-constantly is not set
# CONFIG_PACKAGE_python3-contextlib2 is not set
# CONFIG_PACKAGE_python3-cryptodome is not set
# CONFIG_PACKAGE_python3-cryptodomex is not set
# CONFIG_PACKAGE_python3-cryptography is not set
# CONFIG_PACKAGE_python3-ctypes is not set
# CONFIG_PACKAGE_python3-curl is not set
# CONFIG_PACKAGE_python3-dateutil is not set
# CONFIG_PACKAGE_python3-dbm is not set
# CONFIG_PACKAGE_python3-decimal is not set
# CONFIG_PACKAGE_python3-decorator is not set
# CONFIG_PACKAGE_python3-defusedxml is not set
# CONFIG_PACKAGE_python3-dev is not set
# CONFIG_PACKAGE_python3-distro is not set
# CONFIG_PACKAGE_python3-distutils is not set
# CONFIG_PACKAGE_python3-django is not set
# CONFIG_PACKAGE_python3-django-appconf is not set
# CONFIG_PACKAGE_python3-django-compressor is not set
# CONFIG_PACKAGE_python3-django-cors-headers is not set
# CONFIG_PACKAGE_python3-django-etesync-journal is not set
# CONFIG_PACKAGE_python3-django-formtools is not set
# CONFIG_PACKAGE_python3-django-jsonfield is not set
# CONFIG_PACKAGE_python3-django-jsonfield2 is not set
# CONFIG_PACKAGE_python3-django-picklefield is not set
# CONFIG_PACKAGE_python3-django-postoffice is not set
# CONFIG_PACKAGE_python3-django-ranged-response is not set
# CONFIG_PACKAGE_python3-django-restframework is not set
# CONFIG_PACKAGE_python3-django-restframework39 is not set
# CONFIG_PACKAGE_python3-django-simple-captcha is not set
# CONFIG_PACKAGE_python3-django-statici18n is not set
# CONFIG_PACKAGE_python3-django-webpack-loader is not set
# CONFIG_PACKAGE_python3-django1 is not set
# CONFIG_PACKAGE_python3-dns is not set
# CONFIG_PACKAGE_python3-docker is not set
# CONFIG_PACKAGE_python3-dockerpty is not set
# CONFIG_PACKAGE_python3-docopt is not set
# CONFIG_PACKAGE_python3-docutils is not set
# CONFIG_PACKAGE_python3-dotenv is not set
# CONFIG_PACKAGE_python3-drf-nested-routers is not set
# CONFIG_PACKAGE_python3-email is not set
# CONFIG_PACKAGE_python3-engineio is not set
# CONFIG_PACKAGE_python3-et_xmlfile is not set
# CONFIG_PACKAGE_python3-evdev is not set
# CONFIG_PACKAGE_python3-eventlet is not set
# CONFIG_PACKAGE_python3-execnet is not set
# CONFIG_PACKAGE_python3-flask is not set
# CONFIG_PACKAGE_python3-flask-babel is not set
# CONFIG_PACKAGE_python3-flask-httpauth is not set
# CONFIG_PACKAGE_python3-flask-login is not set
# CONFIG_PACKAGE_python3-flask-seasurf is not set
# CONFIG_PACKAGE_python3-flask-session is not set
# CONFIG_PACKAGE_python3-flask-socketio is not set
# CONFIG_PACKAGE_python3-flup is not set
# CONFIG_PACKAGE_python3-gdbm is not set
# CONFIG_PACKAGE_python3-gmpy2 is not set
# CONFIG_PACKAGE_python3-gnupg is not set
# CONFIG_PACKAGE_python3-gpiod is not set
# CONFIG_PACKAGE_python3-greenlet is not set
# CONFIG_PACKAGE_python3-hyperlink is not set
# CONFIG_PACKAGE_python3-idna is not set
# CONFIG_PACKAGE_python3-ifaddr is not set
# CONFIG_PACKAGE_python3-incremental is not set
# CONFIG_PACKAGE_python3-influxdb is not set
# CONFIG_PACKAGE_python3-iniconfig is not set
# CONFIG_PACKAGE_python3-intelhex is not set
# CONFIG_PACKAGE_python3-itsdangerous is not set
# CONFIG_PACKAGE_python3-jdcal is not set
# CONFIG_PACKAGE_python3-jinja2 is not set
# CONFIG_PACKAGE_python3-jmespath is not set
# CONFIG_PACKAGE_python3-jsonpath-ng is not set
# CONFIG_PACKAGE_python3-jsonschema is not set
# CONFIG_PACKAGE_python3-lib2to3 is not set
# CONFIG_PACKAGE_python3-libmodbus is not set
# CONFIG_PACKAGE_python3-libselinux is not set
# CONFIG_PACKAGE_python3-libsemanage is not set
# CONFIG_PACKAGE_python3-light is not set

#
# Configuration
#
# CONFIG_PYTHON3_BLUETOOTH_SUPPORT is not set
# CONFIG_PYTHON3_HOST_PIP_CACHE_WORLD_READABLE is not set
# end of Configuration

# CONFIG_PACKAGE_python3-logging is not set
# CONFIG_PACKAGE_python3-lxml is not set
# CONFIG_PACKAGE_python3-lzma is not set
# CONFIG_PACKAGE_python3-markdown is not set
# CONFIG_PACKAGE_python3-markupsafe is not set
# CONFIG_PACKAGE_python3-maxminddb is not set
# CONFIG_PACKAGE_python3-more-itertools is not set
# CONFIG_PACKAGE_python3-msgpack is not set
# CONFIG_PACKAGE_python3-multidict is not set
# CONFIG_PACKAGE_python3-multiprocessing is not set
# CONFIG_PACKAGE_python3-ncurses is not set
# CONFIG_PACKAGE_python3-netdisco is not set
# CONFIG_PACKAGE_python3-netifaces is not set
# CONFIG_PACKAGE_python3-networkx is not set
# CONFIG_PACKAGE_python3-newt is not set
# CONFIG_PACKAGE_python3-numpy is not set
# CONFIG_PACKAGE_python3-oauthlib is not set
# CONFIG_PACKAGE_python3-openpyxl is not set
# CONFIG_PACKAGE_python3-openssl is not set
# CONFIG_PACKAGE_python3-packages is not set
# CONFIG_PACKAGE_python3-packaging is not set
# CONFIG_PACKAGE_python3-paho-mqtt is not set
# CONFIG_PACKAGE_python3-paramiko is not set
# CONFIG_PACKAGE_python3-parsley is not set
# CONFIG_PACKAGE_python3-passlib is not set
# CONFIG_PACKAGE_python3-pillow is not set
# CONFIG_PACKAGE_python3-pip is not set
# CONFIG_PACKAGE_python3-pkg-resources is not set
# CONFIG_PACKAGE_python3-pluggy is not set
# CONFIG_PACKAGE_python3-ply is not set
# CONFIG_PACKAGE_python3-psutil is not set
# CONFIG_PACKAGE_python3-psycopg2 is not set
# CONFIG_PACKAGE_python3-py is not set
# CONFIG_PACKAGE_python3-pyasn1 is not set
# CONFIG_PACKAGE_python3-pyasn1-modules is not set
# CONFIG_PACKAGE_python3-pycparser is not set
# CONFIG_PACKAGE_python3-pydoc is not set
# CONFIG_PACKAGE_python3-pyinotify is not set
# CONFIG_PACKAGE_python3-pyjwt is not set
# CONFIG_PACKAGE_python3-pymysql is not set
# CONFIG_PACKAGE_python3-pynacl is not set
# CONFIG_PACKAGE_python3-pyodbc is not set
# CONFIG_PACKAGE_python3-pyopenssl is not set
# CONFIG_PACKAGE_python3-pyotp is not set
# CONFIG_PACKAGE_python3-pyparsing is not set
# CONFIG_PACKAGE_python3-pyroute2 is not set
# CONFIG_PACKAGE_python3-pyrsistent is not set
# CONFIG_PACKAGE_python3-pyserial is not set
# CONFIG_PACKAGE_python3-pysocks is not set
# CONFIG_PACKAGE_python3-pytest is not set
# CONFIG_PACKAGE_python3-pytest-forked is not set
# CONFIG_PACKAGE_python3-pytest-xdist is not set
# CONFIG_PACKAGE_python3-pytz is not set
# CONFIG_PACKAGE_python3-qrcode is not set
# CONFIG_PACKAGE_python3-rcssmin is not set
# CONFIG_PACKAGE_python3-readline is not set
# CONFIG_PACKAGE_python3-requests is not set
# CONFIG_PACKAGE_python3-requests-oauthlib is not set
# CONFIG_PACKAGE_python3-rsa is not set
# CONFIG_PACKAGE_python3-ruamel-yaml is not set
# CONFIG_PACKAGE_python3-s3transfer is not set
# CONFIG_PACKAGE_python3-schedule is not set
# CONFIG_PACKAGE_python3-schema is not set
# CONFIG_PACKAGE_python3-seafile-ccnet is not set
# CONFIG_PACKAGE_python3-seafile-server is not set
# CONFIG_PACKAGE_python3-searpc is not set
# CONFIG_PACKAGE_python3-sentry-sdk is not set
# CONFIG_PACKAGE_python3-sepolgen is not set
# CONFIG_PACKAGE_python3-sepolicy is not set
# CONFIG_PACKAGE_python3-service-identity is not set
# CONFIG_PACKAGE_python3-setuptools is not set
# CONFIG_PACKAGE_python3-simplejson is not set
# CONFIG_PACKAGE_python3-six is not set
# CONFIG_PACKAGE_python3-slugify is not set
# CONFIG_PACKAGE_python3-socketio is not set
# CONFIG_PACKAGE_python3-speedtest-cli is not set
# CONFIG_PACKAGE_python3-sqlalchemy is not set
# CONFIG_PACKAGE_python3-sqlite3 is not set
# CONFIG_PACKAGE_python3-sqlparse is not set
# CONFIG_PACKAGE_python3-stem is not set
# CONFIG_PACKAGE_python3-sysrepo is not set
# CONFIG_PACKAGE_python3-text-unidecode is not set
# CONFIG_PACKAGE_python3-texttable is not set
# CONFIG_PACKAGE_python3-toml is not set
# CONFIG_PACKAGE_python3-tornado is not set
# CONFIG_PACKAGE_python3-twisted is not set
# CONFIG_PACKAGE_python3-typing-extensions is not set
# CONFIG_PACKAGE_python3-ubus is not set
# CONFIG_PACKAGE_python3-uci is not set
# CONFIG_PACKAGE_python3-unidecode is not set
# CONFIG_PACKAGE_python3-unittest is not set
# CONFIG_PACKAGE_python3-urllib is not set
# CONFIG_PACKAGE_python3-urllib3 is not set
# CONFIG_PACKAGE_python3-vobject is not set
# CONFIG_PACKAGE_python3-voluptuous is not set
# CONFIG_PACKAGE_python3-voluptuous-serialize is not set
# CONFIG_PACKAGE_python3-wcwidth is not set
# CONFIG_PACKAGE_python3-websocket-client is not set
# CONFIG_PACKAGE_python3-websockets is not set
# CONFIG_PACKAGE_python3-werkzeug is not set
# CONFIG_PACKAGE_python3-xml is not set
# CONFIG_PACKAGE_python3-xmltodict is not set
# CONFIG_PACKAGE_python3-yaml is not set
# CONFIG_PACKAGE_python3-yarl is not set
# CONFIG_PACKAGE_python3-zeroconf is not set
# CONFIG_PACKAGE_python3-zipp is not set
# CONFIG_PACKAGE_python3-zope-interface is not set
# end of Python

#
# Ruby
#
# CONFIG_PACKAGE_ruby is not set
# end of Ruby

#
# Tcl
#
# CONFIG_PACKAGE_tcl is not set
# end of Tcl

# CONFIG_PACKAGE_chicken-scheme-full is not set
# CONFIG_PACKAGE_chicken-scheme-interpreter is not set
# CONFIG_PACKAGE_slsh is not set
# end of Languages

#
# Libraries
#

#
# Compression
#
CONFIG_PACKAGE_libbz2=y
# CONFIG_PACKAGE_liblz4 is not set
CONFIG_PACKAGE_liblzma=y
# CONFIG_PACKAGE_libunrar is not set
# CONFIG_PACKAGE_libzip-gnutls is not set
# CONFIG_PACKAGE_libzip-mbedtls is not set
# CONFIG_PACKAGE_libzip-nossl is not set
# CONFIG_PACKAGE_libzip-openssl is not set
# CONFIG_PACKAGE_libzstd is not set
# end of Compression

#
# Database
#
# CONFIG_PACKAGE_libmariadb is not set
# CONFIG_PACKAGE_libpq is not set
# CONFIG_PACKAGE_libpqxx is not set
# CONFIG_PACKAGE_pgsqlodbc is not set
# CONFIG_PACKAGE_psqlodbca is not set
# CONFIG_PACKAGE_psqlodbcw is not set
# CONFIG_PACKAGE_redis-cli is not set
# CONFIG_PACKAGE_redis-server is not set
# CONFIG_PACKAGE_redis-utils is not set
# CONFIG_PACKAGE_tdb is not set
# CONFIG_PACKAGE_unixodbc is not set
# end of Database

#
# Filesystem
#
# CONFIG_PACKAGE_libacl is not set
CONFIG_PACKAGE_libattr=y
# CONFIG_PACKAGE_libfuse is not set
# CONFIG_PACKAGE_libfuse3 is not set
# CONFIG_PACKAGE_libow is not set
# CONFIG_PACKAGE_libow-capi is not set
CONFIG_PACKAGE_libsysfs=y
# end of Filesystem

#
# Firewall
#
# CONFIG_PACKAGE_libfko is not set
CONFIG_PACKAGE_libip4tc=y
CONFIG_PACKAGE_libip6tc=y
CONFIG_PACKAGE_libxtables=y
# CONFIG_PACKAGE_libxtables-nft is not set
# end of Firewall

#
# Instant Messaging
#
# CONFIG_PACKAGE_quasselc is not set
# end of Instant Messaging

#
# IoT
#
# CONFIG_PACKAGE_libmraa is not set
# CONFIG_PACKAGE_libmraa-python3 is not set
# CONFIG_PACKAGE_libupm is not set
# CONFIG_PACKAGE_libupm-a110x is not set
# CONFIG_PACKAGE_libupm-a110x-python3 is not set
# CONFIG_PACKAGE_libupm-abp is not set
# CONFIG_PACKAGE_libupm-abp-python3 is not set
# CONFIG_PACKAGE_libupm-ad8232 is not set
# CONFIG_PACKAGE_libupm-ad8232-python3 is not set
# CONFIG_PACKAGE_libupm-adafruitms1438 is not set
# CONFIG_PACKAGE_libupm-adafruitms1438-python3 is not set
# CONFIG_PACKAGE_libupm-adafruitss is not set
# CONFIG_PACKAGE_libupm-adafruitss-python3 is not set
# CONFIG_PACKAGE_libupm-adc121c021 is not set
# CONFIG_PACKAGE_libupm-adc121c021-python3 is not set
# CONFIG_PACKAGE_libupm-adis16448 is not set
# CONFIG_PACKAGE_libupm-adis16448-python3 is not set
# CONFIG_PACKAGE_libupm-ads1x15 is not set
# CONFIG_PACKAGE_libupm-ads1x15-python3 is not set
# CONFIG_PACKAGE_libupm-adxl335 is not set
# CONFIG_PACKAGE_libupm-adxl335-python3 is not set
# CONFIG_PACKAGE_libupm-adxl345 is not set
# CONFIG_PACKAGE_libupm-adxl345-python3 is not set
# CONFIG_PACKAGE_libupm-adxrs610 is not set
# CONFIG_PACKAGE_libupm-adxrs610-python3 is not set
# CONFIG_PACKAGE_libupm-am2315 is not set
# CONFIG_PACKAGE_libupm-am2315-python3 is not set
# CONFIG_PACKAGE_libupm-apa102 is not set
# CONFIG_PACKAGE_libupm-apa102-python3 is not set
# CONFIG_PACKAGE_libupm-apds9002 is not set
# CONFIG_PACKAGE_libupm-apds9002-python3 is not set
# CONFIG_PACKAGE_libupm-apds9930 is not set
# CONFIG_PACKAGE_libupm-apds9930-python3 is not set
# CONFIG_PACKAGE_libupm-at42qt1070 is not set
# CONFIG_PACKAGE_libupm-at42qt1070-python3 is not set
# CONFIG_PACKAGE_libupm-bh1749 is not set
# CONFIG_PACKAGE_libupm-bh1749-python3 is not set
# CONFIG_PACKAGE_libupm-bh1750 is not set
# CONFIG_PACKAGE_libupm-bh1750-python3 is not set
# CONFIG_PACKAGE_libupm-bh1792 is not set
# CONFIG_PACKAGE_libupm-bh1792-python3 is not set
# CONFIG_PACKAGE_libupm-biss0001 is not set
# CONFIG_PACKAGE_libupm-biss0001-python3 is not set
# CONFIG_PACKAGE_libupm-bma220 is not set
# CONFIG_PACKAGE_libupm-bma220-python3 is not set
# CONFIG_PACKAGE_libupm-bma250e is not set
# CONFIG_PACKAGE_libupm-bma250e-python3 is not set
# CONFIG_PACKAGE_libupm-bmg160 is not set
# CONFIG_PACKAGE_libupm-bmg160-python3 is not set
# CONFIG_PACKAGE_libupm-bmi160 is not set
# CONFIG_PACKAGE_libupm-bmi160-python3 is not set
# CONFIG_PACKAGE_libupm-bmm150 is not set
# CONFIG_PACKAGE_libupm-bmm150-python3 is not set
# CONFIG_PACKAGE_libupm-bmp280 is not set
# CONFIG_PACKAGE_libupm-bmp280-python3 is not set
# CONFIG_PACKAGE_libupm-bmpx8x is not set
# CONFIG_PACKAGE_libupm-bmpx8x-python3 is not set
# CONFIG_PACKAGE_libupm-bmx055 is not set
# CONFIG_PACKAGE_libupm-bmx055-python3 is not set
# CONFIG_PACKAGE_libupm-bno055 is not set
# CONFIG_PACKAGE_libupm-bno055-python3 is not set
# CONFIG_PACKAGE_libupm-button is not set
# CONFIG_PACKAGE_libupm-button-python3 is not set
# CONFIG_PACKAGE_libupm-buzzer is not set
# CONFIG_PACKAGE_libupm-buzzer-python3 is not set
# CONFIG_PACKAGE_libupm-cjq4435 is not set
# CONFIG_PACKAGE_libupm-cjq4435-python3 is not set
# CONFIG_PACKAGE_libupm-collision is not set
# CONFIG_PACKAGE_libupm-collision-python3 is not set
# CONFIG_PACKAGE_libupm-curieimu is not set
# CONFIG_PACKAGE_libupm-curieimu-python3 is not set
# CONFIG_PACKAGE_libupm-cwlsxxa is not set
# CONFIG_PACKAGE_libupm-cwlsxxa-python3 is not set
# CONFIG_PACKAGE_libupm-dfrec is not set
# CONFIG_PACKAGE_libupm-dfrec-python3 is not set
# CONFIG_PACKAGE_libupm-dfrorp is not set
# CONFIG_PACKAGE_libupm-dfrorp-python3 is not set
# CONFIG_PACKAGE_libupm-dfrph is not set
# CONFIG_PACKAGE_libupm-dfrph-python3 is not set
# CONFIG_PACKAGE_libupm-ds1307 is not set
# CONFIG_PACKAGE_libupm-ds1307-python3 is not set
# CONFIG_PACKAGE_libupm-ds1808lc is not set
# CONFIG_PACKAGE_libupm-ds1808lc-python3 is not set
# CONFIG_PACKAGE_libupm-ds18b20 is not set
# CONFIG_PACKAGE_libupm-ds18b20-python3 is not set
# CONFIG_PACKAGE_libupm-ds2413 is not set
# CONFIG_PACKAGE_libupm-ds2413-python3 is not set
# CONFIG_PACKAGE_libupm-ecezo is not set
# CONFIG_PACKAGE_libupm-ecezo-python3 is not set
# CONFIG_PACKAGE_libupm-ecs1030 is not set
# CONFIG_PACKAGE_libupm-ecs1030-python3 is not set
# CONFIG_PACKAGE_libupm-ehr is not set
# CONFIG_PACKAGE_libupm-ehr-python3 is not set
# CONFIG_PACKAGE_libupm-eldriver is not set
# CONFIG_PACKAGE_libupm-eldriver-python3 is not set
# CONFIG_PACKAGE_libupm-electromagnet is not set
# CONFIG_PACKAGE_libupm-electromagnet-python3 is not set
# CONFIG_PACKAGE_libupm-emg is not set
# CONFIG_PACKAGE_libupm-emg-python3 is not set
# CONFIG_PACKAGE_libupm-enc03r is not set
# CONFIG_PACKAGE_libupm-enc03r-python3 is not set
# CONFIG_PACKAGE_libupm-flex is not set
# CONFIG_PACKAGE_libupm-flex-python3 is not set
# CONFIG_PACKAGE_libupm-gas is not set
# CONFIG_PACKAGE_libupm-gas-python3 is not set
# CONFIG_PACKAGE_libupm-gp2y0a is not set
# CONFIG_PACKAGE_libupm-gp2y0a-python3 is not set
# CONFIG_PACKAGE_libupm-gprs is not set
# CONFIG_PACKAGE_libupm-gprs-python3 is not set
# CONFIG_PACKAGE_libupm-gsr is not set
# CONFIG_PACKAGE_libupm-gsr-python3 is not set
# CONFIG_PACKAGE_libupm-guvas12d is not set
# CONFIG_PACKAGE_libupm-guvas12d-python3 is not set
# CONFIG_PACKAGE_libupm-h3lis331dl is not set
# CONFIG_PACKAGE_libupm-h3lis331dl-python3 is not set
# CONFIG_PACKAGE_libupm-h803x is not set
# CONFIG_PACKAGE_libupm-h803x-python3 is not set
# CONFIG_PACKAGE_libupm-hcsr04 is not set
# CONFIG_PACKAGE_libupm-hcsr04-python3 is not set
# CONFIG_PACKAGE_libupm-hdc1000 is not set
# CONFIG_PACKAGE_libupm-hdc1000-python3 is not set
# CONFIG_PACKAGE_libupm-hdxxvxta is not set
# CONFIG_PACKAGE_libupm-hdxxvxta-python3 is not set
# CONFIG_PACKAGE_libupm-hka5 is not set
# CONFIG_PACKAGE_libupm-hka5-python3 is not set
# CONFIG_PACKAGE_libupm-hlg150h is not set
# CONFIG_PACKAGE_libupm-hlg150h-python3 is not set
# CONFIG_PACKAGE_libupm-hm11 is not set
# CONFIG_PACKAGE_libupm-hm11-python3 is not set
# CONFIG_PACKAGE_libupm-hmc5883l is not set
# CONFIG_PACKAGE_libupm-hmc5883l-python3 is not set
# CONFIG_PACKAGE_libupm-hmtrp is not set
# CONFIG_PACKAGE_libupm-hmtrp-python3 is not set
# CONFIG_PACKAGE_libupm-hp20x is not set
# CONFIG_PACKAGE_libupm-hp20x-python3 is not set
# CONFIG_PACKAGE_libupm-ht9170 is not set
# CONFIG_PACKAGE_libupm-ht9170-python3 is not set
# CONFIG_PACKAGE_libupm-htu21d is not set
# CONFIG_PACKAGE_libupm-htu21d-python3 is not set
# CONFIG_PACKAGE_libupm-hwxpxx is not set
# CONFIG_PACKAGE_libupm-hwxpxx-python3 is not set
# CONFIG_PACKAGE_libupm-hx711 is not set
# CONFIG_PACKAGE_libupm-hx711-python3 is not set
# CONFIG_PACKAGE_libupm-ili9341 is not set
# CONFIG_PACKAGE_libupm-ili9341-python3 is not set
# CONFIG_PACKAGE_libupm-ims is not set
# CONFIG_PACKAGE_libupm-ims-python3 is not set
# CONFIG_PACKAGE_libupm-ina132 is not set
# CONFIG_PACKAGE_libupm-ina132-python3 is not set
# CONFIG_PACKAGE_libupm-interfaces is not set
# CONFIG_PACKAGE_libupm-interfaces-python3 is not set
# CONFIG_PACKAGE_libupm-isd1820 is not set
# CONFIG_PACKAGE_libupm-isd1820-python3 is not set
# CONFIG_PACKAGE_libupm-itg3200 is not set
# CONFIG_PACKAGE_libupm-itg3200-python3 is not set
# CONFIG_PACKAGE_libupm-jhd1313m1 is not set
# CONFIG_PACKAGE_libupm-jhd1313m1-python3 is not set
# CONFIG_PACKAGE_libupm-joystick12 is not set
# CONFIG_PACKAGE_libupm-joystick12-python3 is not set
# CONFIG_PACKAGE_libupm-kx122 is not set
# CONFIG_PACKAGE_libupm-kx122-python3 is not set
# CONFIG_PACKAGE_libupm-kxcjk1013 is not set
# CONFIG_PACKAGE_libupm-kxcjk1013-python3 is not set
# CONFIG_PACKAGE_libupm-kxtj3 is not set
# CONFIG_PACKAGE_libupm-kxtj3-python3 is not set
# CONFIG_PACKAGE_libupm-l298 is not set
# CONFIG_PACKAGE_libupm-l298-python3 is not set
# CONFIG_PACKAGE_libupm-l3gd20 is not set
# CONFIG_PACKAGE_libupm-l3gd20-python3 is not set
# CONFIG_PACKAGE_libupm-lcd is not set
# CONFIG_PACKAGE_libupm-lcd-python3 is not set
# CONFIG_PACKAGE_libupm-lcdks is not set
# CONFIG_PACKAGE_libupm-lcdks-python3 is not set
# CONFIG_PACKAGE_libupm-lcm1602 is not set
# CONFIG_PACKAGE_libupm-lcm1602-python3 is not set
# CONFIG_PACKAGE_libupm-ldt0028 is not set
# CONFIG_PACKAGE_libupm-ldt0028-python3 is not set
# CONFIG_PACKAGE_libupm-led is not set
# CONFIG_PACKAGE_libupm-led-python3 is not set
# CONFIG_PACKAGE_libupm-lidarlitev3 is not set
# CONFIG_PACKAGE_libupm-lidarlitev3-python3 is not set
# CONFIG_PACKAGE_libupm-light is not set
# CONFIG_PACKAGE_libupm-light-python3 is not set
# CONFIG_PACKAGE_libupm-linefinder is not set
# CONFIG_PACKAGE_libupm-linefinder-python3 is not set
# CONFIG_PACKAGE_libupm-lis2ds12 is not set
# CONFIG_PACKAGE_libupm-lis2ds12-python3 is not set
# CONFIG_PACKAGE_libupm-lis3dh is not set
# CONFIG_PACKAGE_libupm-lis3dh-python3 is not set
# CONFIG_PACKAGE_libupm-lm35 is not set
# CONFIG_PACKAGE_libupm-lm35-python3 is not set
# CONFIG_PACKAGE_libupm-lol is not set
# CONFIG_PACKAGE_libupm-lol-python3 is not set
# CONFIG_PACKAGE_libupm-loudness is not set
# CONFIG_PACKAGE_libupm-loudness-python3 is not set
# CONFIG_PACKAGE_libupm-lp8860 is not set
# CONFIG_PACKAGE_libupm-lp8860-python3 is not set
# CONFIG_PACKAGE_libupm-lpd8806 is not set
# CONFIG_PACKAGE_libupm-lpd8806-python3 is not set
# CONFIG_PACKAGE_libupm-lsm303agr is not set
# CONFIG_PACKAGE_libupm-lsm303agr-python3 is not set
# CONFIG_PACKAGE_libupm-lsm303d is not set
# CONFIG_PACKAGE_libupm-lsm303d-python3 is not set
# CONFIG_PACKAGE_libupm-lsm303dlh is not set
# CONFIG_PACKAGE_libupm-lsm303dlh-python3 is not set
# CONFIG_PACKAGE_libupm-lsm6ds3h is not set
# CONFIG_PACKAGE_libupm-lsm6ds3h-python3 is not set
# CONFIG_PACKAGE_libupm-lsm6dsl is not set
# CONFIG_PACKAGE_libupm-lsm6dsl-python3 is not set
# CONFIG_PACKAGE_libupm-lsm9ds0 is not set
# CONFIG_PACKAGE_libupm-lsm9ds0-python3 is not set
# CONFIG_PACKAGE_libupm-m24lr64e is not set
# CONFIG_PACKAGE_libupm-m24lr64e-python3 is not set
# CONFIG_PACKAGE_libupm-mag3110 is not set
# CONFIG_PACKAGE_libupm-mag3110-python3 is not set
# CONFIG_PACKAGE_libupm-max30100 is not set
# CONFIG_PACKAGE_libupm-max30100-python3 is not set
# CONFIG_PACKAGE_libupm-max31723 is not set
# CONFIG_PACKAGE_libupm-max31723-python3 is not set
# CONFIG_PACKAGE_libupm-max31855 is not set
# CONFIG_PACKAGE_libupm-max31855-python3 is not set
# CONFIG_PACKAGE_libupm-max44000 is not set
# CONFIG_PACKAGE_libupm-max44000-python3 is not set
# CONFIG_PACKAGE_libupm-max44009 is not set
# CONFIG_PACKAGE_libupm-max44009-python3 is not set
# CONFIG_PACKAGE_libupm-max5487 is not set
# CONFIG_PACKAGE_libupm-max5487-python3 is not set
# CONFIG_PACKAGE_libupm-maxds3231m is not set
# CONFIG_PACKAGE_libupm-maxds3231m-python3 is not set
# CONFIG_PACKAGE_libupm-maxsonarez is not set
# CONFIG_PACKAGE_libupm-maxsonarez-python3 is not set
# CONFIG_PACKAGE_libupm-mb704x is not set
# CONFIG_PACKAGE_libupm-mb704x-python3 is not set
# CONFIG_PACKAGE_libupm-mcp2515 is not set
# CONFIG_PACKAGE_libupm-mcp2515-python3 is not set
# CONFIG_PACKAGE_libupm-mcp9808 is not set
# CONFIG_PACKAGE_libupm-mcp9808-python3 is not set
# CONFIG_PACKAGE_libupm-md is not set
# CONFIG_PACKAGE_libupm-md-python3 is not set
# CONFIG_PACKAGE_libupm-mg811 is not set
# CONFIG_PACKAGE_libupm-mg811-python3 is not set
# CONFIG_PACKAGE_libupm-mhz16 is not set
# CONFIG_PACKAGE_libupm-mhz16-python3 is not set
# CONFIG_PACKAGE_libupm-mic is not set
# CONFIG_PACKAGE_libupm-mic-python3 is not set
# CONFIG_PACKAGE_libupm-micsv89 is not set
# CONFIG_PACKAGE_libupm-micsv89-python3 is not set
# CONFIG_PACKAGE_libupm-mlx90614 is not set
# CONFIG_PACKAGE_libupm-mlx90614-python3 is not set
# CONFIG_PACKAGE_libupm-mma7361 is not set
# CONFIG_PACKAGE_libupm-mma7361-python3 is not set
# CONFIG_PACKAGE_libupm-mma7455 is not set
# CONFIG_PACKAGE_libupm-mma7455-python3 is not set
# CONFIG_PACKAGE_libupm-mma7660 is not set
# CONFIG_PACKAGE_libupm-mma7660-python3 is not set
# CONFIG_PACKAGE_libupm-mma8x5x is not set
# CONFIG_PACKAGE_libupm-mma8x5x-python3 is not set
# CONFIG_PACKAGE_libupm-mmc35240 is not set
# CONFIG_PACKAGE_libupm-mmc35240-python3 is not set
# CONFIG_PACKAGE_libupm-moisture is not set
# CONFIG_PACKAGE_libupm-moisture-python3 is not set
# CONFIG_PACKAGE_libupm-mpl3115a2 is not set
# CONFIG_PACKAGE_libupm-mpl3115a2-python3 is not set
# CONFIG_PACKAGE_libupm-mpr121 is not set
# CONFIG_PACKAGE_libupm-mpr121-python3 is not set
# CONFIG_PACKAGE_libupm-mpu9150 is not set
# CONFIG_PACKAGE_libupm-mpu9150-python3 is not set
# CONFIG_PACKAGE_libupm-mq303a is not set
# CONFIG_PACKAGE_libupm-mq303a-python3 is not set
# CONFIG_PACKAGE_libupm-ms5611 is not set
# CONFIG_PACKAGE_libupm-ms5611-python3 is not set
# CONFIG_PACKAGE_libupm-ms5803 is not set
# CONFIG_PACKAGE_libupm-ms5803-python3 is not set
# CONFIG_PACKAGE_libupm-my9221 is not set
# CONFIG_PACKAGE_libupm-my9221-python3 is not set
# CONFIG_PACKAGE_libupm-nlgpio16 is not set
# CONFIG_PACKAGE_libupm-nlgpio16-python3 is not set
# CONFIG_PACKAGE_libupm-nmea_gps is not set
# CONFIG_PACKAGE_libupm-nmea_gps-python3 is not set
# CONFIG_PACKAGE_libupm-nrf24l01 is not set
# CONFIG_PACKAGE_libupm-nrf24l01-python3 is not set
# CONFIG_PACKAGE_libupm-nrf8001 is not set
# CONFIG_PACKAGE_libupm-nrf8001-python3 is not set
# CONFIG_PACKAGE_libupm-nunchuck is not set
# CONFIG_PACKAGE_libupm-nunchuck-python3 is not set
# CONFIG_PACKAGE_libupm-o2 is not set
# CONFIG_PACKAGE_libupm-o2-python3 is not set
# CONFIG_PACKAGE_libupm-otp538u is not set
# CONFIG_PACKAGE_libupm-otp538u-python3 is not set
# CONFIG_PACKAGE_libupm-ozw is not set
# CONFIG_PACKAGE_libupm-ozw-python3 is not set
# CONFIG_PACKAGE_libupm-p9813 is not set
# CONFIG_PACKAGE_libupm-p9813-python3 is not set
# CONFIG_PACKAGE_libupm-pca9685 is not set
# CONFIG_PACKAGE_libupm-pca9685-python3 is not set
# CONFIG_PACKAGE_libupm-pn532 is not set
# CONFIG_PACKAGE_libupm-pn532-python3 is not set
# CONFIG_PACKAGE_libupm-ppd42ns is not set
# CONFIG_PACKAGE_libupm-ppd42ns-python3 is not set
# CONFIG_PACKAGE_libupm-pulsensor is not set
# CONFIG_PACKAGE_libupm-pulsensor-python3 is not set
# CONFIG_PACKAGE_libupm-relay is not set
# CONFIG_PACKAGE_libupm-relay-python3 is not set
# CONFIG_PACKAGE_libupm-rf22 is not set
# CONFIG_PACKAGE_libupm-rf22-python3 is not set
# CONFIG_PACKAGE_libupm-rfr359f is not set
# CONFIG_PACKAGE_libupm-rfr359f-python3 is not set
# CONFIG_PACKAGE_libupm-rgbringcoder is not set
# CONFIG_PACKAGE_libupm-rgbringcoder-python3 is not set
# CONFIG_PACKAGE_libupm-rhusb is not set
# CONFIG_PACKAGE_libupm-rhusb-python3 is not set
# CONFIG_PACKAGE_libupm-rn2903 is not set
# CONFIG_PACKAGE_libupm-rn2903-python3 is not set
# CONFIG_PACKAGE_libupm-rotary is not set
# CONFIG_PACKAGE_libupm-rotary-python3 is not set
# CONFIG_PACKAGE_libupm-rotaryencoder is not set
# CONFIG_PACKAGE_libupm-rotaryencoder-python3 is not set
# CONFIG_PACKAGE_libupm-rpr220 is not set
# CONFIG_PACKAGE_libupm-rpr220-python3 is not set
# CONFIG_PACKAGE_libupm-rsc is not set
# CONFIG_PACKAGE_libupm-rsc-python3 is not set
# CONFIG_PACKAGE_libupm-scam is not set
# CONFIG_PACKAGE_libupm-scam-python3 is not set
# CONFIG_PACKAGE_libupm-sensortemplate is not set
# CONFIG_PACKAGE_libupm-sensortemplate-python3 is not set
# CONFIG_PACKAGE_libupm-servo is not set
# CONFIG_PACKAGE_libupm-servo-python3 is not set
# CONFIG_PACKAGE_libupm-sht1x is not set
# CONFIG_PACKAGE_libupm-sht1x-python3 is not set
# CONFIG_PACKAGE_libupm-si1132 is not set
# CONFIG_PACKAGE_libupm-si1132-python3 is not set
# CONFIG_PACKAGE_libupm-si114x is not set
# CONFIG_PACKAGE_libupm-si114x-python3 is not set
# CONFIG_PACKAGE_libupm-si7005 is not set
# CONFIG_PACKAGE_libupm-si7005-python3 is not set
# CONFIG_PACKAGE_libupm-slide is not set
# CONFIG_PACKAGE_libupm-slide-python3 is not set
# CONFIG_PACKAGE_libupm-sm130 is not set
# CONFIG_PACKAGE_libupm-sm130-python3 is not set
# CONFIG_PACKAGE_libupm-smartdrive is not set
# CONFIG_PACKAGE_libupm-smartdrive-python3 is not set
# CONFIG_PACKAGE_libupm-speaker is not set
# CONFIG_PACKAGE_libupm-speaker-python3 is not set
# CONFIG_PACKAGE_libupm-ssd1351 is not set
# CONFIG_PACKAGE_libupm-ssd1351-python3 is not set
# CONFIG_PACKAGE_libupm-st7735 is not set
# CONFIG_PACKAGE_libupm-st7735-python3 is not set
# CONFIG_PACKAGE_libupm-stepmotor is not set
# CONFIG_PACKAGE_libupm-stepmotor-python3 is not set
# CONFIG_PACKAGE_libupm-sx1276 is not set
# CONFIG_PACKAGE_libupm-sx1276-python3 is not set
# CONFIG_PACKAGE_libupm-sx6119 is not set
# CONFIG_PACKAGE_libupm-sx6119-python3 is not set
# CONFIG_PACKAGE_libupm-t3311 is not set
# CONFIG_PACKAGE_libupm-t3311-python3 is not set
# CONFIG_PACKAGE_libupm-t6713 is not set
# CONFIG_PACKAGE_libupm-t6713-python3 is not set
# CONFIG_PACKAGE_libupm-ta12200 is not set
# CONFIG_PACKAGE_libupm-ta12200-python3 is not set
# CONFIG_PACKAGE_libupm-tca9548a is not set
# CONFIG_PACKAGE_libupm-tca9548a-python3 is not set
# CONFIG_PACKAGE_libupm-tcs3414cs is not set
# CONFIG_PACKAGE_libupm-tcs3414cs-python3 is not set
# CONFIG_PACKAGE_libupm-tcs37727 is not set
# CONFIG_PACKAGE_libupm-tcs37727-python3 is not set
# CONFIG_PACKAGE_libupm-teams is not set
# CONFIG_PACKAGE_libupm-teams-python3 is not set
# CONFIG_PACKAGE_libupm-temperature is not set
# CONFIG_PACKAGE_libupm-temperature-python3 is not set
# CONFIG_PACKAGE_libupm-tex00 is not set
# CONFIG_PACKAGE_libupm-tex00-python3 is not set
# CONFIG_PACKAGE_libupm-th02 is not set
# CONFIG_PACKAGE_libupm-th02-python3 is not set
# CONFIG_PACKAGE_libupm-tm1637 is not set
# CONFIG_PACKAGE_libupm-tm1637-python3 is not set
# CONFIG_PACKAGE_libupm-tmp006 is not set
# CONFIG_PACKAGE_libupm-tmp006-python3 is not set
# CONFIG_PACKAGE_libupm-tsl2561 is not set
# CONFIG_PACKAGE_libupm-tsl2561-python3 is not set
# CONFIG_PACKAGE_libupm-ttp223 is not set
# CONFIG_PACKAGE_libupm-ttp223-python3 is not set
# CONFIG_PACKAGE_libupm-uartat is not set
# CONFIG_PACKAGE_libupm-uartat-python3 is not set
# CONFIG_PACKAGE_libupm-uln200xa is not set
# CONFIG_PACKAGE_libupm-uln200xa-python3 is not set
# CONFIG_PACKAGE_libupm-ultrasonic is not set
# CONFIG_PACKAGE_libupm-ultrasonic-python3 is not set
# CONFIG_PACKAGE_libupm-urm37 is not set
# CONFIG_PACKAGE_libupm-urm37-python3 is not set
# CONFIG_PACKAGE_libupm-utilities is not set
# CONFIG_PACKAGE_libupm-utilities-python3 is not set
# CONFIG_PACKAGE_libupm-vcap is not set
# CONFIG_PACKAGE_libupm-vcap-python3 is not set
# CONFIG_PACKAGE_libupm-vdiv is not set
# CONFIG_PACKAGE_libupm-vdiv-python3 is not set
# CONFIG_PACKAGE_libupm-veml6070 is not set
# CONFIG_PACKAGE_libupm-veml6070-python3 is not set
# CONFIG_PACKAGE_libupm-water is not set
# CONFIG_PACKAGE_libupm-water-python3 is not set
# CONFIG_PACKAGE_libupm-waterlevel is not set
# CONFIG_PACKAGE_libupm-waterlevel-python3 is not set
# CONFIG_PACKAGE_libupm-wfs is not set
# CONFIG_PACKAGE_libupm-wfs-python3 is not set
# CONFIG_PACKAGE_libupm-wheelencoder is not set
# CONFIG_PACKAGE_libupm-wheelencoder-python3 is not set
# CONFIG_PACKAGE_libupm-wt5001 is not set
# CONFIG_PACKAGE_libupm-wt5001-python3 is not set
# CONFIG_PACKAGE_libupm-xbee is not set
# CONFIG_PACKAGE_libupm-xbee-python3 is not set
# CONFIG_PACKAGE_libupm-yg1006 is not set
# CONFIG_PACKAGE_libupm-yg1006-python3 is not set
# CONFIG_PACKAGE_libupm-zfm20 is not set
# CONFIG_PACKAGE_libupm-zfm20-python3 is not set
# end of IoT

#
# Languages
#
# CONFIG_PACKAGE_libyaml is not set
# end of Languages

#
# LibElektra
#
# CONFIG_PACKAGE_libelektra-boost is not set
# CONFIG_PACKAGE_libelektra-core is not set
# CONFIG_PACKAGE_libelektra-cpp is not set
# CONFIG_PACKAGE_libelektra-crypto is not set
# CONFIG_PACKAGE_libelektra-curlget is not set
# CONFIG_PACKAGE_libelektra-dbus is not set
# CONFIG_PACKAGE_libelektra-extra is not set
# CONFIG_PACKAGE_libelektra-lua is not set
# CONFIG_PACKAGE_libelektra-plugins is not set
# CONFIG_PACKAGE_libelektra-python3 is not set
# CONFIG_PACKAGE_libelektra-resolvers is not set
# CONFIG_PACKAGE_libelektra-xerces is not set
# CONFIG_PACKAGE_libelektra-xml is not set
# CONFIG_PACKAGE_libelektra-yajl is not set
# CONFIG_PACKAGE_libelektra-yamlcpp is not set
# CONFIG_PACKAGE_libelektra-zmq is not set
# end of LibElektra

#
# Networking
#
# CONFIG_PACKAGE_libdcwproto is not set
# CONFIG_PACKAGE_libdcwsocket is not set
# CONFIG_PACKAGE_libsctp is not set
# CONFIG_PACKAGE_libuhttpd-mbedtls is not set
# CONFIG_PACKAGE_libuhttpd-nossl is not set
# CONFIG_PACKAGE_libuhttpd-openssl is not set
# CONFIG_PACKAGE_libuhttpd-wolfssl is not set
# CONFIG_PACKAGE_libulfius-gnutls is not set
# CONFIG_PACKAGE_libulfius-nossl is not set
# CONFIG_PACKAGE_libunbound is not set
# CONFIG_PACKAGE_libuwsc-mbedtls is not set
# CONFIG_PACKAGE_libuwsc-nossl is not set
# CONFIG_PACKAGE_libuwsc-openssl is not set
# CONFIG_PACKAGE_libuwsc-wolfssl is not set
# end of Networking

#
# SSL
#
# CONFIG_PACKAGE_libgnutls is not set
# CONFIG_PACKAGE_libmbedtls is not set
# CONFIG_PACKAGE_libnss is not set
CONFIG_PACKAGE_libopenssl=y

#
# Build Options
#
# CONFIG_OPENSSL_OPTIMIZE_SPEED is not set
CONFIG_OPENSSL_WITH_ASM=y
CONFIG_OPENSSL_WITH_DEPRECATED=y
# CONFIG_OPENSSL_NO_DEPRECATED is not set
CONFIG_OPENSSL_WITH_ERROR_MESSAGES=y

#
# Protocol Support
#
CONFIG_OPENSSL_WITH_TLS13=y
# CONFIG_OPENSSL_WITH_DTLS is not set
# CONFIG_OPENSSL_WITH_NPN is not set
CONFIG_OPENSSL_WITH_SRP=y
CONFIG_OPENSSL_WITH_CMS=y

#
# Algorithm Selection
#
# CONFIG_OPENSSL_WITH_EC2M is not set
CONFIG_OPENSSL_WITH_CHACHA_POLY1305=y
CONFIG_OPENSSL_PREFER_CHACHA_OVER_GCM=y
CONFIG_OPENSSL_WITH_PSK=y

#
# Less commonly used build options
#
# CONFIG_OPENSSL_WITH_ARIA is not set
# CONFIG_OPENSSL_WITH_CAMELLIA is not set
# CONFIG_OPENSSL_WITH_IDEA is not set
# CONFIG_OPENSSL_WITH_SEED is not set
# CONFIG_OPENSSL_WITH_SM234 is not set
# CONFIG_OPENSSL_WITH_BLAKE2 is not set
# CONFIG_OPENSSL_WITH_MDC2 is not set
# CONFIG_OPENSSL_WITH_WHIRLPOOL is not set
# CONFIG_OPENSSL_WITH_COMPRESSION is not set
# CONFIG_OPENSSL_WITH_RFC3779 is not set

#
# Engine/Hardware Support
#
# CONFIG_OPENSSL_ENGINE is not set
# CONFIG_PACKAGE_libopenssl-conf is not set
# CONFIG_PACKAGE_libwolfssl is not set
# end of SSL

#
# Sound
#
# CONFIG_PACKAGE_alsa-ucm-conf is not set
# CONFIG_PACKAGE_liblo is not set
# end of Sound

#
# database
#
CONFIG_PACKAGE_libsqlite3=y

#
# Configuration
#
CONFIG_SQLITE3_DYNAMIC_EXTENSIONS=y
CONFIG_SQLITE3_FTS3=y
CONFIG_SQLITE3_FTS4=y
CONFIG_SQLITE3_FTS5=y
CONFIG_SQLITE3_JSON1=y
CONFIG_SQLITE3_RTREE=y
# CONFIG_SQLITE3_SESSION is not set
# end of Configuration
# end of database

#
# gnome
#
# CONFIG_PACKAGE_libsoup is not set
# end of gnome

#
# libimobiledevice
#
# CONFIG_PACKAGE_libimobiledevice is not set
# CONFIG_PACKAGE_libirecovery is not set
# CONFIG_PACKAGE_libplist is not set
# CONFIG_PACKAGE_libplistcxx is not set
# CONFIG_PACKAGE_libusbmuxd is not set
# end of libimobiledevice

# CONFIG_PACKAGE_acsccid is not set
CONFIG_PACKAGE_alsa-lib=y

#
# Configuration
#
# CONFIG_ALSA_LIB_EXTRA_resmgr is not set
# CONFIG_ALSA_LIB_EXTRA_aload is not set
CONFIG_ALSA_LIB_EXTRA_mixer=y
CONFIG_ALSA_LIB_EXTRA_pcm=y
# CONFIG_ALSA_LIB_EXTRA_rawmidi is not set
CONFIG_ALSA_LIB_EXTRA_hwdep=y
CONFIG_ALSA_LIB_EXTRA_seq=y
# CONFIG_ALSA_LIB_EXTRA_ucm is not set
# CONFIG_ALSA_LIB_EXTRA_topology is not set
# CONFIG_ALSA_LIB_EXTRA_alisp is not set
# end of Configuration

# CONFIG_PACKAGE_alsa-plugins is not set
# CONFIG_PACKAGE_argp-standalone is not set
# CONFIG_PACKAGE_bind-libs is not set
CONFIG_PACKAGE_bluez-libs=y
# CONFIG_PACKAGE_boost is not set
# CONFIG_boost-context-exclude is not set
# CONFIG_boost-coroutine-exclude is not set
# CONFIG_boost-fiber-exclude is not set
# CONFIG_PACKAGE_cJSON is not set
# CONFIG_PACKAGE_ccid is not set
# CONFIG_PACKAGE_check is not set
# CONFIG_PACKAGE_confuse is not set
# CONFIG_PACKAGE_czmq is not set
# CONFIG_PACKAGE_dtndht is not set
CONFIG_PACKAGE_ell=y
# CONFIG_PACKAGE_getdns is not set
# CONFIG_PACKAGE_giflib is not set
CONFIG_PACKAGE_glib2=y
# CONFIG_PACKAGE_google-authenticator-libpam is not set
# CONFIG_PACKAGE_hidapi is not set
# CONFIG_PACKAGE_ibrcommon is not set
# CONFIG_PACKAGE_ibrdtn is not set
# CONFIG_PACKAGE_icu is not set
# CONFIG_PACKAGE_icu-data-tools is not set
# CONFIG_PACKAGE_icu-full-data is not set
# CONFIG_PACKAGE_jansson is not set
# CONFIG_PACKAGE_json-glib is not set
# CONFIG_PACKAGE_jsoncpp is not set
# CONFIG_PACKAGE_knot-libs is not set
# CONFIG_PACKAGE_knot-libzscanner is not set
# CONFIG_PACKAGE_libaio is not set
# CONFIG_PACKAGE_libantlr3c is not set
# CONFIG_PACKAGE_libao is not set
# CONFIG_PACKAGE_libapr is not set
# CONFIG_PACKAGE_libaprutil is not set
# CONFIG_PACKAGE_libarchive is not set
# CONFIG_PACKAGE_libarchive-noopenssl is not set
# CONFIG_PACKAGE_libasm is not set
# CONFIG_PACKAGE_libassuan is not set
# CONFIG_PACKAGE_libatasmart is not set
# CONFIG_PACKAGE_libatomic_ops is not set
# CONFIG_PACKAGE_libaudit is not set
# CONFIG_PACKAGE_libauparse is not set
# CONFIG_PACKAGE_libavahi-client is not set
# CONFIG_PACKAGE_libavahi-compat-libdnssd is not set
# CONFIG_PACKAGE_libavahi-dbus-support is not set
# CONFIG_PACKAGE_libavahi-nodbus-support is not set
# CONFIG_PACKAGE_libbfd is not set
CONFIG_PACKAGE_libblkid=y
CONFIG_PACKAGE_libblobmsg-json=y
# CONFIG_PACKAGE_libbpf is not set
# CONFIG_PACKAGE_libbsd is not set
# CONFIG_PACKAGE_libcairo is not set
# CONFIG_PACKAGE_libcap is not set
# CONFIG_PACKAGE_libcap-ng is not set
# CONFIG_PACKAGE_libcares is not set
# CONFIG_PACKAGE_libcbor is not set
# CONFIG_PACKAGE_libcgroup is not set
# CONFIG_PACKAGE_libcharset is not set
# CONFIG_PACKAGE_libchipmunk is not set
# CONFIG_PACKAGE_libcoap is not set
CONFIG_PACKAGE_libcomerr=y
CONFIG_PACKAGE_libconfig=y
# CONFIG_PACKAGE_libctf is not set
# CONFIG_PACKAGE_libcurl is not set
# CONFIG_PACKAGE_libdaemon is not set
# CONFIG_PACKAGE_libdaq is not set
# CONFIG_PACKAGE_libdaq3 is not set
CONFIG_PACKAGE_libdb47=y
# CONFIG_PACKAGE_libdb47xx is not set
# CONFIG_PACKAGE_libdbi is not set
CONFIG_PACKAGE_libdbus=y
# CONFIG_PACKAGE_libdevmapper-normal is not set
# CONFIG_PACKAGE_libdevmapper-selinux is not set
# CONFIG_PACKAGE_libdmapsharing is not set
# CONFIG_PACKAGE_libdnet is not set
# CONFIG_PACKAGE_libdrm is not set
# CONFIG_PACKAGE_libdvbcsa is not set
# CONFIG_PACKAGE_libdw is not set
# CONFIG_PACKAGE_libecdsautil is not set
# CONFIG_PACKAGE_libedit is not set
# CONFIG_PACKAGE_libelf is not set
# CONFIG_PACKAGE_libesmtp is not set
# CONFIG_PACKAGE_libestr is not set
# CONFIG_PACKAGE_libev is not set
# CONFIG_PACKAGE_libevdev is not set
# CONFIG_PACKAGE_libevent2 is not set
# CONFIG_PACKAGE_libevent2-core is not set
# CONFIG_PACKAGE_libevent2-extra is not set
# CONFIG_PACKAGE_libevent2-openssl is not set
# CONFIG_PACKAGE_libevent2-pthreads is not set
# CONFIG_PACKAGE_libexif is not set
CONFIG_PACKAGE_libexpat=y
# CONFIG_PACKAGE_libexslt is not set
CONFIG_PACKAGE_libext2fs=y
# CONFIG_PACKAGE_libextractor is not set
# CONFIG_PACKAGE_libf2fs is not set
# CONFIG_PACKAGE_libf2fs-selinux is not set
# CONFIG_PACKAGE_libfaad2 is not set
# CONFIG_PACKAGE_libfastjson is not set
# CONFIG_PACKAGE_libfdisk is not set
# CONFIG_PACKAGE_libfdt is not set
CONFIG_PACKAGE_libffi=y
# CONFIG_PACKAGE_libfido2 is not set
# CONFIG_PACKAGE_libflac is not set
# CONFIG_PACKAGE_libfmt is not set
CONFIG_PACKAGE_libfreetype=y
# CONFIG_PACKAGE_libfstrm is not set
# CONFIG_PACKAGE_libftdi is not set
# CONFIG_PACKAGE_libftdi1 is not set
# CONFIG_PACKAGE_libgabe is not set
# CONFIG_PACKAGE_libgcrypt is not set
# CONFIG_PACKAGE_libgd is not set
# CONFIG_PACKAGE_libgd-full is not set
CONFIG_PACKAGE_libgdbm=y
# CONFIG_PACKAGE_libgee is not set
# CONFIG_PACKAGE_libgmp is not set
# CONFIG_PACKAGE_libgpg-error is not set
# CONFIG_PACKAGE_libgpgme is not set
# CONFIG_PACKAGE_libgpgmepp is not set
# CONFIG_PACKAGE_libgphoto2 is not set
# CONFIG_PACKAGE_libgpiod is not set
# CONFIG_PACKAGE_libgps is not set
# CONFIG_PACKAGE_libh2o is not set
# CONFIG_PACKAGE_libh2o-evloop is not set
# CONFIG_PACKAGE_libhamlib is not set
# CONFIG_PACKAGE_libhavege is not set
# CONFIG_PACKAGE_libhiredis is not set
# CONFIG_PACKAGE_libhttp-parser is not set
# CONFIG_PACKAGE_libhwloc is not set
# CONFIG_PACKAGE_libi2c is not set
CONFIG_PACKAGE_libical=y
# CONFIG_PACKAGE_libiconv is not set
# CONFIG_PACKAGE_libiconv-full is not set
# CONFIG_PACKAGE_libid3tag is not set
# CONFIG_PACKAGE_libidn is not set
# CONFIG_PACKAGE_libidn2 is not set
# CONFIG_PACKAGE_libiio is not set
# CONFIG_PACKAGE_libinotifytools is not set
# CONFIG_PACKAGE_libinput is not set
# CONFIG_PACKAGE_libintl is not set
# CONFIG_PACKAGE_libintl-full is not set
# CONFIG_PACKAGE_libipfs-http-client is not set
# CONFIG_PACKAGE_libiw is not set
# CONFIG_PACKAGE_libiwinfo is not set
CONFIG_PACKAGE_libjpeg-turbo=y
CONFIG_PACKAGE_libjson-c=y
# CONFIG_PACKAGE_libkeyutils is not set
# CONFIG_PACKAGE_libkmod is not set
# CONFIG_PACKAGE_libksba is not set
# CONFIG_PACKAGE_libldns is not set
# CONFIG_PACKAGE_libleptonica is not set
# CONFIG_PACKAGE_libloragw is not set
# CONFIG_PACKAGE_libltdl is not set
CONFIG_PACKAGE_liblua=y
# CONFIG_PACKAGE_liblua5.3 is not set
CONFIG_PACKAGE_liblzo=y
# CONFIG_PACKAGE_libmad is not set
# CONFIG_PACKAGE_libmagic is not set
# CONFIG_PACKAGE_libmaxminddb is not set
# CONFIG_PACKAGE_libmbim is not set
# CONFIG_PACKAGE_libmcrypt is not set
# CONFIG_PACKAGE_libmicrohttpd-no-ssl is not set
# CONFIG_PACKAGE_libmicrohttpd-ssl is not set
# CONFIG_PACKAGE_libmilter-sendmail is not set
# CONFIG_PACKAGE_libminiupnpc is not set
# CONFIG_PACKAGE_libminui is not set
# CONFIG_PACKAGE_libmms is not set
# CONFIG_PACKAGE_libmnl is not set
# CONFIG_PACKAGE_libmodbus is not set
# CONFIG_PACKAGE_libmosquitto-nossl is not set
# CONFIG_PACKAGE_libmosquitto-ssl is not set
# CONFIG_PACKAGE_libmount is not set
# CONFIG_PACKAGE_libmpdclient is not set
# CONFIG_PACKAGE_libmpeg2 is not set
# CONFIG_PACKAGE_libmpg123 is not set
# CONFIG_PACKAGE_libnatpmp is not set
CONFIG_PACKAGE_libncurses=y
# CONFIG_PACKAGE_libndpi is not set
# CONFIG_PACKAGE_libneon is not set
# CONFIG_PACKAGE_libnet-1.2.x is not set
# CONFIG_PACKAGE_libnetconf2 is not set
# CONFIG_PACKAGE_libnetfilter-acct is not set
# CONFIG_PACKAGE_libnetfilter-conntrack is not set
# CONFIG_PACKAGE_libnetfilter-cthelper is not set
# CONFIG_PACKAGE_libnetfilter-cttimeout is not set
# CONFIG_PACKAGE_libnetfilter-log is not set
# CONFIG_PACKAGE_libnetfilter-queue is not set
# CONFIG_PACKAGE_libnetsnmp is not set
# CONFIG_PACKAGE_libnettle is not set
# CONFIG_PACKAGE_libnewt is not set
# CONFIG_PACKAGE_libnfnetlink is not set
# CONFIG_PACKAGE_libnftnl is not set
# CONFIG_PACKAGE_libnghttp2 is not set
# CONFIG_PACKAGE_libnl is not set
# CONFIG_PACKAGE_libnl-core is not set
# CONFIG_PACKAGE_libnl-genl is not set
# CONFIG_PACKAGE_libnl-nf is not set
# CONFIG_PACKAGE_libnl-route is not set
CONFIG_PACKAGE_libnl-tiny=y
# CONFIG_PACKAGE_libnopoll is not set
# CONFIG_PACKAGE_libnpth is not set
# CONFIG_PACKAGE_libnpupnp is not set
# CONFIG_PACKAGE_libogg is not set
# CONFIG_PACKAGE_liboil is not set
# CONFIG_PACKAGE_libopcodes is not set
# CONFIG_PACKAGE_libopendkim is not set
# CONFIG_PACKAGE_libopenobex is not set
# CONFIG_PACKAGE_libopensc is not set
# CONFIG_PACKAGE_libopenzwave is not set
# CONFIG_PACKAGE_liboping is not set
# CONFIG_PACKAGE_libopus is not set
# CONFIG_PACKAGE_libopusenc is not set
# CONFIG_PACKAGE_libopusfile is not set
# CONFIG_PACKAGE_liborcania is not set
# CONFIG_PACKAGE_libout123 is not set
# CONFIG_PACKAGE_libowipcalc is not set
# CONFIG_PACKAGE_libp11 is not set
# CONFIG_PACKAGE_libpagekite is not set
# CONFIG_PACKAGE_libpam is not set
# CONFIG_PACKAGE_libpbc is not set
CONFIG_PACKAGE_libpcap=y

#
# Configuration
#
# CONFIG_PCAP_HAS_USB is not set
# CONFIG_PCAP_HAS_NETFILTER is not set
# end of Configuration

# CONFIG_PACKAGE_libpci is not set
# CONFIG_PACKAGE_libpciaccess is not set
CONFIG_PACKAGE_libpcre=y
CONFIG_PCRE_JIT_ENABLED=y
# CONFIG_PACKAGE_libpcre16 is not set
# CONFIG_PACKAGE_libpcre2 is not set
# CONFIG_PACKAGE_libpcre2-16 is not set
# CONFIG_PACKAGE_libpcre2-32 is not set
# CONFIG_PACKAGE_libpcre32 is not set
# CONFIG_PACKAGE_libpcrecpp is not set
# CONFIG_PACKAGE_libpcsclite is not set
# CONFIG_PACKAGE_libpfring is not set
# CONFIG_PACKAGE_libpixman is not set
# CONFIG_PACKAGE_libpkcs11-spy is not set
# CONFIG_PACKAGE_libpkgconf is not set
CONFIG_PACKAGE_libpng=y
# CONFIG_PACKAGE_libpopt is not set
# CONFIG_PACKAGE_libprotobuf-c is not set
# CONFIG_PACKAGE_libpsl is not set
# CONFIG_PACKAGE_libqmi is not set
# CONFIG_PACKAGE_libqrencode is not set
# CONFIG_PACKAGE_libqrtr-glib is not set
# CONFIG_PACKAGE_libradcli is not set
# CONFIG_PACKAGE_libradiotap is not set
CONFIG_PACKAGE_libreadline=y
# CONFIG_PACKAGE_libredblack is not set
# CONFIG_PACKAGE_librouteros is not set
# CONFIG_PACKAGE_libroxml is not set
# CONFIG_PACKAGE_librrd1 is not set
# CONFIG_PACKAGE_librsync is not set
# CONFIG_PACKAGE_librtlsdr is not set
# CONFIG_PACKAGE_libruby is not set
# CONFIG_PACKAGE_libsamplerate is not set
# CONFIG_PACKAGE_libsane is not set
# CONFIG_PACKAGE_libsasl2 is not set
# CONFIG_PACKAGE_libsearpc is not set
# CONFIG_PACKAGE_libseccomp is not set
# CONFIG_PACKAGE_libselinux is not set
# CONFIG_PACKAGE_libsemanage is not set
# CONFIG_PACKAGE_libsensors is not set
# CONFIG_PACKAGE_libsepol is not set
# CONFIG_PACKAGE_libshout is not set
# CONFIG_PACKAGE_libshout-full is not set
# CONFIG_PACKAGE_libshout-nossl is not set
# CONFIG_PACKAGE_libsispmctl is not set
# CONFIG_PACKAGE_libslang2 is not set
# CONFIG_PACKAGE_libslang2-mod-base64 is not set
# CONFIG_PACKAGE_libslang2-mod-chksum is not set
# CONFIG_PACKAGE_libslang2-mod-csv is not set
# CONFIG_PACKAGE_libslang2-mod-fcntl is not set
# CONFIG_PACKAGE_libslang2-mod-fork is not set
# CONFIG_PACKAGE_libslang2-mod-histogram is not set
# CONFIG_PACKAGE_libslang2-mod-iconv is not set
# CONFIG_PACKAGE_libslang2-mod-json is not set
# CONFIG_PACKAGE_libslang2-mod-onig is not set
# CONFIG_PACKAGE_libslang2-mod-pcre is not set
# CONFIG_PACKAGE_libslang2-mod-png is not set
# CONFIG_PACKAGE_libslang2-mod-rand is not set
# CONFIG_PACKAGE_libslang2-mod-select is not set
# CONFIG_PACKAGE_libslang2-mod-slsmg is not set
# CONFIG_PACKAGE_libslang2-mod-socket is not set
# CONFIG_PACKAGE_libslang2-mod-stats is not set
# CONFIG_PACKAGE_libslang2-mod-sysconf is not set
# CONFIG_PACKAGE_libslang2-mod-termios is not set
# CONFIG_PACKAGE_libslang2-mod-varray is not set
# CONFIG_PACKAGE_libslang2-mod-zlib is not set
# CONFIG_PACKAGE_libslang2-modules is not set
# CONFIG_PACKAGE_libsmartcols is not set
CONFIG_PACKAGE_libsndfile=y
# CONFIG_PACKAGE_libsoc is not set
# CONFIG_PACKAGE_libsocks is not set
# CONFIG_PACKAGE_libsodium is not set
# CONFIG_PACKAGE_libsoxr is not set
# CONFIG_PACKAGE_libspeex is not set
# CONFIG_PACKAGE_libspeexdsp is not set
# CONFIG_PACKAGE_libspice-server is not set
CONFIG_PACKAGE_libss=y
# CONFIG_PACKAGE_libssh is not set
# CONFIG_PACKAGE_libssh2 is not set
# CONFIG_PACKAGE_libstoken is not set
# CONFIG_PACKAGE_libstrophe is not set
# CONFIG_PACKAGE_libsyn123 is not set
# CONFIG_PACKAGE_libsysrepo is not set
# CONFIG_PACKAGE_libtalloc is not set
# CONFIG_PACKAGE_libtasn1 is not set
# CONFIG_PACKAGE_libtheora is not set
# CONFIG_PACKAGE_libtiff is not set
# CONFIG_PACKAGE_libtiffxx is not set
# CONFIG_PACKAGE_libtins is not set
# CONFIG_PACKAGE_libtirpc is not set
# CONFIG_PACKAGE_libtorrent-rasterbar is not set
CONFIG_PACKAGE_libubox=y
# CONFIG_PACKAGE_libubox-lua is not set
CONFIG_PACKAGE_libubus=y
# CONFIG_PACKAGE_libubus-lua is not set
CONFIG_PACKAGE_libuci=y
# CONFIG_PACKAGE_libuci-lua is not set
# CONFIG_PACKAGE_libuci2 is not set
# CONFIG_PACKAGE_libuclient is not set
# CONFIG_PACKAGE_libudev-zero is not set
# CONFIG_PACKAGE_libudns is not set
# CONFIG_PACKAGE_libuecc is not set
# CONFIG_PACKAGE_libugpio is not set
# CONFIG_PACKAGE_libunistring is not set
# CONFIG_PACKAGE_libunwind is not set
# CONFIG_PACKAGE_libupnp is not set
# CONFIG_PACKAGE_libupnpp is not set
# CONFIG_PACKAGE_liburcu is not set
# CONFIG_PACKAGE_liburing is not set
# CONFIG_PACKAGE_libusb-1.0 is not set
# CONFIG_PACKAGE_libusb-compat is not set
# CONFIG_PACKAGE_libustream-mbedtls is not set
# CONFIG_PACKAGE_libustream-openssl is not set
# CONFIG_PACKAGE_libustream-wolfssl is not set
CONFIG_PACKAGE_libuuid=y
# CONFIG_PACKAGE_libuv is not set
# CONFIG_PACKAGE_libuwifi is not set
# CONFIG_PACKAGE_libv4l is not set
# CONFIG_PACKAGE_libvorbis is not set
# CONFIG_PACKAGE_libvorbisidec is not set
# CONFIG_PACKAGE_libvpx is not set
CONFIG_PACKAGE_libwebp=y
# CONFIG_PACKAGE_libwebsockets-full is not set
# CONFIG_PACKAGE_libwebsockets-mbedtls is not set
# CONFIG_PACKAGE_libwebsockets-openssl is not set
# CONFIG_PACKAGE_libwrap is not set
# CONFIG_PACKAGE_libx264 is not set
# CONFIG_PACKAGE_libxerces-c is not set
# CONFIG_PACKAGE_libxerces-c-samples is not set
# CONFIG_PACKAGE_libxkbcommon is not set
CONFIG_PACKAGE_libxml2=y
# CONFIG_PACKAGE_libxslt is not set
# CONFIG_PACKAGE_libyaml-cpp is not set
# CONFIG_PACKAGE_libyang is not set
# CONFIG_PACKAGE_libyang-cpp is not set
# CONFIG_PACKAGE_libyubikey is not set
# CONFIG_PACKAGE_libzmq-curve is not set
# CONFIG_PACKAGE_libzmq-nc is not set
# CONFIG_PACKAGE_linux-atm is not set
# CONFIG_PACKAGE_lmdb is not set
# CONFIG_PACKAGE_log4cplus is not set
# CONFIG_PACKAGE_loudmouth is not set
# CONFIG_PACKAGE_lttng-ust is not set
# CONFIG_PACKAGE_minizip is not set
# CONFIG_PACKAGE_msgpack-c is not set
# CONFIG_PACKAGE_mtdev is not set
# CONFIG_PACKAGE_musl-fts is not set
# CONFIG_PACKAGE_mxml is not set
# CONFIG_PACKAGE_nspr is not set
# CONFIG_PACKAGE_oniguruma is not set
# CONFIG_PACKAGE_open-isns is not set
# CONFIG_PACKAGE_p11-kit is not set
# CONFIG_PACKAGE_poco is not set
# CONFIG_PACKAGE_poco-all is not set
# CONFIG_PACKAGE_protobuf is not set
# CONFIG_PACKAGE_protobuf-lite is not set
# CONFIG_PACKAGE_pthsem is not set
# CONFIG_PACKAGE_re2 is not set
CONFIG_PACKAGE_sbc=y
# CONFIG_PACKAGE_serdisplib is not set
CONFIG_PACKAGE_terminfo=y
CONFIG_PACKAGE_tinyalsa-lib=y
# CONFIG_PACKAGE_tinycdb is not set
CONFIG_PACKAGE_tslib=y
CONFIG_TSLIB_ENABLE_input=y
# CONFIG_TSLIB_ENABLE_debounce is not set
# CONFIG_TSLIB_ENABLE_dejitter is not set
# CONFIG_TSLIB_ENABLE_iir is not set
# CONFIG_TSLIB_ENABLE_linear is not set
# CONFIG_TSLIB_ENABLE_median is not set
# CONFIG_TSLIB_ENABLE_pthres is not set
# CONFIG_TSLIB_ENABLE_skip is not set
# CONFIG_TSLIB_ENABLE_lowpass is not set
# CONFIG_TSLIB_ENABLE_invert is not set
# CONFIG_TSLIB_ENABLE_variance is not set
# CONFIG_TSLIB_ENABLE_tatung is not set
# CONFIG_TSLIB_ENABLE_touchkit is not set
# CONFIG_TSLIB_ENABLE_waveshare is not set
# CONFIG_TSLIB_ENABLE_ucb1x00 is not set
# CONFIG_TSLIB_ENABLE_mk712 is not set
# CONFIG_TSLIB_ENABLE_h3600 is not set
# CONFIG_TSLIB_ENABLE_dmc is not set
# CONFIG_TSLIB_ENABLE_linear-h2200 is not set
# CONFIG_TSLIB_ENABLE_corgi is not set
# CONFIG_TSLIB_ENABLE_collie is not set
# CONFIG_TSLIB_ENABLE_arctic2 is not set
# CONFIG_TSLIB_ENABLE_dmc_dus3000 is not set
# CONFIG_TSLIB_ENABLE_cy8mrln-palmpre is not set
# CONFIG_TSLIB_ENABLE_galax is not set
# CONFIG_TSLIB_ENABLE_tests is not set
# CONFIG_TSLIB_ENABLE_tools is not set
CONFIG_PACKAGE_uclibcxx=y
# CONFIG_PACKAGE_uw-imap is not set
# CONFIG_PACKAGE_x264 is not set
# CONFIG_PACKAGE_xkeyboard-config is not set
# CONFIG_PACKAGE_xmlrpc-c is not set
# CONFIG_PACKAGE_xmlrpc-c-client is not set
# CONFIG_PACKAGE_xmlrpc-c-server is not set
# CONFIG_PACKAGE_yajl is not set
# CONFIG_PACKAGE_yubico-pam is not set
CONFIG_PACKAGE_zlib=y

#
# Configuration
#
# CONFIG_ZLIB_OPTIMIZE_SPEED is not set
# end of Configuration
# end of Libraries

#
# Mail
#
# CONFIG_PACKAGE_alpine is not set
# CONFIG_PACKAGE_bogofilter is not set
# CONFIG_PACKAGE_dovecot is not set
# CONFIG_PACKAGE_dovecot-pigeonhole is not set
# CONFIG_PACKAGE_dovecot-utils is not set
# CONFIG_PACKAGE_emailrelay is not set
# CONFIG_PACKAGE_fdm is not set
# CONFIG_PACKAGE_greyfix is not set
# CONFIG_PACKAGE_mailsend is not set
# CONFIG_PACKAGE_mailsend-nossl is not set
# CONFIG_PACKAGE_mblaze is not set
# CONFIG_PACKAGE_msmtp is not set
# CONFIG_PACKAGE_msmtp-mta is not set
# CONFIG_PACKAGE_msmtp-nossl is not set
# CONFIG_PACKAGE_msmtp-queue is not set
# CONFIG_PACKAGE_mutt is not set
# CONFIG_PACKAGE_nail is not set
# CONFIG_PACKAGE_opendkim is not set
# CONFIG_PACKAGE_opendkim-tools is not set
# CONFIG_PACKAGE_postfix is not set

#
# Select postfix build options
#
CONFIG_POSTFIX_TLS=y
CONFIG_POSTFIX_SASL=y
CONFIG_POSTFIX_LDAP=y
# CONFIG_POSTFIX_DB is not set
CONFIG_POSTFIX_CDB=y
CONFIG_POSTFIX_SQLITE=y
# CONFIG_POSTFIX_MYSQL is not set
# CONFIG_POSTFIX_PGSQL is not set
CONFIG_POSTFIX_PCRE=y
# CONFIG_POSTFIX_EAI is not set
# end of Select postfix build options

# CONFIG_PACKAGE_spamc is not set
# CONFIG_PACKAGE_spamc-ssl is not set
# end of Mail

#
# Multimedia
#

#
# GStreamer
#
# CONFIG_PACKAGE_gst-omx is not set
# CONFIG_PACKAGE_gst1-libav is not set
# CONFIG_PACKAGE_gstreamer1-libs is not set
# CONFIG_PACKAGE_gstreamer1-plugins-aw is not set
# CONFIG_PACKAGE_gstreamer1-plugins-bad is not set
# CONFIG_PACKAGE_gstreamer1-plugins-base is not set
# CONFIG_PACKAGE_gstreamer1-plugins-good is not set
# CONFIG_PACKAGE_gstreamer1-plugins-ugly is not set
# CONFIG_PACKAGE_gstreamer1-utils is not set
# end of GStreamer

#
# Streaming
#
# CONFIG_PACKAGE_oggfwd is not set
# end of Streaming

# CONFIG_PACKAGE_bluez-alsa is not set
# CONFIG_PACKAGE_fswebcam is not set
# CONFIG_PACKAGE_gphoto2 is not set
# CONFIG_PACKAGE_graphicsmagick is not set
# CONFIG_PACKAGE_grilo is not set
# CONFIG_PACKAGE_grilo-plugins is not set
# CONFIG_PACKAGE_icecast is not set
# CONFIG_PACKAGE_imagemagick is not set
# CONFIG_PACKAGE_lcdgrilo is not set
# CONFIG_PACKAGE_live is not set
# CONFIG_PACKAGE_minisatip is not set
# CONFIG_PACKAGE_mjpg-streamer is not set
# CONFIG_PACKAGE_motion is not set
# CONFIG_PACKAGE_tvheadend is not set
# CONFIG_PACKAGE_v4l2rtspserver is not set
# CONFIG_PACKAGE_vips is not set
# CONFIG_PACKAGE_xupnpd is not set
# CONFIG_PACKAGE_youtube-dl is not set
# end of Multimedia

#
# Network
#

#
# BitTorrent
#
# CONFIG_PACKAGE_mktorrent is not set
# CONFIG_PACKAGE_opentracker is not set
# CONFIG_PACKAGE_opentracker6 is not set
# CONFIG_PACKAGE_rtorrent is not set
# CONFIG_PACKAGE_rtorrent-rpc is not set
# CONFIG_PACKAGE_transmission-cli is not set
# CONFIG_PACKAGE_transmission-daemon is not set
# CONFIG_PACKAGE_transmission-remote is not set
# CONFIG_PACKAGE_transmission-web is not set
# CONFIG_PACKAGE_transmission-web-control is not set
# end of BitTorrent

#
# Captive Portals
#
# CONFIG_PACKAGE_apfree-wifidog is not set
# CONFIG_PACKAGE_coova-chilli is not set
# CONFIG_PACKAGE_wifidog is not set
# CONFIG_PACKAGE_wifidog-tls is not set
# end of Captive Portals

#
# Cloud Manager
#
# CONFIG_PACKAGE_rclone-ng is not set
# CONFIG_PACKAGE_rclone-webui-react is not set
# end of Cloud Manager

#
# Dial-in/up
#
# end of Dial-in/up

#
# Download Manager
#
# CONFIG_PACKAGE_ariang is not set
# CONFIG_PACKAGE_ariang-nginx is not set
# CONFIG_PACKAGE_leech is not set
# CONFIG_PACKAGE_webui-aria2 is not set
# end of Download Manager

#
# File Transfer
#
# CONFIG_PACKAGE_aria2 is not set
# CONFIG_PACKAGE_atftp is not set
# CONFIG_PACKAGE_atftpd is not set
# CONFIG_PACKAGE_curl is not set
# CONFIG_PACKAGE_lftp is not set
# CONFIG_PACKAGE_rclone is not set
# CONFIG_PACKAGE_rclone-config is not set
# CONFIG_PACKAGE_rsync is not set
# CONFIG_PACKAGE_rsyncd is not set
# CONFIG_PACKAGE_vsftpd is not set
# CONFIG_PACKAGE_vsftpd-tls is not set
# CONFIG_PACKAGE_wget-nossl is not set
# CONFIG_PACKAGE_wget-ssl is not set
# end of File Transfer

#
# Filesystem
#
# CONFIG_PACKAGE_davfs2 is not set
# CONFIG_PACKAGE_ksmbd-avahi-service is not set
# CONFIG_PACKAGE_ksmbd-server is not set
# CONFIG_PACKAGE_ksmbd-utils is not set
# CONFIG_PACKAGE_netatalk is not set
# CONFIG_PACKAGE_nfs-kernel-server is not set
# CONFIG_PACKAGE_owftpd is not set
# CONFIG_PACKAGE_owhttpd is not set
# CONFIG_PACKAGE_owserver is not set
# CONFIG_PACKAGE_sshfs is not set
# end of Filesystem

#
# Firewall
#
# CONFIG_PACKAGE_arptables is not set
# CONFIG_PACKAGE_conntrack is not set
# CONFIG_PACKAGE_conntrackd is not set
# CONFIG_PACKAGE_ebtables is not set
# CONFIG_PACKAGE_fwknop is not set
# CONFIG_PACKAGE_fwknopd is not set
# CONFIG_PACKAGE_ip6tables is not set
CONFIG_PACKAGE_iptables=y
# CONFIG_IPTABLES_CONNLABEL is not set
# CONFIG_IPTABLES_NFTABLES is not set
# CONFIG_PACKAGE_iptables-mod-account is not set
# CONFIG_PACKAGE_iptables-mod-chaos is not set
# CONFIG_PACKAGE_iptables-mod-checksum is not set
# CONFIG_PACKAGE_iptables-mod-cluster is not set
# CONFIG_PACKAGE_iptables-mod-clusterip is not set
# CONFIG_PACKAGE_iptables-mod-condition is not set
# CONFIG_PACKAGE_iptables-mod-conntrack-extra is not set
# CONFIG_PACKAGE_iptables-mod-delude is not set
# CONFIG_PACKAGE_iptables-mod-dhcpmac is not set
# CONFIG_PACKAGE_iptables-mod-dnetmap is not set
# CONFIG_PACKAGE_iptables-mod-extra is not set
# CONFIG_PACKAGE_iptables-mod-filter is not set
# CONFIG_PACKAGE_iptables-mod-fuzzy is not set
# CONFIG_PACKAGE_iptables-mod-geoip is not set
# CONFIG_PACKAGE_iptables-mod-hashlimit is not set
# CONFIG_PACKAGE_iptables-mod-iface is not set
# CONFIG_PACKAGE_iptables-mod-ipmark is not set
# CONFIG_PACKAGE_iptables-mod-ipopt is not set
# CONFIG_PACKAGE_iptables-mod-ipp2p is not set
# CONFIG_PACKAGE_iptables-mod-iprange is not set
# CONFIG_PACKAGE_iptables-mod-ipsec is not set
# CONFIG_PACKAGE_iptables-mod-ipv4options is not set
# CONFIG_PACKAGE_iptables-mod-led is not set
# CONFIG_PACKAGE_iptables-mod-length2 is not set
# CONFIG_PACKAGE_iptables-mod-logmark is not set
# CONFIG_PACKAGE_iptables-mod-lscan is not set
# CONFIG_PACKAGE_iptables-mod-lua is not set
# CONFIG_PACKAGE_iptables-mod-nat-extra is not set
# CONFIG_PACKAGE_iptables-mod-nflog is not set
# CONFIG_PACKAGE_iptables-mod-nfqueue is not set
# CONFIG_PACKAGE_iptables-mod-physdev is not set
# CONFIG_PACKAGE_iptables-mod-proto is not set
# CONFIG_PACKAGE_iptables-mod-psd is not set
# CONFIG_PACKAGE_iptables-mod-quota2 is not set
# CONFIG_PACKAGE_iptables-mod-rpfilter is not set
# CONFIG_PACKAGE_iptables-mod-sysrq is not set
# CONFIG_PACKAGE_iptables-mod-tarpit is not set
# CONFIG_PACKAGE_iptables-mod-tee is not set
# CONFIG_PACKAGE_iptables-mod-tproxy is not set
# CONFIG_PACKAGE_iptables-mod-trace is not set
# CONFIG_PACKAGE_iptables-mod-u32 is not set
# CONFIG_PACKAGE_iptables-mod-ulog is not set
# CONFIG_PACKAGE_iptaccount is not set
# CONFIG_PACKAGE_iptgeoip is not set

#
# Select iptgeoip options
#
# CONFIG_IPTGEOIP_PRESERVE is not set
# end of Select iptgeoip options

# CONFIG_PACKAGE_miniupnpc is not set
# CONFIG_PACKAGE_miniupnpd is not set
# CONFIG_PACKAGE_natpmpc is not set
# CONFIG_PACKAGE_nftables-json is not set
# CONFIG_PACKAGE_nftables-nojson is not set
# CONFIG_PACKAGE_shorewall is not set
# CONFIG_PACKAGE_shorewall-core is not set
# CONFIG_PACKAGE_shorewall-lite is not set
# CONFIG_PACKAGE_shorewall6 is not set
# CONFIG_PACKAGE_shorewall6-lite is not set
# CONFIG_PACKAGE_snort is not set
# CONFIG_PACKAGE_snort3 is not set
# end of Firewall

#
# Firewall Tunnel
#
# CONFIG_PACKAGE_iodine is not set
# CONFIG_PACKAGE_iodined is not set
# end of Firewall Tunnel

#
# FreeRADIUS (version 3)
#
# CONFIG_PACKAGE_freeradius3 is not set
# CONFIG_PACKAGE_freeradius3-common is not set
# CONFIG_PACKAGE_freeradius3-utils is not set
# end of FreeRADIUS (version 3)

#
# IP Addresses and Names
#
# CONFIG_PACKAGE_aggregate is not set
# CONFIG_PACKAGE_announce is not set
# CONFIG_PACKAGE_avahi-autoipd is not set
# CONFIG_PACKAGE_avahi-daemon-service-http is not set
# CONFIG_PACKAGE_avahi-daemon-service-ssh is not set
# CONFIG_PACKAGE_avahi-dbus-daemon is not set
# CONFIG_PACKAGE_avahi-dnsconfd is not set
# CONFIG_PACKAGE_avahi-nodbus-daemon is not set
# CONFIG_PACKAGE_avahi-utils is not set
# CONFIG_PACKAGE_bind-check is not set
# CONFIG_PACKAGE_bind-client is not set
# CONFIG_PACKAGE_bind-dig is not set
# CONFIG_PACKAGE_bind-dnssec is not set
# CONFIG_PACKAGE_bind-host is not set
# CONFIG_PACKAGE_bind-nslookup is not set
# CONFIG_PACKAGE_bind-rndc is not set
# CONFIG_PACKAGE_bind-server is not set
# CONFIG_PACKAGE_bind-tools is not set
# CONFIG_PACKAGE_ddns-scripts is not set
# CONFIG_PACKAGE_ddns-scripts-services is not set
# CONFIG_PACKAGE_dhcp-forwarder is not set
# CONFIG_PACKAGE_dnscrypt-proxy is not set
# CONFIG_PACKAGE_dnscrypt-proxy-resolvers is not set
# CONFIG_PACKAGE_dnsdist is not set
# CONFIG_PACKAGE_drill is not set
# CONFIG_PACKAGE_hostip is not set
# CONFIG_PACKAGE_idn is not set
# CONFIG_PACKAGE_idn2 is not set
# CONFIG_PACKAGE_inadyn is not set
# CONFIG_PACKAGE_isc-dhcp-client-ipv4 is not set
# CONFIG_PACKAGE_isc-dhcp-client-ipv6 is not set
# CONFIG_PACKAGE_isc-dhcp-relay-ipv4 is not set
# CONFIG_PACKAGE_isc-dhcp-relay-ipv6 is not set
# CONFIG_PACKAGE_kadnode is not set
# CONFIG_PACKAGE_kea-admin is not set
# CONFIG_PACKAGE_kea-ctrl is not set
# CONFIG_PACKAGE_kea-dhcp-ddns is not set
# CONFIG_PACKAGE_kea-dhcp4 is not set
# CONFIG_PACKAGE_kea-dhcp6 is not set
# CONFIG_PACKAGE_kea-lfc is not set
# CONFIG_PACKAGE_kea-libs is not set
# CONFIG_PACKAGE_kea-perfdhcp is not set
# CONFIG_PACKAGE_kea-shell is not set
# CONFIG_PACKAGE_knot is not set
# CONFIG_PACKAGE_knot-dig is not set
# CONFIG_PACKAGE_knot-host is not set
# CONFIG_PACKAGE_knot-keymgr is not set
# CONFIG_PACKAGE_knot-nsupdate is not set
# CONFIG_PACKAGE_knot-resolver is not set

#
# Configuration
#
# CONFIG_PACKAGE_knot-resolver_dnstap is not set
# end of Configuration

# CONFIG_PACKAGE_knot-tests is not set
# CONFIG_PACKAGE_knot-zonecheck is not set
# CONFIG_PACKAGE_ldns-examples is not set
# CONFIG_PACKAGE_mdns-utils is not set
# CONFIG_PACKAGE_mdnsd is not set
# CONFIG_PACKAGE_mdnsresponder is not set
# CONFIG_PACKAGE_nsd is not set
# CONFIG_PACKAGE_nsd-control is not set
# CONFIG_PACKAGE_nsd-control-setup is not set
# CONFIG_PACKAGE_nsd-nossl is not set
# CONFIG_PACKAGE_overture is not set
# CONFIG_PACKAGE_pdns is not set
# CONFIG_PACKAGE_pdns-ixfrdist is not set
# CONFIG_PACKAGE_pdns-recursor is not set
# CONFIG_PACKAGE_pdns-tools is not set
# CONFIG_PACKAGE_stubby is not set
# CONFIG_PACKAGE_tor-hs is not set
# CONFIG_PACKAGE_torsocks is not set
# CONFIG_PACKAGE_unbound-anchor is not set
# CONFIG_PACKAGE_unbound-checkconf is not set
# CONFIG_PACKAGE_unbound-control is not set
# CONFIG_PACKAGE_unbound-control-setup is not set
# CONFIG_PACKAGE_unbound-daemon is not set
# CONFIG_PACKAGE_unbound-host is not set
# CONFIG_PACKAGE_wsdd2 is not set
# end of IP Addresses and Names

#
# Instant Messaging
#
# CONFIG_PACKAGE_bitlbee is not set
# CONFIG_PACKAGE_irssi is not set
# CONFIG_PACKAGE_ngircd is not set
# CONFIG_PACKAGE_ngircd-nossl is not set
# CONFIG_PACKAGE_prosody is not set
# CONFIG_PACKAGE_quassel-irssi is not set
# CONFIG_PACKAGE_umurmur-mbedtls is not set
# CONFIG_PACKAGE_umurmur-openssl is not set
# CONFIG_PACKAGE_znc is not set
# end of Instant Messaging

#
# Linux ATM tools
#
# CONFIG_PACKAGE_atm-aread is not set
# CONFIG_PACKAGE_atm-atmaddr is not set
# CONFIG_PACKAGE_atm-atmdiag is not set
# CONFIG_PACKAGE_atm-atmdump is not set
# CONFIG_PACKAGE_atm-atmloop is not set
# CONFIG_PACKAGE_atm-atmsigd is not set
# CONFIG_PACKAGE_atm-atmswitch is not set
# CONFIG_PACKAGE_atm-atmtcp is not set
# CONFIG_PACKAGE_atm-awrite is not set
# CONFIG_PACKAGE_atm-bus is not set
# CONFIG_PACKAGE_atm-debug-tools is not set
# CONFIG_PACKAGE_atm-diagnostics is not set
# CONFIG_PACKAGE_atm-esi is not set
# CONFIG_PACKAGE_atm-ilmid is not set
# CONFIG_PACKAGE_atm-ilmidiag is not set
# CONFIG_PACKAGE_atm-lecs is not set
# CONFIG_PACKAGE_atm-les is not set
# CONFIG_PACKAGE_atm-mpcd is not set
# CONFIG_PACKAGE_atm-saaldump is not set
# CONFIG_PACKAGE_atm-sonetdiag is not set
# CONFIG_PACKAGE_atm-svc_recv is not set
# CONFIG_PACKAGE_atm-svc_send is not set
# CONFIG_PACKAGE_atm-tools is not set
# CONFIG_PACKAGE_atm-ttcp_atm is not set
# CONFIG_PACKAGE_atm-zeppelin is not set
# CONFIG_PACKAGE_br2684ctl is not set
# end of Linux ATM tools

#
# LoRaWAN
#
# CONFIG_PACKAGE_libloragw-tests is not set
# CONFIG_PACKAGE_libloragw-utils is not set
# end of LoRaWAN

#
# NMAP Suite
#
# CONFIG_PACKAGE_ncat is not set
# CONFIG_PACKAGE_ncat-full is not set
# CONFIG_PACKAGE_ncat-ssl is not set
# CONFIG_PACKAGE_ndiff is not set
# CONFIG_PACKAGE_nmap is not set
# CONFIG_PACKAGE_nmap-full is not set
# CONFIG_PACKAGE_nmap-ssl is not set
# CONFIG_PACKAGE_nping is not set
# CONFIG_PACKAGE_nping-ssl is not set
# end of NMAP Suite

#
# NTRIP
#
# CONFIG_PACKAGE_ntripcaster is not set
# CONFIG_PACKAGE_ntripclient is not set
# CONFIG_PACKAGE_ntripserver is not set
# end of NTRIP

#
# Open vSwitch
#
# CONFIG_PACKAGE_openvswitch is not set
# CONFIG_PACKAGE_openvswitch-ovn-host is not set
# CONFIG_PACKAGE_openvswitch-ovn-north is not set
# CONFIG_PACKAGE_openvswitch-python3 is not set
# end of Open vSwitch

#
# OpenLDAP
#
# CONFIG_PACKAGE_libopenldap is not set
CONFIG_OPENLDAP_DEBUG=y
# CONFIG_OPENLDAP_CRYPT is not set
# CONFIG_OPENLDAP_MONITOR is not set
# CONFIG_OPENLDAP_DB47 is not set
# CONFIG_OPENLDAP_ICU is not set
# CONFIG_PACKAGE_openldap-server is not set
# CONFIG_PACKAGE_openldap-utils is not set
# end of OpenLDAP

#
# Printing
#
# CONFIG_PACKAGE_p910nd is not set
# end of Printing

#
# Routing and Redirection
#
# CONFIG_PACKAGE_bcp38 is not set
# CONFIG_PACKAGE_bfdd is not set
# CONFIG_PACKAGE_dcstad is not set
# CONFIG_PACKAGE_dcwapd is not set
# CONFIG_PACKAGE_devlink is not set
# CONFIG_PACKAGE_frr is not set
# CONFIG_PACKAGE_genl is not set
# CONFIG_PACKAGE_igmpproxy is not set
# CONFIG_PACKAGE_ip-bridge is not set
# CONFIG_PACKAGE_ip-full is not set
# CONFIG_PACKAGE_ip-tiny is not set
# CONFIG_PACKAGE_lldpd is not set
# CONFIG_PACKAGE_mrmctl is not set
# CONFIG_PACKAGE_mwan3 is not set
# CONFIG_PACKAGE_nstat is not set
# CONFIG_PACKAGE_rdma is not set
# CONFIG_PACKAGE_relayd is not set
# CONFIG_PACKAGE_smcroute is not set
# CONFIG_PACKAGE_ss is not set
# CONFIG_PACKAGE_sslh is not set
# CONFIG_PACKAGE_tc-full is not set
# CONFIG_PACKAGE_tc-mod-iptables is not set
# CONFIG_PACKAGE_tc-tiny is not set
# CONFIG_PACKAGE_tcpproxy is not set
# CONFIG_PACKAGE_yggdrasil is not set
# end of Routing and Redirection

#
# SSH
#
# CONFIG_PACKAGE_autossh is not set
# CONFIG_PACKAGE_openssh-client is not set
# CONFIG_PACKAGE_openssh-client-utils is not set
# CONFIG_PACKAGE_openssh-keygen is not set
# CONFIG_PACKAGE_openssh-moduli is not set
# CONFIG_PACKAGE_openssh-server is not set
# CONFIG_PACKAGE_openssh-server-pam is not set
# CONFIG_PACKAGE_openssh-sftp-avahi-service is not set
# CONFIG_PACKAGE_openssh-sftp-client is not set
# CONFIG_PACKAGE_openssh-sftp-server is not set
# CONFIG_PACKAGE_sshtunnel is not set
# CONFIG_PACKAGE_tmate is not set
# end of SSH

#
# THC-IPv6 attack and analyzing toolkit
#
# CONFIG_PACKAGE_thc-ipv6-address6 is not set
# CONFIG_PACKAGE_thc-ipv6-alive6 is not set
# CONFIG_PACKAGE_thc-ipv6-covert-send6 is not set
# CONFIG_PACKAGE_thc-ipv6-covert-send6d is not set
# CONFIG_PACKAGE_thc-ipv6-denial6 is not set
# CONFIG_PACKAGE_thc-ipv6-detect-new-ip6 is not set
# CONFIG_PACKAGE_thc-ipv6-detect-sniffer6 is not set
# CONFIG_PACKAGE_thc-ipv6-dnsdict6 is not set
# CONFIG_PACKAGE_thc-ipv6-dnsrevenum6 is not set
# CONFIG_PACKAGE_thc-ipv6-dos-new-ip6 is not set
# CONFIG_PACKAGE_thc-ipv6-dump-router6 is not set
# CONFIG_PACKAGE_thc-ipv6-exploit6 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-advertise6 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-dhcps6 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-dns6d is not set
# CONFIG_PACKAGE_thc-ipv6-fake-dnsupdate6 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-mipv6 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-mld26 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-mld6 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-mldrouter6 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-router26 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-router6 is not set
# CONFIG_PACKAGE_thc-ipv6-fake-solicitate6 is not set
# CONFIG_PACKAGE_thc-ipv6-flood-advertise6 is not set
# CONFIG_PACKAGE_thc-ipv6-flood-dhcpc6 is not set
# CONFIG_PACKAGE_thc-ipv6-flood-mld26 is not set
# CONFIG_PACKAGE_thc-ipv6-flood-mld6 is not set
# CONFIG_PACKAGE_thc-ipv6-flood-mldrouter6 is not set
# CONFIG_PACKAGE_thc-ipv6-flood-router26 is not set
# CONFIG_PACKAGE_thc-ipv6-flood-router6 is not set
# CONFIG_PACKAGE_thc-ipv6-flood-solicitate6 is not set
# CONFIG_PACKAGE_thc-ipv6-fragmentation6 is not set
# CONFIG_PACKAGE_thc-ipv6-fuzz-dhcpc6 is not set
# CONFIG_PACKAGE_thc-ipv6-fuzz-dhcps6 is not set
# CONFIG_PACKAGE_thc-ipv6-fuzz-ip6 is not set
# CONFIG_PACKAGE_thc-ipv6-implementation6 is not set
# CONFIG_PACKAGE_thc-ipv6-implementation6d is not set
# CONFIG_PACKAGE_thc-ipv6-inverse-lookup6 is not set
# CONFIG_PACKAGE_thc-ipv6-kill-router6 is not set
# CONFIG_PACKAGE_thc-ipv6-ndpexhaust6 is not set
# CONFIG_PACKAGE_thc-ipv6-node-query6 is not set
# CONFIG_PACKAGE_thc-ipv6-parasite6 is not set
# CONFIG_PACKAGE_thc-ipv6-passive-discovery6 is not set
# CONFIG_PACKAGE_thc-ipv6-randicmp6 is not set
# CONFIG_PACKAGE_thc-ipv6-redir6 is not set
# CONFIG_PACKAGE_thc-ipv6-rsmurf6 is not set
# CONFIG_PACKAGE_thc-ipv6-sendpees6 is not set
# CONFIG_PACKAGE_thc-ipv6-sendpeesmp6 is not set
# CONFIG_PACKAGE_thc-ipv6-smurf6 is not set
# CONFIG_PACKAGE_thc-ipv6-thcping6 is not set
# CONFIG_PACKAGE_thc-ipv6-toobig6 is not set
# CONFIG_PACKAGE_thc-ipv6-trace6 is not set
# end of THC-IPv6 attack and analyzing toolkit

#
# Tcpreplay
#
# CONFIG_PACKAGE_tcpbridge is not set
# CONFIG_PACKAGE_tcpcapinfo is not set
# CONFIG_PACKAGE_tcpliveplay is not set
# CONFIG_PACKAGE_tcpprep is not set
# CONFIG_PACKAGE_tcpreplay is not set
# CONFIG_PACKAGE_tcpreplay-all is not set
# CONFIG_PACKAGE_tcpreplay-edit is not set
# CONFIG_PACKAGE_tcprewrite is not set
# end of Tcpreplay

#
# Time Synchronization
#
# CONFIG_PACKAGE_chrony is not set
# CONFIG_PACKAGE_chrony-nts is not set
# CONFIG_PACKAGE_htpdate is not set
# CONFIG_PACKAGE_linuxptp is not set
# CONFIG_PACKAGE_ntp-keygen is not set
# CONFIG_PACKAGE_ntp-utils is not set
# CONFIG_PACKAGE_ntpclient is not set
# CONFIG_PACKAGE_ntpd is not set
# CONFIG_PACKAGE_ntpdate is not set
# end of Time Synchronization

#
# VPN
#
# CONFIG_PACKAGE_chaosvpn is not set
# CONFIG_PACKAGE_eoip is not set
# CONFIG_PACKAGE_fastd is not set
# CONFIG_PACKAGE_libreswan is not set
# CONFIG_PACKAGE_ocserv is not set
# CONFIG_PACKAGE_openconnect is not set
# CONFIG_PACKAGE_openfortivpn is not set
# CONFIG_PACKAGE_openvpn-easy-rsa is not set
# CONFIG_PACKAGE_openvpn-mbedtls is not set
# CONFIG_PACKAGE_openvpn-openssl is not set
# CONFIG_PACKAGE_pptpd is not set
# CONFIG_PACKAGE_softethervpn-base is not set
# CONFIG_PACKAGE_softethervpn-bridge is not set
# CONFIG_PACKAGE_softethervpn-client is not set
# CONFIG_PACKAGE_softethervpn-server is not set
# CONFIG_PACKAGE_softethervpn5-bridge is not set
# CONFIG_PACKAGE_softethervpn5-client is not set
# CONFIG_PACKAGE_softethervpn5-server is not set
# CONFIG_PACKAGE_sstp-client is not set
# CONFIG_PACKAGE_strongswan is not set
# CONFIG_PACKAGE_tailscale is not set
# CONFIG_PACKAGE_tailscaled is not set
# CONFIG_PACKAGE_tinc is not set
# CONFIG_PACKAGE_uanytun is not set
# CONFIG_PACKAGE_uanytun-nettle is not set
# CONFIG_PACKAGE_uanytun-nocrypt is not set
# CONFIG_PACKAGE_uanytun-sslcrypt is not set
# CONFIG_PACKAGE_vpnc is not set
# CONFIG_PACKAGE_vpnc-scripts is not set
# CONFIG_PACKAGE_wireguard-tools is not set
# CONFIG_PACKAGE_zerotier is not set
# end of VPN

#
# Version Control Systems
#
# CONFIG_PACKAGE_git is not set
# CONFIG_PACKAGE_git-http is not set
# CONFIG_PACKAGE_subversion-client is not set
# CONFIG_PACKAGE_subversion-libs is not set
# CONFIG_PACKAGE_subversion-server is not set
# end of Version Control Systems

#
# WWAN
#
# CONFIG_PACKAGE_adb-enablemodem is not set
# CONFIG_PACKAGE_comgt is not set
# CONFIG_PACKAGE_comgt-directip is not set
# CONFIG_PACKAGE_comgt-ncm is not set
# CONFIG_PACKAGE_umbim is not set
# CONFIG_PACKAGE_uqmi is not set
# end of WWAN

#
# Web Servers/Proxies
#
# CONFIG_PACKAGE_apache is not set
# CONFIG_PACKAGE_cgi-io is not set
# CONFIG_PACKAGE_clamav is not set
# CONFIG_PACKAGE_etebase is not set
# CONFIG_PACKAGE_freshclam is not set
# CONFIG_PACKAGE_frpc is not set
# CONFIG_PACKAGE_frps is not set
# CONFIG_PACKAGE_gateway-go is not set
# CONFIG_PACKAGE_gunicorn3 is not set
# CONFIG_PACKAGE_haproxy is not set
# CONFIG_PACKAGE_haproxy-nossl is not set
# CONFIG_PACKAGE_kcptun-client is not set
# CONFIG_PACKAGE_kcptun-config is not set
# CONFIG_PACKAGE_kcptun-server is not set
# CONFIG_PACKAGE_lighttpd is not set
# CONFIG_PACKAGE_nginx-all-module is not set
# CONFIG_PACKAGE_nginx-mod-luci is not set
# CONFIG_PACKAGE_nginx-ssl is not set
# CONFIG_PACKAGE_nginx-ssl-util is not set
# CONFIG_PACKAGE_nginx-ssl-util-nopcre is not set
# CONFIG_PACKAGE_polipo is not set
# CONFIG_PACKAGE_privoxy is not set
# CONFIG_PACKAGE_python3-gunicorn is not set
# CONFIG_PACKAGE_radicale is not set
# CONFIG_PACKAGE_radicale2 is not set
# CONFIG_PACKAGE_radicale2-examples is not set
# CONFIG_PACKAGE_shadowsocks-libev-config is not set
# CONFIG_PACKAGE_shadowsocks-libev-ss-local is not set
# CONFIG_PACKAGE_shadowsocks-libev-ss-redir is not set
# CONFIG_PACKAGE_shadowsocks-libev-ss-rules is not set
# CONFIG_PACKAGE_shadowsocks-libev-ss-server is not set
# CONFIG_PACKAGE_shadowsocks-libev-ss-tunnel is not set
# CONFIG_PACKAGE_sockd is not set
# CONFIG_PACKAGE_socksify is not set
# CONFIG_PACKAGE_spawn-fcgi is not set
# CONFIG_PACKAGE_squid is not set
# CONFIG_PACKAGE_tinyproxy is not set
# CONFIG_PACKAGE_uhttpd is not set
# CONFIG_PACKAGE_uwsgi is not set
# end of Web Servers/Proxies

#
# Wireless
#
# CONFIG_PACKAGE_aircrack-ng is not set
# CONFIG_PACKAGE_airmon-ng is not set
# CONFIG_PACKAGE_hcxdumptool is not set
# CONFIG_PACKAGE_hcxtools is not set
# CONFIG_PACKAGE_horst is not set
# CONFIG_PACKAGE_kismet-client is not set
# CONFIG_PACKAGE_kismet-drone is not set
# CONFIG_PACKAGE_kismet-server is not set
# CONFIG_PACKAGE_pixiewps is not set
# CONFIG_PACKAGE_reaver is not set
# CONFIG_PACKAGE_wavemon is not set
# CONFIG_PACKAGE_wifischedule is not set
# end of Wireless

#
# WirelessAPD
#
# CONFIG_PACKAGE_eapol-test is not set
# CONFIG_PACKAGE_eapol-test-openssl is not set
# CONFIG_PACKAGE_eapol-test-wolfssl is not set
# CONFIG_PACKAGE_hostapd is not set
# CONFIG_PACKAGE_hostapd-basic is not set
# CONFIG_PACKAGE_hostapd-basic-openssl is not set
# CONFIG_PACKAGE_hostapd-basic-wolfssl is not set
CONFIG_PACKAGE_hostapd-common=y
# CONFIG_PACKAGE_hostapd-mini is not set
# CONFIG_PACKAGE_hostapd-openssl is not set
# CONFIG_PACKAGE_hostapd-utils is not set
# CONFIG_PACKAGE_hostapd-wolfssl is not set
# CONFIG_PACKAGE_hs20-client is not set
# CONFIG_PACKAGE_hs20-common is not set
# CONFIG_PACKAGE_hs20-server is not set
CONFIG_PACKAGE_wpa-cli=y
# CONFIG_PACKAGE_wpa-supplicant is not set
# CONFIG_WPA_RFKILL_SUPPORT is not set
CONFIG_WPA_MSG_MIN_PRIORITY=3
# CONFIG_WPA_WOLFSSL is not set
# CONFIG_DRIVER_WEXT_SUPPORT is not set
# CONFIG_DRIVER_11N_SUPPORT is not set
# CONFIG_DRIVER_11AC_SUPPORT is not set
# CONFIG_DRIVER_11AX_SUPPORT is not set
# CONFIG_WPA_ENABLE_WEP is not set
# CONFIG_PACKAGE_wpa-supplicant-basic is not set
# CONFIG_PACKAGE_wpa-supplicant-mini is not set
# CONFIG_PACKAGE_wpa-supplicant-openssl is not set
# CONFIG_PACKAGE_wpa-supplicant-wolfssl is not set
# CONFIG_PACKAGE_wpad is not set
CONFIG_PACKAGE_wpad-basic=y
# CONFIG_PACKAGE_wpad-basic-openssl is not set
# CONFIG_PACKAGE_wpad-basic-wolfssl is not set
# CONFIG_PACKAGE_wpad-mini is not set
# CONFIG_PACKAGE_wpad-openssl is not set
# CONFIG_PACKAGE_wpad-wolfssl is not set
# end of WirelessAPD

#
# arp-scan
#
# CONFIG_PACKAGE_arp-scan is not set
# CONFIG_PACKAGE_arp-scan-database is not set
# end of arp-scan

# CONFIG_PACKAGE_464xlat is not set
# CONFIG_PACKAGE_6in4 is not set
# CONFIG_PACKAGE_6rd is not set
# CONFIG_PACKAGE_6to4 is not set
# CONFIG_PACKAGE_UDPspeeder is not set
# CONFIG_PACKAGE_acme is not set
# CONFIG_PACKAGE_acme-dnsapi is not set
# CONFIG_PACKAGE_adblock is not set
# CONFIG_PACKAGE_addrwatch is not set
# CONFIG_PACKAGE_addrwatch-mysql is not set
# CONFIG_PACKAGE_addrwatch-stdout is not set
# CONFIG_PACKAGE_addrwatch-syslog is not set
# CONFIG_PACKAGE_adguardhome is not set
# CONFIG_PACKAGE_apcupsd is not set
# CONFIG_PACKAGE_apcupsd-cgi is not set
# CONFIG_PACKAGE_apinger is not set
# CONFIG_PACKAGE_atlas-probe is not set
# CONFIG_PACKAGE_atlas-sw-probe is not set
# CONFIG_PACKAGE_atlas-sw-probe-rpc is not set
# CONFIG_PACKAGE_banip is not set
# CONFIG_PACKAGE_beanstalkd is not set
# CONFIG_PACKAGE_bmon is not set
# CONFIG_PACKAGE_boinc is not set
# CONFIG_PACKAGE_bpftool-full is not set
# CONFIG_PACKAGE_bpftool-minimal is not set
# CONFIG_PACKAGE_bwm-ng is not set
# CONFIG_PACKAGE_bwping is not set
# CONFIG_PACKAGE_chat is not set
# CONFIG_PACKAGE_cifsmount is not set
# CONFIG_PACKAGE_coap-server is not set
# CONFIG_PACKAGE_conserver is not set
# CONFIG_PACKAGE_crowdsec is not set
# CONFIG_PACKAGE_crowdsec-firewall-bouncer is not set
# CONFIG_PACKAGE_cshark is not set
# CONFIG_PACKAGE_daemonlogger is not set
# CONFIG_PACKAGE_darkstat is not set
# CONFIG_PACKAGE_dawn is not set
# CONFIG_PACKAGE_dhcpcd is not set
# CONFIG_PACKAGE_dmapd is not set
# CONFIG_PACKAGE_dnscrypt-proxy2 is not set
# CONFIG_PACKAGE_dnstap is not set
# CONFIG_PACKAGE_dnstop is not set
# CONFIG_PACKAGE_ds-lite is not set
# CONFIG_PACKAGE_esniper is not set
# CONFIG_PACKAGE_etherwake is not set
# CONFIG_PACKAGE_etherwake-nfqueue is not set
# CONFIG_PACKAGE_ethtool is not set
# CONFIG_PACKAGE_fail2ban is not set
# CONFIG_PACKAGE_fakeidentd is not set
# CONFIG_PACKAGE_fakepop is not set
# CONFIG_PACKAGE_family-dns is not set
# CONFIG_PACKAGE_foolsm is not set
# CONFIG_PACKAGE_fping is not set
# CONFIG_PACKAGE_generate-ipv6-address is not set
# CONFIG_PACKAGE_geth is not set
# CONFIG_PACKAGE_git-lfs is not set
# CONFIG_PACKAGE_gre is not set
# CONFIG_PACKAGE_httping is not set
# CONFIG_PACKAGE_httping-nossl is not set
# CONFIG_PACKAGE_https-dns-proxy is not set
# CONFIG_PACKAGE_i2pd is not set
# CONFIG_PACKAGE_ibrdtn-tools is not set
# CONFIG_PACKAGE_ibrdtnd is not set
# CONFIG_PACKAGE_ifstat is not set
# CONFIG_PACKAGE_iftop is not set
# CONFIG_PACKAGE_iiod is not set
# CONFIG_PACKAGE_iperf is not set
# CONFIG_PACKAGE_iperf3 is not set
# CONFIG_PACKAGE_iperf3-ssl is not set
# CONFIG_PACKAGE_ipip is not set
# CONFIG_PACKAGE_ipset is not set
# CONFIG_PACKAGE_ipset-dns is not set
# CONFIG_PACKAGE_iptraf-ng is not set
# CONFIG_PACKAGE_iputils-arping is not set
# CONFIG_PACKAGE_iputils-clockdiff is not set
# CONFIG_PACKAGE_iputils-ping is not set
# CONFIG_PACKAGE_iputils-tftpd is not set
# CONFIG_PACKAGE_iputils-tracepath is not set
# CONFIG_PACKAGE_ipvsadm is not set
CONFIG_PACKAGE_iw=y
# CONFIG_PACKAGE_iw-full is not set
# CONFIG_PACKAGE_jool-tools is not set
# CONFIG_PACKAGE_keepalived is not set
# CONFIG_PACKAGE_knxd is not set
# CONFIG_PACKAGE_kplex is not set
# CONFIG_PACKAGE_krb5-client is not set
# CONFIG_PACKAGE_krb5-libs is not set
# CONFIG_PACKAGE_krb5-server is not set
# CONFIG_PACKAGE_krb5-server-extras is not set
# CONFIG_PACKAGE_libipset is not set
# CONFIG_PACKAGE_libndp is not set
# CONFIG_PACKAGE_linknx is not set
# CONFIG_PACKAGE_lynx is not set
# CONFIG_PACKAGE_mac-telnet-client is not set
# CONFIG_PACKAGE_mac-telnet-discover is not set
# CONFIG_PACKAGE_mac-telnet-ping is not set
# CONFIG_PACKAGE_mac-telnet-server is not set
# CONFIG_PACKAGE_map is not set
# CONFIG_PACKAGE_mbusd is not set
# CONFIG_PACKAGE_memcached is not set
# CONFIG_PACKAGE_mii-tool is not set
# CONFIG_PACKAGE_mikrotik-btest is not set
# CONFIG_PACKAGE_mini_snmpd is not set
# CONFIG_PACKAGE_miredo is not set
# CONFIG_PACKAGE_modemmanager is not set
# CONFIG_PACKAGE_mosquitto-client-nossl is not set
# CONFIG_PACKAGE_mosquitto-client-ssl is not set
# CONFIG_PACKAGE_mosquitto-nossl is not set
# CONFIG_PACKAGE_mosquitto-ssl is not set
# CONFIG_PACKAGE_mstpd is not set
# CONFIG_PACKAGE_mtr is not set
# CONFIG_PACKAGE_nbd is not set
# CONFIG_PACKAGE_nbd-server is not set
# CONFIG_PACKAGE_ncp is not set
# CONFIG_PACKAGE_ndptool is not set
# CONFIG_PACKAGE_nebula is not set
# CONFIG_PACKAGE_nebula-cert is not set
# CONFIG_PACKAGE_net-tools-route is not set
# CONFIG_PACKAGE_netcat is not set
# CONFIG_PACKAGE_netdiscover is not set
# CONFIG_PACKAGE_netifyd is not set
# CONFIG_PACKAGE_netperf is not set
# CONFIG_PACKAGE_netsniff-ng is not set
# CONFIG_PACKAGE_netstinky is not set
# CONFIG_PACKAGE_nextdns is not set
# CONFIG_PACKAGE_nfdump is not set
# CONFIG_PACKAGE_nlbwmon is not set
# CONFIG_PACKAGE_noping is not set
# CONFIG_PACKAGE_nut is not set
# CONFIG_PACKAGE_obfs4proxy is not set
# CONFIG_PACKAGE_odhcp6c is not set
# CONFIG_PACKAGE_odhcpd is not set
# CONFIG_PACKAGE_odhcpd-ipv6only is not set
# CONFIG_PACKAGE_ola is not set
# CONFIG_PACKAGE_omcproxy is not set
# CONFIG_PACKAGE_onionshare-cli is not set
# CONFIG_PACKAGE_ooniprobe is not set
# CONFIG_PACKAGE_oor is not set
# CONFIG_PACKAGE_open-iscsi is not set
# CONFIG_PACKAGE_oping is not set
# CONFIG_PACKAGE_ostiary is not set
# CONFIG_PACKAGE_pagekitec is not set
# CONFIG_PACKAGE_pcapplusplus is not set
# CONFIG_PACKAGE_pen is not set
# CONFIG_PACKAGE_phantap is not set
# CONFIG_PACKAGE_pingcheck is not set
# CONFIG_PACKAGE_port-mirroring is not set
# CONFIG_PACKAGE_ppp is not set
# CONFIG_PACKAGE_ppp-multilink is not set
# CONFIG_PACKAGE_proto-bonding is not set
# CONFIG_PACKAGE_proxychains-ng is not set
# CONFIG_PACKAGE_ptunnel-ng is not set
# CONFIG_PACKAGE_radsecproxy is not set
# CONFIG_PACKAGE_ratched is not set
# CONFIG_PACKAGE_ratechecker is not set
# CONFIG_PACKAGE_redsocks is not set
# CONFIG_PACKAGE_remserial is not set
# CONFIG_PACKAGE_restic-rest-server is not set
# CONFIG_PACKAGE_rpcapd is not set
# CONFIG_PACKAGE_rpcbind is not set
# CONFIG_PACKAGE_rssileds is not set
# CONFIG_PACKAGE_rsyslog is not set
# CONFIG_PACKAGE_safe-search is not set
# CONFIG_PACKAGE_samba4-admin is not set
# CONFIG_PACKAGE_samba4-client is not set
# CONFIG_PACKAGE_samba4-libs is not set
# CONFIG_PACKAGE_samba4-server is not set
# CONFIG_PACKAGE_samba4-utils is not set
# CONFIG_PACKAGE_samplicator is not set
# CONFIG_PACKAGE_scapy is not set
# CONFIG_PACKAGE_sctp-tools is not set
# CONFIG_PACKAGE_seafile-ccnet is not set
# CONFIG_PACKAGE_seafile-seahub is not set
# CONFIG_PACKAGE_seafile-server is not set
# CONFIG_PACKAGE_seafile-server-fuse is not set
# CONFIG_PACKAGE_ser2net is not set
# CONFIG_PACKAGE_simple-adblock is not set
# CONFIG_PACKAGE_smartdns is not set
# CONFIG_PACKAGE_smbinfo is not set
# CONFIG_PACKAGE_snmp-mibs is not set
# CONFIG_PACKAGE_snmp-utils is not set
# CONFIG_PACKAGE_snmpd is not set
# CONFIG_PACKAGE_snmptrapd is not set
# CONFIG_PACKAGE_socat is not set
# CONFIG_PACKAGE_softflowd is not set
# CONFIG_PACKAGE_speedtest-netperf is not set
# CONFIG_PACKAGE_spoofer is not set
# CONFIG_PACKAGE_static-neighbor-reports is not set
# CONFIG_PACKAGE_stunnel is not set
# CONFIG_PACKAGE_switchdev-poller is not set
# CONFIG_PACKAGE_tac_plus is not set
# CONFIG_PACKAGE_tac_plus-pam is not set
# CONFIG_PACKAGE_tayga is not set
CONFIG_PACKAGE_tcpdump=y
# CONFIG_PACKAGE_tcpdump-mini is not set
# CONFIG_PACKAGE_tgt is not set
# CONFIG_PACKAGE_tor is not set
# CONFIG_PACKAGE_tor-basic is not set
# CONFIG_PACKAGE_tor-fw-helper is not set
# CONFIG_PACKAGE_trafficshaper is not set
# CONFIG_PACKAGE_travelmate is not set
# CONFIG_PACKAGE_u2pnpd is not set
# CONFIG_PACKAGE_uacme is not set
# CONFIG_PACKAGE_uclient-fetch is not set
# CONFIG_PACKAGE_udptunnel is not set
# CONFIG_PACKAGE_udpxy is not set
# CONFIG_PACKAGE_ulogd is not set
# CONFIG_PACKAGE_umdns is not set
# CONFIG_PACKAGE_usbip is not set
# CONFIG_PACKAGE_usteer is not set
# CONFIG_PACKAGE_vallumd is not set
# CONFIG_PACKAGE_vncrepeater is not set
# CONFIG_PACKAGE_vnstat is not set
# CONFIG_PACKAGE_vnstat2 is not set
# CONFIG_PACKAGE_vpn-policy-routing is not set
# CONFIG_PACKAGE_vpnbypass is not set
# CONFIG_PACKAGE_vti is not set
# CONFIG_PACKAGE_vxlan is not set
# CONFIG_PACKAGE_wakeonlan is not set
# CONFIG_PACKAGE_wg-installer-client is not set
# CONFIG_PACKAGE_wpan-tools is not set
# CONFIG_PACKAGE_wwan is not set
# CONFIG_PACKAGE_xinetd is not set
# CONFIG_PACKAGE_xray-core is not set
# end of Network

#
# OpenCV
#
# CONFIG_PACKAGE_opencv is not set
# CONFIG_ENABLE_SUNXIVIN_ISP is not set
# CONFIG_ENABLE_OPENCV_PYTHON_SUPPORT is not set
# CONFIG_PACKAGE_opencv_camera is not set
# CONFIG_PACKAGE_opencv_camera_mobilenet_v2_ssd is not set
# end of OpenCV

#
# Security
#

#
# Device Mapper
#
# CONFIG_PACKAGE_dm-crypt is not set
# end of Device Mapper

#
# OPTEE
#
# CONFIG_PACKAGE_optee-client-3.7 is not set
# CONFIG_PACKAGE_optee-efuse-read is not set
# CONFIG_PACKAGE_optee-getdmkey is not set
# CONFIG_PACKAGE_optee-helloworld is not set
# CONFIG_PACKAGE_optee-keybox is not set
# CONFIG_PACKAGE_optee-os-dev-kit is not set
# CONFIG_PACKAGE_optee-rotpk is not set
# CONFIG_PACKAGE_optee-secure-storage is not set
# CONFIG_PACKAGE_optee-test-3.7 is not set
# end of OPTEE
# end of Security

#
# Sound
#
CONFIG_PACKAGE_alsa-utils=y
# CONFIG_PACKAGE_alsa-utils-seq is not set
# CONFIG_PACKAGE_alsa-utils-tests is not set
# CONFIG_PACKAGE_espeak is not set
# CONFIG_PACKAGE_faad2 is not set
CONFIG_PACKAGE_fdk-aac=y

#
# Configuration
#
# CONFIG_FDK-AAC_OPTIMIZE_SPEED is not set
# end of Configuration

# CONFIG_PACKAGE_ices is not set
# CONFIG_PACKAGE_lame is not set
# CONFIG_PACKAGE_lame-lib is not set
# CONFIG_PACKAGE_liblo-utils is not set
# CONFIG_PACKAGE_madplay is not set
# CONFIG_PACKAGE_moc is not set
# CONFIG_PACKAGE_mpc is not set
# CONFIG_PACKAGE_mpd-avahi-service is not set
# CONFIG_PACKAGE_mpd-full is not set
# CONFIG_PACKAGE_mpd-mini is not set
# CONFIG_PACKAGE_mpg123 is not set
# CONFIG_PACKAGE_opus-tools is not set
# CONFIG_PACKAGE_pianod is not set
# CONFIG_PACKAGE_pianod-client is not set
# CONFIG_PACKAGE_portaudio is not set
# CONFIG_PACKAGE_pulseaudio-daemon is not set
# CONFIG_PACKAGE_pulseaudio-daemon-avahi is not set
# CONFIG_PACKAGE_shairplay is not set
# CONFIG_PACKAGE_shairport-sync-mbedtls is not set
# CONFIG_PACKAGE_shairport-sync-mini is not set
# CONFIG_PACKAGE_shairport-sync-openssl is not set
# CONFIG_PACKAGE_shine is not set
# CONFIG_PACKAGE_sox is not set
# CONFIG_PACKAGE_squeezelite-full is not set
# CONFIG_PACKAGE_squeezelite-mini is not set
# CONFIG_PACKAGE_svox is not set
# CONFIG_PACKAGE_upmpdcli is not set
# end of Sound

#
# TestTools
#

#
# testapk
#
# CONFIG_PACKAGE___trecordertest is not set
# CONFIG_PACKAGE_audiotest is not set
# CONFIG_PACKAGE_rwcheck is not set
# CONFIG_PACKAGE_rwdev is not set
# end of testapk
# end of TestTools

#
# Utilities
#

#
# BigClown
#
# CONFIG_PACKAGE_bigclown-control-tool is not set
# CONFIG_PACKAGE_bigclown-firmware-tool is not set
# CONFIG_PACKAGE_bigclown-gateway is not set
# CONFIG_PACKAGE_bigclown-mqtt2influxdb is not set
# end of BigClown

#
# Boot Loaders
#
# CONFIG_PACKAGE_fconfig is not set
CONFIG_PACKAGE_uboot-envtools=y
# end of Boot Loaders

#
# Compression
#
# CONFIG_PACKAGE_bsdtar is not set
# CONFIG_PACKAGE_bsdtar-noopenssl is not set
# CONFIG_PACKAGE_bzip2 is not set
# CONFIG_PACKAGE_gzip is not set
# CONFIG_PACKAGE_lz4 is not set
# CONFIG_PACKAGE_pigz is not set
# CONFIG_PACKAGE_unrar is not set
# CONFIG_PACKAGE_unzip is not set
# CONFIG_PACKAGE_xz-utils is not set
# CONFIG_PACKAGE_zipcmp is not set
# CONFIG_PACKAGE_zipmerge is not set
# CONFIG_PACKAGE_ziptool is not set
# CONFIG_PACKAGE_zstd is not set
# end of Compression

#
# Database
#
# CONFIG_PACKAGE_mariadb-client is not set
# CONFIG_PACKAGE_mariadb-server-base is not set
# CONFIG_PACKAGE_pgsql-cli is not set
# CONFIG_PACKAGE_pgsql-cli-extra is not set
# CONFIG_PACKAGE_pgsql-server is not set
# CONFIG_PACKAGE_rrdcgi1 is not set
# CONFIG_PACKAGE_rrdtool1 is not set
# CONFIG_PACKAGE_unixodbc-tools is not set
# end of Database

#
# Disc
#
# CONFIG_PACKAGE_blkdiscard is not set
CONFIG_PACKAGE_blkid=y
# CONFIG_PACKAGE_blockdev is not set
# CONFIG_PACKAGE_cfdisk is not set
# CONFIG_PACKAGE_cgdisk is not set
# CONFIG_PACKAGE_eject is not set
# CONFIG_PACKAGE_fdisk is not set
# CONFIG_PACKAGE_findfs is not set
# CONFIG_PACKAGE_fio is not set
# CONFIG_PACKAGE_fixparts is not set
# CONFIG_PACKAGE_gdisk is not set
# CONFIG_PACKAGE_hd-idle is not set
# CONFIG_PACKAGE_hdparm is not set
# CONFIG_PACKAGE_lsblk is not set
# CONFIG_PACKAGE_lvm2-normal is not set
# CONFIG_PACKAGE_lvm2-selinux is not set
# CONFIG_PACKAGE_mdadm is not set
# CONFIG_PACKAGE_parted is not set
# CONFIG_PACKAGE_partx-utils is not set
# CONFIG_PACKAGE_sfdisk is not set
# CONFIG_PACKAGE_sgdisk is not set
# CONFIG_PACKAGE_wipefs is not set
# end of Disc

#
# Editors
#
# CONFIG_PACKAGE_joe is not set
# CONFIG_PACKAGE_jupp is not set
# CONFIG_PACKAGE_mg is not set
# CONFIG_PACKAGE_nano is not set
# CONFIG_PACKAGE_nano-full is not set
# CONFIG_PACKAGE_nano-plus is not set
# CONFIG_PACKAGE_vim is not set
# CONFIG_PACKAGE_vim-full is not set
# CONFIG_PACKAGE_vim-fuller is not set
# CONFIG_PACKAGE_vim-help is not set
# CONFIG_PACKAGE_vim-runtime is not set
# CONFIG_PACKAGE_zile is not set
# end of Editors

#
# Encryption
#
# CONFIG_PACKAGE_ccrypt is not set
# CONFIG_PACKAGE_certtool is not set
# CONFIG_PACKAGE_cryptsetup is not set
# CONFIG_PACKAGE_cryptsetup-ssh is not set
# CONFIG_PACKAGE_gnupg is not set
# CONFIG_PACKAGE_gnupg2 is not set
# CONFIG_PACKAGE_gnupg2-dirmngr is not set
# CONFIG_PACKAGE_gnutls-utils is not set
# CONFIG_PACKAGE_gpgv is not set
# CONFIG_PACKAGE_gpgv2 is not set
# CONFIG_PACKAGE_keyctl is not set
# CONFIG_PACKAGE_keyutils is not set
# CONFIG_PACKAGE_px5g-mbedtls is not set
# CONFIG_PACKAGE_px5g-standalone is not set
# CONFIG_PACKAGE_px5g-wolfssl is not set
# CONFIG_PACKAGE_stoken is not set
# end of Encryption

#
# Filesystem
#
# CONFIG_PACKAGE_acl is not set
# CONFIG_PACKAGE_afuse is not set
# CONFIG_PACKAGE_antfs-mount is not set
# CONFIG_PACKAGE_attr is not set
# CONFIG_PACKAGE_badblocks is not set
# CONFIG_PACKAGE_btrfs-progs is not set
# CONFIG_PACKAGE_chattr is not set
# CONFIG_PACKAGE_debugfs is not set
# CONFIG_PACKAGE_dosfstools is not set
# CONFIG_PACKAGE_dumpe2fs is not set
# CONFIG_PACKAGE_e2freefrag is not set
CONFIG_PACKAGE_e2fsprogs=y
# CONFIG_PACKAGE_e4crypt is not set
# CONFIG_PACKAGE_exfat-fsck is not set
# CONFIG_PACKAGE_exfat-mkfs is not set
# CONFIG_PACKAGE_f2fs-tools is not set
# CONFIG_PACKAGE_f2fs-tools-selinux is not set
# CONFIG_PACKAGE_f2fsck is not set
# CONFIG_PACKAGE_f2fsck-selinux is not set
# CONFIG_PACKAGE_filefrag is not set
# CONFIG_PACKAGE_fstrim is not set
# CONFIG_PACKAGE_fuse-utils is not set
# CONFIG_PACKAGE_fuse3-utils is not set
# CONFIG_PACKAGE_hfsfsck is not set
# CONFIG_PACKAGE_lsattr is not set
# CONFIG_PACKAGE_mkf2fs is not set
# CONFIG_PACKAGE_mkf2fs-selinux is not set
# CONFIG_PACKAGE_mkhfs is not set
# CONFIG_PACKAGE_ncdu is not set
# CONFIG_PACKAGE_nfs-utils is not set
# CONFIG_PACKAGE_nfs-utils-libs is not set
# CONFIG_PACKAGE_ntfs-3g is not set
# CONFIG_PACKAGE_ntfs-3g-low is not set
# CONFIG_PACKAGE_ntfs-3g-utils is not set
# CONFIG_PACKAGE_owfs is not set
# CONFIG_PACKAGE_owshell is not set
# CONFIG_PACKAGE_resize2fs is not set
# CONFIG_PACKAGE_squashfs-tools-mksquashfs is not set
# CONFIG_PACKAGE_squashfs-tools-unsquashfs is not set
# CONFIG_PACKAGE_swap-utils is not set
# CONFIG_PACKAGE_sysfsutils is not set
# CONFIG_PACKAGE_tune2fs is not set
# CONFIG_PACKAGE_xfs-admin is not set
# CONFIG_PACKAGE_xfs-fsck is not set
# CONFIG_PACKAGE_xfs-growfs is not set
# CONFIG_PACKAGE_xfs-mkfs is not set
# end of Filesystem

#
# Image Manipulation
#
# CONFIG_PACKAGE_libjpeg-turbo-utils is not set
# CONFIG_PACKAGE_tiff-utils is not set
# end of Image Manipulation

#
# Microcontroller programming
#
# CONFIG_PACKAGE_avrdude is not set
# CONFIG_PACKAGE_dfu-programmer is not set
# CONFIG_PACKAGE_stm32flash is not set
# end of Microcontroller programming

#
# RTKLIB Suite
#
# CONFIG_PACKAGE_convbin is not set
# CONFIG_PACKAGE_pos2kml is not set
# CONFIG_PACKAGE_rnx2rtkp is not set
# CONFIG_PACKAGE_rtkrcv is not set
# CONFIG_PACKAGE_str2str is not set
# end of RTKLIB Suite

#
# Shells
#
# CONFIG_PACKAGE_bash is not set
# CONFIG_PACKAGE_fish is not set
# CONFIG_PACKAGE_klish is not set
# CONFIG_PACKAGE_mksh is not set
# CONFIG_PACKAGE_tcsh is not set
# CONFIG_PACKAGE_zsh is not set
# end of Shells

#
# Terminal
#
# CONFIG_PACKAGE_agetty is not set
# CONFIG_PACKAGE_dvtm is not set
# CONFIG_PACKAGE_minicom is not set
# CONFIG_PACKAGE_picocom is not set
# CONFIG_PACKAGE_rtty-mbedtls is not set
# CONFIG_PACKAGE_rtty-nossl is not set
# CONFIG_PACKAGE_rtty-openssl is not set
# CONFIG_PACKAGE_rtty-wolfssl is not set
# CONFIG_PACKAGE_screen is not set
# CONFIG_PACKAGE_script-utils is not set
# CONFIG_PACKAGE_serialconsole is not set
# CONFIG_PACKAGE_setterm is not set
# CONFIG_PACKAGE_tio is not set
# CONFIG_PACKAGE_tmux is not set
# CONFIG_PACKAGE_ttyd is not set
# CONFIG_PACKAGE_wall is not set
# end of Terminal

#
# Virtualization
#
# end of Virtualization

#
# Zoneinfo
#
# CONFIG_PACKAGE_zoneinfo-africa is not set
# CONFIG_PACKAGE_zoneinfo-all is not set
# CONFIG_PACKAGE_zoneinfo-asia is not set
# CONFIG_PACKAGE_zoneinfo-atlantic is not set
# CONFIG_PACKAGE_zoneinfo-australia-nz is not set
# CONFIG_PACKAGE_zoneinfo-core is not set
# CONFIG_PACKAGE_zoneinfo-europe is not set
# CONFIG_PACKAGE_zoneinfo-india is not set
# CONFIG_PACKAGE_zoneinfo-northamerica is not set
# CONFIG_PACKAGE_zoneinfo-pacific is not set
# CONFIG_PACKAGE_zoneinfo-poles is not set
# CONFIG_PACKAGE_zoneinfo-simple is not set
# CONFIG_PACKAGE_zoneinfo-southamerica is not set
# end of Zoneinfo

#
# database
#
# CONFIG_PACKAGE_sqlite3-cli is not set
# end of database

#
# libimobiledevice
#
# CONFIG_PACKAGE_idevicerestore is not set
# CONFIG_PACKAGE_irecovery is not set
# CONFIG_PACKAGE_libimobiledevice-utils is not set
# CONFIG_PACKAGE_libusbmuxd-utils is not set
# CONFIG_PACKAGE_plistutil is not set
# CONFIG_PACKAGE_usbmuxd is not set
# end of libimobiledevice

#
# libselinux tools
#
# CONFIG_PACKAGE_libselinux-avcstat is not set
# CONFIG_PACKAGE_libselinux-compute_av is not set
# CONFIG_PACKAGE_libselinux-compute_create is not set
# CONFIG_PACKAGE_libselinux-compute_member is not set
# CONFIG_PACKAGE_libselinux-compute_relabel is not set
# CONFIG_PACKAGE_libselinux-getconlist is not set
# CONFIG_PACKAGE_libselinux-getdefaultcon is not set
# CONFIG_PACKAGE_libselinux-getenforce is not set
# CONFIG_PACKAGE_libselinux-getfilecon is not set
# CONFIG_PACKAGE_libselinux-getpidcon is not set
# CONFIG_PACKAGE_libselinux-getsebool is not set
# CONFIG_PACKAGE_libselinux-getseuser is not set
# CONFIG_PACKAGE_libselinux-matchpathcon is not set
# CONFIG_PACKAGE_libselinux-policyvers is not set
# CONFIG_PACKAGE_libselinux-sefcontext_compile is not set
# CONFIG_PACKAGE_libselinux-selabel_digest is not set
# CONFIG_PACKAGE_libselinux-selabel_get_digests_all_partial_matches is not set
# CONFIG_PACKAGE_libselinux-selabel_lookup is not set
# CONFIG_PACKAGE_libselinux-selabel_lookup_best_match is not set
# CONFIG_PACKAGE_libselinux-selabel_partial_match is not set
# CONFIG_PACKAGE_libselinux-selinux_check_access is not set
# CONFIG_PACKAGE_libselinux-selinux_check_securetty_context is not set
# CONFIG_PACKAGE_libselinux-selinuxenabled is not set
# CONFIG_PACKAGE_libselinux-selinuxexeccon is not set
# CONFIG_PACKAGE_libselinux-setenforce is not set
# CONFIG_PACKAGE_libselinux-setfilecon is not set
# CONFIG_PACKAGE_libselinux-togglesebool is not set
# CONFIG_PACKAGE_libselinux-validatetrans is not set
# end of libselinux tools

#
# rf test tool
#
# CONFIG_PACKAGE_aic8800-rftest is not set
# CONFIG_PACKAGE_broadcom-rftest is not set
# CONFIG_PACKAGE_realtek-rftest is not set
# CONFIG_PACKAGE_ssv6x5x-rftest is not set
# CONFIG_PACKAGE_xr819-rftest is not set
# CONFIG_PACKAGE_xr819s-rftest is not set
CONFIG_PACKAGE_xr829-rftest=y
# end of rf test tool

# CONFIG_PACKAGE_acpid is not set
CONFIG_PACKAGE_adb=y
# CONFIG_PACKAGE_airos-dfs-reset is not set
# CONFIG_PACKAGE_ap51-flash is not set
# CONFIG_PACKAGE_apk is not set
# CONFIG_PACKAGE_at is not set
# CONFIG_PACKAGE_atheepmgr is not set
# CONFIG_PACKAGE_audit is not set
# CONFIG_PACKAGE_audit-utils is not set
# CONFIG_PACKAGE_augeas is not set
# CONFIG_PACKAGE_augeas-lenses is not set
# CONFIG_PACKAGE_augeas-lenses-tests is not set
# CONFIG_PACKAGE_bandwidthd is not set
# CONFIG_PACKAGE_bandwidthd-pgsql is not set
# CONFIG_PACKAGE_bandwidthd-php is not set
# CONFIG_PACKAGE_bandwidthd-sqlite is not set
# CONFIG_PACKAGE_banhostlist is not set
# CONFIG_PACKAGE_bc is not set
# CONFIG_PACKAGE_bluelog is not set
CONFIG_PACKAGE_bluez-daemon=y
# CONFIG_XR829_BT is not set
CONFIG_PACKAGE_bluez-utils=y
CONFIG_PACKAGE_bluez-utils-extra=y
# CONFIG_PACKAGE_bonniexx is not set
# CONFIG_PACKAGE_bottlerocket is not set
# CONFIG_PACKAGE_bsdiff is not set
# CONFIG_PACKAGE_bspatch is not set
# CONFIG_PACKAGE_byobu is not set
# CONFIG_PACKAGE_byobu-utils is not set
# CONFIG_PACKAGE_cache-domains-mbedtls is not set
# CONFIG_PACKAGE_cache-domains-openssl is not set
# CONFIG_PACKAGE_cache-domains-wolfssl is not set
# CONFIG_PACKAGE_cal is not set
# CONFIG_PACKAGE_canutils is not set
# CONFIG_PACKAGE_cgroup-tools is not set
# CONFIG_PACKAGE_cgroupfs-mount is not set
# CONFIG_PACKAGE_checkpolicy is not set
# CONFIG_PACKAGE_checksec is not set
# CONFIG_PACKAGE_checksec_automator is not set
# CONFIG_PACKAGE_chkcon is not set
# CONFIG_PACKAGE_cmdpad is not set
# CONFIG_PACKAGE_cni is not set
# CONFIG_PACKAGE_cni-plugins is not set
# CONFIG_PACKAGE_coap-client is not set
# CONFIG_PACKAGE_collectd is not set
# CONFIG_PACKAGE_conmon is not set
# CONFIG_PACKAGE_containerd is not set
# CONFIG_PACKAGE_coremark is not set
# CONFIG_PACKAGE_coreutils is not set
# CONFIG_PACKAGE_crconf is not set
# CONFIG_PACKAGE_crelay is not set
# CONFIG_PACKAGE_crun is not set
# CONFIG_PACKAGE_ct-bugcheck is not set
# CONFIG_PACKAGE_ctop is not set
CONFIG_PACKAGE_dbus=y
CONFIG_PACKAGE_dbus-utils=y
# CONFIG_PACKAGE_device-observatory is not set
# CONFIG_PACKAGE_dfu-util is not set
# CONFIG_PACKAGE_digitemp is not set
# CONFIG_PACKAGE_digitemp-usb is not set
# CONFIG_PACKAGE_dmesg is not set
# CONFIG_PACKAGE_docker is not set
# CONFIG_PACKAGE_docker-compose is not set
# CONFIG_PACKAGE_dockerd is not set
# CONFIG_PACKAGE_domoticz is not set
# CONFIG_PACKAGE_dropbearconvert is not set
# CONFIG_PACKAGE_dtc is not set
# CONFIG_PACKAGE_dumb-init is not set
# CONFIG_PACKAGE_dump1090 is not set
# CONFIG_PACKAGE_ecdsautils is not set
# CONFIG_PACKAGE_elektra-kdb is not set
# CONFIG_PACKAGE_evtest is not set
# CONFIG_PACKAGE_extract is not set
# CONFIG_PACKAGE_fbtest is not set
# CONFIG_PACKAGE_fdt-utils is not set
# CONFIG_PACKAGE_file is not set
# CONFIG_PACKAGE_findutils is not set
# CONFIG_PACKAGE_findutils-find is not set
# CONFIG_PACKAGE_findutils-locate is not set
# CONFIG_PACKAGE_findutils-xargs is not set
# CONFIG_PACKAGE_flashrom is not set
# CONFIG_PACKAGE_flashrom-pci is not set
# CONFIG_PACKAGE_flashrom-spi is not set
# CONFIG_PACKAGE_flashrom-usb is not set
# CONFIG_PACKAGE_flock is not set
# CONFIG_PACKAGE_fontconfig is not set
# CONFIG_PACKAGE_fritz-caldata is not set
# CONFIG_PACKAGE_fritz-tffs is not set
# CONFIG_PACKAGE_fritz-tffs-nand is not set
# CONFIG_PACKAGE_ftdi_eeprom is not set
# CONFIG_PACKAGE_gammu is not set
# CONFIG_PACKAGE_gawk is not set
# CONFIG_PACKAGE_gddrescue is not set
# CONFIG_PACKAGE_getevent is not set
# CONFIG_PACKAGE_getopt is not set
# CONFIG_PACKAGE_giflib-utils is not set
# CONFIG_PACKAGE_gkermit is not set
# CONFIG_PACKAGE_gnuplot is not set
# CONFIG_PACKAGE_gpioctl-sysfs is not set
# CONFIG_PACKAGE_gpiod-tools is not set
# CONFIG_PACKAGE_gpsd is not set
# CONFIG_PACKAGE_gpsd-clients is not set
# CONFIG_PACKAGE_gpsd-utils is not set
# CONFIG_PACKAGE_grep is not set
# CONFIG_PACKAGE_hamlib is not set
# CONFIG_PACKAGE_haserl is not set
# CONFIG_PACKAGE_hashdeep is not set
# CONFIG_PACKAGE_haveged is not set
# CONFIG_PACKAGE_hplip-common is not set
# CONFIG_PACKAGE_hplip-sane is not set
# CONFIG_PACKAGE_hub-ctrl is not set
# CONFIG_PACKAGE_hwclock is not set
# CONFIG_PACKAGE_hwinfo is not set
# CONFIG_PACKAGE_hwloc-utils is not set
# CONFIG_PACKAGE_i2c-tools is not set
# CONFIG_PACKAGE_iconv is not set
# CONFIG_PACKAGE_iio-utils is not set
# CONFIG_PACKAGE_inotifywait is not set
# CONFIG_PACKAGE_inotifywatch is not set
# CONFIG_PACKAGE_io is not set
# CONFIG_PACKAGE_iozone3 is not set
# CONFIG_PACKAGE_ipfs-http-client-tests is not set
# CONFIG_PACKAGE_irqbalance is not set
# CONFIG_PACKAGE_iwcap is not set
# CONFIG_PACKAGE_iwinfo is not set
# CONFIG_PACKAGE_jq is not set
CONFIG_PACKAGE_jshn=y
# CONFIG_PACKAGE_kdump is not set
# CONFIG_PACKAGE_kexec is not set
# CONFIG_PACKAGE_kexec-tools is not set
# CONFIG_PACKAGE_kmod is not set
# CONFIG_PACKAGE_lcd4linux-custom is not set
# CONFIG_PACKAGE_lcd4linux-full is not set
# CONFIG_PACKAGE_lcdproc-clients is not set
# CONFIG_PACKAGE_lcdproc-drivers is not set
# CONFIG_PACKAGE_lcdproc-server is not set
# CONFIG_PACKAGE_less is not set
# CONFIG_PACKAGE_less-wide is not set
# CONFIG_PACKAGE_libjson-script is not set
# CONFIG_PACKAGE_libnetwork is not set
# CONFIG_PACKAGE_lm-sensors is not set
# CONFIG_PACKAGE_lm-sensors-detect is not set
# CONFIG_PACKAGE_logger is not set
# CONFIG_PACKAGE_logrotate is not set
# CONFIG_PACKAGE_look is not set
# CONFIG_PACKAGE_losetup is not set
# CONFIG_PACKAGE_lrzsz is not set
# CONFIG_PACKAGE_lscpu is not set
# CONFIG_PACKAGE_lsof is not set
# CONFIG_PACKAGE_lxc is not set
# CONFIG_PACKAGE_maccalc is not set
# CONFIG_PACKAGE_macchanger is not set
# CONFIG_PACKAGE_mbedtls-util is not set
# CONFIG_PACKAGE_mbim-utils is not set
# CONFIG_PACKAGE_mbtools is not set
# CONFIG_PACKAGE_mc is not set
# CONFIG_PACKAGE_mcookie is not set
# CONFIG_PACKAGE_memtester is not set
# CONFIG_PACKAGE_micrond is not set
# CONFIG_PACKAGE_miniflux is not set
# CONFIG_PACKAGE_mmc-utils is not set
# CONFIG_PACKAGE_more is not set
# CONFIG_PACKAGE_moreutils is not set
# CONFIG_PACKAGE_mosh-client is not set
# CONFIG_PACKAGE_mosh-server is not set
# CONFIG_PACKAGE_mount-utils is not set
# CONFIG_PACKAGE_mpack is not set
# CONFIG_PACKAGE_mt-st is not set
CONFIG_PACKAGE_mtd-utils=y
# CONFIG_PACKAGE_mtd-utils-doc-loadbios is not set
# CONFIG_PACKAGE_mtd-utils-docfdisk is not set
# CONFIG_PACKAGE_mtd-utils-flash-erase is not set
# CONFIG_PACKAGE_mtd-utils-flash-eraseall is not set
# CONFIG_PACKAGE_mtd-utils-flash-lock is not set
# CONFIG_PACKAGE_mtd-utils-flash-otp-dump is not set
# CONFIG_PACKAGE_mtd-utils-flash-otp-info is not set
# CONFIG_PACKAGE_mtd-utils-flash-otp-lock is not set
# CONFIG_PACKAGE_mtd-utils-flash-otp-write is not set
# CONFIG_PACKAGE_mtd-utils-flash-unlock is not set
# CONFIG_PACKAGE_mtd-utils-flashcp is not set
# CONFIG_PACKAGE_mtd-utils-ftl-check is not set
# CONFIG_PACKAGE_mtd-utils-ftl-format is not set
# CONFIG_PACKAGE_mtd-utils-jffs2dump is not set
# CONFIG_PACKAGE_mtd-utils-jffs2reader is not set
# CONFIG_PACKAGE_mtd-utils-lsmtd is not set
CONFIG_PACKAGE_mtd-utils-mkfs.jffs2=y
# CONFIG_PACKAGE_mtd-utils-mkfs.ubifs is not set
# CONFIG_PACKAGE_mtd-utils-mtd-debug is not set
# CONFIG_PACKAGE_mtd-utils-mtdinfo is not set
# CONFIG_PACKAGE_mtd-utils-mtdpart is not set
# CONFIG_PACKAGE_mtd-utils-nanddump is not set
# CONFIG_PACKAGE_mtd-utils-nandtest is not set
# CONFIG_PACKAGE_mtd-utils-nandwrite is not set
# CONFIG_PACKAGE_mtd-utils-nftl-format is not set
# CONFIG_PACKAGE_mtd-utils-nftldump is not set
# CONFIG_PACKAGE_mtd-utils-recv-image is not set
# CONFIG_PACKAGE_mtd-utils-rfddump is not set
# CONFIG_PACKAGE_mtd-utils-rfdformat is not set
# CONFIG_PACKAGE_mtd-utils-serve-image is not set
# CONFIG_PACKAGE_mtd-utils-sumtool is not set
# CONFIG_PACKAGE_mtd-utils-ubiattach is not set
# CONFIG_PACKAGE_mtd-utils-ubiblock is not set
# CONFIG_PACKAGE_mtd-utils-ubicrc32 is not set
# CONFIG_PACKAGE_mtd-utils-ubidetach is not set
# CONFIG_PACKAGE_mtd-utils-ubiformat is not set
# CONFIG_PACKAGE_mtd-utils-ubihealthd is not set
# CONFIG_PACKAGE_mtd-utils-ubimkvol is not set
# CONFIG_PACKAGE_mtd-utils-ubinfo is not set
# CONFIG_PACKAGE_mtd-utils-ubinize is not set
# CONFIG_PACKAGE_mtd-utils-ubirename is not set
# CONFIG_PACKAGE_mtd-utils-ubirmvol is not set
# CONFIG_PACKAGE_mtd-utils-ubirsvol is not set
# CONFIG_PACKAGE_mtd-utils-ubiupdatevol is not set
# CONFIG_PACKAGE_namei is not set
# CONFIG_PACKAGE_netopeer2-cli is not set
# CONFIG_PACKAGE_netopeer2-server is not set
# CONFIG_PACKAGE_netwhere is not set
# CONFIG_PACKAGE_nnn is not set
# CONFIG_PACKAGE_nsenter is not set
# CONFIG_PACKAGE_nss-utils is not set
# CONFIG_PACKAGE_oath-toolkit is not set
# CONFIG_PACKAGE_oci-runtime-tool is not set
# CONFIG_PACKAGE_open-plc-utils is not set
# CONFIG_PACKAGE_open2300 is not set
# CONFIG_PACKAGE_openobex is not set
# CONFIG_PACKAGE_openobex-apps is not set
# CONFIG_PACKAGE_openocd is not set
# CONFIG_PACKAGE_opensc-utils is not set
# CONFIG_PACKAGE_openssl-util is not set
# CONFIG_PACKAGE_openzwave is not set
# CONFIG_PACKAGE_openzwave-config is not set
# CONFIG_PACKAGE_owipcalc is not set
# CONFIG_PACKAGE_pciids is not set
# CONFIG_PACKAGE_pciutils is not set
# CONFIG_PACKAGE_pcsc-tools is not set
# CONFIG_PACKAGE_pcscd is not set
# CONFIG_PACKAGE_podman is not set
# CONFIG_PACKAGE_podman-selinux is not set
# CONFIG_PACKAGE_policycoreutils is not set
# CONFIG_PACKAGE_powertop is not set
# CONFIG_PACKAGE_pps-tools is not set
# CONFIG_PACKAGE_prlimit is not set
# CONFIG_PACKAGE_procps-ng is not set
# CONFIG_PACKAGE_progress is not set
# CONFIG_PACKAGE_pservice is not set
# CONFIG_PACKAGE_psmisc is not set
# CONFIG_PACKAGE_pv is not set
# CONFIG_PACKAGE_qmi-utils is not set
# CONFIG_PACKAGE_qrencode is not set
# CONFIG_PACKAGE_quota is not set
# CONFIG_PACKAGE_ravpower-mcu is not set
# CONFIG_PACKAGE_readsb is not set
# CONFIG_PACKAGE_relayctl is not set
# CONFIG_PACKAGE_rename is not set
# CONFIG_PACKAGE_reptyr is not set
# CONFIG_PACKAGE_restic is not set
# CONFIG_PACKAGE_rng-tools is not set
# CONFIG_PACKAGE_rtl-ais is not set
# CONFIG_PACKAGE_rtl-sdr is not set
# CONFIG_PACKAGE_rtl_433 is not set
# CONFIG_PACKAGE_runc is not set
# CONFIG_PACKAGE_sane-backends is not set
# CONFIG_PACKAGE_sane-daemon is not set
# CONFIG_PACKAGE_sane-frontends is not set
# CONFIG_PACKAGE_secilc is not set
# CONFIG_PACKAGE_sed is not set
# CONFIG_PACKAGE_selinux-audit2allow is not set
# CONFIG_PACKAGE_selinux-chcat is not set
# CONFIG_PACKAGE_selinux-semanage is not set
# CONFIG_PACKAGE_semodule-utils is not set
# CONFIG_PACKAGE_serdisplib-tools is not set
# CONFIG_PACKAGE_setools is not set
# CONFIG_PACKAGE_setserial is not set
# CONFIG_PACKAGE_shadow-utils is not set
# CONFIG_PACKAGE_sipcalc is not set
# CONFIG_PACKAGE_sispmctl is not set
# CONFIG_PACKAGE_slide-switch is not set
# CONFIG_PACKAGE_smartd is not set
# CONFIG_PACKAGE_smartd-mail is not set
# CONFIG_PACKAGE_smartmontools is not set
# CONFIG_PACKAGE_smartmontools-drivedb is not set
# CONFIG_PACKAGE_smstools3 is not set
# CONFIG_PACKAGE_sockread is not set
# CONFIG_PACKAGE_spi-tools is not set
# CONFIG_PACKAGE_spidev-test is not set
# CONFIG_PACKAGE_ssdeep is not set
# CONFIG_PACKAGE_sshpass is not set
# CONFIG_PACKAGE_strace is not set
CONFIG_STRACE_NONE=y
# CONFIG_STRACE_LIBDW is not set
# CONFIG_STRACE_LIBUNWIND is not set
# CONFIG_PACKAGE_stress is not set
# CONFIG_PACKAGE_stress-ng is not set
# CONFIG_PACKAGE_sumo is not set
# CONFIG_PACKAGE_syncthing is not set
# CONFIG_PACKAGE_sysrepo is not set
# CONFIG_PACKAGE_sysrepocfg is not set
# CONFIG_PACKAGE_sysrepoctl is not set
# CONFIG_PACKAGE_sysstat is not set
# CONFIG_PACKAGE_tar is not set
# CONFIG_PACKAGE_taskwarrior is not set
# CONFIG_PACKAGE_telegraf is not set
# CONFIG_PACKAGE_telegraf-full is not set
# CONFIG_PACKAGE_telldus-core is not set
# CONFIG_PACKAGE_temperusb is not set
# CONFIG_PACKAGE_tesseract is not set
# CONFIG_PACKAGE_tini is not set
CONFIG_PACKAGE_tinyalsa-utils=y
# CONFIG_PACKAGE_tinyionice is not set
# CONFIG_PACKAGE_tracertools is not set
# CONFIG_PACKAGE_tree is not set
# CONFIG_PACKAGE_triggerhappy is not set
# CONFIG_PACKAGE_udns-dnsget is not set
# CONFIG_PACKAGE_udns-ex-rdns is not set
# CONFIG_PACKAGE_udns-rblcheck is not set
# CONFIG_PACKAGE_ugps is not set
# CONFIG_PACKAGE_uhubctl is not set
# CONFIG_PACKAGE_uledd is not set
# CONFIG_PACKAGE_unshare is not set
# CONFIG_PACKAGE_usb-modeswitch is not set
# CONFIG_PACKAGE_usbids is not set
# CONFIG_PACKAGE_usbutils is not set
# CONFIG_PACKAGE_uuidd is not set
# CONFIG_PACKAGE_uuidgen is not set
# CONFIG_PACKAGE_uvcdynctrl is not set
# CONFIG_PACKAGE_v4l-utils is not set
# CONFIG_PACKAGE_view1090 is not set
# CONFIG_PACKAGE_viewadsb is not set
# CONFIG_PACKAGE_watchcat is not set
# CONFIG_PACKAGE_whereis is not set
# CONFIG_PACKAGE_which is not set
# CONFIG_PACKAGE_whiptail is not set
# CONFIG_PACKAGE_whois is not set
# CONFIG_PACKAGE_wifitoggle is not set
# CONFIG_PACKAGE_wipe is not set
# CONFIG_PACKAGE_xsltproc is not set
# CONFIG_PACKAGE_xxd is not set
# CONFIG_PACKAGE_yanglint is not set
# CONFIG_PACKAGE_yara is not set
# CONFIG_PACKAGE_ykpers is not set
# CONFIG_PACKAGE_yq is not set
# end of Utilities
```
