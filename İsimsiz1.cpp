#include <stdlib.h>
#include <stdio.h>
#define BOY 10



struct yigin{
	int dizi[BOY];
	int indis;
};

struct yigin y1;

void elemanekle(int s1)
{
	if(y1.indis==BOY -1)
	{
		printf("yigin doludur/n");
	}
	else
	{
		y1.indis++;
		y1.dizi[y1.indis]=s1;
	}
}
void elemancikar()
{
	if(y1.indis==-1)
	{
		printf("yigin bostur/n");
	}
	else
	{
		int cikansayi=y1.dizi[y1.indis];
		printf("cikacak sayi %d/n",cikansayi);
		y1.indis--;
		
		
	}
}
void yazdir()
{
	if(y1.indis==-1)
	{
		printf("yigin bos");
	}
	else
	{
		int i;
		for(i=y1.indis;i>-1;i--)
		{
			printf("%d -- ",y1.dizi[i]);
		}
	}
	printf("\n\n\n");
}



int main()
{
	y1.indis=-1;
	int secim,sayi;
	int x=1;
	while(x==1)
	{
	
	printf("YIGIN\n");
	printf("1----> eleman ekleme (push)\n");
	printf("2-----> eleman cikar (pop)\n");
	printf("3----> yazdi (print)\n");
	printf("Cikis (exit)\n");
	printf("seciminizi yapin\n");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:printf("eklenecek sayi:");
			scanf("%d",&sayi);
			elemanekle(sayi);
			break;
		case 2:
			elemancikar();
			break;
			
		case 3:
			yazdir();
			break;
		case 4:
			x=0;
			break;
	}
}
	
	
	
	
	return 0;
}
