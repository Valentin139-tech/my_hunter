/*
** EPITECH PROJECT, 2020
** sprite_sheet
** File description:
** sprite_sheet
*/

#include "my.h"
#include "struct.h"

int sprite_sheet(display_t *display)
{
    display->time = sfClock_getElapsedTime(display->clock);
    display->sec = display->time.microseconds /1000000.0;
    if (display->sec > 0.5) {
        display->rect.left += 110;
        if (display->rect.left == 330)
            display->rect.left = 0;
        sfClock_restart(display->clock);
    }
}
