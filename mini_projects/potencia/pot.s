.global poten
poten:
	mov x5, #0
	mov x4, #0
	mov x4, x0

	cmp x1, #1
	beq potenciaNumero
	cmp x1, #0
	beq potenciaZero
loop:
	add x5, x5, #1
	cmp x5, x1
	beq fim
	mul x4, x4, x0
	b loop

potenciaNumero:
	ret
potenciaZero:
	mov x0, #1
	ret

fim:
	mov x0, x4
	ret
