CROSS = 
AS = clang
CC = clang
LD = ld.lld
OBJCOPY = llvm-objcopy

all: kernel.img

boot.o: boot.S
	$(AS) --target=aarch64 -c boot.S -o boot.o

kernel.o: kernel.c
	$(CC) --target=aarch64 -c kernel.c -o kernel.o -ffreestanding -O2 -nostdlib

kernel.elf: boot.o kernel.o linker.ld
	$(LD) -T linker.ld boot.o kernel.o -o kernel.elf

kernel.img: kernel.elf
	$(OBJCOPY) -O binary kernel.elf kernel.img

clean:
	rm -f *.o *.elf *.img

.PHONY: run

run:
	qemu-system-aarch64 -M virt -cpu cortex-a53 -nographic -kernel kernel.img
