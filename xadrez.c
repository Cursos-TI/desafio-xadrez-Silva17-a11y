#include <stdio.h>


// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (também com loops aninhados)
void moverBispo(int casas) {
    if (casas <= 0) return; // Caso base
    
    // Versão com loops aninhados
    for (int v = 0; v < 1; v++) { // Loop vertical (externo)
        for (int h = 0; h < 1; h++) { // Loop horizontal (interno)
            printf("Cima, Direita\n");
        }
    }
    
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento complexo do Cavalo
void moverCavalo() {
    int cima, direita;
    
    // Loop complexo com múltiplas variáveis e controle de fluxo
    for (cima = 0; cima < 3; cima++) {
        for (direita = 0; direita < 2; direita++) {
            if (cima < 2) {
                printf("Cima\n");
                if (cima == 1 && direita == 0) continue;
            } else {
                printf("Direita\n");
                break; // Sai do loop interno após completar o L
            }
        }
        if (cima >= 2) break; // Sai do loop externo após completar o L
    }
}

int main() {
    // Movimento da Torre (recursivo) - 5 casas para direita
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    
    // Movimento do Bispo (recursivo + loops aninhados) - 5 casas diagonal
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispo(5);
    
    // Movimento da Rainha (recursivo) - 8 casas para esquerda
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    
    // Movimento do Cavalo (loops complexos) - L (2 cima, 1 direita)
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para direita):\n");
    moverCavalo();
    
    return 0;
}
    

