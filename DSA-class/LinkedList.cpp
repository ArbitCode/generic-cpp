#include<iostream>
#include "../header/LinkedList.h"

void printListNode(Node *head){
		Node *temp = head;
		
		while(temp!=NULL){
			std::cout<<temp->data<<"->";
			temp=temp->next;
		}
		std::cout<<"NULL"<<"\n";
	}

Node *insertBegin(Node *head, int val){
		Node *temp = new Node(val);
		if(head == NULL) return temp;
		temp->next=head;
		return temp;
	}

Node *insertBitween(Node *head, int k, int val){
		Node *temp = new Node(val);
		if(k==0) return insertBegin(head,val);
		Node *curr = head;		
		while(k>0 && curr->next!=NULL){
			curr=curr->next;
			k--;
		}
		if(curr->next==NULL && k==1) return insertEnd(head, val);
		if(k==0){
			temp->next=curr->next;
			curr->next=temp;
			return head;
		}

		if(k!=0) std::cout<<"invalid value of K"<<"\n";
		return head;
	}

Node *insertEnd(Node *head, int val){
		Node *temp = new Node(val);
		if(head == NULL) return temp;

		Node *itr=head;
		while(itr->next!=NULL) itr=itr->next;
		itr->next=temp;
		return head;
	}
	
Node *deleteBegin(Node *head){
		if(head==NULL || head->next==NULL) return NULL;
		head=head->next;
		return head;
	}

Node *deleteBitween(Node *head, int k){
	if(head==NULL || head->next == NULL) return NULL;
	if(k==0) return deleteBegin(head);
	Node *curr = head;
	while(k>0 && curr->next!=NULL){
		curr=curr->next;
		k--;
	}
	if(curr->next==NULL && k==1) return deleteEnd(head);

	if(k==0){
		Node *temp = curr->next;
		curr->next=temp->next;
		delete temp;
		return head;
	}
	if(k!=0) std::cout<<"invalid value of K"<<"\n";
		return head;
	}

Node *deleteEnd(Node *head){
		if(head==NULL || head->next==NULL) return NULL;
		Node *temp=head;

		while(temp->next->next!=NULL) temp=temp->next;
		Node *delNode = temp->next;
		temp->next=NULL;
		delete delNode;
		return head;
	}

Node *findMid(Node *head){
	Node *slow = head;
	Node *fast = head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast = fast->next->next;
	}
	return slow;
	}

Node *reverseList(Node *head){
	Node *prev = NULL;
	Node *curr = head;
	while(curr!=NULL){
		Node *next = curr->next;
		curr->next = prev;
		prev=curr;
		curr=next;
		}
	return prev;
	}

