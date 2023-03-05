#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char rua[150];
    char bairro[100];
    char cidade[100];
    int num;

}Endereco;

typedef struct{

    char nome[100];
    int idade;
    Endereco ende;

}Cadastro;


int* retornaPonteiro(int n){

    int *pont = malloc(n * sizeof(int));

    return pont;
}

Cadastro Solicitadados(){

    Cadastro pessoa;

    printf("Qual o nome da pessoa a ser cadastrada? ");
    setbuf(stdin, NULL);
    scanf("%99[^\n]",pessoa.nome);
    printf("\n");

    printf("Qual a idade da pessoa? ");
    scanf("%d", &pessoa.idade);
    printf("\n");

    printf("Qual a rua da pessoa a ser cadastrada? ");
    setbuf(stdin, NULL);
    scanf("%149[^\n]",pessoa.ende.rua);
    printf("\n");

    printf("Qual o bairro da pessoa a ser cadastrada? ");
    setbuf(stdin, NULL);
    scanf("%99[^\n]",pessoa.ende.bairro);
    printf("\n");

    printf("Qual a cidade da pessoa a ser cadastrada? ");
    setbuf(stdin, NULL);
    scanf("%99[^\n]",pessoa.ende.cidade);
    printf("\n");

    printf("Qual o numero da casa da pessoa a ser cadastrada? ");
    scanf("%d",&pessoa.ende.num);
    printf("\n");

    return pessoa;

}

void printaCadastro(Cadastro pessoa){

    printf("Nome cadastrado: %s\n", pessoa.nome);
    printf("Idade cadastrada: %d\n", pessoa.idade);
    printf("Rua cadastrada: %s\n",pessoa.ende.rua);
    printf("Bairro cadastrado: %s\n",pessoa.ende.bairro);
    printf("Cidade cadastrada: %s\n", pessoa.ende.cidade);
    printf("Numero da casa cadastrado: %d\n", pessoa.ende.num);

}


int exercicio_06(){
    system("cls");
    printf("Exercicio 06\n\n");

    int i;

    printf("\nAtribua um espaço de memoria?\n\n");
    scanf("%d", &i);

    float *valor = retornaPonteiro(i);
    printaCadastro(Solicitadados());



    free(valor);
    valor = NULL;

    system("pause");
    return 0;
}

