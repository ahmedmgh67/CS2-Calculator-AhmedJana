# 🧮 C++ Calculator Library

A simple, header-based C++ library providing mathematical operations including +-\*/, factorial, GCD, LCM, and random number generation.

---

## 📦 Features

- 🔢 `addition(a, b)` – Add two integers
- ➖ `subtraction(a, b)` – Subtract two integers
- ✖️ `multiplication(a, b)` – Multiply two integers
- ➗ `division(a, b)` – Divide two integers (returns a `double`)
- 🧮 `factorial(n)` – Compute factorial of an integer
- 🧩 `gcd(a, b)` – Compute Greatest Common Divisor
- 🧮 `lcm(a, b)` – Compute Least Common Multiple
- 🎲 `randomInRange(min, max)` – Generate random integer in a given range

---

## 📁 File Structure

calculator-lib/
├── calculator.h       # Function declarations
├── calculator.cpp     # Function implementations
├── CMakeLists.txt     # Build system file (optional)
└── example/
└── main.cpp   # Example usage


## Build Commands

cmake .
make
