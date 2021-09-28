#include "SDL/SDL.h"

#include "script.h"
#include "engine.h"
#include "console.h"

Script::Script()
{
    Script::scripts.push_back(*this);
}

void Script::exit()
{
    Console::print("Exit");
    Engine::quit = true;
}
// void Script::update()
// {
//     Console::print("Update");
// }

void Script::callExit()
{
    for (int i = 0; i < (int)Script::scripts.size(); i++)
    {
        Script::scripts[i].exit();
    }
}