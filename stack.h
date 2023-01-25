#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAXSIZE 2 


typedef struct {
	int stack[MAXSIZE];
	int top;
} STACK;

STACK * createS(){
	STACK * dummy ;
	dummy = (STACK * )malloc(sizeof(STACK));
	dummy -> top = -1;
	return dummy;
}

bool isEmpty(STACK * sample){
	if (sample -> top == -1 ){
		free(sample);
		return true ;
	}
	return false;
}

bool isFull(STACK * sample){
	if (sample -> top == MAXSIZE -1)
		return true;
	return false;
}

int Push (STACK * sample , int value ){
	if (!(isFull(sample))){
	(sample -> top) ++;
	int index = (sample -> top);
	sample -> stack[index] = value;
	return 0;
	} else {
		printf("stack is full");
		return 1;
	}
	
}

int Pop(STACK * sample){
	if (!(isEmpty(sample))){
	int poped_value = sample -> stack[sample -> top];
	sample ->top = '\0';
	sample -> top --;
	
	return poped_value;
	} else {
		printf(" stack is empty ");
		return 0;
	}
}


