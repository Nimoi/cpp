#include <iostream>

bool isDivideBy(int number, int a, int b)
{
  return number % a == 0 && number % b == 0;
}

int main()
{
    std::cout << isDivideBy(50, 5, 10);
}
