
#include <iostream>
    using namespace std;

    int main() {
        char ch;
        cin >> ch;
        if (ch >= 'a' && ch <= 'z') {           // �ж��Ƿ�ΪСд��ĸ
            ch -= 'a'-'A';                          // ת��Ϊ��д��ĸ
            cout << ch << endl;               //
        }
        else {
            cout << int(ch) + 1 << endl;   // �������ַ���ASCII��ֵ
        }
        return 0;
    }
    