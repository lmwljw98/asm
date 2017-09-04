.intel_syntax noprefix

hello:
	.string "HELLO\n"

.globl main
main:
	push	ebp
	mov	ebp, esp
	mov	eax, 4
	mov	ebx, 1
	mov	ecx, OFFSET hello
	mov	edx, 6
	int 0x80
	leave
	ret
