#include <stdio.h>
#include <stdlib.h>

//Versão adaptada Windows /Linux

//     *Exemplo de Funções, acesso em vetores*


//Prototipaçãoo da função
void getch(void);

int main()
{
    int numero[5] = {1, 2, 3, 4, 5};
    int insetNum[5];
    int i, loop;

//comando para rodar em loop o codigo eternamente...
    while( loop != 100){
// limpa tela sem precisa utilizar chamada do sistema. Utiliza simbolos ASCI
    printf("\e[H\e[2J");
//modo arcaico
    printf("Exibindo numeros inseridos no vetor manualmente: \n");
    printf("posicao [0] = %.1d\n",numero[0]);
    printf("posicao [1] = %.1d\n",numero[1]);
    printf("posicao [2] = %.1d\n",numero[2]);
    printf("posicao [3] = %.1d\n",numero[3]);
    printf("posicao [4] = %.1d\n",numero[4]);

//modo ideal
    printf("\n Digite 5 numeros \n");
//for para automatizar a leitura dos dados
    for(i=0; i<5 ; i++)
     scanf("%d",&insetNum[i]);

//for para automatizar a impressão dos dados contidos no vetor.
    for(i=0; i<5 ; i++)
     printf("posicao [%.1d] = %.1d\n",i, insetNum[i] );

//aguarda usuario teclar qualquer tecla
     getch();

}

    return 0;
}

//Função  usada como "pausa" no programa. Ele espera leitura de uma "variavael

void getch(void){
 system("read b");
}

