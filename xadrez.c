#include <stdio.h>
int main(){
    int movBispo = 5;    // Bispo anda 5 casas
    int movTorre = 5;    // Torre anda 5 casas
    int movRainha = 8;   // Rainha anda 8 casas

 
    // MOVIMENTO DO BISPO (FOR)
     
    printf("=== Movimento do Bispo ===\n");

    // Bispo na diagonal: Cima + Direita
    for (int i = 1; i <= movBispo; i++) {
        printf("Passo %d: Cima + Direita\n", i);
    }
    printf("\n");

 
 // MOVIMENTO DA TORRE (WHILE)
 
    printf("=== Movimento da Torre ===\n");

    int contadorTorre = 1;
    while (contadorTorre <= movTorre) {
        printf("Passo %d: Direita\n", contadorTorre);
        contadorTorre++;
    }
    printf("\n");

    // ----------------------------------------------------
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // ----------------------------------------------------
    printf("=== Movimento da Rainha ===\n");

    int contadorRainha = 1;
    do {
        printf("Passo %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movRainha);

   
    








    return 0;
}

     

