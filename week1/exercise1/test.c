#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Write your structure here


/*

Exercise 01:
  Write a C program which defines
  a point structure which will contain
  the two coordinates of a point(x,y)
  of the plane. Then reads two points
  and displays the distance between them.


Exercise 02:
  Write a C program that defines
  a student structure where a student is
  represented by his name, his first name and
  a grade. Reads a user-entered list of
  students and displays the names of
  all students with a score greater
  than or equal to 10 out of 20.


*/

//Exercise 01:
typedef struct point
{
    float x, y ;
}PLANE_COORDINATES ;

//Exercise 02:
typedef struct student
{
    char family_name [ 30 ], first_name [ 30 ] ;
    int grade ;
}STD ;


int main(){
    //Exercise 01:
    PLANE_COORDINATES plane_1, plane_2 ;
    printf("give the x coordinate of the first plane : ");
    scanf("%f",&plane_1.x);
    printf("give the y coordinate of the first plane : ");
    scanf("%f",&plane_1.y);
    printf("give the x coordinate of the second plane : ");
    scanf("%f",&plane_2.x);
    printf("give the y coordinate of the second plane : ");
    scanf("%f",&plane_2.y);
    printf("the distance between the first plane and the second plane is : %.2f\n", sqrt ( (plane_1.x - plane_2.x ) * (plane_1.x - plane_2.x ) + (plane_1.y - plane_2.y ) * (plane_1.y - plane_2.y ) ) );
    //Exercise 02:
    int n ;
    printf("give the total number of students : ");
    scanf("%d",&n);
    STD array [ n ] ;
    int i ;
    printf("fill the list of the student with the convenient informations : \n");
    for ( i = 0 ; i < n ; i++ )
    {
        printf("student [ %d ] family name : ", i + 1 );
        scanf("%s",array [ i ].family_name);
        printf("student [ %d ] first name : ", i + 1 );
        scanf("%s",array [ i ].first_name);
        printf("student [ %d ] grade : ", i + 1 );
        scanf("%d",&array [ i ].grade);
        while ( array [ i ].grade < 0 || array [ i ].grade > 20 )
        {
            printf("the inputed grade is invalid, the accepted grade is between 0 and 20\ngive a valid grade : ");
            scanf("%d",&array [ i ].grade);
        }
    }
    printf("the list of the student who got a grade equal or bigger then 10 : \n");
    for ( i = 0 ; i < n ; i++ )
    {
        if ( array[ i ].grade >= 10 )
        {
            printf("student %s %s\n", array [ i ].family_name, array [ i ].first_name );
        }
    }
    return 0;
}
