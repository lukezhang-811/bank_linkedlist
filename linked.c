#include<stdio.h>
#include<stdlib.h>

// creating the head node
struct ACCOUNT {
	int accountNumber;
	float balance;
	struct ACCOUNT *next;
};
struct ACCOUNT *head = NULL; 

void findUpdate(int account, float amount) {
	// create a temporary node
	struct ACCOUNT *node = malloc(sizeof(struct ACCOUNT));
	node->accountNumber=account;
	node->balance=amount;
	node->next=NULL;
	// more temporary nodes
	struct ACCOUNT *prev;
	struct ACCOUNT *temp;
	// an int that indicates whether or not there is an account that matches the inputted account
	int foundIt=0;
	if(head==NULL) {
		// node only replaces head if there's nothing in head
		head=node;
	} else {
		// store head node in temp
		temp=head;
		while(temp!=NULL) {
			// adding to the balance of the corresponding account number
			if(temp->accountNumber==account) {
				temp->balance+=amount;
				node=NULL;
				foundIt=1;
			}
			prev=temp;
			temp=temp->next;
		}
		// if no account number matched, add the node to the an empty node
		if(foundIt==0) {
			prev->next=node;
		}
	}
}

// pretty basic print function that goes through the linked list and print all of the data
void prettyPrint() {
	struct ACCOUNT *temp=head;
	while(temp!=NULL) {
		printf("ACCOUNT ID: %d BALANCE: %.2f\n", temp->accountNumber, temp->balance);
		if(temp->next!=NULL) {
			temp=temp->next;
		} else {
			break;
		}
	}
}
