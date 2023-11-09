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
	



	return 0;
}
