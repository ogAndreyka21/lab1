#include <iostream>
#include "utils.h"

int main(){
    int a, b;
    std::cin >> a >> b;
    std::cout << "addition: " << add(a, b) << std::endl;
    std::cout << "subtraction: " << subtract(a, b) << std::endl;
    std::cout << "multiplication: " << multiply(a, b) << std::endl;
    return 0;
}
