/*
** EPITECH PROJECT, 2020
** struct
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct display
{
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfEvent event;
    sfMusic *music;
    sfMusic *blast;
    sfTexture *tbackg;
    sfTexture *tduck;
    sfTexture *tcross;
    sfSprite *sbackg;
    sfSprite *sduck;
    sfSprite *scross;
    sfTime time;
    sfVector2f start;
    sfVector2f end;
    sfVector2f cross;
    sfClock *clock;
    sfIntRect rect;
    float sec;

} display_t;
#endif
