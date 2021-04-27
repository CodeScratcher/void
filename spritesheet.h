#pragma once

#include <SDL2/SDL.h>

class Spritesheet
{
public:
    Spritesheet(char const *path, int row, int column);
    ~Spritesheet();
    Spritesheet();
    void select_sprite(int x, int y);
    void draw_selected_sprite(SDL_Surface *window_surface, SDL_Rect *position);

    SDL_Surface* get_selected_sprite();
private:
    SDL_Rect     m_clip;
    SDL_Surface *m_spritesheet_image;
};
