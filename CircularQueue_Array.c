#include<stdio.h>
#include<stdlib.h>
#define max 5
int q[max],front=0,rear=0,count=0;
void enqueue(){
    int n;
    printf("enter the element");
    scanf("%d",&n);
    if(count==max){
        printf("OVERFLOW");
    }
    else{
        q[rear]=n;
        rear=(rear+1)%max;
        count++;
    }
}
void dequeue(){
    if(count==0){
        printf("Empty\n");
    }
    else{
        printf("the deleted element is %d",q[front]);
        front=(front+1)%max;
        count--;
    }
}
void display(){
        int i;
   /* if(count==max){
     //   for(i=0;i<max;i++){
       //     printf("the elements in queue is %d",q[i]);
   }
    }*/
    if(count>0){
        for(i=front;i!=rear;i=(i+1)%max){
            printf("\nThe elements in queue is : %d",q[i]);
        }
     }
     else{
         printf("It is empty");
     }

}
void main(){
    int ch;
    printf(" 1.enqueue\n2.dequeue\n3.display\n4.exit\n");
    while(1){
        printf("\nenter your choice");
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
