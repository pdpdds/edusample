#include <iostream>

__declspec(naked) int _cdecl DivideNaked(int dividend, int divisor)
{
	__asm
	{
		mov eax, ss:[esp + 4]
		mov ebx, ss:[esp + 8]

		cdq //IDIV 명령을 위해 EDX, EAX 레지스터 준비, convert DWORD to QWORD
		idiv ebx
		ret
	}
}

int main()
{
	int dividend = 100;
	int divisor = 30;
	int resultQuotient = DivideNaked(dividend, divisor);

	std::cout << "dividend : " << dividend << ", divisor : " << divisor << std::endl;
	std::cout << "division result" << std::endl << "quotient : " << resultQuotient << std::endl;

	return 0;
}
