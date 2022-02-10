#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define size 50
char stack[size];
int top=-1;
void push(char x){
    if(top==size){
        printf("overflow");
    }
    else{
    top=top+1;
    stack[top]=x;
    }
}
char pop(){
    char t;
    if(top==-1){
        printf("stack underflow");
    }
    else{
        t=stack[top];
        top=top-1;
        return(t);
    }
}
int isoperator(char item){
    if(item=='%'||item=='^'||item=='*'||item=='+'||item=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
int precedence(char item){
    if(item=='%'||item=='^'){
        return 3;
    }
    else if(item=='*'||item=='/'){
        return 2;
    }
    else if(item=='+'||item=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
void infix_postfix(char infix[], char postfix[])
{ 
	int i, j;
	char item;
	char x;

	push('(');                            
	strcat(infix,")");                  

	i=0;
	j=0;
	item=infix[i];         

	while(item !='\0')        
	{
		if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item))
		{
			postfix[j] = item;              
			j++;
		}
		else if(isoperator(item) == 1)       
		{
			x=pop();
			if(isoperator(x) == 1 && precedence(x)>= precedence(item))
			{
				postfix[j] = x;                  
				j++;
				x = pop();                
			}
			push(x);
			push(item);             
		}
		else if(item == ')')        
		{
			x = pop();                   
			while(x != '(')               
			{
				postfix[j] = x;
				j++;
				x = pop();
			}
		}
		else
		{ break;
		}
		i++;
        item = infix[i]; 
	} 
    postfix[j] = '\0'; 
}
void main(){
    char infix[size],postfix[size];
    printf("enter a infix expression :");
    gets(infix);
    infix_postfix(infix,postfix);
    printf("infix expression is: (");
    puts(infix);
    printf("posrfix expression is :");
    puts(postfix);
}

