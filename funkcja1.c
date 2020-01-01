#include <stdlib.h>
#include <stdio.h>

int main()
{
char tab[1000];



    printf("Podaj tekst: ");

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
return 0;
}
