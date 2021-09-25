#pragma once

#include "SDL/SDL.h"
#include <vector>

class Script
{
public:
    Script();

    static void start();
    static void update();
    static void keyDown(SDL_Keysym keysym);
    static void mouseDown(int button);
    static void mouseClick(int button);
    static void exit();
protected:
    static std::vector<Script> scripts;
};