#include <stdio.h>
#include <stdlib.h>



/*

Exercise 01:
  Write a C program that uses the concept
  of a pointer to read two integers
  and calculate their sum.


Exercise 02:
  Write a C program that uses the pointer
  concept to swap the content of
  two char-type variables.

*/

int main(){
    //Exercise 01:
    int x, y ;
    int *p_x, *p_y ;
    p_x = &x ;
    p_y = &y ;
    printf("give the value of x : ");
    scanf("%d",p_x);
    printf("give the value of y : ");
    scanf("%d",p_y);
    printf("the sum of x and y is : %d\n", *p_x + *p_y );
    //Exercise 02:
    char charecter_1 = 'a', character_2 = 'b' ;
    char *p_a, *p_b ;
    p_a = &charecter_1 ;
    p_b = &character_2 ;
    printf("the content of character one is : %c, and the content of character two is : %c\n", *p_a, *p_b );
    char temp ; // for swaping
    temp = *p_a ;
    *p_a = *p_b ;
    *p_b = temp ;
    printf("the content of character one become : %c, and the content of character two become : %c", *p_a, *p_b );
    return 0;
}
