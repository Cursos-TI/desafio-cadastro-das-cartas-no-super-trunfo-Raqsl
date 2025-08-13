#include <stdio.h>



int main() {
    printf("Desafio Cartas SuperTrunfo!\n");
    printf("Carta 01 \n");

    char Estado[20];
    char Código [20];
    char Cidade [20];
    int População;
    float Área;
    float PIB;
    int PontosTurísticos;

    printf("Estado:");
    scanf("%s", Estado);

    printf("Código:");
    scanf("%s", Código);

    printf("Cidade:");
    scanf("%s", Cidade);

    printf("População:");
    scanf("%d", &População);

    printf("Área em Km²:");
    scanf("%f", &Área);

    printf("PIB: ");
    scanf("%f", &PIB);
    
    printf("Pontos Turísticos:");
    scanf("%d", &PontosTurísticos);


     printf("Carta 02 \n");

    char Estado2[20];
    char Código2 [20];
    char Cidade2 [20];
    int População2;
    float Área2;
    float PIB2;
    int PontosTurísticos2;

    printf("Estado:");
    scanf("%s", Estado2);

    printf("Código:");
    scanf("%s", Código2);

    printf("Cidade:");
    scanf("%s", Cidade2);

    printf("População:");
    scanf("%d", &População2);

    printf("Área em Km²:");
    scanf("%f", &Área2);

    printf("PIB: ");
    scanf("%f", &PIB2);
    
    printf("Pontos Turísticos:");
    scanf("%d", &PontosTurísticos2);


    printf("\n--- Dados da Carta 1 ---\n");

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Código);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", População);
    printf("Área: %.2f Km²\n", Área);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTurísticos); 

    printf("\n--- Dados da Carta 2 ---\n");

    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Código2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f Km²\n", Área2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTurísticos2);


}
