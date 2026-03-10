// 1)Contagem de Palavras em um Arquivo: Escreva um programa que abra um arquivo
// de texto, conte o número de palavras nele e exiba o resultado na tela.

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    char c;
    int palavras = 0;
    arquivo = fopen("exer1.txt", "r");
    if (arquivo == NULL) {
        printf("erro ao abrir o arquivo\n");
        exit (1);
    }
    while(!feof(arquivo)){
        c = fgetc(arquivo);
        if(c == ' ' || c == '\n' || c == '\t'){
            palavras++;
        }
    }
    fclose(arquivo);
    printf("número de palavras: %d\n", palavras);   
    return 0;
}