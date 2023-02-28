#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head = NULL,*temp;
int insert(int);
int insert(int);
void display();
void main()
{
   int choice, value;
   while(1)
   {
      printf("\n****** MENU ******\n");
      printf("1. Insert 2. Display 3.insertend  \n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice)
        {
	        case 1: printf("Enter the value to be insert: ");
		    scanf("%d", &value);
	    	insert(value);
		    break;
	        case 2: display(); break;
	        case 3:printf("enter the value to insert:");
	        scanf("%d",&value);
	        break;
	        default: printf("\nWrong selection!!! Please try again!!!\n");
        }
   }
}
int insert(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if(head == NULL)
    {
        newNode->next = NULL;
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
      }
    }
void display()
{
    if(head == NULL)
    printf("\nList is Empty!!!\n");
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
	        printf("%d--->",temp->data);
	        temp = temp -> next;
        }
        printf("%d--->NULL",temp->data);
   }
}
void insertAtEnd(int value)
{
struct Node*newNode=malloc(sizeof(struct Node));
newNode->data=value;
newNode->next=NULL;
if (head==NULL)
    head=newNode;
else
{
    struct Node*temp=head;
    while(temp->next!=NULL)
{
        temp=temp->next;
}
    temp->next=newNode;
}
printf("\n One node inserted!!!\n");
}
