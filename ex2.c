
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>

typedef struct{

    int matricula;
    char nome[100];
    float notas[3];

}Aluno;


int exercicio_02(){
    system("cls");
    printf("Exercicio 02\n\n");

    Aluno aluno;

    printf("O tamanho da estrutura aluno em bytes é %d.\n\n", sizeof(aluno));

    system("pause");
    return 0;
}

