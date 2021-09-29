//
// Created by theor on 29/09/2021.
//
#include <stdio.h>

//Renvoie le maximum entre 2 entiers
//IN entiers a et b
//OUT entier max
int getMax( int a, int b) {
    int max = ( a >= b ) ? a : b;
    return max;
}


//Demande à l'utilisateur de saisir un entier et l'enregistre en mémoire
//IN void
//OUT entier a
int saisirEntier() {
    int a = 0;
    printf("saisissez un entier\n");
    scanf("%d", &a);
    return a;
}


//Calcul l'aire d'un rectangle
//IN entiers a et b ( longueur et largeur )
//OUT entier ( aire du rectangle )
int calculAire( int a, int b) {
    return a*b;
}


//Calcul le périmètre d'un rectangle
//IN entier a et b ( longueur et largeur )
//OUT entier ( périmètre du rectangle )
int calculPerimetre( int a, int b) {
    return (a+b)*2;
}


//Test si l'entier a est un multiple de l'entier b
//IN entiers a et b
//OUT renvoie 1 ou 0 ( vrai ou faux )
int fonctionex4( int a, int b) {
    int result = ( a % b == 0 ) ? 1 : 0;
    return result;
}


//Calcul la moyenne de 3 entiers a, b et c si la condition est vérifiée
//IN entiers a, b et c
//OUT float ( moyenne ou -1 )
float moyenne3( int a, int b, int c) {
    if ((a >= 0 && a <= 20) && (b >= 0 && b <= 20) && (c >= 0 && c <= 20)) {
        return ((float) a + (float) b + (float) c) / (float) 3;
    } else {
        return -1;
    }
}


//Demande de saisir le nombre d'élèves par classe. Renvoie le nombre d'élèves total.
//IN entier a
//OUT entier ( nombre d'élèves )
int nombreEleves( int a) {
    int i = 0;
    int s = 0;
    int b = 0;
    for (i = 1; i <= a; i++) {
        printf("saisissez le nombre d'eleves de la classe %d\n", i);
        scanf("%d", &b);
        s = s + b;
    }
    return s;
}


//Calcul le nombre d'étages réalisables
//IN entier a
//OUT entier ( nombre d'étages )
int etages( int a) {
    int i = 1;
    int e = 0;
    while (i * i <= a) {
        a = a - i * i;
        i = i + 1;
        e = e + 1;
    }
    return e;
}


//Calcul la moyenne des plusieurs entiers
//IN entiers a et b
//OUT float ( moyenne )
float moyenneN( int a, int b) {
    int s = a;
    b = b + 1;
    while ( a >= 0 ) {
        scanf("%d", &a);
        if (a >= 0) {
            s = s + a;
            b = b + 1;
        }
    }
        return (float)s/(float)b;
}
