#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int top=-1;
char stack[100];

void push(char x){
    stack[++top]=x;
}

char pop(){
    if(top==-1){
        printf("Stack underflow");
        return 0;
    }else{
        return stack[top--];
    }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char str[100];
    printf("Enter the expression:");
    fgets(str,100,stdin);
    int count=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            push(str[i]);
        }else if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(!isEmpty()){
               char peek=pop();
               if(peek=='(' && str[i]==')'){
                 count++;
               }else if(peek=='[' && str[i]==']'){
                 count++;
               }else if(peek=='{' && str[i]=='}'){
                 count++;
               }      
            }  
        }
    }

    printf("Output:%d",count);
    return 0;

}