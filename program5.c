/*

step1 :Understand the problem statement
step2 :Write the algorithm
step3 :Decide the programming language
step4 :Write the program
step5 :Test the program


*/

//////////////////////////////////////////////////////////////////////////////////
//
//  Step 1: Understand the problem statement
//          User is going to enter any 2 integers
//          And we have to perform the addtion
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////

//
//  step2 :Write the algorithm
/*
    START
            Accept first number as No1
            Accept first number as No2
            Create the variable as ANS to store the result
            Perform the additon and store into ANS
            Display the result from ANS
    END

*/

//////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////

//
//  step3 :Decide the programming language
//          We select C programming

//////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////

//
//  step4 :Write the program
//      

//////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int main()
{

    int iValue1=0,iValue2=0,iResult=0;
    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iResult=iValue1+iValue2;  //Business Logic
    printf("Addition is:%d\n",iResult);

    return 0;
}