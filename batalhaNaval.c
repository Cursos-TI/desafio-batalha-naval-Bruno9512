#include<stdio.h>

#define TAMANHO_TABULEIRO 10 //Definição das matrizes de tamanho do tabuleiro

int main(){
    char colunas[TAMANHO_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Definição das coordenadas do tabuleiro
    int linhas[TAMANHO_TABULEIRO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    printf("****************************\n");
    printf("****** Batalha Naval *******\n");
    printf("****************************\n");

    //Inicializa o tabuleiro com 0(vazio)
    for(int i = 0; i < TAMANHO_TABULEIRO; i++){
        for(int j = 0; j < TAMANHO_TABULEIRO; j++){
            tabuleiro[i][j] = 0;
        }
    }
    
    //Define as cordenadas do navio
    int linha_navio = 0; //Linha onde será posicionado
    int coluna_navio = 3; //Coluna onde o návio será posicionado

    //Atribui o navio ao tabuleiro (valor 3)
    tabuleiro[linha_navio][coluna_navio ] = 3; //Posiciona o navio no tabuleiro

    //Imprime as colunas
    for(int j = 0; j < TAMANHO_TABULEIRO; j++){
        printf("  %c", colunas[j]);
    }
    printf("\n");

    //Imprime o tabuleiro com o navio
    for(int i = 0; i < TAMANHO_TABULEIRO; i++){
        printf("%2d", linhas[i]);
        for(int j = 0; j < TAMANHO_TABULEIRO; j++){
            if(tabuleiro[i][j] == 3){
                printf(" 3 "); //Exibe '3' se a cédula contém o navio
            }else{
                printf(" 0 "); //Exibe '0' se cédula está vazia
            }
        }
        printf("\n");
    }


    




