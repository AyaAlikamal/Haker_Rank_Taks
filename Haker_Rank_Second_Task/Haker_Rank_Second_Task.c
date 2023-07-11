#include <stdio.h>
#include <math.h>
unsigned int *a;
unsigned int *b;
void Get_Values(unsigned int *a , unsigned int *b);
int main(){

scanf("%i\n", &a);
scanf("%i", &b);
// printf("%i", a);
// printf("\n");
// printf("%i", b);
// printf("\n");

Get_Values(&a , &b);

printf("%i\n", a);
printf("%i", b);
return 0;
}
void Get_Values(unsigned int *a , unsigned int *b){
unsigned int Sum  = 0 ;
unsigned int Diff = 0 ;
Sum  = *a + *b ;
Diff = abs(*a - *b) ;
*a = Sum;
*b = Diff;
}
