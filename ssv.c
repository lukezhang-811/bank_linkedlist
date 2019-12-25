#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void parse(char record[], int *acct, float *amnt) {
	// scans from an array for the two elements account and amount
	sscanf(record, "%d %f", acct, amnt);	
}

// NAME: Luke Zhang
// ID: 260771133
