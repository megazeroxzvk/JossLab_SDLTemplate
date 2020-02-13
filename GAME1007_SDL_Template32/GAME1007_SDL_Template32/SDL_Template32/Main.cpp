#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

// Main function.

//created two pointers pWindow and gRenderer with null
SDL_Window* g_pWindow = nullptr;				//your pointer for window
SDL_Renderer* g_pRenderer = nullptr;			//graphic renderer for this 
SDL_Texture* g_pSriteText;

int main(int argc, char* args[]) // Main MUST have these parameters for SDL.
{
	int flags = SDL_INIT_EVERYTHING; //initialize 'everything' flags

	if (SDL_Init(flags) == 0) //sdl is initialized correctly - the 'flags' has been initialized correcty?, then put in SDL_Window pointer
	{
		//put create window with title, centered in x and y with 800x600 resolution, SDL_WINDOW_SHOWN
		g_pWindow = SDL_CreateWindow("megazeroxzvk's SDL era started", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,SDL_WINDOW_SHOWN);
		
		//if window pointer is not null
		if (g_pWindow != nullptr) 
		{
			//put graphic renderer for ur window
			g_pRenderer = SDL_CreateRenderer(g_pWindow, -1, SDL_RENDERER_PRESENTVSYNC);

			if (g_pRenderer != nullptr) 
			{
				if (IMG_Init(IMG_INIT_PNG) == 0)
				{
					g_pSpriteText = IMG_LoadTexture(g_pRenderer, "ship.png");
				}
			}
		}
		
	}
	std::cout << "Hello World" << std::endl;

	getchar();
	return 0;
}