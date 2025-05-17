/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: bubble                           *
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

    int trocou = 1;
    while (trocou) {
        trocou = 0;
        for (int i = 0; i < n - 1; i++) {
            if (vet[i] > vet[i + 1]) {
                int tmp = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = tmp;
                trocou = 1;
            }
        }
    }

    printf("\nVetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
