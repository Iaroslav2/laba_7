#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "My_lab.h"
int main(){
    int Q;
    long p;
    while (printf("numeral system - ") && scanf("%i", &Q) != 1) {
        char c;
        while (scanf("%c", &c) == 1 && c != '\n');
        printf("CHISLOO\n");
    }
    if (Q < 2 || Q >36 ) {
        printf("ERROR");
        return 0;
    }
    while (printf("Number: ") && scanf("%i", &p) != 1) {
        char c;
        while (scanf("%c", &c) == 1 && c != '\n');
        printf("CHISLOO\n");
    }
    itoab(p, Q);

    return 0;
}