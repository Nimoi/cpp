#include <iostream>

std::string even_or_odd(int number) 
{
    if (number % 2 == 0) {
        return "Even";
    }
    return "Odd";
}

int main()
{
    std::cout << even_or_odd(1);
}
