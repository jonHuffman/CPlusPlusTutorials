// 01.11a-DebuggingWatchingAndCallstack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void CallC()
{
    std::cout << "C called" << std::endl;
}

void CallB()
{
    std::cout << "B called" << std::endl;
    CallC();
}

void CallA()
{
    CallB();
    CallC();
}

int main()
{
    CallA();

    return 0;
}