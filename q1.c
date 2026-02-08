#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char str[100]="Day is beautiful";
int top=-1;

void push(char c){
    char stack;
    if(top==strlen(str)-1){
        printf("string finish");
    }else{
        top++;
        stack=c;
    }

}

void pop(){

    printf("%c",str[top]);
    top--;
}

int main(){
    int i=0;
    while(str[i]!='\0'){
        push(str[i]);
        i++;
    }

    while(top>=0){
        pop();
    }

    return 0;
}