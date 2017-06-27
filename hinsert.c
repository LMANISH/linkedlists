#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *adr;//adr-address

};
struct Node *head;
int num=0;

int Insert(int x)
{
    struct Node *temp = (struct Node *) malloc( sizeof(struct Node));//temp-temporary varible
	temp->data = x;
	temp->adr = head;
	head = temp;
	return 0;
}

int Add(int x , int pos)
{
	struct Node *temp1=head;
    struct Node *temp = (struct Node *) malloc( sizeof(struct Node));
	temp->data=x;
	
	for(int i =0;i<=pos-2;i++)
	{
		temp->adr = temp1->adr;
	}
	temp1=temp;
	return 0;
}


int Print()
{
    struct Node* temp = head;
	
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->adr;
	}
	return 0;
}

int main()
{

	head=NULL;
	int y,pos;
	printf("Enter no. of elements");
	scanf("%d",&num);
	int x,opt;
	for(int i=0;i<num;i++)
	{
     scanf("%d",&x);
     Insert(x);
	}
	
	switch(1)
	{
		case 1:
		
			printf("Enter the number to be added");
			scanf("%d",&y);
			printf("Enter the position number to be added");
			scanf("%d",&pos);
			if(pos>num)
			{
			printf("Position where the number to be added doesn't exist");
			}
			else
			{printf("\n");
			Add( y, pos);
			}
			Print();
		break;

	}
	
}