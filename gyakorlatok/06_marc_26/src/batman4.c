#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        puts("Hello World!");
    }
    else if (argc == 2)
    {
        string nev = argv[1];
        if ((strcmp(nev, "Batman") == 0) || (strcmp(nev, "Robin") == 0))
        {
            puts("Denevérveszély!");
        }
        else
        {
            printf("Hello %s!\n", nev);
        }
    }
    else
    {
        printf("Hiba! Maximum egy paraméter adható meg!\n");
        exit(1);
    }

    return 0;
}
