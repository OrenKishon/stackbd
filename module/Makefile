EXTRA_CFLAGS += -D_GNU_SOURCE 
obj-m := stackbd.o

all:
	make -C /usr/src/linux-headers-$(shell uname -r) SUBDIRS=$(PWD) modules

clean:
	make -C /usr/src/linux-headers-$(shell uname -r) SUBDIRS=$(PWD) clean
