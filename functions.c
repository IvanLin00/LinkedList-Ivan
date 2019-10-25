#include <stdlib.h>
#include <stdio.h>
#include "header.h"

void print_list(struct node *n ){
	 printf("[");
	 while(n != NULL){
		 if(n->next == NULL){
			 printf("%d",n->i);
			 break;
		 }
		 printf("%d,",n->i);
		 n = n->next;
	 }
	 printf("]\n");
}

struct node * insert_front(struct node *n, int data){
	 struct node *n1 = malloc(sizeof(struct node));
	 n1 -> i = data;
	 n1 -> next = n;
	 return n1;
}

struct node * free_list(struct node *n){
	 struct node *freeNode = n;
	 n = n->next;
	 freeNode = NULL;
	 free(freeNode);
	 return n;
}

struct node * remove_node(struct node *front, int data){
	 struct node *prev = malloc(sizeof(struct node));
	 struct node *n1 = malloc(sizeof(struct node));
	 n1 = NULL;
	 prev = NULL;
	 struct node *first = front;
	 while(first != NULL){
		 if (first-> i == data){
			 n1 = first;
			 break;
		 }
		 prev = first;
		 first = first-> next;
	 }
	 if (n1 != NULL){
		 if(prev == NULL){
			 front = n1 -> next;
		 }
		 else{
			 prev->next = n1 -> next;
		 }
		free_list(n1);
	 }
	 return front;

}
