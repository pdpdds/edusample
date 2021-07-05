#include <iostream>

extern "C" int DivideAsm(int dividend, int divisor);
extern "C" int yuzaadd(int a, int b);

int main()
{
	int dividend = 100;
	int divisor = 30;
	int resultQuotient = DivideAsm(dividend, divisor);

	std::cout << "dividend : " << dividend << ", divisor : " << divisor << std::endl;
	std::cout << "division result" << std::endl << "quotient : " << resultQuotient << std::endl;

	int sum = yuzaadd(5, 4);

	return 0;
}