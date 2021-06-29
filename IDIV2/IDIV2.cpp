#include <iostream>

__declspec(naked) int DivideNaked(int dividend, int divisor)
{
	__asm
	{
		//프롤로그
		push ebp
		mov ebp, esp

		mov eax, dividend
		cdq //IDIV 명령을 위해 EDX, EAX 레지스터 준비, convert DWORD to QWORD
		idiv divisor

		//에필로그
		mov esp, ebp
		pop ebp
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
