#include <stdio.h>

int main() {

    int a = 16;
    int b = 3;

    /* ----- Opérations arithmétiques ----- */
    printf("=== Opérateurs arithmétiques ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);     // division entière
    printf("a %% b = %d\n\n", a % b);  // %% pour afficher %

    /* ----- Opérateurs logiques / de comparaison ----- */
    printf("=== Opérateurs logiques / Comparaisons ===\n");
    printf("a == b : %d\n", a == b);   // 0 = faux, 1 = vrai
    printf("a > b  : %d\n", a > b);

    return 0;
}


