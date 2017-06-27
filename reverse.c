#include<stdio.h>
#include<stdlib.h>
struct Node
	{
		int data;
		struct Node *link;
	};
	struct Node *head,*curr,*prev,*next;

int Insert(int x)
{
	struct Node *temp = (struct Node *) malloc( sizeof(struct Node));
	temp->data = x;
	temp->link =head;
	head=temp;
	return 0;
}

int Print()
{
    struct Node* temp = head;
	
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->link;
	}
	return 0;
}
int main()
{
	head=NULL;
	int num;
	printf("Enter no. of elements");
	scanf("%d",&num);
	int x,opt;
	for(int i=0;i<num;i++)
	{
     scanf("%d",&x);
     Insert(x);
	}
	Print();
	printf("\n");
	curr = head;prev = NULL;
	while(curr != NULL)
	{

		next =curr-> link;
		curr->link = prev;
		prev = curr;
		curr = next;

	}
	head = prev;
	Print();
}
