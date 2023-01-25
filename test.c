#include <stdio.h>
#include "stack.h"
#include <stdlib.h>
int main(){
	int choice;
	
	while(1){
	printf("\nEnter valid choice for ADT for stack :\n1.creating a stack .\n2.pushing element to a stack. \n3.poping element out of stack .\n4.check whether the stack is empty\n5.check whether the stack is full.\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			STACK * MYstack = createS();
			break;
		case 2:
			printf("Enter the value to be pushed into the stack .\n");
			int val;
			scanf("%d",&val);
			Push(MYstack,val);
			break;
		case 3:
			int popedValue = Pop(MYstack);
			printf("Poped value is %d", popedValue);
			break;
		case 4:
			bool check = isEmpty(MYstack);
			if (check){
				printf("stack is empty");
			} else {
				printf("stack is not empty");
				}
			break;
		case 5:	
			check = isFull(MYstack);
			if (check){
				printf("stack is full");
			} else {
				printf("stack is not full");
			}
			break;
		default:
			printf("terminal is exiting.... ");
			exit(0);
			break;
	}
	}
	
	return 0;
}
