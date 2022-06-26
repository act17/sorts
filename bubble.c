#include <stdio.h>
#include <stdlib.h>

double * bubble(double * array, int size){
	double sorted[size];
	for(int i = 0; i < size; i++)
		sorted[i] = array[i];
	int c = 0;					//Used as a way to ensure that overflows of array access do not occur.
	int d = 0;					//Number that represents the array entries viewed by the program.
	double currentnum,nextnum;			//Used as ways to temporarily store array entries.
	for(int a = 0; a < size; a++){
		for(int b = 1; b < (size - c); b++){	//This for statement runs a routine that moves up the highest value.

			currentnum = sorted[d];		//These are our compared numbers. The value of these operators changes a lot
			nextnum = sorted[d+1];		//While also being imperitive to the function of the algorithim.

			if(currentnum > nextnum){	//Next three lines can be considered the "swap routine".
				sorted[d] = nextnum;	//This makes the current - soon to be previous - entry the lower value.
				d++;			//This increases the entry under inspection by one.
				sorted[d] = currentnum;	//This makes the next - now the current - entry the higher value.
			}
			
			else{				//This routine is the "pass routine".
				d++;			//It simply passes the "currentnum" value to the next entry, this is done via
				currentnum = sorted[d];
			}				//not swapping.

		}

		if(a != (size - 1))
			sorted[d] = currentnum;		//This garuntees that the set-in-stone final value of the entry is the highest.
							//However, this skips if we're on the last number as to avoid issues.
		c++;					//This tells the program that we are on the next pass.
		d = 0;					//This resets our offset.
	}
	for(int i = 0; i < size; i++){
		printf("\nEntry		Sorted		Original");
		printf("\n%d		%lf		%lf",i,sorted[i],array[i]);
	}
	return sorted;	
}
