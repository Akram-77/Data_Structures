#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node* next;
}*newnode,*temp;
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(){
        int n;
struct node *rear=NULL;
void enqueue(){
        int n;
        printf("enter the element to insert in circular queue\t");
        scanf("%d",&n);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=n;
        newnode->next=NULL;
        if(rear==NULL&&front==NULL){
                rear=newnode;
                front=newnode;
        }
        else{
                rear->next=newnode;
                rear=newnode;
                rear->next=front;

        }

}

void dequeue(){
        temp=front;
        printf("the deleted element is : %d\n",temp->data);
        front=front->next;
        temp->next=NULL;
        rear->next=front;

}
void display(){
        temp=front;
        while(temp!=rear){
                printf("the element in th queue is :i %d\n",temp->data);
                temp=temp->next;

        }
        printf("the element in the queue is : %d\n",temp->data);


}
void main(){

        int ch;linked.c" 72L, 1115C
        printf("\n1.enqueue\t2.dequeue\t3.display\t4.exit");
        while(1){
                printf("enter your choice");
                scanf("%d",&ch);
                switch(ch){
                        case 1:
                                enqueue();
                                break;
                        case 2:
                                dequeue();
                                break;
                        case 3:
                                display();
                                break;
                        case 4: 
				exit(0);

                }

        }

}
