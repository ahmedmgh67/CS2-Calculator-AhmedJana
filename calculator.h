#include <iostream>
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


int factorial(int n);


int gcd(int a, int b);

int lcm(int a, int b);

int randomInRange(int min, int max);

double calcExpression(string expression);