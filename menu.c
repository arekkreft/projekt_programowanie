#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

 int Cmp(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

// zapisuje do pliku hasla z pierwszych liter wyrazow.

int pierwszalitera (char* words [ ], FILE* wynik, int wybor ){

    // Sortowanie 


    if (wybor==3){
        int arr_el = 0;
        while(words[arr_el]!=NULL)arr_el++;
        qsort(words,arr_el,sizeof(char*),Cmp);
    }

    int itter=0;
    char* result="";

    // Wpisywanie do pliku odpowiedniej litery slowa.

    while(words[itter]!=NULL){
        char word[256]="";
        strcat(word,words[itter]);

        printf("%c",word[0]);
        fprintf(wynik,"%c",word[0]);
        itter++;
    }
    printf("\n");
    fprintf(wynik,"%s","\n");

    return 0;
} 
// zapisuje do pliku hasla z ostatnich liter wyrazow.

int ostatnialitera ( char* words [ ], FILE* wynik, int wybor ){

    if ( wybor == 4 ) {
        int arr_el = 0;
        while ( words [ arr_el ] != NULL ) arr_el++;
        qsort ( words, arr_el , sizeof ( char* ), Cmp);
    }

    int itter = 0;
    char* result = "";


    while ( words [ itter ] != NULL ){
        char word [ 256 ] = "";
        strcat ( word, words [ itter ] );


        printf ( "%c" , word [ strlen ( word ) - 1 ] );
        fprintf (wynik, "%c" , word [ strlen ( word ) - 1 ] );
        itter++;
    }
    printf ("\n");
    fprintf (wynik,"%s","\n");

    return 0;
}

int main ( ) {

    FILE* przyklad;
    FILE* wynik;

    // wybór plików do testów
    przyklad = fopen( "plik.txt", "r" );
    wynik = fopen ( "wynik.txt", "a" );

    char buffer [ 256 ];
//#############MENU###############
    int wybor;
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


    scanf ( "%d", &wybor );
    if(wybor>4||wybor<1)
    {
        printf("Podales nieprawidlowa wartosc: %d sprobuj jeszcze raz(prawidlowe wartosci to: 1,2,3,4)",wybor);
        return 0;
    }


    // odczytywanie linii.

    while ( fgets ( buffer, sizeof ( buffer ), przyklad ) ) {



        char* line_1 = buffer;
        char* line_2 = strtok( line_1, "\n" );
        char* words [50];

        char* line_w = strtok( line_2, " " );

        int iter = 0;

        while ( line_w != NULL ) {
            words [ iter ] = line_w;
            line_w = strtok( NULL, " " );
            iter++;
        }
        words [ iter ] = line_w;
        line_w = strtok( NULL, " " );



        if ( wybor % 2 == 0 ) ostatnialitera ( words, wynik, wybor );
        else pierwszalitera ( words, wynik, wybor );



    }
    printf("\n WYNIK ZOSTAl ZAPISANY DO PLIKU WYNIKI.TXT");
    fclose ( przyklad );
    fclose ( wynik );
    return 0;
}
