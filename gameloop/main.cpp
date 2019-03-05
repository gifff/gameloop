//
//  main.cpp
//  gameloop
//
//  Created by Gifary Dhimas Fadhillah on 31/01/19.
//  Copyright © 2019 Gifary Dhimas Fadhillah. All rights reserved.
//

#include "Demo.h"

Demo::Demo()
{
}


Demo::~Demo()
{
}

void Demo::Init()
{
}

void Demo::Update(float deltaTime)
{
}

void Demo::Render()
{
    //Clear the color and depth buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //The color buffer is only one of several buffers that hold information about a pixel
    //DEPTH_BUFFER = depth buffer holds depth information for each pixel
    
    //Set the background color
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f); //(R,G,B,A) //A = 1 = opaque
    
    // drawing test
    glPointSize(2.5f);
    glLineWidth(0.5f);
    glBegin(GL_TRIANGLE_STRIP);

    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    
    Engine::Game *game = new Demo();
    game->Start("Game Loop", 800, 600, false, WindowFlag::WINDOWED, 0, 1);
    
    return 0;
}

