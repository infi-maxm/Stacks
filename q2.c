#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stack[100];
int top=-1;

void push(char c){
    if(c=='\0'){
        printf("String finish");
    }
    top++;
    stack[top]=c;
}

char pop(){
    if(top==-1){
        printf("string finish");
    }
    char c=stack[top];
    top--;
    return c;

}

int main(){
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0,j=0;
    while(str[i]!='\0'){
        push(str[i]);
        i++;
    }
    char rev[100];
    while(top>=0){
        rev[j]=pop();
        j++;
    }
    rev[j]='\0';
    if(strcmp(str,rev)==0){
        printf("palindrome");
    }else{
        printf("not pallindrome");
    }

    return 0;

}