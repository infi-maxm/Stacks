#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stack[100];
int top=-1;

void push(char x){
    top++;
    stack[top]=x;
}

char pop(){
    int a = top;
    top--;
    return stack[a];
}

int main(){
    char str[100];
    int c=0;
    printf("Enter the string:");
    scanf("%s",str);
    for(int i=0;i<(strlen(str)/2);i++){
              push(str[i]);
    }

    if(strlen(str)%2!=0){
        for(int i=(strlen(str)/2)+1;i<strlen(str);i++){
            if(str[i]!=pop()){
                printf("Not a pallindrome");
                break;
            }
         }
    }
    else{
        for(int i=(strlen(str)/2);i<strlen(str);i++){
                  if(str[i]!=pop()){
                    printf("Not a pallindrome");
                    break;
                  }
    
        }
    }

    if(c==(strlen(str)/2)){
        printf("Yes a pallindrome");
    }

}
   
      