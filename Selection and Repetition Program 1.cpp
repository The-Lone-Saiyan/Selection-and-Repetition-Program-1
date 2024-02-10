#include <iostream>
#include <iomanip>

using namespace std;

double num1, num2;
string operand;

int main()
{
	cout << "Please enter two numbers separated by an operator(+, -, *, /):" << endl;
		cin >> num1 >> operand >> num2;

		if (operand == +)
			cout << num1 + num2 << endl;

		if (operand == -)
			cout << num1 - num2 << endl;

		if (operand == *)
			cout << num1 * num2 << endl;

		if (operand == /)
			cout << num1 / num2 << endl;
	

	return 0;
}