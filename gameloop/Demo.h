//
//  Demo.h
//  gameloop
//
//  Created by Gifary Dhimas Fadhillah on 31/01/19.
//  Copyright © 2019 Gifary Dhimas Fadhillah. All rights reserved.
//

#pragma once
#include "Game.h"

class Demo : public Engine::Game   //class demo adalah turunan class game
{
public:
    Demo();
    ~Demo();
    virtual void Init();
    virtual void Update(float deltaTime);
    virtual void Render();
};

