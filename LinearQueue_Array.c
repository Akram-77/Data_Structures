#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max],front=0,rear=0;
void enqueue(){
    int item;
    if(rear==max){
        printf("Queue is max");
    }
    else{
        printf("enter the element : ");
        scanf("%d",&item);
        a[rear]=item;
        rear=rear+1;
    }
}
void dequeue(){
    if(front==rear){
        printf("queue is empty");
    }
    else{
        printf("dequeued item is %d",a[front]);
        front=front+1;
    }
}
void display(){
    int i;
    for(i=front;i<rear;i++){
        printf("the elements in queue is %d\n ",a[i]);

    }
}
void main(){
    int ch;
    printf(" 1.enqueue\n2.dequeue\n3.display\n4.exit\n");
   while(1){
        printf("choose the option");
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
            default:
                printf("wrong choice");
                break;
        }

    }
}
