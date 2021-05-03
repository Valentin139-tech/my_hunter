/*
** EPITECH PROJECT, 2020
** shoot
** File description:
** shoot
*/

#include "my.h"
#include "struct.h"

int shoot(display_t *display)
{
    if (sfMouse_isButtonPressed(sfMouseLeft))
        sfMusic_play(display->blast);
}
