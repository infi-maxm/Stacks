#include<stdio.h>
#include<stdlib.h>

//Using array 

#define n 5
int arr[n];
int top=-1;

void push(int data){
    if(top==n-1){
        printf("Stack Overflow\n");
    }else{
        top++;
        arr[top]=data;
    }
}

void pop(){
    if(top==-1){
        printf("Stack Underflow(Empty)\n");
    }else{
    printf("%d",arr[top]);
    top--;}
}

void peek(){
    if(top==-1){
        printf("No data");
    }else{
    printf("%d",arr[top]);
    }
}

void display(){
    for(int i=top;i>=0;i--){
        printf("%d ",arr[i]);
    }
}


int main(){
 int c,a;
 do{
    printf("Enter the option \n1:PUSH\n2.POP\n3.PEEK\n4:DISPLAY\n0:EXIT\n:");
    scanf("%d",&c);

    switch(c){
        case 1: printf("Enter the data to be inserted(pushed):");
                scanf("%d",&a);
                push(a);
                break;
        case 2: pop();
                break;
        case 3: peek();
                break;
        case 4:display();
                break;        
        default : printf("Enter valid position!");
                  break;
    
            }

 }while(c!=0);


}