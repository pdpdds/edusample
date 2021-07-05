bits 32
segment .text

global _DivideAsm

_DivideAsm:
	mov eax, [esp + 4]
	mov ebx, [esp + 8]

	cdq
	idiv ebx
	ret
