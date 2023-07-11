#include <stdio.h>

unsigned int Number[2];
unsigned int Counter;

int main(){
for(Counter = 0 ; Counter < 2 ; Counter++ ){
scanf(" %i", &Number[Counter]);
}
for(Counter = 0 ; Counter < 2 ; Counter++ ){

if(Number[Counter] == 1){
    printf("one");
    printf("\n");
}
else if(Number[Counter]== 2){
    printf("two");
    printf("\n");
}
else if(Number[Counter]== 3){
    printf("three");
    printf("\n");
}
else if(Number[Counter] == 4){
   printf("four");
   printf("\n");
}
else if(Number[Counter] == 5){
    printf("five");
    printf("\n");
}
else if(Number[Counter] == 6){
    printf("six");
    printf("\n");
}
else if(Number[Counter] == 7){
    printf("seven");
    printf("\n");
}
else if(Number[Counter] == 8){
    printf("eight");
    printf("\n");
}
else if(Number[Counter] == 9){
    printf("nine");
    printf("\n");
}
else{
    
    printf("Greater than 9");
    printf("\n");
}
}
for(Counter = 0 ; Counter < 2 ; Counter++ ){
if(Number[Counter] % 2 == 0){
    printf("even");
}
else{
    printf("\n");
    printf("odd");
}
}

}
