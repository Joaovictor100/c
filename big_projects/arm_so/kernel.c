#define UART_BASE 0x09000000
#define UART_FR   (UART_BASE + 0x18)

void uart_putc(char c) {
    volatile unsigned int *uart = (unsigned int *) UART_BASE;
    while (*(volatile unsigned int *)UART_FR & (1 << 5)); // espera TXFF
    *uart = c;
}

void uart_puts(const char *s) {
    while (*s) {
        uart_putc(*s++);
    }
}

void kernel_main() {
    uart_puts(">> Hello from C via UART!\n");
}
