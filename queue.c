#include <stdio.h>


int head = -1;
int tail = -1;
int max = 8;
int q[8];

void enq(int data){
  if(tail != max){
    tail = tail +1;
    q[tail] = data;
  }
  else{
    printf("queue is overflowen\n" );
  }
}

void deq(){
  if(head != tail){
    head = head + 1;
    printf("%d\n",q[head]);
  }
  else{
    printf("queue is empty\n" );
  }
}


int main(){
  enq(4);
  enq(5);
  enq(6);
  enq(7);


  while(head != tail){
    deq();
  }

}
