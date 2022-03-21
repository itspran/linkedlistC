#include <stdio.h>
#include <stdlib.h> // malloc

typedef struct node
{
  int number; // int linked list
  struct node *next; // node contains pointer to another node
}
node; 

int main(void) {
  node *list = malloc(sizeof(node)); // find space in memory for list
  if(list == NULL) // check for memory fail
  {
    return 1;
  }
  list ->number=1; // assign number to first member of list


  node *n = malloc(sizeof(node)); // find space in memory for new node
  if(n == NULL) 
  {
    free(list); // free first node
    return 1; 
  }
  n->number = 2;
  n->next = NULL;
  list->next = n; //connect first node to new node

  
  n = malloc(sizeof(node)); 
  if(n==NULL)
  {
    free(list->next); //free latest node
    free(list); // free first node
    return 1;
  }
  n->number = 3;
  n->next=NULL;
  list->next->next=n; // link recent connected node to new node

  for(node *temp=list; temp!=NULL; temp = temp->next) // for first node while node is not a null value iterate through what current node points to
  {
    printf("%i",temp->number);
  }



}