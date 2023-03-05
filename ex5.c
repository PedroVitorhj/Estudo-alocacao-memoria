#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>

int* retornaPonteiro2(int n){

    int *pont = calloc(n, sizeof(int));

    return pont;
}

int* realocar(int *pont, int p){

    int *realocPont = realloc(pont,p * sizeof(int));

    return realocPont;
}

int exercicio_05(){
    system("cls");
    printf("Exercicio 05\n\n");

    int i;

    printf("\nAtribua uma quantidade de valores?\n\n");
    scanf("%d", &i);

    int *pont = retornaPonteiro2(i);


    for(int j = 0; j < i; j++){

        pont[j] = rand() % (i-1);

    }

    for(int j = 0; j < i; j++){

        printf("\nValor posição %d: %d. \n ",j+1,pont[j]);

    }

    printf("Atribua uma nova quantidade de valores?\n\n");
    scanf("%d", &i);

    int *pont2 = realocar(pont,i);

    for(int j = 0; j < i; j++){

        pont2[j] = rand() % (i-1);

    }

    for(int j = 0; j < i; j++){

        printf("\nValor posição %d: %d. \n ",j+1,pont2[j]);

    }

    free(pont);
    pont = NULL;


    system("pause");
    return 0;
}
