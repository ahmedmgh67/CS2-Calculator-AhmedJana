# 🧮 C++ Calculator Library

A simple, header-based C++ library providing mathematical operations including +-\*/, factorial, GCD, LCM, random number generation and simple mathematical expression parsing.

---

## 📦 Features

- 🔢 `addition(a, b)` – Add two integers
- ➖ `subtraction(a, b)` – Subtract two integers
- ✖️ `multiplication(a, b)` – Multiply two integers
- ➗ `division(a, b)` – Divide two integers (returns a `double`)
- 🧮 `factorial(int n)` – Compute factorial of an integer
- 🧩 `gcd(int a, int b)` – Compute Greatest Common Divisor
- 🧮 `lcm(int a, int b)` – Compute Least Common Multiple
- 🎲 `randomInRange(int min, int max)` – Generate random integer in a given range
- 🧮 `calcExpression(string expression)` – Calculates value of simple mathemetaical expressions

---

## 📁 File Structure

CS2-Calculator-AhmedJana/
├── calculator.h       # Function declarations
├── calculator.cpp     # Function implementations
├── CMakeLists.txt     # Build system file (optional)
└── test.cpp   # Example usage


## Build Commands

cmake --build .