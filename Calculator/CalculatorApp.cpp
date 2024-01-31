#include <iostream>
#include <cmath>   
#include <string>


using namespace std;

int main() {
    int num1, num2;
    char symbol;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Enter operator(+, -, *, /): ";
    cin >> symbol;

    switch (symbol)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;

    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;

    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;

    case '/':
        if (num2 == 0) {
            cout << "Error: Division by zero" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;

    default:
        break;
    }


    return 0;
}