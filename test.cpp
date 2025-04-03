#include <iostream>
#include "calculator.h"


int main(){
    cout << "Multiplication for 5 x 5: " << multiplication(5,5)<<endl;
    cout << "Divison for 10/2: " << division(10,2)<<endl;
    cout << "Addition for 10+2: " << addition(10,2)<<endl;
    cout << "Substraction for 10-2: " << substraction(10,2)<<endl;
    cout << "Factorial for 5: " << factorial(5) <<endl;
    cout << "GCD for 50 & 10: " << gcd(50,10) <<endl;
    cout << "LCM for 50 & 10: " << lcm(50,10) <<endl;
    cout << "Random in range 20 and 40: " << randomInRange(20,40) <<endl;
    cout << "Calculate expression (50+2/4*3): " << calcExpression("50+2/4*3") <<endl;

}