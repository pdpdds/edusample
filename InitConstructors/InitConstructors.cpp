#include <iostream>
#include "TestClass.h"

TestClass g_testClass;

int main()
{
    std::cout << "value : " << g_testClass.m_test << "\n";
    return 0;
}