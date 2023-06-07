#include <stdio.h>
#include "cs50.h"
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[1]))
        {
            printf("%c", toupper(s[i]));
        }
    }
    printf("\n");
}


