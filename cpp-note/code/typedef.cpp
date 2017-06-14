#include <iostream>
using namespace std;

// 重新定义类型名称
typedef unsigned char uchar;

int main() {
    uchar i = 255;
    // uchar j = 256;  // 超出类型范围
    cout << i;
    return 0;
}
