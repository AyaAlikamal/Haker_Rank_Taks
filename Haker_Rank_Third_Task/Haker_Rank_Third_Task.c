#include <stdio.h>
#define MAX_SIZE 10
unsigned int array_size ;
unsigned int Counter;
unsigned int Output;
unsigned int Numbers[MAX_SIZE];
unsigned int Add_Numbers(unsigned int Number[], unsigned int Array_Size);

int main(){

scanf(" %i\n", &array_size);

for(Counter = 0 ; Counter <array_size ; Counter++){
       scanf(" %i", &Numbers[Counter]);
}
Output = Add_Numbers(Numbers , array_size);
printf("%i", Output);

}
unsigned int Add_Numbers(unsigned int Number[], unsigned int Array_Size){
 unsigned int repeat = 0 ;
 unsigned int Sum    = 0 ;
for(repeat = 0 ; repeat < Array_Size; repeat++){
Sum += Numbers[repeat];  
} 
return Sum;

}