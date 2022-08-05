#include <stdio.h>
#include <stdlib.h>

void Z(int nr, int* arr){
        arr[nr] = 0;

}


void I(int nr, int* arr){
        arr[nr] = arr[nr] + 1;

}
/*
void T(int* arr1, int* arr2){
        &arr1 = &arr2;

}
*/
int J(  int* arr1, int* arr2,    int i){
  if( &arr1 > &arr2){
      return i;
  }
}
int main(int na, char * args[])
{


               //na = 5;
               printf("Programata e povikana s ime: %s\n", args[0]);
               //args[1] = '';
               for(int i = 1; i < na; i++){
                              printf("#%d: %s\n", i, args[i] );
                              //arr[i-1] = i;
                              //printf("#%d: %s\n", i, arr[i] );
               }

               int N = 2;
               int brn = 1;
                int* arr;
               while(brn <= N){
                                             int r;
                                             char* v;
                            int a =  scanf("%d", &r);
                            scanf("%s", &v);
                              arr[a] = a;
                              brn++;

               }

int M = na;
                    for(int i = 1; i < M; i++){
                              printf("#%d: %d\t",arr[i], arr[i] );
               }

Z(2, arr);
I(2, arr);
//T(arr, arr+1);

                    for(int i = 1; i < M; i++){
                              printf("#%d: %d\t",arr[i], arr[i] );
               }
               int command = J(  arr, arr+1,    2);
               na = command;

               //args[na] = 2;
  //  printf("Hello world!\n");
    return 0;
}
