#ifndef MY_CLASS_H
#define MY_CLASS_H

class Node
{
public:
	int data; Node *next;
	Node(int val){
		data=val;
		next = NULL;
	}	
};

void printListNode(Node*);
Node *insertBegin(Node *, int);
Node *insertEnd(Node*, int);
Node *deleteBegin(Node*);
Node *deleteEnd(Node *);
Node *insertBitween(Node *,int, int);
Node *deleteBitween(Node *, int);
Node *findMid(Node *);
Node *reverseList(Node *);
#endif
