
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>


int exercicio_03(){
    system("cls");
    printf("Exercicio 03\n\n");

    int i;
    float soma = 0 , media;


    printf("Quantos valores serão digitados?\n\n");
    scanf("%d", &i);

    float *valor = malloc(i *sizeof(float));

    for(int j = 0; j < i; j++){

        printf("\nAtribua um valor a posição %d?.\n\n",j+1);
        scanf("%f", &valor[j]);

        soma += valor[j];

    }

    media = soma / i;

    printf("A soma de todos os valores foi %.2f.\nE a media de valores foi %.2f.\n",soma,media);

    free(valor);
    valor = NULL;


    system("pause");
    return 0;
}


