#include <stdio.h>

int main ()
	
	
{
	int nt, baraj;
	
	printf("Notunuzu giriniz: \n nt:");
	scanf("%d", &nt);
	printf("Baraj� giriniz: \n baraj: ");
	scanf("%d", &baraj);
	
	if( nt == baraj )
	{
		printf("Nt ve baraj e�it");
	}
	else if( nt < baraj )
	{
		printf("Kald�n�z.");
	}
	else if( nt > baraj )
	{
		printf("ge�tiniz.");
	}
	return 0;
}
