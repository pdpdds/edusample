				.386
_TEXT           segment use32 para public 'CODE'
				public  _DivideAsm
				public  _yuzaadd

_DivideAsm proc    near
           assume  cs:_TEXT
	mov eax, [esp + 4]
	mov ebx, [esp + 8]

	cdq
	idiv ebx
	ret

_DivideAsm       endp

_yuzaadd proc    near
         assume  cs:_TEXT
	mov eax, [esp + 4]
	mov ebx, [esp + 8]
	add eax, ebx
	ret
_yuzaadd       endp

_TEXT           ends
                end