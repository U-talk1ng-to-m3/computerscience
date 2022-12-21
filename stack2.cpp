#include <stdlib.h>
#include <stdio.h>


struct node{
	int data;
	struct node * next;
};


struct node * temp=NULL;
struct node * top=NULL;

void push(int veri)
{
	struct node * eleman=(struct node *)malloc(sizeof(struct node));
	eleman->data=veri;
	if(top==NULL)
	{
		top=eleman;
		top->next=NULL;
	}
	else
	{
		eleman->next=top;
		top=eleman;
	}
}

void pop()
{
	if(top==NULL)
	{
		printf("yigin bos \n");
		
	}
	else
	{
		printf("%d elemani cikarildi\n",top->data);
		temp=top->next;
		free(top);
		top=temp;
		
	}
}

void yazdir()
{
	if(top==NULL)
	{
		printf("stack bos\n");
		
	}
	else 
	{
		temp=top;
		while(temp->next!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
			
		}
		printf("%d \n",temp->data);
	}
}
void peek()
{
	if(top==NULL)
	{
		printf("bos");
		
	}
	else
	{
		printf("yigindaki son eleman %d :\n",top->data);
	}
}



int main()
{
	int secim;
	int sayi;
	while(1)
	{
	
	printf("eklemek icin 1:\n");
	printf("cikarmak icin 2:\n");
	printf("islemi sonlandirmak icin 3:\n");
	printf("peek islemi ici 4\n");
	printf("cikamk icin 5\n");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1: printf("eklenecek sayiyi giriniz:\n");
		scanf("%d",&sayi);
		push(sayi);
		break;
		case 2:
		pop();
		break;
		case 3:
		yazdir();
		break;
		case 4:
		peek();
		break;
		case 5:
		return 0;
	}
	
	}
	
	
	
	
	return 0;
}
