#include <stdio.h>

int main() {

    /* ----- Types entiers ----- */
    char c = 'A';
    signed char sc = -50;
    unsigned char uc = 200;

    short s = -32000;
    unsigned short us = 65000;

    int i = -2000000000;
    unsigned int ui = 4000000000U;

    long int li = -900000000000000000L;
    unsigned long int uli = 18000000000000000000UL;

    long long int lli = -9000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    /* ----- Types flottants ----- */
    float f = 3.14f;
    double d = 2.718281828459;
    long double ld = 1.618033988749894L;

    /* ----- Affichage ----- */
    printf("=== Types entiers ===\n");
    printf("char c = %c\n", c);
    printf("signed char sc = %d\n", sc);
    printf("unsigned char uc = %u\n\n", uc);

    printf("short s = %d\n", s);
    printf("unsigned short us = %u\n\n", us);

    printf("int i = %d\n", i);
    printf("unsigned int ui = %u\n\n", ui);

    printf("long int li = %ld\n", li);
    printf("unsigned long int uli = %lu\n\n", uli);

    printf("long long int lli = %lld\n", lli);
    printf("unsigned long long int ulli = %llu\n\n", ulli);

    printf("=== Types flottants ===\n");
    printf("float f = %f\n", f);
    printf("double d = %lf\n", d);
    printf("long double ld = %Lf\n", ld);

    return 0;
}
