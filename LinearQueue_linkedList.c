#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*newnode,*temp;
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(){
        int n;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value \t");
        scanf("%d",&n);
        newnode->data=n;
        newnode->next=NULL;
        if(front==NULL && rear==NULL){
            front=newnode;
            rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }


}
void dequeue(){
    temp=front;
    printf("the deleted element is %d ",temp->data);
    front=front->next;
    temp->next=NULL;
}
void display(){
    printf("queue elements are :\n");
    temp=front;
    while(temp!=NULL){
        printf("\t%d\n",temp->data);
        temp=temp->next;
    }

}
void main(){
    int ch;
    printf(" 1.enqueue\n2.dequeue\n3.display\n4.exit");
    while(1){
        printf("enter the choice");
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
                break;
        }
    }
}
