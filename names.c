#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
    string names[] = {"Bill", "Charlie", "Percy", "Fred", "George", "Ron", "Ginny"};

    for(int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Harry") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}