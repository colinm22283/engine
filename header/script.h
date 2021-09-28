#pragma once

#include "SDL/SDL.h"
#include <vector>

class Script
{
public:
    Script();

    //void start();
    //void update();
    //void keyDown(SDL_Keysym keysym);
    //virtual void mouseDown(int button);
    //virtual void mouseClick(int button);
    void exit();

    static void callExit();
//protected:
    static std::vector<Script> scripts;
};