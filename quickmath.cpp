#include <iostream>

int main()
{
    int firstNum{};
    std::cout << "Enter an integer: ";
    std::cin >> firstNum;

    int secondNum{};
    std::cout << "Enter another integer: ";
    std::cin >> secondNum;

    std::cout << firstNum << " + " << secondNum << " is " << firstNum + secondNum << ".\n";
    std::cout << firstNum << " - " << secondNum << " is " << firstNum - secondNum << ".\n";

    return 0;
}
