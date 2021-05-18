#include "My_lab.h"
#include <stdio.h>
void reverse(char s[]) {
    int c, i, j;
    int count;
    for (count = 0; s[count] != '\0'; ++count) {
        ;
    }
    for (i = 0, j = count - 1; i < j; ++i, --j) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
void itoab(long n, int Q) {
  const char* K = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXY";
  char s[100];
  int i = 0;
  int sign = n;
    unsigned long t = (unsigned long)n;
    do {
        s[i++] = K[t % Q];
    } while ((t /= Q) > 0);
    if (sign < 0) {
        while (i<32) {
            s[i++] = K[Q-1];
        }
    }
    else {
        while (i < 32) {
            s[i++] = '0';
        }
    }
    s[i] = '\0';
        reverse(s);
        printf("%s", s);
}
