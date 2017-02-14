// 02.03-VariableSizes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

template<typename T>
void PrintSize(int tabCount);

int main()
{
    PrintSize<bool>(2);
    PrintSize<char>(2);
    PrintSize<wchar_t>(1);
    PrintSize<char16_t>(1);
    PrintSize<char32_t>(1);
    PrintSize<short>(2);
    PrintSize<int>(2);
    PrintSize<long>(2);
    PrintSize<long long>(1);
    PrintSize<float>(2);
    PrintSize<double>(2);
    PrintSize<long double>(1);

    //PrintSize<std::string>(2);
    
    return 0;
}

template<typename T>
void PrintSize(int tabCount)
{
    std::string colonTabs = ":";

    for (int i = 0; i < tabCount; ++i)
    {
        // \t inserts a tab
        colonTabs += "\t";
    }

    std::cout << typeid(T).name() << colonTabs << sizeof(T) << " bytes" << std::endl;
}