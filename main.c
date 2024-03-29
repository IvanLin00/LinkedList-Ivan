#include "header.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
	 struct node *n1= malloc(sizeof(struct node));
	 n1 = NULL;
	 printf("Printing empty list:\n");
	 print_list(n1);
	 printf("Adding #s 0-9 to list.\n");
	 for (int i = 0; i<10; i++){
		 n1=insert_front(n1,i);
	 }
	 print_list(n1);
	 printf("Freeing list.\n");

	 printf("Removing node with data 4.\n");
	 n1 = remove_node(n1,4);
	 print_list(n1);
	 printf("Removing node with data 9.\n");
	 n1 = remove_node(n1,9);
	 print_list(n1);
	 printf("Removing node with data 11.\n");
	 n1 = remove_node(n1,11);
	 print_list(n1);

	 for (int i = 0; i<8; i++){
		 printf("Freeing node: %d\n",n1-> i);
		 n1 = free_list(n1);
	 }
	 printf("Printing list:\n");
	 print_list(n1);
	 return 0;
}
