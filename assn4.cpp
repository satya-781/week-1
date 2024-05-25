#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Choose an operation to perform (+, -, *, /, %): ";
    cin >> operation;
    switch(operation) {
        case '+':
            cout << "Result: "  << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: "  << (num1 / num2) << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        case '%':
            if (num2 != 0)
                cout << "Result: "   << ((int)num1 % (int)num2) << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Error: Invalid operation selected." << endl;
            break;
    }

    return 0;
}
