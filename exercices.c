//
// Created by theor on 29/09/2021.
//

#include <stdio.h>
#include "exercices.h"

#include "fonctions.h"

#define MACRO 10

int exercice1() {
    int a = 0;
    int b = 0;
    printf("saisissez deux entiers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("le maximum entre %d et %d vaut %d\n", a, b, getMax(a,b));
}


int exercice3() {
    int a = saisirEntier();
    int b = saisirEntier();
    printf("le perimetre du rectangle correspondant vaut %d et son aire vaut %d\n", calculPerimetre(a,b), calculAire(a,b));
}


int exercice4() {
    int a = saisirEntier();
    if ( fonctionex4(a,3) == 1 ) {
        printf("%d est un multiple de 3\n", a);
    }
    else {
        printf("%d n'est pas un multiple de 3\n", a);
    }
    if ( a >= MACRO ) {
        printf("%d est superieur ( ou egal ) a %d\n", a, MACRO);
    }
    else {
        printf("%d est inferieur a %d\n", a, MACRO);
    }
}


int exercice5() {
    int a = 0;
    int b = 0;
    int c = 0;
    printf("saisissez 3 notes ( entieres ) sur 20\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("la moyenne des notes vaut %.2f\n", moyenne3(a,b,c));
}


int exercice7() {
    int a = 0;
    printf("saisissez le nombre de classes\n");
    scanf("%d", &a);
    printf("le nombre total d'eleves dans l'ecole est de %d\n", nombreEleves(a));
}


int exercice8() {
    int a = saisirEntier();
    while (!(a % 2 == 0 && a % 7 == 0)) {
        printf("votre entier n'est ni un multiple de 2 ni un multiple de 7. saisissez un nouvel entier.\n");
        scanf("%d", &a);
    }
}


int exercice9() {
    int a = 0;
    printf("combien de pierres sont disponibles ?\n");
    scanf("%d", &a);
    if (a == 0) {
        printf("vous pouvez construire 0 etage car vous n'avez aucune pierre :(\n");
    }
    else {
        printf("vous pouvez construire %d etages\n", etages(a));
    }
}


int exercice10() {
    int a = 0;
    int b = 0;
    printf("saisissez des nombres positifs\n");
    scanf("%d", &a);
    printf("la moyenne de ces nombres vaut %.2f\n", moyenneN( a, b));
}