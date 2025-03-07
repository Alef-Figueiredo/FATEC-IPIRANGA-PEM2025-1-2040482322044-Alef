#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Candidato{
    char nome[100];
    float pe[4];
    float ac[5];
    float pp[10];
    float eb[3];
    float nf;
};
int main(){
 struct Candidato candidato[50];
 int i, j; 

 for(i = 0; i < 50; i++){
    printf("Digite o nome do candidato %d: ", i + 1);
    fgets(candidato[i].nome, sizeof(candidato[i].nome), stdin);

    printf("Digite as 4 notas da Prova Escrita (PE) para o candidato %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            do {
            scanf("%f", &candidato[i].pe[j]);
            if (candidato[i].pe[j] < 0.0 || candidato[i].pe[j] > 10.0) {
                printf("Nota inválida! A nota deve ser entre 0,0 e 10,0.\n");
            }
        } while (candidato[i].pe[j] < 0.0 || candidato[i].pe[j] > 10.0);
        }

    printf("Digite as 5 notas da Análise Curricular (AC) para o candidato %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            do {
            scanf("%f", &candidato[i].ac[j]);
            if (candidato[i].ac[j] < 0.0 || candidato[i].ac[j] > 10.0) {
                printf("Nota inválida! A nota deve ser entre 0,0 e 10,0.\n");
            }
        } while (candidato[i].ac[j] < 0.0 || candidato[i].ac[j] > 10.0);  
        }

        printf("Digite as 10 notas da Prova Prática (PP) para o candidato %d: ", i + 1);
        for (j = 0; j < 10; j++) {
            do {
            scanf("%f", &candidato[i].pp[j]);
            if (candidato[i].pp[j] < 0.0 || candidato[i].pp[j] > 10.0) {
                printf("Nota inválida! A nota deve ser entre 0,0 e 10,0.\n");
            }
        } while (candidato[i].pp[j] < 0.0 || candidato[i].pp[j] > 10.0);  
        }

        printf("Digite as 3 notas da Entrevista em Banca (EB) para o candidato %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            do {
            scanf("%f", &candidato[i].eb[j]);
            if (candidato[i].eb[j] < 0.0 || candidato[i].eb[j] > 10.0) {
                printf("Nota inválida! A nota deve ser entre 0,0 e 10,0.\n");
            }
        } while (candidato[i].eb[j] < 0.0 || candidato[i].eb[j] > 10.0);  
        }

        getchar();
    }
    float soma_pe = 0, soma_ac = 0, soma_pp = 0, soma_eb = 0;
   
    for (int j = 0; j < 4; j++) soma_pe += candidato[i].pe[j];
    for (int j = 0; j < 5; j++) soma_ac += candidato[i].ac[j];
    for (int j = 0; j < 10; j++) soma_pp += candidato[i].pp[j];
    for (int j = 0; j < 3; j++) soma_eb += candidato[i].eb[j];
     
     candidato[i].nf = ((soma_pe / 4) * 0.3) + ((soma_ac / 5) * 0.1) + ((soma_pp / 10) * 0.4) + ((soma_eb / 3) * 0.2);

    for(i = 0; i < 50; i++) {
        printf("Candidato: %sNota Final: %.2f\n", candidato[i].nome, candidato[i].nf);
    }
    return 0;
 };
 