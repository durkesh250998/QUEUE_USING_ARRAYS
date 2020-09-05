#include<stdio.h>
#include<stdlib.h>
#define size 3
void enqueue(int queue[],int front,int rear);
void dequeue(int queue[],int front,int rear,int element);
void display(int queue[],int front,int rear);
int main(){
       int front=-1;
       int rear=-1;
       int queue[3];
       enqueue(queue,front,rear);
       

     
       return 0;
}
void enqueue(int queue[],int front,int rear){
    int element;
    int i=0;
    while(i<size){
            if(rear==size-1){
                            printf("QUEUE FULL");
                            }
            else{
                            scanf("%d",&element);
                            if(front==-1){
                                        front=0;
                            }
                            rear++;
                            queue[rear]=element;
                            }
            i++;
            }
    display(queue,front,rear);
    dequeue(queue,front,rear,i);
}
void dequeue(int queue[],int front,int rear,int element){
    int total;
    printf("enter total times to dequeue");
    scanf("%d",&total);
    total=rear-total;
    printf("FRONT - > %d\n",front);
    printf("REAR -> %d\n",rear);
    while(total<rear){
            if(rear==-1 || front>rear){
                     printf("UNDERFLOW");
                 }
            else{
                    front++;
                    
                }
            total++;
    }
    printf("FRONT -> %d\n",front);
    display(queue,front,rear);
}
void display(int queue[],int front,int rear){
  int i;
  if(rear==-1 || front>rear){
                    printf("EMPTY QUEUE");
                    
  }
  else{
        for(i=front;i<=rear;i++){
                        printf("%d",queue[i]);
        
    }
}}