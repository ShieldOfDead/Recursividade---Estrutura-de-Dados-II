#include <stdio.h>

void limpaEstante (int livro) {
    printf ("Livros na estante: %d\n", livro);

    if (livro>0) {
        printf(" -----> Tirando Livro! <-----\n\n");
        limpaEstante(livro-1);
    }
}

int main () {

    int livros;
    printf ("Insira a quantidade de livros a ser retirado: ");
    scanf("%d", &livros);
    limpaEstante (livros);
    printf("Todos os livros foram retirados");
    return 0;
}
