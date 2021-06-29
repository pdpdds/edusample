bits 32
segment .text

global _DivideAsm

_DivideAsm:
	mov eax, ss:[esp + 4]
	mov ebx, ss:[esp + 8]

	cdq
	idiv ebx
	ret
