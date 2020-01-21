#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
void opcja1()
{
    char tab[1000];
    gets(tab);

        printf("%c",tab[0]);
        for(int a=0; tab[a]!='EOF';a++)
        {
            if(tab[a]==' ')
            {
            printf("%c",tab[a+1]);
            }

            if(tab[a]=='\n')
            {
                gets(tab);
                printf("%c",tab[0]);
                    for(int b=0; tab[b]!='EOF';b++)
                    {
                        if(tab[b]==' ')
                        {
                        printf("%c",tab[b+1]);

                        }

                    }
            }
        }


}

void menu()
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
}
void wybieranie_opcji(int wybor)
{
    system("cls");
    if(wybor==1)
    {
        printf("Wpisz tekst: \n");
        opcja1();
    }
    else if(wybor==2)
    {
        printf("Wpisz tekst: \n");
    }
    else if(wybor==3)
    {
        printf("Wpisz tekst: \n");
    }
    else if(wybor==4)
    {
        printf("Wpisz tekst: \n");
    }
    else
    {
        printf("Podales nieprawidlowa wartosc, sprobuj jeszcze raz (prawidlowe wartosci to: 1,2,3,4) \n ");
    }
}
int main()
{

    menu();
    int wybor;
    scanf("%d",&wybor);
    wybieranie_opcji(wybor);





     return 0;
}
