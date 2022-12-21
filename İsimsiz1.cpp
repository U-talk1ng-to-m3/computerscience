#include <stdlib.h>
#include <stdio.h>


#define BOY 5


int dizi[BOY];
int bas=-1,son=-1;

void elemanekle(int veri)
{
	
	if(son==BOY-1)
	{
		printf("kuyruk doludur.\n");
		
	}
	else
	 {
	 	if(bas==-1)
	 	{
	 		bas=0;}
	 		son++;
	 		dizi[son]=veri;
		 
	 }
}

void elemancikar()
{
	
	if(bas==-1 || bas>son)
	{
		printf("kuyruk bostur\n");
		bas=-1;
		son=-1;
	}
	else
	{
		bas=bas+1;
	}
	
}

void yazdir()
{
	if(bas==-1)
	{
		printf("kuyruk bos");
		
	}
	else
	{
		int i;
		for(i=bas;i<=son;i++)
		{
			printf("%d",dizi[i]);
		}
	}
	
	
	
}



int main()
{
	int select,sayi;
	while(1)
	{
	
	printf("1 ekle \n");
	printf("2 cikar \n");
	printf("3 yazdir\n");
	printf("4 cikar \n");
	scanf("%d",&select);
	switch(select)
	{
		case 1: 
		printf("eklenecek eleman sec\n");
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
			return 0;
	}
}
	
	return 0;
}
