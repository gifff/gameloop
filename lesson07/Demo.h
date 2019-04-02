#ifndef DEMO_H
#define DEMO_H


//#include <SOIL/SOIL.h>
#include "stb_image.hpp"

#include <SDL2_mixer/SDL_mixer.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Game.h"

using namespace glm;

class Demo :
	public Engine::Game
{
public:
	Demo();
	~Demo();
	virtual void Init();
	virtual void Update(float deltaTime);
	virtual void Render();
	void InitAudio();
	void AddInputs();
	float frame_width = 0, frame_height = 0;
private:
	Mix_Chunk *sound = NULL;
	Mix_Music *music = NULL;
	int sfx_channel = -1;
	float xpos = 0, ypos = 0;
	GLuint VBO, VAO, EBO, texture, program;
	void BuildInfoSprite();
	void DrawInfoSprite();
};
#endif

