#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Lista ponteiros\n");

    int x=0;

   do{
        system("cls");
        printf("Escolha uma op��o abaixo:\n");
        printf("\n01- Exercicio 01");
        printf("\n02- Exercicio 02");
        printf("\n03- Exercicio 03");
        printf("\n04- Exercicio 04");
        printf("\n05- Exercicio 05");
        printf("\n06- Exercicio 06");

        printf("\nEscolha uma das op��es anteriores: ");
        scanf("%d",&x);

        switch(x){
            case 0: printf("\nSair do programa\n"); break;
            case 1: exercicio_01(); break;
            case 2: exercicio_02(); break;
            case 3: exercicio_03(); break;
            case 4: exercicio_04(); break;
            case 5: exercicio_05(); break;
            case 6: exercicio_06(); break;
            default: printf("\nOp��o inv�lida.\n");
         }

    }while(x != 0);

    return 0;
}
