#include "stdafx.h"
#include <iostream>

int readNumber()
{
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    return input;
}

void writeAnswer(int answer)
{
    std::cout << "The answer is : " << answer << std::endl;
}