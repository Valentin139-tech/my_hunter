/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** my_hunter
*/

#include "my.h"
#include "struct.h"

int close_function(display_t *display)
{
    sfRenderWindow_destroy(display->window);
    sfMusic_destroy(display->music);
    sfMusic_destroy(display->blast);
}

int set_begin(display_t *display)
{
    sfSprite_setTexture(display->sbackg, display->tbackg, sfTrue);
    sfSprite_setTexture(display->sduck, display->tduck, sfTrue);
    sfSprite_setTexture(display->scross, display->tcross, sfTrue);
    sfMusic_play(display->music);
    sfRenderWindow_setFramerateLimit(display->window, 30);
}

int set_end(display_t *display)
{
    sfSprite_setPosition(display->sduck, display->start);
    sfSprite_setTextureRect(display->sduck, display->rect);
    sfSprite_setPosition(display->scross, display->cross);
    sfRenderWindow_clear(display->window, sfBlack);
    sfRenderWindow_drawSprite(display->window, display->sbackg, NULL);
    sfRenderWindow_drawSprite(display->window, display->sduck, NULL);
    sfRenderWindow_drawSprite(display->window, display->scross, NULL);
    sfRenderWindow_display(display->window);
}

int my_hunter(display_t *display)
{
    parameter(display);
    set_begin(display);

    while (sfRenderWindow_isOpen(display->window)) {
        sprite_sheet(display);
        while (sfRenderWindow_pollEvent(display->window, &display->event)) {
            if (display->event.type == sfEvtClosed)
                sfRenderWindow_close(display->window);
            shoot(display);
        }
        set_end(display);
    }
    close_function(display);
    return (0);
}

