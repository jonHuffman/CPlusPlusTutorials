// 01.04a-FunctionParameterIntro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int doubleNumber(int x)
{
	return x * 2;
}

int main()
{
	int x = 0;

	std::cout << "Enter a number: ";
	std::cin >> x;
	std::cout << "Double the input value of " << x << " is " << doubleNumber(x) << std::endl;

	return 0;
}

