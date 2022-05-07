/**
 * @author HuangKai
 * @date 2022/5/7
 * @brief 练习 1.11: 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
 */

#include <iostream>

int main() {
    std::cout << "Enter two numbers: " << std::endl;
    int left = 0, right = 0;
    std::cin >> left >> right;
    if (left > right) {
        left = left ^ right;
        right = left ^ right;
        left = left ^ right;
    }
    std::cout << left << right << std::endl;
    while (left <= right) {
        std::cout << "The current number is " << left << std::endl;
        ++left;
    }
    return 0;
}
