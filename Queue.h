#include <stdio.h>
#include "Stack.h"
 
  typedef struct{
     myStack stack1;
     myStack stack2;
  }Queue;

   void enqueue (Queue *self, int x){
       
        while (isEmpty(&(self->stack1))!=1) 
        {  
            push(&(self->stack2),pop(&(self->stack1)));
        }     
        push(&(self->stack1),x);
        // Push everything back to s1  
        while (isEmpty(&(self->stack2))!=1)  
        {  
          push(&(self->stack1),pop(&(self->stack2))); 
            //s2.pop();  
        } 
    }
    void dequeue(Queue *self){
         // if first stack is empty  
        if (isEmpty(&(self->stack1))==1){  
            return; 
        }   
        pop(&(self->stack1));
    }

    void displayQ(Queue *self){
      printf("Queue: \n");
      for(int a =0;a<self->stack1.top;a++){
        printf("%d ", self->stack1.data[a]);
      }
      printf(" front \n");
    }
