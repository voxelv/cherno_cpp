#include <iostream>
#include "log.h"

int multiply(int a, int b)
{
    log("Multiply");
    return(a * b);
}

int main()
{
    std::cout << multiply(5, 8) << std::endl;
    std::cin.get();
}
