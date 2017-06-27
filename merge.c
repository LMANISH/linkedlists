#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *adr;//adr-address

};
struct Node *head,*head1;
int num,x;




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
    
    for(int i=0;i<num;i++)
    {
     scanf("%d",&x);
     struct Node *temp = (struct Node *) malloc( sizeof(struct Node));
    temp->data = x;
    temp->adr = head;
    head = temp;
    }
    printf("Enter no. of elements");
    scanf("%d",&num);
    
    for(int i=0;i<num;i++)
    {
     scanf("%d",&x);
     struct Node *temp1 = (struct Node *) malloc( sizeof(struct Node));
    temp1->data = x;
    temp1->adr = head1;
    head1 = temp1;
    }
    struct Node *temp2 = (struct Node *) malloc( sizeof(struct Node));
    temp2=head;
    while(temp2->adr != NULL)
    {
        temp2 = temp2->adr;
    }
    temp2->adr = head1;

    Print();
}
