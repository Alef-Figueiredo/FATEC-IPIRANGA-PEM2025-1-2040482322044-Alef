/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Vetor Multidimensional           *
* Data - 06/03/25                                        * 
* Autor: alef vicente de figueiredo                      *
*--------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

#define RUAS 3
#define GONDOLAS 10

typedef struct {
    char codigo[10];
    int quantidade;
} Produto;

Produto estoque[RUAS][GONDOLAS];

void estocarProduto(int rua, int gondola, char codigo[]) {
    if (strcmp(estoque[rua][gondola].codigo, "") == 0) {
        strcpy(estoque[rua][gondola].codigo, codigo);
        estoque[rua][gondola].quantidade = 1;
        printf("Produto %s armazenado na Rua %c%d.\n", codigo, 'A' + rua, gondola + 1);
    } else if (strcmp(estoque[rua][gondola].codigo, codigo) == 0) {
        estoque[rua][gondola].quantidade++;
        printf("Mais um lote de %s armazenado na Rua %c%d.\n", codigo, 'A' + rua, gondola + 1);
    } else {
        printf("Erro! A gôndola %c%d já contém outro produto (%s).\n", 'A' + rua, gondola + 1, estoque[rua][gondola].codigo);
    }
}

void retirarProduto(int rua, int gondola, char codigo[]) {
    if (strcmp(estoque[rua][gondola].codigo, codigo) == 0) {
        if (estoque[rua][gondola].quantidade > 0) {
            estoque[rua][gondola].quantidade--;
            printf("Produto %s retirado da Rua %c%d.\n", codigo, 'A' + rua, gondola + 1);
            if (estoque[rua][gondola].quantidade == 0) {
                strcpy(estoque[rua][gondola].codigo, "");
            }
        } else {
            printf("A gôndola %c%d está vazia.\n", 'A' + rua, gondola + 1);
        }
    } else {
        printf("Erro! Produto %s não encontrado na gôndola %c%d.\n", codigo, 'A' + rua, gondola + 1);
    }
}

void exibirEstoque() {
    printf("\nEstado atual do estoque:\n");
    for (int i = 0; i < RUAS; i++) {
        for (int j = 0; j < GONDOLAS; j++) {
            if (strcmp(estoque[i][j].codigo, "") != 0) {
                printf("Rua %c%d: %s (Qtd: %d)\n", 'A' + i, j + 1, estoque[i][j].codigo, estoque[i][j].quantidade);
            }
        }
    }
}

int main() {
    char codigo[10];
    int opcao, rua, gondola;
    
    for (int i = 0; i < RUAS; i++) {
        for (int j = 0; j < GONDOLAS; j++) {
            strcpy(estoque[i][j].codigo, "");
            estoque[i][j].quantidade = 0;
        }
    }
    
    do {
        printf("\nMENU:\n");
        printf("1 - Estocar produto\n");
        printf("2 - Retirar produto\n");
        printf("3 - Exibir estoque\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Digite o código do produto: ");
                scanf("%s", codigo);
                printf("Digite a rua (A-C): ");
                char r;
                scanf(" %c", &r);
                rua = r - 'A';
                printf("Digite a gôndola (1-10): ");
                scanf("%d", &gondola);
                estocarProduto(rua, gondola - 1, codigo);
                break;
            case 2:
                printf("Digite o código do produto: ");
                scanf("%s", codigo);
                printf("Digite a rua (A-C): ");
                scanf(" %c", &r);
                rua = r - 'A';
                printf("Digite a gôndola (1-10): ");
                scanf("%d", &gondola);
                retirarProduto(rua, gondola - 1, codigo);
                break;
            case 3:
                exibirEstoque();
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);
    
    return 0;
}
