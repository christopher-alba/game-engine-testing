#include <SDL2/SDL.h>
#include "../headers/game.h"
#include "../headers/graphics.h"

Game::Game()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    this->gameLoop();
}

Game::~Game()
{
}

void Game::gameLoop()
{
    Graphics graphics;
    SDL_Event event;

    while (true)
    {
        if (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                return;
            }
        }
        graphics.flip();
        graphics.clear();
    }
}

void Game::draw(Graphics &graphics)
{
}

void Game::update(float elapsedTime)
{
}
