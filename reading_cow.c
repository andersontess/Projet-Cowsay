#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>


void update() 
{
    printf("\033[H\033");
}


void gotoxy(int x, int y) 
{
    printf("\033[%d;%dH", y, x);
}


void affiche_vache(char* lettre) 
{
    update();
    gotoxy(5, 5);
    printf("        \\  ^__^\n\
             \\ (00)\\_______\n\
               (__)\\       )\\/\\\n\
                %c  ||----w |\n\
                   ||     ||\n", *lettre);
    sleep(1);
    gotoxy(17, 8);
    printf(" \n");
    gotoxy(17, 7);
    printf("%c\n", *lettre);
    sleep(1);
}

void lireFichier(const char* nomFichier)
{
    FILE* fichier = fopen(nomFichier, "r");
    if (fichier == NULL) {
        printf("Impossible d'ouvrir le fichier\n");
        return;
    }

    char caractere;
    char variable[200]; // Modifier la taille selon vos besoins
    int index = 0;

    while ((caractere = fgetc(fichier)) != EOF) {
        variable[index++] = caractere;
        system("clear");
        printf(" -");
        for (int i = 0; i < index; i++) {
            printf("-");
        }
        printf("\n");
        printf("< ");
        int longueur = strlen(variable);
        if (longueur > 0) {
           printf("%.*s", longueur - 1, variable);
        }
        printf(" >\n -");
        for (int i = 0; i < index; i++) {
            printf("-");
        }
        printf("\n");
        affiche_vache(&caractere);
        sleep(1);
    }

    variable[index] = '\0'; // Ajoute le caractère de fin de chaîne

    fclose(fichier);
}


int main ()
{
    const char* nomFichier = "fileToRead.txt";

    lireFichier(nomFichier);

    return 0;
}