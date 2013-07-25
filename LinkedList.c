

/*
 * LinkedList.c
 *
 *  Created on: Jul 21, 2013
 *      Author: Mohamed Makthum Mohamed
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct _Node
{
	int data;
	struct _Node *next;
}Node;

void insertfront(int data, Node **head);
void printValue(Node *head);
void insertback(int data, Node **head);
void deleteStart(Node **head);
void deleteEnd(Node **head);
Node* insertAt(Node **head,int data,int value);
int main(void)
{
    int i=0;
    int data=0,value=0;
    Node *head= NULL;

    while(i!=9)
    {
      printf("\n1: Insert element at the start");
        printf("\n2: Insert element at the last");
        printf("\n3: Delete element at the start");
        printf("\n4: Delete element at the last");
        printf("\n5: Insert element at a position");
        printf("\n6: Delete element at a position");
        printf("\n7: Empty Linked List");
        printf("\n8: Print Linked List ");
        printf("\n9 : Exit");
        scanf("%d",&i);

        switch(i)
        {
            case 1:
            {
              printf(" Enter the value for element ");
              scanf("%d",&data);
              insertfront(data,&head);
              break;
            }
            case 2:
            {
              printf(" Enter the value for element ");
              scanf("%d",&data);
              insertback(data,&head);
              break;
            }
            case 3:
            {
                printf("Delete at the start");
                printValue(head);
                printf("\n");
                deleteStart(&head);
                printValue(head);
                break;
            }
            case 4:
            {
                printf("Delete at the end");
                printValue(head);
                printf("\n");
                deleteEnd(&head);
                printValue(head);
                break;
            }
            case 5:
            {
                printf("Insert element after u want to insert");
                printValue(head);
                scanf("%d",&data);
                printf("Insert element u want to enter");
                scanf("%d",&value);
                insertAt(&head,data,value);
                printValue(head);
                break;
            }
            case 8:
                printValue(head);
        }
    }


return 0;
}

void insertback(int data, Node **head)
{
	Node *temp1= (Node *)(malloc(sizeof (Node)));
   temp1= *head;

	Node *temp= (Node *)(malloc(sizeof (Node)));
	temp->data=data;
	temp->next=NULL;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;

	}
	temp1->next=temp;

}
 void insertfront(int data,Node **head)
{
        Node *temp= (Node *)(malloc(sizeof (Node)));
	 temp->data=data;
     if(*head==NULL)
     {
	 
	 temp->next=NULL;
         *head=temp;

	
     }
     else
     {
             
             
         temp->next=*head;
         *head=temp;
     }
    

}
 Node* insertAt(Node **head,int data,int value)
 {
     	Node *temp= (Node *)(malloc(sizeof (Node)));
        temp=*head;
        while(temp->data!=data)
        {
            temp=temp->next;
        }
        Node *temp1= (Node *)(malloc(sizeof (Node)));
        temp1->data=value;
        temp1->next=temp->next;
        temp->next=temp1;
        return temp;
 }
 void printValue(Node *head)
 {
	Node *temp= (Node *)(malloc(sizeof (Node)));
	 temp=head;
	 while(temp != NULL )
	 {
		 printf("%d\t",temp->data);
		 temp=temp->next;
         }

 }

 void deleteStart(Node **head)
 {
     *head=(*head)->next;
 }
 
 void deleteEnd(Node **head)
 {
        Node *temp= (Node *)(malloc(sizeof (Node)));
        temp=*head;
        while(temp->next->next!=NULL)
        {
           temp=temp->next; 
        }
        temp->next=NULL;
 }
