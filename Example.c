#include "Graphics.h"

bool initg(struct Graphics *g)
{

	SDL_Init(SDL_INIT_EVERYTHING);
	g->window = SDL_CreateWindow("Staby Stab", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, g->h, g->w, SDL_WINDOW_SHOWN);
	g->sldrenderer = SDL_CreateRenderer(g->window, -1, 0);
	SDL_SetRenderDrawColor(g->sldrenderer, 60, 90, 34, 1);

	if (g->window == NULL && g->sldrenderer == NULL)
	{

		return false;
	}
	else
	{
		return true;
	}


	return 1;
}