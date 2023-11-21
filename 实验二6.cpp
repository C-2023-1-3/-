/*
#include <iostream>
using namespace std;

int main() {
	int num1,num2;
	cin >> num1;
	cin >> num2;
	int numx,numy ;
	if (num1 >= num2) { numx = num2; }//找出小的
	else { numx = num1; }
	
		while (num1 % numx != 0 || num2 % numx != 0) {
			numx--;
		}//递减找最大公约数
	cout << "最大公约数等于" << numx << endl;


	if (num1 >= num2) { numy = num1; }//找出大的
	else { numy = num2; }

	while (numy % num1 != 0 || numy % num2 != 0) {
		numy++;
	}
	cout << "最小公倍数等于" << numy << endl;



		return 0;


}
*/