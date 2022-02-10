#include<stdio.h>
int stack[100],i,top=-1,n,choice=0;
void push(){
    int val;
    if(top==n){
        printf("Overflow");
    }
    else{
        printf("enter the value to enter in stack\t");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop(){
    if(top==-1){
        printf("underflow");
    }
    else{
        top=top-1;
    }
}
void diaplay(){
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    if(top==-1){
        printf("stack is empty");
    }
}
void main(){
    printf("Enter the no.of elements in stack\t");
    scanf("%d",&n);
    while(choice!=4){
        printf("Enter the choice");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit\t"); 
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                diaplay();
                break;
            case 4:
                printf("existing");
            default:
                printf("enter a valid choice");
        }

    }
}
