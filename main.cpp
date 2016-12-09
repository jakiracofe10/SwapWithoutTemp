#include <iostream>


//Swap two numbers in place without using temporary var
int main() {
    int num1 = 5;
    int num2 = 7;
    num1 += num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
}