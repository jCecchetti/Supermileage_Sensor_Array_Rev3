// Supermileage_Sensor_Array_Rev3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <SDL.h>
#include "DataLogger.h"

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[])
{

	DataLogger logger;

	logger.logData(100, 324, 33, 7000);
	logger.logData(100, 324, 33, 7000);

	return 0;
	/*if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		std::cout << "SDL init failed" << SDL_GetError() << std::endl;
	}

	SDL_Window *window = SDL_CreateWindow("Hello SDL World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    
	if (NULL == window)
	{
		std::cout << "could not create window: " << SDL_GetError() << std::endl;
		return EXIT_FAILURE;
	}

	SDL_Event windowEvent;
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_Surface * image = SDL_LoadBMP("tachometer.bmp");
	SDL_SetColorKey(image, 1, SDL_MapRGB(image->format, 0xFF, 0xFF, 0xFF));
	SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);

	while (true)
	{
		if (SDL_PollEvent(&windowEvent))
		{
			if (SDL_QUIT == windowEvent.type)
			{
				break;
			}
		}
		SDL_Rect dstrect = { 5, 5, 300, 300 };
		SDL_RenderCopy(renderer, texture, NULL, &dstrect);
		SDL_RenderPresent(renderer);
	}


	SDL_DestroyTexture(texture);
	SDL_FreeSurface(image);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return EXIT_SUCCESS;*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
