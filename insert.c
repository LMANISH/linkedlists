#include<stdlib.h>
#include<stdio.h>
struct Node
{
	int data;
	struct Node *link;

};
struct Node *head,*ptr,*temp;

int Insert(int x)
{
    struct Node *temp = (struct Node *) malloc( sizeof(struct Node));
	temp->data = x;
	temp->link = head;
	head = temp;
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
	int x;
	for(int i=0;i<num;i++)
	{
     scanf("%d",&x);
     Insert(x);
	}
	int data_value, key;

	printf("\nEnter data of the node to be inserted: ");
	scanf("%d", &data_value);
	printf("\nEnter data of the node after which new node is to be inserted: ");
	scanf("%d", &key);

	struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
	ptr = head;
	while(ptr->link != NULL && ptr->data != key)
	{
		ptr = ptr->link;
	}
	if(ptr->data == key)
	{
		temp->data = data_value;
		temp->link = ptr->link;
		ptr->link = temp;
	}
	else
	{
		printf("\nValue %d not found\n",key);
	}
	Print();
}