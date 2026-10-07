#include <stdio.h>
#define TAM 5
int main(int argc, char *argv[]) {
	//Tp N° 7 de Informatica//
int codigo [TAM], codigo_baratito,codigo_caraso ;
float precio [TAM], baratito, caraso;
baratito = 100000000000000000;
caraso = 0;
codigo_baratito = 0;
codigo_caraso = 0;
printf("Ingrese cinco productos, se solicitara el codigo y precio: \n");
	for (int i = 0; i < TAM; i++){
		do{
			printf("Ingrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigo [i]);
			if (codigo[i] < 1 ||codigo[i] > 999999999){
				printf("Error. El codigo de barras debe estar entre 1 y 999999999");
			}
		} while(codigo[i] < 1 || codigo[i] > 999999999);
		do{
			printf("Ingrese el precio:");
			scanf("%f", &precio [i]);
			if (precio[i] < 0){
				printf("Error, no se pueden cargar precios negativos \n");
			}
		} while (precio [i] < 0); 
		if (precio [i] < baratito){
			baratito = precio [i];
			codigo_baratito = codigo[i]; 
		}
		if (precio [i] > caraso){
			caraso = precio [i];
			codigo_caraso = codigo[i];
		}
	
	}
	printf("Codigo \t Precio\n");
	for(int i = 0; i < TAM; i++) {
		printf("%d \t %.2f\n", codigo [i], precio [i]);
	}
	printf ("Mas caro: %d\t %.2f\n", codigo_caraso, caraso);
	printf ("Mas barato: %d\t %.2f\n", codigo_baratito, baratito);
	return 0;
}
