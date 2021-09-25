#include "SDL/SDL.h"

#include "script.h"
#include "engine.h"

Script::Script()
{
    Script::scripts.push_back(*this);
}

void Script::exit()
{
    Engine::quit = true;
}
void Script::update() { };
void Script::start() { };
void Script::keyDown(SDL_Keysym sym) { }
void Script::mouseClick(int x) { };
void Script::mouseDown(int x) { };