/*
** EPITECH PROJECT, 2020
** parameter
** File description:
** parameter
*/

#include "my.h"
#include "struct.h"

void parameter(display_t *display)
{
    display->video_mode = (sfVideoMode) {1280, 769, 32};
    display->window = sfRenderWindow_create(display->video_mode, "Duke Hunt", sfDefaultStyle, NULL);
    display->tbackg = sfTexture_createFromFile("stage.png", NULL);
    display->tduck = sfTexture_createFromFile("duck.png", NULL);
    display->tcross = sfTexture_createFromFile("croix.png", NULL);
    display->sbackg = sfSprite_create();
    display->sduck = sfSprite_create();
    display->scross = sfSprite_create();
    display->music = sfMusic_createFromFile("Strike the Earth.ogg");
    display->blast = sfMusic_createFromFile("Duck Hunt Blast.ogg");
    display->event;
    display->time;
    display->start = (sfVector2f) {0, 420};
    display->end = (sfVector2f) {1280, 420};
    display->cross = (sfVector2f) {1180, 0};
    display->clock = sfClock_create();
    display->rect = (sfIntRect) {0, 0, 110, 110};
    display->sec = 0.0;
}
