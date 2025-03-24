#include <iostream>
using namespace std;

template <typename T1>
T multiplication(T num1, T num2)
{
    return num1*num2;
}

template <typename T1>
T division(T num1, T num2)
{
    if (num2==0)
    return 0;
    return num1/num2;
}