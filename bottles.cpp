#include <iostream>

class Wall {
    int bottles{ 99 };
public:
    int takeAndPass() {
        std::cout << bottles << " bottles of beer on the wall. \n";
        bottles--;
        return bottles;
    }
};

int main()
{
    Wall wall;
    while (wall.takeAndPass() > 0) {
        // Take one down, pass it around, 
    }
}
