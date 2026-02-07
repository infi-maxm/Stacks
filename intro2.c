#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node*next;
};

struct node*top=NULL;

void push(int data){
    struct node*newn=(struct node*)malloc(sizeof(struct node));
    newn->next=top;
    newn->data=data;
    top=newn;
}

void pop(){
    struct node*ptr=top;
    if(ptr==NULL){
        printf("Empty stack");
        return ;
    }else{
        printf("%d",top->data);
        top=top->next;
        free(ptr);
    }
}

void peek(){
    if(top==NULL){
        printf("Empty stack");
        return ;
    }else{
        printf("%d",top->data);
    }
}

void display(){
    struct node*ptr=top;
    if(ptr==NULL){
        printf("Empty stack");
        return ;
    }else{
        while(ptr!=NULL){
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
    }
}

int main(){
    int c,data;

    do{
        printf("Select the option below:\n");
        printf("1:push\n");
        printf("2:pop\n");
        printf("3:peek\n");
        printf("4:display\n");
        printf("0:exit\n");
        scanf("%d",&c);

        switch(c){
            case 0: printf("Exit");  
                    break;
            case 1: printf("Enter the data to be entered:");
                    scanf("%d",&data);
                    push(data);
                    break;
            case 2:pop();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;             
            default:printf("Please choose valid option");
                    break;
        }
    }while(c!=0);

}
