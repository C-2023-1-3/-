/*
#include <iostream>
#include<string>
using namespace std;

int main() {
	int num = 0, space = 0, letter = 0, others = 0;
	string sentence;
	getline(cin, sentence);//输入

	int size = sentence.size();//统计总个数
	for (int i = 0; i < size;i++) {
		if (sentence.at(i) >= 'a' && sentence.at(i) <= 'z') 
		{ letter++; }
		else if (sentence.at(i) >= 'A' && sentence.at(i) <= 'Z')
		{ letter++; }
		else if (sentence.at(i) >= '0' && sentence.at(i) <= '9') 
		{ num++; }
		else if (sentence.at(i) == ' ' ) 
		{ space++; }
		else 
		{ others++; }
	}
	cout << "num=" << num << endl;
	cout << "letter=" << letter<< endl;
	cout << "others=" << others << endl;
	cout << "space=" << space<< endl;
	return 0;
}
*/