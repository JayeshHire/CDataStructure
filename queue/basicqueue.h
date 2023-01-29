#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int * queue;
	int front ;
	int rear ;
	int max;
} Q;


Q * CreateQ(int MAX_SIZE){
	
	Q * FreshQ;
	FreshQ = (Q *) malloc(sizeof(Q));
	FreshQ -> queue=(int *)malloc(MAX_SIZE*sizeof(int));
	FreshQ -> front = -1;
	FreshQ -> rear = -1;
	FreshQ -> max = MAX_SIZE;
	return FreshQ;
}

//function for removing element out of queue
int  deleteq(Q * sample){
	int result;
	if (sample -> front == sample -> rear ){
		printf("queue is empty");

		return -1;
	} else {
		(sample -> front) = (sample -> front) + 1;
		result = *(sample->queue + sample->front);
		return result;
	}
}

//function for adding element 
int Insertion(Q * sample , int element){
	if (sample -> rear == sample->max -1){
		printf("queue is full");
		return 1;
	} else {
		(sample -> rear) =  sample->rear + 1 ;
		*(sample -> queue + sample-> rear ) = element ;
		return 0;
	}
}

//function for displaying element of the queue
void display(Q * sample){
	int f = sample -> front;
	int r  = sample -> rear;
	for (int i= f + 1 ; i<= r; i++){
	       printf("%d \t\t ",*(sample -> queue + i));
	}
}	


