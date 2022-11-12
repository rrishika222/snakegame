#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
 void display(struct Node* start)
{ while(start!=NULL)
{ printf("%d\n",start->data);
 start=start->next;
}}
struct Node *insert(struct Node*start)
{ struct Node *new=(struct Node*)malloc(sizeof(struct Node));
  new->prev= NULL;
  new->data=7;
  new->next=start->prev;
    return new; 
    }
int main()
{ struct Node *head,*first,*second,*third;
 head =(struct Node*)malloc(sizeof(struct Node));
 second=(struct Node*)malloc(sizeof(struct Node));
 third=(struct Node*)malloc(sizeof(struct Node));
 head->prev=NULL;
 head->data=5;
 head->next=second;
 //second 
 second->prev=head->next;
 second->data=6;
 second->next=third;
 //third
 third->prev=second->next;
 third->data=8;
 third->next=NULL;
 insert(head);
 head=display(head);
 display(head);
 


    return 0;
}