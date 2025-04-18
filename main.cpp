#include <iostream>
#include "Calculator.h"
#include <string>
#include <limits> // for numeric_limits
#include <algorithm> // for transform

using namespace std;

int main() {
    Calculator cals;
    double num1, num2, result;
    string opp;
    string again;

    cout << "=== Console Calculator ===" << endl;

    do {
        // Input first number
        while (true) {
            cout << "Enter first number: ";
            cin >> num1;
            if (!cin.fail()) break;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }

        // Input operator
        while (true) {
            cout << "Enter Operator (+, -, *, /): ";
            cin >> opp;
            if (opp == "+" || opp == "-" || opp == "*" || opp == "/") break;
            cout << "Invalid operator. Please enter +, -, *, or /." << endl;
        }

        // Input second number
        while (true) {
            cout << "Enter second number: ";
            cin >> num2;
            if (!cin.fail()) break;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }

        // Perform calculation
        try {
            if (opp == "+") {
                result = cals.add(num1, num2);
            } else if (opp == "-") {
                result = cals.subtract(num1, num2);
            } else if (opp == "*") {
                result = cals.multiply(num1, num2);
            } else if (opp == "/") {
                result = cals.divide(num1, num2);
            } else {
                throw invalid_argument("Invalid operator.");
            }
            cout << "Result: " << result << endl;
        } catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }

        // Ask to calculate again
        cout << "Calculate again? (Yes/No): ";
        cin >> again;
        transform(again.begin(), again.end(), again.begin(), ::tolower); // Convert to lowercase
    } while (again == "yes");

    cout << "Goodbye!" << endl;
    return 0;
}
