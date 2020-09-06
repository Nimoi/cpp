#include <string>
#include <sstream>
#include <iostream>

std::string highAndLow(const std::string& numbers){
    std::istringstream is( numbers );
    int n;
    int highest;
    int lowest;
    bool init = false;
    while( is >> n ) {
        if (init == false) {
            highest = lowest = n;
            init = true;
            continue;
        }
        if (n > highest) {
            highest = n;
        }
        if (n < lowest) {
            lowest = n;
        }
    }
    std::ostringstream result;
    result << highest << " " << lowest;
    return result.str();
}

int main()
{
    std::cout << highAndLow("1 2 3 4 5 -10") << "\n";
    std::cout << highAndLow("-11 22 3123 jsadjas 5 -10") << "\n";
    return 0;
}
