#include <stdio.h>

void movTorre(int casas){
    if (casas > 0){
    printf("Passos: Direita\n");
    movTorre(casas -1);
    }
    
}

void movBispo(int casas){
    if (casas > 0){
    printf("Passos: Cima, Direita\n");
    movBispo(casas -1);
    }
    
}

void movRainha(int casas){
    if (casas > 0){
    printf("Passos: Esquerda\n");
    movRainha(casas -1);
    }
    
}

void movCavalo() {
    printf("==========MOVIMENTO CAVALO==========\n");

    int movCompleto = 1; //controlar movimento em L

    while (movCompleto--) {
        for (int i = 0; i < 2; i++) {
            printf("Passo: Cima\n");
        }
        printf("Passo: Direita\n");
    }
}


int main(){

    int torre;
    int bispo;
    int rainha;

    printf("Seja muito bem vindo ao seu tabuleiro inteligente!!! \n");

    printf("Quantas casas foram pedidas para sua TORRE se mover? \n");
    scanf("%d", &torre);
    printf("==========MOVIMENTO TORRE==========\n");
    movTorre(5);
    printf("Agora você esta na posição correta *-* \n");
   
    printf("Quantas casas foram pedidas para seu BISPO se mover? \n");
    scanf("%d", &bispo);
    printf("==========MOVIMENTO BISPO==========\n");
    movBispo(5);
    printf("Agora você esta na posição correta *-* \n");
   
    printf("Quantas casas foram pedidas para sua RAINHA se mover? \n");
    scanf("%d", &rainha);
    printf("==========MOVIMENTO RAINHA==========\n");
    movRainha(8);
    printf("Agora você esta na posição correta *-* \n");
 
    int cavalo;

printf("Quantos movimentos completos o CAVALO deve fazer? \n");
scanf("%d", &cavalo);

for (int i = 0; i < cavalo; i++){
    movCavalo();
}

printf("Agora você esta na posição correta *-* \n");
printf("Foi um prazer te ajudar.Sempre que precisar, estou aqui.");


    return 0;
}

     

