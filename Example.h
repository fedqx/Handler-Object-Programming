#include <SDL.h>
#include <SDL_image.h>
#include <stdbool.h>
#include "Entity.h"
struct Graphics
{
	SDL_Renderer* sldrenderer;
	SDL_Window *window;
	int h;
	int w;
	
};
bool initg(struct Graphics *g,);
bool render(struct Entity *e, struct Graphics *g);
bool loadtexture(struct Entity *e, struct Graphics *g);