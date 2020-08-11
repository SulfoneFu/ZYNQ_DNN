KERN_DIR := /home/slinux/work/linux/kernel/linux-xlnx-xilinx-v2018.3

obj-m := chrdevbase.o
# obj-m表示将chrdevbase.c编译为模块

all:
	make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- -C $(KERN_DIR) M=`pwd` modules
# -C 切换目录 M：模块目录 modules：将其编译为.ko文件

clean:
	make -C $(KERN_DIR) M=`pwd` clean