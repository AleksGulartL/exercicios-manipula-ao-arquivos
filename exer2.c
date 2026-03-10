//2) Cópia de Arquivo: Crie um programa que copie o conteúdo de um arquivo de texto
//para outro arquivo. Certifique-se de que o arquivo de destino seja criado se ainda
//não existir.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *origem, *destino;
    char c;
    origem = fopen("exer1.txt", "r");
    destino = fopen("exer2.txt", "w");  
    if (origem == NULL) {
        printf("erro nao foi possivel abrir o arquivo.\n");
        exit(1);
    }
    if (destino == NULL) {
        printf("erro nao foi possivel criar o arquivo.\n");
        exit(1);
    }
    while (!feof(origem)) {
        c = fgetc(origem);
        if (c != EOF) {
            fputc(c, destino);
        }
    }
    printf("arquivo copiado com sucesso\n");
    fclose(origem);
    fclose(destino);
    return 0;
}