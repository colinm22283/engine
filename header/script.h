#pragma once

#include "SDL/SDL.h"
#include <vector>

class Script
{
public:
    Script();

    void start();
    void update();
    void keyDown(SDL_Keysym keysym);
    void mouseDown(int button);
    void mouseClick(int button);
    void exit();

    static void callExit();
};