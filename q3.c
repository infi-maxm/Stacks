#include<stdio.h>
#include<stdlib.h>

#define n 2000000
int stack[n];
int top=-1;

void push(int x){
    top++;
    stack[top]=x;
}

int pop(){
    return stack[top--];
}

int main(){
    int dec,rem;
    printf("Enter decimal number:");
    scanf("%d",&dec);
    if(dec==0){
        push(dec);
    }else if(dec==1){
        push(dec);
    }else{
        while(dec!=0){
                rem=dec%2;
                dec=dec/2;
                push(rem);
            }
    }
   
    while(top>=0){
        int num=pop();
        printf("%d",num);
    }

    return 0;
}