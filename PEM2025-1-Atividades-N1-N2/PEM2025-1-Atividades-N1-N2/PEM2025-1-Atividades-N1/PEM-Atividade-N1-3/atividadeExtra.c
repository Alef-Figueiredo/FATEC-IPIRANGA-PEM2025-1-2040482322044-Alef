/*------------------------------------------------------------------------*/

/*   FATEC-Ipiranga       PEM - Programação Linear e Estruturada          */

/*                         Alef vicente de figueiredo                     */

/*             Objetivo: Soma Entre dois numeros                          */

/*             Paradigama: - programação linear com ponteiro              */

/*                                                                        */

/*                                                         Data:24/05/2024*/

/*------------------------------------------------------------------------*/
 
 
#include <stdio.h>
 
 
int main() {
    int arr[5] = {5,10,3,8,15};

    int *ponteiroValor0=&arr[0];
    int *ponteiroValor1=&arr[1];
    int *ponteiroValor2=&arr[2];
    int *ponteiroValor3=&arr[3];
    int *ponteiroValor4=&arr[4];
    printf("array: %d, %d, %d, %d, %d\n", *ponteiroValor0, *ponteiroValor1, *ponteiroValor2, *ponteiroValor3, *ponteiroValor4);
   
    int maior = arr[0];
     for (int i = 0; i < 5; i++) {
        if(arr[i] > maior){
            maior = arr[i];   
        }
    }
    printf("O maior elemento: %d\n", maior);

    int soma=*ponteiroValor0+*ponteiroValor1+*ponteiroValor2+*ponteiroValor3+*ponteiroValor4;
         printf("soma: %d\n", soma);

         for (int b = 0; b < 5; b++) {
            arr[b] = arr[b] * 2;
        }

        int *ponteiroValor5=&arr[0];
        int *ponteiroValor6=&arr[1];
        int *ponteiroValor7=&arr[2];
        int *ponteiroValor8=&arr[3];
        int *ponteiroValor9=&arr[4];
        printf("novo array: %d, %d, %d, %d, %d\n", *ponteiroValor5, *ponteiroValor6, *ponteiroValor7, *ponteiroValor8, *ponteiroValor9);
         
    
     return 0;

}

 