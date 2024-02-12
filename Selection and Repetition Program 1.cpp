#include <iostream>

using namespace std;

double num1, num2;
char operand;

int main()
{
	cout << "Please enter two numbers separated by an operator(+, -, *, /):" << endl;
		cin >> num1 >> operand >> num2;

		if (operand == '+')
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

		else if (operand == '-')
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

		else if (operand == '*')
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

		else if (operand == '/')
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

		else if (operand == '/' && num2 == 0)
			cout << "Cannot divide by zero." << endl;

		else if (operand != '+' && operand != '-' && operand != '*' && operand != '/')
			cout << "Error, invalid operator symbol." << endl;
	

	return 0;
}