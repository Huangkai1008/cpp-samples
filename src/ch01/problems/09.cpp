/**
 * @author HuangKai
 * @date 2022/5/7
 * @brief 练习 1.9: 编写程序， 使用while循环将50到100的整数相加。
 */

#include <iostream>

int main() {
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;
    return 0;
}
