#include <iostream>
#include "calculator.h"
using namespace std;


template <typename T>
T multiplication(T num1, T num2){
	return num1*num2;
}

template <typename T>
T division(T num1, T num2){
	if(num2==0)
		return 0;
	return num1/num2;

}


template <typename T>
T addition(T n1, T n2){
	return n1+n2;
}
template <typename T>
T substraction(T n1, T n2){
	return n1-n2;
}

int factorial(int n){
	int result;

	for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;

}

int gcd(int a, int b) {
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0)
        return 0;

    return a * b / gcd(a, b);
}


int randomInRange(int min, int max) {
    

    return rand() % (max - min + 1) + min;
}

