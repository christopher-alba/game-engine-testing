#include <SDL2/SDL.h>
#include "graphics.h"
#include "constants.h"
/* Graphics class
*  
*/

Graphics::Graphics()
{
    SDL_CreateWindowAndRenderer(SCREENSIZE_X, SCREENSIZE_Y, SDL_WINDOW_RESIZABLE, &this->_window, &this->_renderer);
    SDL_SetWindowTitle(this->_window, "Game Engine Test");
}

Graphics::~Graphics()
{
    SDL_DestroyWindow(this->_window);
}

void Graphics::flip() {
	SDL_RenderPresent(this->_renderer);
}

void Graphics::clear() {
	SDL_RenderClear(this->_renderer);
}