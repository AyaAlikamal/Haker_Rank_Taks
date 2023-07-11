#include <stdio.h>

#define MAX_SIZE 10
unsigned int Array_Size;
unsigned int Counter;
unsigned int Numbers[MAX_SIZE];
void Revers_Function(unsigned int Number[], unsigned int array_size);

int main(){
scanf(" %i\n", &Array_Size);
for(Counter = 0 ; Counter < Array_Size ; Counter++){
    scanf(" %i", &Numbers[Counter]);
}

Revers_Function(Numbers , Array_Size);

}

void Revers_Function(unsigned int Number[], unsigned int length){
unsigned int number[MAX_SIZE] = {0} ;
unsigned int Count = 0 ;
unsigned int n = 0;

for(n = 1 ; n <= length ; n++ ){
   number[Count+ n] = Number[length-n];
   printf("%i ", number[Count+ n]);

}
}