// Esta una tienda que vende productos de Platzi *en la terminal 
#include<stdio.h>
#include<string.h>
char opcion[8];
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
        printf("ingrese gorra para comprar una\n");
        printf("ingrese termo para comprar uno\n");
        printf("ingrese playera para comprar una\n");
        printf("ingrese taza para comprar una \n");

        scanf("%s", opcion);

        if(strcmp(opcion, "gorra") == 0)
        {
            printf("cada gorra cuesta 5 usd, cuantas quieres?\n");
            scanf("%d", &gorras);
            totalGorras = (totalGorras + (gorras*5));
            printf("su total de gorras es: %d \n", totalGorras);
            compraTotal=(totalGorras+totalTermo+totalPlayera);
            printf("su total de COMPRA es: %d \n", compraTotal);
        }
        else if(strcmp(opcion, "termo") == 0)
        {
			printf("cada termo cuesta 5 usd, cuantas quieres?\n");
			scanf("%d", &termo);
			totalTermo = (totalTermo +(termo*5));
			printf ("su total de gorras es: %d \n", totalTermo);
			compraTotal=(totalGorras+totalTermo+totalPlayera);
            printf("su total de COMPRA es: %d \n", compraTotal);  
        }
        else if(strcmp(opcion, "playera") == 0)
        {
			printf("cada playera cuesta 10 usd, cuantas quieres?\n");
			scanf("%d", &playera);
			totalPlayera = (totalPlayera +(playera*10));
			printf("su total de playera es %d \n ", totalPlayera);
			compraTotal=(totalGorras+totalTermo+totalPlayera);
            printf("su total de COMPRA es: %d \n", compraTotal);
        }
        else if(strcmp(opcion, "taza") == 0)
        {
			printf("cada taza cuesta 5 usd, cuantas quieres?\n");
			scanf("%d", &taza);
			totalTaza = (totalTaza +(taza*10));
			printf("su total de taza es %d \n ", totalTaza);
			compraTotal=(totalGorras+totalTermo+totalPlayera+totalTaza);
            printf("su total de COMPRA es: %d \n", compraTotal);
        }
        else
        {
       	 	printf("el prodcuto especificiado no exite, prueba otra opcion\n");
       		 printf("en caso de querer otro producto presione 1 para salir presione cualquier num\n");
        	scanf("%d", &seguirComprando);
	    }
        printf("gracias por comprar\n");
	}

}

