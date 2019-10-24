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

//struct node * remove(struct node *front, int data){ // currently has seg fault runtime error
	 // struct node *prev;
	 // struct node *n1 = malloc(sizeof(struct node));
	 // n1 = NULL;
	 // struct node *first = front;
	 // while(front != NULL){
		 // if (front-> i == data){
			 // n1 = front;
			 // break;
		 // }
		 // prev = front;
		 // front = front-> next;
	 // }
	 // if (n1 != NULL){
		// prev->next = n1 -> next;
		// free_list(n1);
	 // }
	 // return front; 
	 
//}