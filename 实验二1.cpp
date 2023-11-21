
#include <iostream>
    using namespace std;

    int main() {
        char ch;
        cin >> ch;
        if (ch >= 'a' && ch <= 'z') {           // 判断是否为小写字母
            ch -= 'a'-'A';                          // 转换为大写字母
            cout << ch << endl;               //
        }
        else {
            cout << int(ch) + 1 << endl;   // 输出后继字符的ASCII码值
        }
        return 0;
    }
    