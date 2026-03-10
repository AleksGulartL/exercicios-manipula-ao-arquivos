/*Contagem de Caracteres Específicos: Crie um programa que conte quantas vezes
um caractere específico aparece em um arquivo de texto. Permita que o usuário
especifique o caractere a ser contado.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arquivo;
    char c;
    char letra;
    int contador = 0;
    printf("digite o caractere para contar:\n");
    scanf("%c", &letra);
    arquivo = fopen("exer1.txt", "r");
    while (!feof(arquivo)) {
        c = fgetc(arquivo);
        if (c == letra) {
            contador++;
        }
    }
    fclose(arquivo);
    printf("o caractere '%c' aparece %d vezes no arquivo.\n", letra, contador);
    return 0;
}
