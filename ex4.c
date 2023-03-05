
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>

int* retornaPonteiro(int n){

    int *pont = calloc(n, sizeof(int));

    return pont;
}

int exercicio_04(){
    system("cls");
    printf("Exercicio 04\n\n");

    int i;

    printf("Quantos valores serão digitados?\n\n");
    scanf("%d", &i);

    int *pont = retornaPonteiro(i);


    for(int j = 0; j < i; j++){

        pont[j] = rand() % (i-1);

    }

    for(int j = 0; j < i; j++){

        printf("\nValor posição %d: %d. \n ",j+1,pont[j]);

    }

    free(pont);
    pont = NULL;


    system("pause");
    return 0;
}
