#include <stdio.h>

int main(){
//declaração das variáveis carta 01
    
int população, número_de_pontos_turísticos; 
float área, pib; 
char estado[8], codigo_da_carta[3], nome_da_cidade[10];

//declaração das variáveis carta 02

int população2, número_de_pontos_turísticos2;
float área2, pib2;
char estado2[8], codigo_da_carta2[3], nome_da_cidade2[10];

//interação com o usuário em relação a carta 01

printf("--CARTA 01--\n");
printf("Digite uma letra referente ao Estado:\n ");
scanf("%s", &estado);

printf("Digite o código da carta 01:\n");
scanf("%s", &codigo_da_carta);

printf("Digite o nome da cidade:\n ");
scanf("%s", &nome_da_cidade);

printf("Digite o número da população:\n");
scanf("%d", &população);

printf("Digite, em km², a área da cidade:\n");
scanf("%f", &área);

printf("Digite o PIB da cidade:\n");
scanf("%f", &pib);

printf("Digite o npumero de pontos turísticos da cidade:\n");
scanf("%d", &número_de_pontos_turísticos);

//interação com o usuário em relação a carta 02

printf("--CARTA 02--\n");
printf("Digite uma letra referente ao Estado:\n");
scanf("%s", &estado2);

printf("Digite o código da carta 02:\n");
scanf("%s", &codigo_da_carta2);

printf("Digite o nome da cidade:\n");
scanf("%s", &nome_da_cidade2);

printf("Digite o número da população:\n");
scanf("%d", &população2);

printf("Digite, em km², a área da cidade:\n");
scanf("%f", &área2);

printf("Digite o PIB da cidade:\n");
scanf("%f", &pib2);

printf("Digite o npumero de pontos turísticos da cidade:\n");
scanf("%d", &número_de_pontos_turísticos2);

//mostrar na tela as informações armazenadas de ambas as cartas

printf("--CARTA 01--\n");
printf("Estado: %s\nCódigo: %s\n", estado, codigo_da_carta);
printf("Nome da cidade: %s\nPopulação: %d\n", nome_da_cidade, população);
printf("Àrea: %f\nPIB: %f\n",área, pib);
printf("Número de pontos turísticos:\n", número_de_pontos_turísticos);

printf("--CARTA 02--\n");
printf("Estado: %s\nCódigo: %s\n",estado2, codigo_da_carta2);
printf("Nome da cidade: %s\nPopulação: %d\n", nome_da_cidade2, população2);
printf("Àrea: %f\nPIB: %f\n",área2, pib2);
printf("Número de pontos turísticos:\n", número_de_pontos_turísticos2);
return 0;
}