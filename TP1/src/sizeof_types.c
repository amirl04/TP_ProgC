#include <stdio.h>

int main() {

    printf("Tailles des types de base en C (en octets) :\n\n");

    printf("char               : %zu octets\n", sizeof(char));
    printf("signed char        : %zu octets\n", sizeof(signed char));
    printf("unsigned char      : %zu octets\n", sizeof(unsigned char));

    printf("\nshort              : %zu octets\n", sizeof(short));
    printf("unsigned short     : %zu octets\n", sizeof(unsigned short));

    printf("\nint                : %zu octets\n", sizeof(int));
    printf("unsigned int       : %zu octets\n", sizeof(unsigned int));

    printf("\nlong int           : %zu octets\n", sizeof(long int));
    printf("unsigned long int  : %zu octets\n", sizeof(unsigned long int));

    printf("\nlong long int      : %zu octets\n", sizeof(long long int));
    printf("unsigned long long : %zu octets\n", sizeof(unsigned long long));

    // Types flottants (pas de signed/unsigned)
    printf("\nfloat              : %zu octets\n", sizeof(float));
    printf("double             : %zu octets\n", sizeof(double));
    printf("long double        : %zu octets\n", sizeof(long double));

    return 0;
}
