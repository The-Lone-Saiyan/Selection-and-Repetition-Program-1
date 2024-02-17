#include <iostream>

using namespace std;

//Basic Calculator program, user inputs the first number, operator, and second number.
// Final display is the solution depending on which operator is chosen.
// Error messages will display if trying to divide by zero or if incorrect operator character is used.

double num1, num2;
char operand;

int main()
{
	cout << "Please enter two numbers separated by an operator(+, -, *, /):" << endl;
		cin >> num1 >> operand >> num2;

		if (operand == '+')
		{
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		}

		if (operand == '-')
		{
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		}

		if (operand == '*')
		{
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		}

		if (operand == '/' && num2 == 0)
		{
			cout << "Cannot divide by zero." << endl;
		}

		if (operand == '/')
		{
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		}

		if (operand != '+' && operand != '-' && operand != '*' && operand != '/')
		{
			cout << "Error, invalid operator symbol." << endl;
		}

	return 0;
}