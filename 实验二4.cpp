/*
#include <iostream>
using namespace std;

int main() {
	double num1, num2, result;
	char op;
	cout << "please enter the first number" << endl;
	cin >> num1;
	cout << "please enter the operator" << endl;
	cin >> op;
	cout << "please enter the second number" << endl;
	cin >> num2;

	switch (op) {
	case'+':result=num1 + num2;
		cout << "the result is" << result << endl;
		break;
	case'-':result=num1 - num2;
		cout << "the result is" << result << endl;
		break;
	case'*':result = num1 * num2;
		cout << "the result is" << result << endl;
		break;
	case'/':
		if (num2 == 0) {
			cout << "除数不可为0" << endl;
			return 0;
		}
		else {
			result = num1 / num2;
			cout << "the result is" << result << endl;
			return 0;
		}
		break;
	case'%':
		if (num2 == 0) {
			cout << "除数不可为0" << endl;
			return 0;
		}
		else {
			int a = static_cast<int>(num1);//类型转换一下
			int b = static_cast<int>(num2);
			result = a % b;
			cout << "the result is" << result << endl;
			return 0;
		}
		break;
	default:
		cout << "运算符非法" << endl;
	}
	
}
*/