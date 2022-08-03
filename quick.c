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
int qpart(double * a,int mi,int ma){
  int pi = a[ma];
  int in = mi - 1;
  double tm;
  for(int lp = mi; lp < ma; lp++){
    if(a[lp] <= pi){
      in++;
      tm = a[lp];
      a[lp] = a[in];
      a[in] = tm;
    }
  }
  in++;
  tm = a[ma];
  a[ma] = a[in];
  a[in] = tm;
  return in;
}

//This function serves as a wrapper to qpart();.
void qksrt(double * a,int mi,int ma){
  if(mi >= ma || mi < 0)
    return;
  int pa = qpart(a,mi,ma);
  qksrt(a,mi,pa-1);
  qksrt(a,pa+1,ma);
}

//This function servers as a wrapper to the wrapper qksrt();.
void quick(double * a,double * b,int mi,int ma){
  for(int i = 0; i < ma; i++)
    b[i] = a[i];
  qksrt(b,mi,ma - 1);
  return;
}
//Massive thanks to Levi Webb (@jarcode-foss on GitHub) for help with pretty much everything.
