obj-m := Demo.o
KDIR := /home/neware/zwj8x/zwj4s-plus/buildroot-2022.02/output/build/linux-custom
PWD := $(shell pwd)
CC := /home/neware/zwj8x/zwj4s-plus/buildroot-2022.02/output/host/bin/arm-buildroot-linux-gnueabihf-gcc
LD := /home/neware/zwj8x/zwj4s-plus/buildroot-2022.02/output/host/bin/arm-buildroot-linux-gnueabihf-ld

all:
	#调用并编译其他目录下Makefile（Start）
	cd ./Misc && $(MAKE)
	#调用并编译其他目录下Makefile（End）
	
	$(MAKE) ARCH=arm $(CC) $(LD) -C $(KDIR) M=$(PWD) modules

	cp *.ko ~/nfsboot -rf

	rm -rf *.cmd *.o *.ko *.mod.c *.symvers *.order *.dwo *.ko.cmd *.mod
	rm -rf .modules.order.cmd .Module.symvers.cmd
	rm -rf .*.o.cmd .*.ko.cmd .*.mod.cmd .*.mod.o.cmd

clean:
	rm -rf *.ko
	#调用并编译其他目录下Makefile（Start）
	cd ./Misc && $(MAKE) clean
	#调用并编译其他目录下Makefile（End）
