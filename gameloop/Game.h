//
//  Game.h
//  gameloop
//
//  Created by Gifary Dhimas Fadhillah on 31/01/19.
//  Copyright © 2019 Gifary Dhimas Fadhillah. All rights reserved.
//

#ifndef GAME_H
#define GAME_H


//import atau include librari yg dbutuhkan
//#include <SDL.h>
#include <SDL2/SDL.h>
#include <OpenGL/gl.h>
#include <OpenGL/gl3.h>
//#include <GL/glew.h>
#include <string>
#include <iostream>

using namespace std;

enum class State { RUNNING, EXIT };  //mendefinisikan enum state untuk game engine
enum class WindowFlag { WINDOWED, FULLSCREEN, EXCLUSIVE_FULLSCREEN, BORDERLESS };  //mendefinisikan enum windows flags untuk game engine

namespace Engine {
    class Game  //class ini abstrak krn punya pure virtual methode
    {
    public:
        Game();  //konstruktor
        ~Game(); ////Desruktor
        void Start(string title, unsigned int width, unsigned int height, bool vsync, WindowFlag windowFlag, unsigned int targetFrameRate, float timeScale);
    protected:  //methode yg =0 atau pureVirtual harus dideklarasikan di kelas turunan
        virtual void Init() = 0;
        virtual void Update(float deltaTime) = 0;
        virtual void Render() = 0;
    private: //methode2 dasar untuk game engine
        unsigned int screenWidth, screenHeight, lastFrame = 0, last = 0, _fps = 0, fps = 0;
        float targetFrameTime = 0, timeScale;
        State state;
        float GetDeltaTime();
        void GetFPS();
        void PollInput();
        void Err(string errorString);
        void LimitFPS();
        void PrintFPS();
    };
}

#endif /* Game_h */
