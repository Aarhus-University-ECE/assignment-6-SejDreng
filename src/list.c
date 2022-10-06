#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
    int t = 0;
    node *p = l;
    // Doing a whileloop to update the pointer p, and counting untill last element.
    while (p->next != NULL)
    {
      p = p->next;
      t++;
    }

    printf("%d", t);


    return -1;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next;
    node *head = l;
    while (p!=NULL){
      if(p->data == head->data){
        continue;
      }
      else{
        printf("%d, ",p->data);
        p = p->next;
      }
    }
    printf("%d, ",p->data); // Printing p -> data, when p -> next == NULL.
    printf("\n"); 
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
    node *p = l->next;
    node *head = l;
    int temp = 0;
    while (p!=NULL){
      if(p->data == head->data){
        continue;
      }
      else{
        if (p->data > temp){
          temp = p->data;
        }
        p = p->next;
      }
    }
    if (p->data > temp){
          temp = p->data;
        }
    printf("%d, ",temp); // Printing p -> data, when p -> next == NULL.
    printf("\n"); 
    return -1; 
}

