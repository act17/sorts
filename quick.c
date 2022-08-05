#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*==============================*/
/*This algorithim was made by	*/
/*Nico Lomuto, and provided by	*/
/*Wikipedia.			*/
/*All I did was translate it	*/
/*into pseudocode!		*/
/*==============================*/

//This function partitions and sorts the array into two halves.
int qpart(double * array,int min,int max){
  int pivot = array[max];
  int index = min - 1;  		//This is the numeric value of the index which the two partitions split.
  double temp;
  for(int i = min; i < max; i++){
    if(array[i] <= pivot){		//This routine places numbers on their correct position.
      index++;
      temp = array[i];
      array[i] = array[index];
      array[index] = temp;
    }
  }
  index++;
  temp = array[max];			//This swap is made to correct the index position.
  array[max] = array[index];
  array[index] = temp;
  return index;
}

//This function serves as a wrapper to qpart();.
void qksrt(double * array,int min,int max){
  if(min >= max || min < 0)
    return;
  int partition = qpart(array,min,max);
  qksrt(array,min,partition-1);
  qksrt(array,partition+1,max);
}

//This function servers as a wrapper to the wrapper qksrt();.
void quick(double * array,double * fillin,int min,int max){
  for(int i = 0; i < max; i++)
    fillin[i] = array[i];
  qksrt(fillin,min,max - 1);	//Since max is equal to inclusive size, the "max - 1" corrects this.
  return;
}
//Massive thanks to Levi Webb (@jarcode-foss on GitHub) for help with pretty much everything.
