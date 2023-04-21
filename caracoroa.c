#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int escolha, resultado;
void regista_escolha ();
void processa_resultado ();
bool op_valida_Flag = false;

int main() 
{	
    srand(time(NULL));
    regista_escolha();
    processa_resultado();
    
}

void regista_escolha ()
{
	printf("Bem-vindo ao jogo de cara ou coroa!!!\n");
		while(op_valida_Flag == false)
			{
			printf("Escolha uma opÃ§Ã£o:\n");
    		printf("1 - Cara\n");
   			printf("2 - Coroa\n");
   			scanf("%d", &escolha);
    		if (escolha != 1 && escolha != 2) 
				{
        		printf("OpÃ§Ã£o invÃ¡lida! Escolha 1 para cara ou 2 para coroa.\n");
        		system("cls");
    			}
    		else op_valida_Flag = true;
			}
}

void processa_resultado()
{
	 resultado = rand() % 2;
    
    if (resultado == 0) {
        printf("Cara!\n");
    } else {
        printf("Coroa!\n");
    }
    
    if (escolha == resultado + 1) {
        printf("VocÃª ganhou!\n");
    } else {
        printf("VocÃª perdeu!\n");
    }
   
}
