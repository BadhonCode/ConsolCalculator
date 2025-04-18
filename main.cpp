
#include "Calculator.h"

void clearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getNumber(const std::string& prompt) {
    double num;
    while (true) {
        std::cout << prompt;
        std::cin >> num;
        if (!std::cin.fail()) break;
        clearInput();
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
    }
    return num;
}

std::string getOperator() {
    std::string op;
    while (true) {
        std::cout << "Enter Operator (+, -, *, /): ";
        std::cin >> op;
        if (op == "+" || op == "-" || op == "*" || op == "/") break;
        std::cout << "Invalid operator. Please enter +, -, *, or /." << std::endl;
    }
    return op;
}

bool askToContinue() {
    std::string again;
    std::cout << "Calculate again? (Yes/No): ";
    std::cin >> again;
    std::transform(again.begin(), again.end(), again.begin(), ::tolower);
    return again == "yes";
}

void performCalculation() {
    Calculator cals;
    double num1 = getNumber("Enter first number: ");
    std::string op = getOperator();
    double num2 = getNumber("Enter second number: ");
    double result;

    try {
        if (op == "+") {
            result = cals.add(num1, num2);
        } else if (op == "-") {
            result = cals.subtract(num1, num2);
        } else if (op == "*") {
            result = cals.multiply(num1, num2);
        } else if (op == "/") {
            result = cals.divide(num1, num2);
        } else {
            throw std::invalid_argument("Invalid operator.");
        }
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

int main() {
    std::cout << "=== Console Calculator ===" << std::endl;
    do {
        performCalculation();
    } while (askToContinue());
    std::cout << "Goodbye!" << std::endl;
    return 0;
}
