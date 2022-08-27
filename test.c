#include <stdio.h>
#include <stdlib.h>
#include "sorts.h"

int main(){
  int size;
  int choice;

  printf("\n\nSelect your sorting algorithm:");
  printf("\n0 = Bubble sort\n1 = Quick sort\n");
  printf("Choice:	");
  scanf("%d",&choice);

  printf("\n\nEnter the size of your array:	");
  scanf("%d",&size);

  double a[size];
  double b[size];

  printf("\n\nEnter the entries of your array:");
  for(int i = 0; i < size; i++){
    printf("\nEntry %d:	",i+1);
    scanf("%lf",&a[i]);
  }
  
  switch(choice){
    case 0:
      bubble(a,b,size);
      break;
    case 1:
      quick(a,b,size);
      break;
    default:
      bubble(a,b,size);
      break;
  }
      
  for(int i = 0; i < size; i++)
    printf("\nEntry %d:		%lf",i,b[i]);
  return 0;
}
