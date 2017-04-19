#include <stdio.h>

int maxsize = 8;
int top=-1;
int stack[8];




void push(int n) {
  /* code */
  if(top == maxsize){
      printf("stack is full");
  }
  else{
      top =top+1;
      stack[top] = n;
  }
}

int pop() {
  /* code */
  if (top == -1) {
    /* code */
    printf("stack is empty!!!" );
  }
  else{
    int data = stack[top];
    top = top -1;
    printf("%d\n",data );
  }
}

int main()
{
  push(5);
  push(10);
  push(21);
  push(11);


  while (!(top==-1)) {
    /* code */
    pop();
  }






}
