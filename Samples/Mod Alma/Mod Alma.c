#include <stdio.h>

main ()
	
	
{
	int x, y, z;
	
	printf("ilk say�");
	scanf("%d", &x);
	printf("ikinci say�");
	scanf("%d", &y);
	z = x % y;
	if( z==0 )
	{
		printf("Tam blnr");
	}
	else 
	{
		printf("tam b�l�nmez");
	}
	return 0;
}
