# include <stdio.h>
int main() {
  
  int number_of_terms;
  int fibonacci_1 = 0, fibonacci_2 = 1;

  int fibonacci_3 = fibonacci_1 + fibonacci_2;

    printf("Enter the number of terms (greater than 2): ");
    scanf("%d", &number_of_terms);

    printf("Fibonacci Series: \n%d \n%d", fibonacci_1, fibonacci_2);

int i = 3;
while(i <= number_of_terms) {
    printf("\n%d", fibonacci_3);
    fibonacci_1 = fibonacci_2;
    fibonacci_2 = fibonacci_3;
    fibonacci_3 = fibonacci_1 + fibonacci_2;
    i++;
}
return 0;
}



/*output
Enter the number of terms (greater than 2): 10
Fibonacci Series: 
0 
1
1
2
3
5
8
13
21
34
*/



