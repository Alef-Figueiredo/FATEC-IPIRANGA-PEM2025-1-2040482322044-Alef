
/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: insertion                        *
* Data - 16/05/25                                        * 
* Autor: alef vicente de figueiredo                      *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {
    int n;
    printf("Quantos números vc vai ordenar? ");
    scanf("%d", &n);
    
    int vet[100];

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (int i = 1; i < n; i++) {
        int chave = vet[i];
        int j = i - 1;
        while (j >= 0 && vet[j] > chave) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = chave;
    }

    printf("\nVetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
