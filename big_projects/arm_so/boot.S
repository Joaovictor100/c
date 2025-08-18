.global _start
.extern kernel_main

.section .text
_start:
    // inicializa stack (opcional, mas boa prática)
    ldr x1, =_stack_top
    mov sp, x1

    // chama a função principal em C
    bl kernel_main

loop:
    b loop
