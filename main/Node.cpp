#include<iostream>
#include "./header/LinkedList.h"

int main(){

	Node *head = NULL;

	head= insertBegin(head, 10);
	head= insertBegin(head, 20);
	head= insertBegin(head, 30);
	head= insertBegin(head, 50);
	head= insertBegin(head, 60);
	head= insertBegin(head, 70);
	printListNode(head);
	head= reverseList(head);
	printListNode(head);
return 0;

}