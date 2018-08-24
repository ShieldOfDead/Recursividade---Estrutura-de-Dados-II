#include <stdio.h>

void vagasLivres (int vaga) {
    printf ("Vagas livres: %d\n", vaga);

    if (vaga>0) {
        printf(" -----> Estacionando carro na vaga! <-----\n\n");
        vagasLivres(vaga-1);
    }
}

int main () {

    int vagas;
    printf ("Insira a quantidade de vagas livres: ");
    scanf("%d", &vagas);
    vagasLivres (vagas);
    printf("Todas as vegas foram preechidas!");
    return 0;
}
