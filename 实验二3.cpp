/*
#include <iostream>
using namespace std;

int main() {
	float a, b, c;
	cout << "请输入三条边的值" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	float C = a + b + c;
	cout << "周长C=" << C << endl;
	if (a + b < c || a + c < b || b + c < a) {
		cout << "这不能构成三角形" << endl;
		return 0;
	}
	else if (a == b || c == a || b == c) {
		cout << "可以构成等腰三角形" << endl;
		return 0;
	}
	else {
		cout << "可以构成三角形，但不是等腰三角形" << endl;
		return 0;
	}
	return 0;
}
*/