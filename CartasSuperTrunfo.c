#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo! \n");

    char estado[10];
    char cidade[20];
    char codigo[5];
int populacao;
float area;
float pib;
int turismo;

printf ("Nome do estado: \n");
scanf("%s", &estado);

printf("codigo: \n");
scanf("%s", &codigo);

printf("nome da cidade:: \n");
scanf("%s", &cidade);

printf("total de habitantes \n");
scanf("%d", &populacao);

printf("area: \n");
scanf("%f", &area);

printf("pib: \n");
scanf("%f", &pib);

printf("numero de pontos turisticos: \n");
scanf("%d", &turismo);

    return 0;
}
