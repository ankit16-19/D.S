#include <stdio.h>
#include<stdlib.h>


struct node{
  int data;
  struct node *next;
};

struct node *head = NULL;


void create(int data){
  struct node *new,*curr;
  new = (struct node*)malloc(sizeof(struct node));
  new->data = data;
  new->next = NULL;
  if(head==NULL)
  {
    head = new;
    curr = new;
  }
  else{
    curr->next = new;
    curr = new;
  }
}

void display(){
  struct node *new;
  new = head;
  while(new!=NULL){
    printf("%d--->",new->data );
    new = new->next;
  }
  printf("NULL");
}
void insert(int x ,int key){
  struct node *new,*curr;
  new = (struct node*)malloc(sizeof(struct node));

  curr = head;
  while(curr!=NULL){
    if(curr->data == key){
      new->data = x;
      new->next = curr->next;
      curr->next = new;
    }
  curr = curr->next;
  }

}


int main(){
create(10);
create(30);
create(40);
insert(25,40);
display();

}
