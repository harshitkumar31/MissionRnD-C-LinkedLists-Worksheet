/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {

	int temp = N;

	if (N < 0)
		temp *= -1;
	int num=temp;
	struct node* curr;
	struct node* prev;
	prev = NULL;
	//curr = (struct node*)malloc(sizeof(struct node));

	if (temp == 0){
		curr = (struct node*)malloc(sizeof(struct node));
		curr->num = num;
		curr->next = prev;
		return curr;
		}

	while (temp > 0){
		num = temp % 10;
		curr = (struct node*)malloc(sizeof(struct node));
		curr->num = num;
		curr->next = prev;
		prev = curr;
		temp = temp / 10;
		}


	return curr;
}