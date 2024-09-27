#include <stdio.h>

int main() {
    int base, exposant, i;
    long long result = 1;  //  n decalri akbar type bach n handle akbar num


    printf("Entrez la base : ");
    scanf("%d", &base);
    
    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

 
    for (i = 1; i <= exposant; i++) {
        result *= base;  // Multipl result f  base f kola iteration
    }

    printf("%d^%d = %lld\n", base, exposant, result);
    
    return 0;
}
