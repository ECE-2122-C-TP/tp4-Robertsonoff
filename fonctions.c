//
// Created by theor on 29/09/2021.
//
#include <stdio.h>

int getMax( int a, int b) {
    int max = ( a >= b ) ? a : b;
    return max;
}


int saisirEntier() {
    int a = 0;
    printf("saisissez un entier\n");
    scanf("%d", &a);
    return a;
}


int calculAire( int a, int b) {
    return a*b;
}


int calculPerimetre( int a, int b) {
    return (a+b)*2;
}


int fonctionex4( int a, int b) {
    int result = ( a % b == 0 ) ? 1 : 0;
    return result;
}


float moyenne3( int a, int b, int c) {
    if ((a >= 0 && a <= 20) && (b >= 0 && b <= 20) && (c >= 0 && c <= 20)) {
        return ((float) a + (float) b + (float) c) / (float) 3;
    } else {
        return -1;
    }
}


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