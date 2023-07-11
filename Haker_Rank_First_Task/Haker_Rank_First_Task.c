#include <stdio.h>
unsigned int a;
unsigned int b;
unsigned int c;
unsigned int d;
unsigned int ans = 0;
unsigned int max_of_four( unsigned int a, unsigned int b , unsigned int c,unsigned int d);
int main() {
    scanf("  %i" , &a);
    scanf(" %i", &b );
    scanf(" %i", &c);
    scanf(" %i", &d );
    ans = max_of_four(a, b, c, d );
    printf("%i", ans);
    
    return 0;
}
unsigned int max_of_four(unsigned int a, unsigned int b,unsigned int c, unsigned int d ){
    if(a > b && a > c && a >d) {
        return a;
           }
    else if(b > a && b > c && b >d){
        return b;
    }   
    else if(c > a && c > b && c >d)    {
        return c;
    } 
    else{
        return d;
    }
 } 