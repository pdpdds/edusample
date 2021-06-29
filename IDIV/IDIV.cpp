#include <iostream>

typedef struct tag_DivisionResultInfo
{
    int quotient = 0;
    int reminder = 0;

}_DivisionResultInfo;

_DivisionResultInfo Divide(int dividend, int divisor)
{
    //IDIV는 EAX, EDX 레지스터를 사용
    //EAX에는 몫이 저장, EDX에는 나머지값이 저장

    _DivisionResultInfo result;
 
    __asm
    {
        pushad
        mov eax, dividend
        cdq //IDIV 명령을 위해 EDX, EAX 레지스터 준비, convert DWORD to QWORD
        idiv divisor
        mov result.quotient, eax
        mov result.reminder, edx
        popad
    }

    return result;
}

int main()
{
    int dividend = 100;
    int divisor = 30;
    _DivisionResultInfo result = Divide(dividend, divisor);

    std::cout << "dividend : " << dividend << ", divisor : " << divisor << std::endl;
    std::cout << "division result" << std::endl << "quotient : " << result.quotient << ", reminder : " << result.reminder << std::endl;
    
    return 0;
}
