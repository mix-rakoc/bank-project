#include <stdio.h>

int main () {
while(1){	
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
		
			float maxRata = primanja * 0.35;
			printf("Izaberite ponudu:\n");
			printf("1. Kredit u iznosu od %f sa ratom %f na 12 meseci\n", maxRata*12, maxRata );
			printf("2. Kredit u iznosu od %f sa ratom %f na 24 meseci\n", maxRata*24, maxRata );
			printf("3. Kredit u iznosu od %f sa ratom %f na 36 meseci\n", maxRata*36, maxRata );
			printf("4. Kredit u iznosu od %f sa ratom %f na 48 meseci\n", maxRata*48, maxRata );
			printf("5. Kredit u iznosu od %f sa ratom %f na 60 meseci\n", maxRata*60, maxRata );
			printf("6. Izaberi svoju ponudu\n");
			printf("7. Ipak nista od navedenog\n");
			
			int opcijaKreditIznos = -1;
			while(opcijaKreditIznos <= 0 || opcijaKreditIznos >= 8)
			{	
				scanf("%d" , &opcijaKreditIznos);
				if(opcijaKreditIznos <= 0 || opcijaKreditIznos >= 8)
				{
					printf("Greska unesite broj od 1 do 7\n");
				}
			}
			
			if (opcijaKreditIznos >=1 && opcijaKreditIznos <=5)
			{
				printf("Super ugovorili smo kredit u iznosu od %f na %d meseci, sa mesecnom ratom od %f \n" , opcijaKreditIznos * 12 * maxRata , opcijaKreditIznos * 12 , maxRata);
			}
			else if (opcijaKreditIznos == 6)
			{          
			
				float rataIzabranogKredita = -1;
				int brojMeseciOtplate;
				float odabraniIznosKredita;
				do
				{
				
					printf("Unesite mi iznos kredita koji biste voleli\n");
					odabraniIznosKredita = -1;
					while(odabraniIznosKredita <= 0 )
					{
						scanf("%f" ,&odabraniIznosKredita);
						if(odabraniIznosKredita <= 0)
						{
							printf("Greska. Unesite broj veci od nule!\n");
						}	
					}
					printf("Unesite period otplate u mesecima (maksimalan period otplate je 60 meseci)\n");
					brojMeseciOtplate = -2;
					
					while (brojMeseciOtplate <= 0 || brojMeseciOtplate >= 61)		
					{
						scanf("%d" ,&brojMeseciOtplate);
						if(brojMeseciOtplate <= 0 || brojMeseciOtplate >= 61)
						{
							printf("Greska broj meseci mora biti od 1 do 60\n");
						}
					} 
					rataIzabranogKredita = odabraniIznosKredita / brojMeseciOtplate;
					if(rataIzabranogKredita > maxRata)
					{
					printf("Nazalost ne mozemo realizovati ovaj kredit, zato sto predvidjena rata za ovaj kredit %f je veca od maksimalne dozvoljene rate %f za vasa primanja\n" , rataIzabranogKredita , maxRata);
					printf("Pokusajte ponovo\n");
					}
					
				} while(rataIzabranogKredita > maxRata);
					printf("Cestitamo ugovorili ste kredi u iznosu od %f sa mesecnom ratom od %f u trajanju od %d\n", odabraniIznosKredita ,rataIzabranogKredita, brojMeseciOtplate);
					
			}else
			{
				printf("Hvala lepo. Dovidjenja!");
			}
					
		}else
		{
			printf("Hvala lepo. Dovidjenja!");
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
		float maxDozvoljenMinus = primanja * 3;
		printf("Postovani ponuda za dozvoljeni minus je :\n");
		printf("1. Maksimalan dozvoljeni minus u iznosu od %f\n" , maxDozvoljenMinus);
		printf("2. Sami izaberite dozvoljeni minus (Mora biti manji od maksimalnog dozvoljenog minusa %f)\n" , maxDozvoljenMinus);
		printf("3. Nista od navedenog , hvala dovidjenja!\n");
		// to do zastiti se od nevalidnog unosa korisnika(while)
		
		int opcija = -2;
		while(opcija != 1 && opcija != 2 && opcija != 3)
		{
			scanf("%d", &opcija);
			if(opcija !=1 && opcija !=2 && opcija != 3)
			{
				printf("Uneli ste pogresnu opciju, pokusajte ponovo!");
			}
		}
		if(opcija == 1)
		{
			printf("Cestitam omogucen vam je maksimalni dozvoljen minus %f" , maxDozvoljenMinus);
		}
		else if(opcija == 2)
		{
		//to do obradi opciju broj 2 tako da se zastitis od nevalidnog unosa 	
			
			float zeljeniMinus = -3;
			while (zeljeniMinus <= 0 || zeljeniMinus >= maxDozvoljenMinus)
			{
				scanf("%f", &zeljeniMinus);
				if(zeljeniMinus <=0 || zeljeniMinus >= maxDozvoljenMinus)
				{
					printf("Nazalost minus koji ste odabrali ne mozemo da vam ispunimo");
				}
			}
			
			printf("Cestitam uspeli ste da dobijete dozvoljen minus u iznosu od %f" , zeljeniMinus);
		
		
		}
		else
		{
			printf("Hvala lepo. Dovidjenja!");
		}
			
		
	}

}

	return 0;	
}
