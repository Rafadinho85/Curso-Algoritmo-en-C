// Esta una tienda que vende productos de Platzi *en la terminal 
#include<stdio.h>
#include<string.h>
int opcion;
int gorras;
int totalGorras = 0;
int seguirComprando = 1;
int termo;
int totalTermo;
int compraTotal;
int playera;
int totalPlayera;
int taza;
int totalTaza;
void main()
{
    while(seguirComprando == 1)
    {
        printf("Elije el producto que buscas\n");
        printf("1. ingrese gorra para comprar una\n");
        printf("2. ingrese termo para comprar uno\n");
        printf("3. ingrese playera para comprar una\n");
        printf("4. ingrese taza para comprar una \n");

        scanf("%d", &opcion);

   		   switch( opcion )   
			{  
    			case 1:  
      			printf("Cuantas gorras quiere\n"); 
       			scanf("%d", &gorras);
            	totalGorras = (totalGorras + (gorras*5));
           	 	printf("su total de gorras es: %d \n", totalGorras);
           		compraTotal=(totalGorras+totalTermo+totalPlayera);
          		printf("su total de COMPRA es: %d \n", compraTotal);
				
				break;  
    			case 2:  
       			printf("Cuantos termo quiere\n"); 
       			scanf("%d", &termo);
				totalTermo = (totalTermo +(termo*5));
				printf ("su total de gorras es: %d \n", totalTermo);
				compraTotal=(totalGorras+totalTermo+totalPlayera);
            	printf("su total de COMPRA es: %d \n", compraTotal);
				   
				break;  
    			case 3:  
     			printf("Cuantas playeras quiere\n");  
      			scanf("%d", &playera);
				totalPlayera = (totalPlayera +(playera*10));
				printf("su total de playera es %d \n ", totalPlayera);
				compraTotal=(totalGorras+totalTermo+totalPlayera);
           		printf("su total de COMPRA es: %d \n", compraTotal);
				  
				break;  
      			case 4:
      			printf("Cuantas tazas quiere? \n");
				scanf("%d", &taza);
				totalTaza = (totalTaza +(taza*10));
				printf("su total de taza es %d \n ", totalTaza);
				compraTotal=(totalGorras+totalTermo+totalPlayera+totalTaza);
           		printf("su total de COMPRA es: %d \n", compraTotal);
				break;
				default:
				printf("ingreso un numero incorrecto? \n");
				break;
      		}
	}

}
