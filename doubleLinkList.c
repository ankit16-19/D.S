#include <stdio.h>
#include <stdlib.h>


struct node{
  int coff;
  int pow;
  struct node *next;
};

struct node *poly1=NULL,poly2=NULL,poly=NULL;

void create(struct node *node){
  char ch;

  do {
    /* code */
    printf("enter coefficient:\n");
    scanf("%d\n",&node->coff );
    printf("enter power:\n");
    scanf("%d\n",&node->pow );
    node->next = (struct node*)malloc(sizeof(struct node));
    node = node->next;
    node->next = NULL;
    printf("want to add another:\n");
  } while(ch=='y' || ch == 'Y');
}

void show(struct node *node){
  while(node!=NULL){
    printf("%dx^%d",node->coff,node->pow);
    if(node!=NULL){
      printf("+");
    }
    node = node->next;
  }
}

void add(struct node *poly1,struct node *poly2,struct node *poly){
  while(poly1!=NULL && poly2!=NULL){
    if(poly1->pow > poly2->pow ){
        poly->coff = poly1->coff;
        poly->pow = poly1->pow;
        poly1 = poly1->next;
    }
    else if(poly1->pow < poly2->pow ){
      poly->coff = poly2->coff;
      poly->pow = poly2->pow;
      poly1 = poly2->next;
    }
    else{
      poly->coff = poly1->coff + poly2->coff;
      poly->pow = poly1->pow;
      poly1 = poly1->next;
      poly2 = poly->next;
    }
    poly->next = (struct node*)malloc(sizeof(struct node));
    poly = poly->next;
    poly->next = NULL;

  }
}


int main(){
  poly1 = (struct node*)malloc(sizeof(struct node));
  poly2 = (struct node*)malloc(sizeof(struct node));
  poly = (struct node*)malloc(sizeof(struct node));
  printf("enter first number:\n");
  create(poly1);
  printf("Enter second number:\n");
  create(poly2);
  printf("showing first numebr:\n");
  show(poly1);
  printf("showing second numebr:\n");
  show(poly2);
  add(poly1,poly2,poly);
  show(poly);
}
