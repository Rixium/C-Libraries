#include "linkedlist.h"

LinkedList *emptyList() {
	LinkedList *list = malloc(sizeof(LinkedList));
	list->head = NULL;
	return list;
}

Node *createNode(int val) {
	Node *node = malloc(sizeof(Node));
	node->value = val;
	node->next = NULL;
	return node;
}

void add(int val, LinkedList *list) {
	Node *current = list->head;
	if(list->head == NULL) {
		 list->head = createNode(val);
		 return;
	}
	current = list->head;
	while(current->next != NULL) {
		current = current->next;
	}
	current->next = createNode(val);
}

int count(LinkedList *list) {
	Node *current = NULL;
	if(list->head == NULL) {
		return 0;
	}
	int currentCount = 0;
	current = list->head;
	while(current != NULL) {
		currentCount++;
		current = current->next;
	}
	
	return currentCount;
}