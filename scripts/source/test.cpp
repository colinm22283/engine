#include <iostream>

#include "script.h"

class Test : Script
{
    void update()
    {
        std::cout << "test\n";
    }
};