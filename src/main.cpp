#include <iostream>
#include "log.h"

int main()
{
    int a = 8;
    a++;
    const char* string = "Hello";
    for (int i = 0; i < 5; ++i) {
        const char c = string[i];
        std::cout << c << std::endl;
    }

    log("Hello World!");
    std::cin.get();
}
