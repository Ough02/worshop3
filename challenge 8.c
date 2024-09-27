#include <stdio.h>

int main() {
    int n, i, even = 2;

    printf("Entrez un entier positif: ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs sont :\n", n);

    // Loopi to first even o zed b 2 f loop
    for (i = 1; i <= n; i++) {
        printf("%d ", even);
        even += 2;  
    }

    printf("\n");
    return 0;
}