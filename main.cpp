#include <iostream>
#include "Calculator.h"
#include <string>

using namespace std;

int main () {
    Calculator cals;
    double num1, num2, result;
    char opp;
    string again;


    cout << "=== Counsole Calculator ===" <<endl;

    do {
        cout << "Enter first number: " <<endl;
        cin >> num1;

        cout << "Enter Operator ( +, -, *, / ): " <<endl;
        cin >> opp;

        cout << "Enter second number: " <<endl;
        cin >> num2;

        try {
            switch (opp)
            {
            case '+': result = cals.add (num1, num2);break;
            case '-': result = cals.subtract (num1, num2);break;
            case '*': result = cals.multiply (num1, num2);break;
            case '/': result = cals.divide (num1, num2);break;
            default:
                cout << "invalid operator" <<endl;
                continue;;
            }

            cout << "Result: " << result <<endl;
        }
        catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
        cout << "Calculate again? (Yes/No): ";
        cin >> again;


    }
    while (again == "yes" || again == "Yes") ;
    cout << "Good Bye " <<endl;

    return 0;
}