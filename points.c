#include <stdio.h>
#include "cs50.c"

int main(void)
{
    const int MINE = 2;
    int points = get_int("How many points did you lose? ");
    if (points < MINE)
    {
        printf("You lost fewer points than me.");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.");
    }
    else
    {
        printf("You lost the same points as me.");
    }
}
