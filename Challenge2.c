#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;  // akbar data type bach n hundlle values lkbaar

    printf("Entrez un entier positif: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur ! La factorielle n existe pas pour les nombres negatifs.\n");
    } else {
        
        for (i = 1; i <= n; i++) {
            factorial *= i;  // Multiply factorial by the current value of i
        }
        printf("%d! = %llu\n", n, factorial);
    }
    
    
    return 0;
}