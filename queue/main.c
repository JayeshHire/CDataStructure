#include "basicqueue.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	int ch;
	Q * queue;
	while(1){
	printf("\n1.create a queue \n2.Enter an element into the queue \n3.delete an element out of queue \n4.display all elements of queue from old to new\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			int Size;
			printf("Enter the size of the queue\n");
			scanf("%d",&Size);
			queue = CreateQ(Size);
			break;
		case 2:
			int element;
			printf("Enter the element : \n");
			scanf("%d",&element);
			int res = Insertion(queue , element);
			if (res == 0){
				printf("Insertion of %d is successfull", element);
			}
			break;
		case 3:
			int delelem ;
			delelem = deleteq(queue);
			if (delelem != -1){
				printf("deleted element is %d ",delelem);
			}
			break;
		case 4:
			display(queue);
			char newline ;
			scanf("%c",&newline);
			if (newline == '\n'){
			printf("\n");
			}
			break;
		default :
		//	free(queue);
//			free(queue -> queue);
			exit(0);
	}
	}
}
				



