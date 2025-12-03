#include <stdio.h>

int main() {
    int compteur = 5;   // valeur de test : à modifier (doit être < 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être < 10\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {

            // Exemple donné : la ligne 1 → *, ligne 2 → * *, ligne 3 → * # *, etc.
            if (j % 2 == 0 && i != compteur) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
