#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *next;
} Node;

typedef struct linkedList {
	Node *head;
} LinkedList;

LinkedList *emptyList();

void add(int val, LinkedList *list);
int count(LinkedList *list);