#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

int main()
{
    unsigned int seconds=10;
    for(int i=1;i<121;i++)
    {
        printf("#");
        Sleep(5);
    }

    for(int j=1;j<4;j++)
    {
        printf("#");
         for(int i=1;i<119;i++)
        {
            printf(" ");
            Sleep(0.1);
        }
        printf("#");
    }
    printf("#");
    for(int i=0;i<45;i++)
    {
        printf(" ");
    }

    printf("WITAJ W NASZYM PROGRAMIE");

    for(int i=0;i<49;i++)
    {
        printf(" ");
    }
    printf("#");

     for(int j=1;j<4;j++)
    {
        printf("#");
         for(int i=1;i<119;i++)
        {
            printf(" ");
            Sleep(0.1);
        }
        printf("#");
    }
    printf("#");
    for(int i=0;i<40;i++)
    {
        printf(" ");
    }

    printf("WYBIERZ OPCJE KTORA CIE INTERESUJE: ");

    for(int i=0;i<42;i++)
    {
        printf(" ");
    }
    printf("#");

     for(int j=1;j<4;j++)
    {
        printf("#");
         for(int i=1;i<119;i++)
        {
            printf(" ");
            Sleep(0.1);
        }
        printf("#");
    }
    printf("#");
    for(int i=0;i<43;i++)
    {
        printf(" ");
    }

    printf("1 - Haslo z pierwszych liter");

    for(int i=0;i<47;i++)
    {
        printf(" ");
    }
    printf("#");
    printf("#");

    for(int i=0;i<118;i++)
    {
        printf(" ");
    }
    printf("#");
    printf("#");
    for(int i=0;i<43;i++)
    {
        printf(" ");
    }

    printf("2 - Haslo z ostatnich liter");

    for(int i=0;i<48;i++)
    {
        printf(" ");
    }
    printf("#");
    printf("#");

    for(int i=0;i<118;i++)
    {
        printf(" ");
    }
    printf("#");
    printf("#");
    for(int i=0;i<43;i++)
    {
        printf(" ");
    }

    printf("3 - Haslo z pierwszych liter (posortowane slowa)");

    for(int i=0;i<27;i++)
    {
        printf(" ");
    }
    printf("#");
     printf("#");

    for(int i=0;i<118;i++)
    {
        printf(" ");
    }
    printf("#");
     printf("#");
    for(int i=0;i<43;i++)
    {
        printf(" ");
    }

    printf("4 - Haslo z ostatnich liter (posortowane slowa)");

    for(int i=0;i<28;i++)
    {
        printf(" ");
    }
    printf("#");

    for(int j=1;j<4;j++)
    {
        printf("#");
         for(int i=1;i<119;i++)
        {
            printf(" ");
            Sleep(0.1);
        }
        printf("#");
    }
    for(int i=1;i<121;i++)
    {
        printf("#");
        Sleep(5);
    }
    printf("\n");
    printf("Twoj wybor: ");
    int wybor;
    scanf("%d",&wybor);
     return 0;
}
