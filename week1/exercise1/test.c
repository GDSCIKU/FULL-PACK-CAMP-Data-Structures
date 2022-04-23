#include <stdio.h>
#include <stdlib.h>

//Write your Function here


/*

Exercise 01:
  Write a program in C to calculate the sum
  of numbers from 1 to n using recursion.


Exercise 02:
  Write a program in C to print
  the array elements using recursion.

Exercise 03:
  Write a program in C to find the Factorial
  of a number using recursion.

*/


//Exercise 01:
int sum_recursion ( int end )
{
    if ( end == 1 )
        return 1 ;
    return end + sum_recursion ( end - 1 );
}


//Exercise 02:
void disp_array_recursion ( int array [ ], int size, int i )
{
    if ( i == size - 1 )
    {
        printf("element [ %d ] : %d\n", i + 1, array [ i ] );
    }
    else
    {
        printf("element [ %d ] : %d\n", i + 1, array [ i ] );
        disp_array_recursion ( array, size, i + 1);
    }
}

//Exercise 03:
int fact_recursion ( int number )
{
    if ( number < 2 )
    {
        return 1 ;
    }
    return number * fact_recursion ( number - 1 ) ;
}


int main(){
    int n ;
    printf("give the value of n which represent the end of the following sequance ( 1 + 2 + 3 + .. + n ) : ");
    scanf("%d",&n);
    while ( n < 1 )
    {
        printf("the given value of n is invalid, n must be equal or bigger than 1\ngive an appropriate value  : ");
        scanf("%d",&n);
    }
    printf("the sum is : %d\n", sum_recursion ( n ) );
    printf("give the size of the array : ");
    scanf("%d",&n);
    int array [ n ] ;
    printf("fill the array :\n");
    int i ;
    for ( i = 0 ; i < n ; i++ )
    {
        printf("element [ %d ] : ", i + 1 );
        scanf("%d",&array [ i ] );
    }
    printf("displaying the array : \n");
    disp_array_recursion ( array, n, 0);
    printf("give a number in order to caluclate its facorial : ");
    scanf("%d",&n);
    printf("the factorial of %d is %d", n, fact_recursion ( n ) );
    return 0;
}
