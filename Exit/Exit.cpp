#include <iostream>

void ExitFunction()
{
    std::cout << "void ExitFunction Called!!\n";
    return;
}

int main()
{
    atexit(ExitFunction);
    std::cout << "void main Function Called!!\n";
    return 0;
}