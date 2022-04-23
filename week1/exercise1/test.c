#include <stdio.h>
#include <stdlib.h>


/*

Exercise 01:
  Write a program in C to read n number of
  values in an array and display it
  in reverse order.

Exercise 02:
  Write a program in C to find the sum of
  all elements of the array.

Exercise 03:
  Write a program in C to find the maximum
  and minimum element in an array.

*/

int main() {
    //Exercise 01:
    int n, i ;
    printf("give the total of numbers : ");
    scanf("%d",&n);
    int array [ n ] ;
    printf("fill the array :\n");
    for ( i = 0 ; i < n ; i++ )
    {
        printf("element [ %d ] : ", i + 1 );
        scanf("%d",&array [ i ]);
    }
    printf("displqying the array in reverse :\n");
    for ( i = n - 1 ; i >= 0 ; i-- )
    {
        printf("element [ %d ] : %d\n", i + 1, array [ i ] );
    }
    //Exercise 02:
    int s = 0 ;
    for ( i = 0 ; i < n ; i++ )
    {
        s = s + array [ i ] ;
    }
    printf("the sum of the array is : %d\n", s );
    //Exercise 03:
    int max = array [ 0 ], min = array [ 0 ] ;
    for ( i = 0 ; i < n ; i++ )
    {
        if ( array [ i ] > max )
        {
        max = array [ i ] ;
        }
        if ( array [ i ] < min )
        {
        min = array [ i ] ;
        }
    }
    printf("the maximum value in the array is : %d\n", max );
    printf("the minimum value in the array is : %d", min );
    return 0;
}
