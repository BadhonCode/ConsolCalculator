# 📟 Console Calculator

A lightweight, command-line calculator written in C++ that performs basic arithmetic operations. This project demonstrates clean separation of logic using classes and is an excellent starting point for beginners learning object-oriented programming in C++.

---

## ✨ Features

- ✅ Addition  
- ✅ Subtraction  
- ✅ Multiplication  
- ✅ Division (with zero-division handling)

---

## 🧱 Project Structure

```
ConsolCalculator/
├── main.cpp           # Application entry point
├── Calculator.h       # Calculator class declaration
├── Calculator.cpp     # Calculator class definition
├── Makefile           # Build configuration
└── README.md          # Project documentation
```

---

## 🛠️ Build Instructions

### Prerequisites

- C++17-compatible compiler (e.g., `g++`)
- `make` utility installed

### Build & Run

```bash
make            # Compile the project
./calculator    # Run the executable
```

### Clean Build Files

```bash
make clean      # Remove compiled object files and executable
```

---

## 🧪 Sample Output

```
Add: 15
Subtract: 5
Multiply: 50
Divide: 2
```

---

## 📚 Learning Objectives

This project serves as an introductory exercise in:

- C++ classes and object-oriented design
- Header and source file separation
- Basic Makefile usage
- Modular code organization

---

## 🔧 Customization Ideas

- Add support for floating-point precision formatting
- Implement a menu-driven interactive CLI
- Extend with advanced operations (exponentiation, modulus)
- Include unit tests with a framework like Catch2 or Google Test

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).
