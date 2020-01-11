#include <iostream>
#include "log.h"

void InitLog()
{
    log("Initialized Log");
}

void log(const char *message)
{
    std::cout << message << std::endl;
}
