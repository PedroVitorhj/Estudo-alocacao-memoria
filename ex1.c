#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>


int exercicio_01(){
    system("cls");
    printf("Exercicio 01\n\n");

    printf("O tamanho de uma variavel caracter é: %d bytes.\n", sizeof(char));
    printf("O tamanho de uma variavel inteira é: %d bytes.\n", sizeof(int));
    printf("O tamanho de uma variavel flutuante é: %d bytes.\n", sizeof(float));
    printf("O tamanho de uma variavel duplo é: %d bytes.\n", sizeof(double));


    system("pause");
    return 0;
}

