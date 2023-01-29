#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int TOP = -1 ;
int * CreateS(int Size){

	int *stack ;
	stack = malloc(Size*sizeof(int));
	return stack;
}

//check if stack is full
bool isFull(int * stack){
	if (TOP == sizeof(stack)/sizeof(int) - 1){
		return true;
	} else {
		return false;
	}
}

bool isEmpty(){
	if (TOP == -1){
		return true;
	} else {
	return false; }
}

//function for pushing element to the stack
void Push(int * stack){
	if(!(isFull(stack))){
		TOP += 1;
		printf("\nEnter element in the stack\n");
		scanf("%d",stack + TOP);
	} else {
	       printf("stack is Full");
	}	       
}



//function for poping elements out of stack
int Pop(int * stack){
	if(!(isEmpty(stack))){
		int element = *(stack + TOP);
		TOP -= 1;
		return element;
	} else {
		
		printf("stack is empty");
		return -1;
	}
}

//function for increasing size of an array
int * ArrSizeIncre(int * stack,int newSize){
	stack = realloc(stack, newSize*sizeof(int));
	return stack;
}

	


//int main(){

