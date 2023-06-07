#include "cs50.h"
#include <stdio.h>
#include <string.h>


/// @brief 
typedef struct 
{
    string name;
    string number;
}person;


int main (void)
{
   person people[2];

   people[0].name = "Rommy";
   people[0].name = "504-333-1950";
   people[1].name = "Seth";
   people[1].name = "504-710-1150";

    for (int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, "Seth")==0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}