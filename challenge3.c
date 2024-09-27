#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Entrez un entier positif: ");
    scanf("%d", &n);

   
    for (i = 1; i <= n; i++) {
        sum += i;  
    }
    
    printf("La somme des %d premiers nombres naturels est: %d\n", n, sum);
    
    
    return 0;
}
