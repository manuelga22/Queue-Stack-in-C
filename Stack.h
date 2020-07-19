
typedef struct {
 int data[1000];
 int top ;
}myStack;

 void push(myStack* self,int data){
    self->data[self->top++] = data;
 }//adding elements

 int pop(myStack *self){
     return self->data[--self->top];
 }//removing elements

 int isEmpty(myStack *self){
   if(self->top == 0){
     return 1;
   }
   return 0;
 }

 void display(myStack self){
   printf("stack: \n ");
   for(int a = 0; a<self.top;a++){
     printf("%d ", self.data[a]);
   }
   printf("top \n ");
 }
