#include <stdio.h>

unsigned int Number_1;
unsigned int Number_2;

unsigned int And_Function(unsigned int num1 , unsigned int num2 );
unsigned int OR_Function(unsigned int num1 , unsigned int num2 );
unsigned int XOR_Function(unsigned int num1 , unsigned int num2 );

int main(){

scanf("%i %i", &Number_1 , &Number_2);

printf("%i\n", And_Function(Number_1 , Number_2 ));

printf("%i\n", OR_Function(Number_1, Number_2));

printf("%i", XOR_Function(Number_1 , Number_2));

}

unsigned int And_Function(unsigned int num1 , unsigned int num2 ){
       unsigned int And_Value;
       And_Value = num1 & num2;
       return And_Value;
}

unsigned int OR_Function(unsigned int num1 , unsigned int num2 ){
       unsigned int OR_Value;
       OR_Value = num1 | num2;
       return OR_Value; 
}

unsigned int XOR_Function(unsigned int num1 , unsigned int num2 ){
       unsigned int XOR_Value;
       XOR_Value = num1 ^ num2;
       return XOR_Value; 
}