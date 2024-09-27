#include <stdio.h>

int main() {
    int n, i, imp = 1;

    printf("Entrez un entier positif: ");
    scanf("%d", &n);

    printf("Les %d premiers nombres impairs sont :\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", imp);
        imp += 2;  // Increment  b 2 bach ntl3 next odd num
    }

    printf("\n");


    return 0;
}
