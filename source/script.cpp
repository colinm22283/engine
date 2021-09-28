#include "SDL/SDL.h"
#include <iostream>

#include "script.h"
#include "engine.h"
#include "console.h"

std::vector<Script> scripts;

Script::Script()
{
    scripts.push_back(*this);
}

void Script::exit() { }
void Script::update()
{
    Console::print("Update");
}

void Script::callExit()
{
    for (int i = 0; i < (int)scripts.size(); i++)
    {
        std::cout << "test\n";
        scripts[i].exit();
    }

    Engine::quit = true;
}