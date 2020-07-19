#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Queue.h"


int main(void) {
  Queue q1;
  q1.stack1.top=0;
  q1.stack2.top=0;

  enqueue(&q1,3);
  enqueue(&q1,2);
  enqueue(&q1,2);
  enqueue(&q1,5);
  dequeue(&q1);
  displayQ(&q1);

  return 0;
}