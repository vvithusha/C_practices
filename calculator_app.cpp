#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    double num1, num2;
    char op;

    while (true)
    {
        cout << "\nEnter first number (or type 'exit' to quit): ";
        cin >> input;

        if (input == "exit")
        {
            cout << "Calculator closed. Goodbye!" << endl;
            break;
        }

        // Convert string to number
        num1 = stod(input);

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        switch (op)
        {
            case '+':
                cout << "Result = " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Result = " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Result = " << num1 * num2 << endl;
                break;

            case '/':
                if (num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero is not allowed." << endl;
                break;

            default:
                cout << "Invalid operator!" << endl;
        }
    }

    return 0;
}