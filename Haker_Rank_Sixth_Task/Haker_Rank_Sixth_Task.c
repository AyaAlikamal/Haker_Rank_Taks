#include <stdio.h>

unsigned int Number;
unsigned int Reminder;
unsigned int Sum;

int main(){

scanf("%i", &Number);
while (Number){
Reminder = Number % 10;
Number /= 10;
Sum +=Reminder;
}
printf("%i", Sum);

}