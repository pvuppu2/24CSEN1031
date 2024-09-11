// Opeators in C 
// only one terniary operator i.e conditional operator
#include <stdio.h>

int main() {
    int a = 10, b= 5;
    int c;
    // conditional operator - ternary operator
    
  c = (a < b) ? a:b; 
  printf("smallest of the two numbers a and b is %d", c);
  
    return 0;
}
