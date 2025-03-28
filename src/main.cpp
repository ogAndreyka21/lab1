#include <iostream>
#include "utils.h"

int main(){
    int a, b;
    std::cout << "a = " << std::endl;
    std::cin >> a;
    std::cout << "b = " << std::endl;
    std::cin >> b;
    std::cout << "addition: " << add(a, b) << std::endl;
    std::cout << "subtraction: " << subtract(a, b) << std::endl;
    std::cout << "multiplication: " << multiply(a, b) << std::endl;
    return 0;
}
