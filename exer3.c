//3) Edição de Arquivo: Desenvolva um programa que permita ao usuário editar um
//arquivo de texto. Ele deve solicitar ao usuário que insira o texto que deseja adicionar
//ao arquivo existente e, em seguida, deve adicionar esse texto ao final do arquivo.

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    char texto[500];
    arquivo = fopen("exer1.txt", "a");
    if (arquivo == NULL) {
        printf("erro ao abrir o arquivo\n");
        exit (1);
    }
    printf("Digite o texto que deseja adicionar ao arquivo:\n");
    fgets(texto, sizeof(texto), stdin);  
    fprintf(arquivo, "%s", texto);
    fclose(arquivo);
    printf("Texto adicionado com sucesso\n");
    return 0;
}
