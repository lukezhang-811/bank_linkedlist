#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include "ssv.h"
#include "linked.h"

int main(int argc, char *argv[]) {
	// initialize the variables that are going to be used
	int account;
	float amount;
	char array[50];
	
	// opens the ssv file
	FILE *records=fopen("students.ssv", "rt");
	while(fgets(array, 49, records)!=NULL) {
		// calls the different functions in proper order
		parse(array, &account, &amount);
		findUpdate(account, amount);
	}
	prettyPrint();
	return 0;
}
