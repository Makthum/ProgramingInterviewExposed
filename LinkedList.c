

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


int main(void)
{
Node *head= (Node *)(malloc(sizeof (Node)));
Node temp;
temp.data=10;
temp.next=NULL;
*head=temp;
insertfront(5,&head);
insertback(15,&head);
printValue(head);

return 0;
}

void insertback(int data, Node **head)
{
	Node *temp1= (Node *)(malloc(sizeof (Node)));
   temp1= *head;

	Node temp;
	temp.data=data;
	temp.next=NULL;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;

	}
	temp1->next=&temp;

}
 void insertfront(int data,Node **head)
{
//	 Node *temp= (Node *)(malloc(sizeof (Node)));
//	temp->data=data;
//	temp->next=*head;
	 Node temp;
	 temp.data=data;
	 temp.next=*head;

	*head=&temp;


}

 void printValue(Node *head)
 {
	Node *temp= (Node *)(malloc(sizeof (Node)));
	 temp=head;
	 while(temp != NULL )
	 {
		 printf("%d",temp->data);
		 temp=temp->next;
         }

 }


