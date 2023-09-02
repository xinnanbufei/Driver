obj-m := Demo.o
KDIR := /home/neware/zwj8x/zwj4s-plus/buildroot-2022.02/output/build/linux-custom
PWD := $(shell pwd)
CC := /home/neware/zwj8x/zwj4s-plus/buildroot-2022.02/output/host/bin/arm-buildroot-linux-gnueabihf-gcc
LD := /home/neware/zwj8x/zwj4s-plus/buildroot-2022.02/output/host/bin/arm-buildroot-linux-gnueabihf-ld

all:
	$(MAKE) ARCH=arm $(CC) $(LD) -C $(KDIR) M=$(PWD) modules

clean:
	rm -rf *.cmd *.o *.mod.c *.ko *.symvers *.order *.dwo *.ko.cmd *.mod