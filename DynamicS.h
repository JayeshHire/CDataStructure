#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


static int TOP;
int Size;
typedef struct {
	char  name[20];
	int SrNo;
	int RollNo;
	char grades;
} column;


column (*)[] CreateC(){
	printf("Tell the size of stack\n");
	scanf("%d", &Size);
	column * StudentData[Size];
	TOP = -1;

	return StudentData;
}

//function for checking if the stack is full
bool isFull(){
	if (TOP == Size -1 ){
		return true;
	} else {
		return false;
	}
}

//function for checking if the stack is empty
bool isEmpty(){
	if (TOP == -1){
		return true;
	} else {
		return false;
	}
}

//function for pushing element to a stack
void Push(column * Stack[]){
	if (!(isFull(Stack))){
	TOP += 1;
	printf("Enter name of student \n");
	scanf("%s",(Stack[TOP]->name));
	printf("\nRollNo\n");
	scanf("%d",&(Stack[TOP]->RollNo));
	printf("\nEnter the grades of student\n");
	scanf("%c",&(Stack[TOP]->grades));
	Stack[TOP]->SrNo = TOP + 1;
	}else {
		printf("stack is full cannot push element to it "); 
	}
}


typedef union {
	column * funreturn;
	int ps;
} Fun;
//function for poping element out of stack
Fun *  Pop(column * Stack []){
	Fun * sample ;
	if(!(isEmpty())){

//	sample = (column *) malloc(sizeof(column));
	sample -> funreturn = Stack[TOP];
	TOP -= 1;
	return sample;
	}
	sample -> ps = 0;
	return sample;
}




