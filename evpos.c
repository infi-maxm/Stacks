#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

char stack[100];
int top=-1;

void push(char x){
        stack[++top]=x;
    
}

char pop(){
        char r=stack[top--];
        return r;
    
}

void postfix(char c){
    if(c!='+' && c!='/' && c!='*' && c!='-'&& c!='^'){
        if(c!='\0')
        push(c-'0');
    }else{
        char op2=pop();
        char op1=pop();
        char result;
        switch(c){
            case '+':result=op2+op1;
                     break;
            case '-':result=op2-op1;
                     break;
            case '*':result=op2*op1;
                     break;
            case '/':result=op1/op2;
                     break;
            case '^':result=pow(op1,op2);
                    break;
            default:exit(1);
                    break;        
        }
        push(result);
    }

}

int main(){
    char str[100];
    printf("Enter the expression:");
    scanf("%s",str);

    int i=0;
    while(str[i]!='\0'){
        postfix(str[i]);
        i++;
    }
    
    char r=pop();
    printf("%d",r);

    return 0;

}