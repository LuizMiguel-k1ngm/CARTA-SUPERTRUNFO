#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void limpar_entrada() {
 	char c;
 	while ((c = getchar()) != '\n' && c != EOF) {}
} 
	



int main() {
	char estado1[3], estado2[3];
	char cod1[50], cod2[50], nomeCidade1[50], nomeCidade2[50];
	float  area1, area2, pib1, pib2;
	int pontos1, pontos2, escolha;
	signed long int populacao1, populacao2;
	float cdp1, cdp2, cpc1, cpc2; 
	int p1 = 0, p2 =0;
	float superPoder;
	
	
	
	//CARTA 1
	
	
	printf(" 1 Estado: \n");
	scanf("%s", &estado1);
	
	printf("Codigo 1: \n");
	scanf("%s", &cod1);
	
	limpar_entrada();
	printf("Nome da cidade 1:\n");
	fgets(nomeCidade1, 50, stdin);
	
	printf("Populacao 1:\n");
	scanf("%i", &populacao1);
	
	printf("Area:\n ");
	scanf("%f", &area1);
	
	printf("PIB;\n");
	scanf("%f", &pib1);
	
	printf("Pontos turisticos: \n");
	scanf("%i", &pontos1);
	
	cdp1 = populacao1/area1;
	cpc1 = (pib1 *1000000000) /populacao1;
	

	
	
	
	
	
	
	
printf("---------------------------------------------- \n");
	
	//CARTA 2
	printf ("2 Estado \n");
	scanf("%2s", &estado2);
	
	printf("Codigo 2: \n");
	scanf("%s", &cod2);
	
	limpar_entrada();
	printf("Nome da cidade 2: \n");
	fgets(nomeCidade2, 50, stdin);
	
	printf("Populacao 2: \n");
	scanf("%i", &populacao2);
	
	printf("Area:\n ");
	scanf("%f", &area2);
	
	printf("PIB: \n");
	scanf("%f", &pib2);
	
	printf("Pontos turisticos: \n");
	scanf("%i", &pontos2);
	
	cdp2 = populacao2/area2;
	cpc2 = (pib2 *1000000000) /populacao2;
	
	
	
	
	/*----------------------------------------------------------------------------------------------*/
	//criação da lógica
	
	
	//Menu interativo:
	
	printf("Escolha um atributo para comparar\n");
	printf("1 - populacao\n");
	printf("2 - area\n");
	printf("3 - pib\n");
	printf("4 - numeros de pontos turisticos\n");
	printf("5 - densidade demografica\n");
	scanf("%i", &escolha);

		
		
	
	
	
	printf("---------------------------------------------- \n");
	
		
	
	
	
	
	printf("CARTA 1\n");
	printf("O estado : %s\ncodigo 1: %s\nCidade: %s\nPopulacao: %lu\nArea:%.2f km²\nPIB: %.2f bilhoes de reais\nNúmeros de pontos turisticos: %i\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n ", estado1, cod1, nomeCidade1, populacao1,area1, pib1, pontos1, cdp1,cpc1 );
	
	printf("---------------------------------------------- \n");
	
	printf("CARTA 2\n");
	printf("O estado: %s\ncodigo: %s\nCidade:  %s\nPopulacao: %lu\nArea:%.2f km²\nPIB: %.2f bilhoes de reais\nNumeros de pontos turisticos: %i\nDensidade PopulacionaL: %.2f hab/km²\nPIB per Capita %.2f reais\n ", estado2, cod2, nomeCidade2, populacao2, area2, pib2, pontos2, cdp2, cpc2);
	


	printf("---------------------------------------------- \n");
		
		//USO DE SWITCH CASE COM IF E ELSE PARA COMPARAR ATRIBUTOS
		// comparando população
		
	
	switch(escolha){
		case 1:
		if (populacao1 > populacao2) {
                printf("Carta 1 vence na vida!\n");
            } else if (populacao1 < populacao2) {
                printf("Carta 2 vence na vida!\n");
            } else {
                printf("Empate!!!\n");
            }
            break;
	
	
	break;
	
	
	//comparando AREA
	case 2:
		if(area1>area2){
			printf("Carta 1 venceu\n");
		}else if(area2>area1){
			printf("Carta 2 venceu\n");
		}else{
			printf("Empate!!!\n");
		}
		break;
	
	
	

	
	//comparando PIB
	case 3:
		if(pib1>pib2){
			printf("Carta 1 venceu \n");
		}else if(pib2>pib1){
			printf("Carta 2 venceu\n");
		}else {
			printf("Empate!!!\n");
		}
		break;
	
	
	

	
	
	
	case 4:
		if(pontos1>pontos2) {
			printf("carta 1 venceu \n");
		}else if(pontos2>pontos1){
			printf("carta 2 venceu \n");
		}else{
			printf("Empate \n");
		}
		break;
		
		case 5:
			if(cdp1>cdp2){
				printf("carta 1 ganhou\n");
			} else if (cdp2>cdp1) {
			printf("carta 2 ganhou \n");
			}else{
				printf("Empate \n");
			}
			break;

	
	
	
	
	default:
		printf("Encolha invalida. Tente novamente\n");
	
	
}



	
	
	
	
	
	
	
	

	
	
	return 0;
}

	
	
	return 0;
}
