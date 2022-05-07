/**
 * @author HuangKai
 * @date 2022/5/7
 * @brief 练习 1.10: 编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。
 */

#include <iostream>

int main() {
    int val = 10;
    while (val >= 0) {
        std::cout << "The current number is " << val << std::endl;
        --val;
    }
    return 0;
}
