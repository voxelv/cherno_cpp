#include <iostream>
#include "log.h"

int main()
{
    init_log();
    log("Hello World!");
    std::cin.get();
}
