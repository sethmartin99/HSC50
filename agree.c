#include <stdio.h>
#include "cs50.c"

int main(void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Please enter \'y\' or \'n\'");
    }
}