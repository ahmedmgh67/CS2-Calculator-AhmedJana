#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include "calculator.h"
using namespace std;


// template <typename T>
// T multiplication(T num1, T num2){
// 	return num1*num2;
// }

// template <typename T>
// T division(T num1, T num2){
// 	if(num2==0)
// 		return 0;
// 	return num1/num2;

// }


// template <typename T>
// T addition(T n1, T n2){
// 	return n1+n2;
// }
// template <typename T>
// T substraction(T n1, T n2){
// 	return n1-n2;
// }

int factorial(int n){
	int result = 1;

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

class Parser {
    string expr;
    size_t pos;

    char peek() {
        return pos < expr.length() ? expr[pos] : '\0';
    }

    char get() {
        return expr[pos++];
    }

    void skipWhitespace() {
        while (isspace(peek())) get();
    }

    double parseNumber() {
        skipWhitespace();
        string number;
        while (isdigit(peek()) || peek() == '.') {
            number += get();
        }
        return stod(number);
    }

    double parseBase() {
        skipWhitespace();
        if (peek() == '(') {
            get();
            double value = parseExpr();
            get();
            return value;
        } else {
            return parseNumber();
        }
    }

    double parseFactor() {
        double base = parseBase();
        skipWhitespace();
        if (peek() == '^') {
            get();
            return pow(base, parseFactor());
        }
        return base;
    }

    double parseTerm() {
        double value = parseFactor();
        while (true) {
            skipWhitespace();
            char op = peek();
            if (op == '*' || op == '/') {
                get();
                double rhs = parseFactor();
                value = (op == '*') ? value * rhs : value / rhs;
            } else break;
        }
        return value;
    }

    double parseExpr() {
        double value = parseTerm();
        while (true) {
            skipWhitespace();
            char op = peek();
            if (op == '+' || op == '-') {
                get();
                double rhs = parseTerm();
                value = (op == '+') ? value + rhs : value - rhs;
            } else break;
        }
        return value;
    }

public:
    double parse(const string& input) {
        expr = input;
        pos = 0;
        return parseExpr();
    }
};


double calcExpression(string expression){
    Parser parser;
    return parser.parse(expression);

}


