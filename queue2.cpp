#include <stdlib.h>
#include <stdio.h>


struct node {
	int data;
	struct node * next;
};

struct node * temp=NULL;
struct node * front=NULL;
struct node * rear=NULL;

void elemanekle(int veri)
{
	struct node * eleman=(struct node *)malloc(sizeof(struct node));
	eleman->data=veri;
	
	if(front==NULL)
	{
		front=eleman;
		front->next=front;
		rear=eleman;
		rear->next=NULL;
	}
	else if(front->next==front)
	{
		rear->next=eleman;
		rear=eleman;
		front->next=rear;
		rear->next=NULL;
	}
	else
	{
		rear->next=eleman;
		rear=eleman;
		rear->next=NULL;
	}
}

void elemancikar()
{
	if(front==NULL)
	{
		printf("kuyruk bostur\n");
	}
	else
	 {
	 	temp=front->next;
	 	free(front);
	 	front=temp;
	 }
}
void yazdir()
{
	if(front==NULL)
	{
		printf("kuyruk bostur");
		
	}
	else
	{
		temp=front;
		while(temp->next!=NULL)
		{
			printf("%d  ",temp->data);
			temp=temp->next;
			
		}
		printf("%d",temp->data);
	}
}


int main()
{
	int secim,sayi;
	
	while(1)
	{
		printf("sayi eklemek ici 1 Ç \n");
		printf("sayi çikarmak ici 2 \n");
		printf("yazdirmak icin 3 \n");
		printf("islemi sonlandirmak icin 4 : \n");
		scanf("%d",&secim);
		
		switch(secim)
		{
			case 1:
				printf("eklemek istediginiz sayiyi giriniz:\n");
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
