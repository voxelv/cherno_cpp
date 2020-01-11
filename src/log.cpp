#include <iostream>
#include "log.h"

void init_log()
{
    log("Initialized Log");
}

void log(const char *message)
{
    std::cout << message << std::endl;
}
