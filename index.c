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
	int pontos1, pontos2, escolha1, escolha2, resultado1, resultado2;
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
	
	printf("Escolha dois atributo para comparar\n");
	printf("PRIMEIRO ATRIBUTO\n");
	printf("1 - populacao\n");
	printf("2 - area\n");
	printf("3 - pib\n");
	printf("4 - numeros de pontos turisticos\n");
	printf("5 - densidade demografica\n");
	scanf("%i", &escolha1);
	
	
	printf("SEGUNDO ATRIBUTO \n");
	printf("1 - populacao\n");
	printf("2 - area\n");
	printf("3 - pib\n");
	printf("4 - numeros de pontos turisticos\n");
	printf("5 - densidade demografica\n");
	scanf("%i", &escolha2);
	
	
	

		
		
	
	
	
	printf("---------------------------------------------- \n");
	
		
	
	
	
	
	printf("CARTA 1\n");
	printf("O estado : %s\ncodigo 1: %s\nCidade: %s\nPopulacao: %lu\nArea:%.2f km²\nPIB: %.2f bilhoes de reais\nNúmeros de pontos turisticos: %i\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n ", estado1, cod1, nomeCidade1, populacao1,area1, pib1, pontos1, cdp1,cpc1 );
	
	printf("---------------------------------------------- \n");
	
	printf("CARTA 2\n");
	printf("O estado: %s\ncodigo: %s\nCidade:  %s\nPopulacao: %lu\nArea:%.2f km²\nPIB: %.2f bilhoes de reais\nNumeros de pontos turisticos: %i\nDensidade PopulacionaL: %.2f hab/km²\nPIB per Capita %.2f reais\n ", estado2, cod2, nomeCidade2, populacao2, area2, pib2, pontos2, cdp2, cpc2);
	


	printf("---------------------------------------------- \n");
		
		//USO DE SWITCH CASE COM IF E ELSE PARA COMPARAR ATRIBUTOS
		// comparando população
		
		if (escolha1 == escolha2){
			printf("Error, tente novamente!!!\n");
		}else{
			switch(escolha1){
				case 1: resultado1 = populacao1 > populacao2? 1 : 0;
				break;
				case 2: resultado1 = area1 > area2 ? 1 : 0;
				break;
				case 3: resultado1 = pib1 > pib2? 1: 0;
				break;
				case 4: resultado1 = pontos1 > pontos2? 1: 0;
				break;
				case 5: resultado1 = cdp1 > cdp2? 1 : 0;
				break;
				
			default:
				printf("Opcao invalida!!!");
			}
			
		switch (escolha2){
			case 1: resultado2 = populacao1 > populacao2? 1 : 0;
				break;
				case 2: resultado2 = area1 > area2 ? 1 : 0;
				break;
				case 3: resultado2 = pib1 > pib2? 1: 0;
				break;
				case 4: resultado2 = pontos1 > pontos2? 1: 0;
				break;
				case 5: resultado2 = cdp1 > cdp2? 1 : 0;
				break;
				
			default:
				printf("Opcao invalida!!!");
		}
		
			
		
	}
	
	printf("pontos carta1:  %i\n", resultado1);
	printf("pontos carta2: %i\n", resultado2);
	if(resultado1 && resultado2){
		printf("Voce venceu!!!\n");
	}else if (resultado1 != resultado2){
		printf("Voce perdeu!!!\n");
	}else{
		printf("Empate!!!\n");
	}
 
		
	
	
	
	
	return 0;
}
