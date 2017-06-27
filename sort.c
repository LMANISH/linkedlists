#include<stdio.h>
#include<stdlib.h>
 

struct node
{
    int data;
    struct node *next;
};
 

void insertAtTheBegin(struct node **head_ref, int data);
 

void bubbleSort(struct node *head);
 

void swap(struct node *a, struct node *b);
 

void print(struct node *head);
  

void insertAtTheBegin(struct node **head_ref, int data)
{
    struct node *ptr1 = (struct node*)malloc(sizeof(struct node));
    ptr1->data = data;
    ptr1->next = *head_ref;
    *head_ref = ptr1;
}
  
void print(struct node *head)
{
    struct node *temp = head;
    printf("\n");
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
 

void bubbleSort(struct node *head)
{
    int swapped, i;
    struct node *ptr1;
    struct node *lptr = NULL;
 
    
    if (ptr1 == NULL)
        return;
 
    do
    {
        swapped = 0;
        ptr1 = head;
 
        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            { 
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}
 
void swap(struct node *a, struct node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

int main()
{
    int arr[] = {3, 5, 2, 71, 1, -2, 40};
    struct node *head = NULL;
 
    
    for (int i = 0; i< 6; i++)
        insertAtTheBegin(&head, arr[i]);
 
    printf("\n Linked list before sorting ");
    print(head);
 
    bubbleSort(head);
 
    printf("\n Linked list after sorting ");
    print(head);
 

    return 0;
}
 


