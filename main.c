#include <stdio.h>

int main () {
	printf("Dobar dan imate dve opcije\n"
		"\t1. Kredit\n"
		"\t2. Minus\n");
	
		
	int opcija = -1;
	
	
	
	while(opcija != 1 && opcija != 2)
	{
		scanf("%d" , &opcija);
		if(opcija != 1 && opcija != 2)
		{
			printf("Greska mozete samo 1 ili 2");		
		}
	}
	if(opcija == 1)
	{
		printf("KREDIT\n");
		printf("Ako se slazete sa nasom kamatnom stopom pritisnite taster broj 1 ako ne broj 2\n");
		int opcijaKredit = -1;
		while(opcijaKredit != 1 && opcijaKredit != 2)
		{
			scanf("%d" , &opcijaKredit);
			if(opcijaKredit != 1 && opcijaKredit != 2)
			{
				printf("Greska mozete samo 1 ili 2\n");
			}
				
		}
		if(opcijaKredit == 1)
		{
			printf("Unesite vasa primanja:\n");
			float primanja = -2;
			while(primanja <= 0)
			{	
			
				scanf("%f" , &primanja);
				if (primanja <= 0)
				{
					printf("Greska unesite primanja koja su veca od 0\n");
				}
			}
		}
	}else
	{
		printf("MINUS\n");
		printf("Unesite vasa primanja!:\n");
		float primanja = -1;
		while(primanja <= 0)
		{
			scanf("%f", &primanja);
			if(primanja <= 0)
			{
				printf("Greska unesite primanja koja su veca od nule\n");
			}
		}
		
	}



	return 0;
}
