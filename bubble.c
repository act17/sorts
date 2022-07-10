#include <stdio.h>
#include <stdlib.h>
double * sorted;

double * bubble(double * array, int size){
	sorted = malloc(sizeof(size));
	for(int i = 0; i < size; i++)
		sorted[i] = array[i];
	int c = 0;					//Number that represents the array entries viewed by the program.
	double currentnum,nextnum;			//Used as ways to temporarily store array entries.
	for(int a = 0; a < size; a++){
		for(int b = 1; b < size - a; b++){	//This for statement runs a routine that moves up the highest value.

			currentnum = sorted[c];		//These are our compared numbers. The value of these operators changes a lot
			nextnum = sorted[c+1];		//While also being imperitive to the function of the algorithim.

			if(currentnum > nextnum){	//Next three lines can be considered the "swap routine".
				sorted[c] = nextnum;	//This makes the current - soon to be previous - entry the lower value.
				c++;			//This increases the entry under inspection by one.
				sorted[c] = currentnum;	//This makes the next - now the current - entry the higher value.
			}
			
			else{				//This routine is the "pass routine".
				c++;			//It simply passes the "currentnum" value to the next entry, this is done via
				currentnum = sorted[c];
			}				//not swapping.

		}

		if(a != (size - 1))
			sorted[c] = currentnum;		//This garuntees that the set-in-stone final value of the entry is the highest.
							//However, this skips if we're on the last number as to avoid issues.
		c = 0;					//This resets our offset.
	}
	/*for(int i = 0; i < size; i++){
		printf("\nEntry		Sorted		Original");
		printf("\n%d		%lf		%lf",i,sorted[i],array[i]);
	}*/
	return sorted;
}
