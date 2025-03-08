#include<stdio.h>

void sum ()
{
    int num, sum = 0;
 
    num = 1234;
    printf("\n\nThe number is = %d\n",num);

    //loop to find sum of digits
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
 
    //output
    printf("Sum: %d\n",sum);
 
    //return 0;

}
// Time complexity : O(N)
// Space complexity : O(1)

