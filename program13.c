#include <stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////
//
//Function name:    Addition
//Input:            Integer,Integer
//Output:           Integer
//Description:      Perform Addition
//Date:             04/10/2026
//Author:           Rohit Gokul Pandgale
//////////////////////////////////////////////////////////////////////////////////
int Addition(
            int No1,  //first input
            int No2   //second input
            )

     {
            int iAns=0;

            iAns = No1 + No2;

            return iAns;
     }

//////////////////////////////////////////////////////////////////////////////////
//
//Entry point of the application
//
//////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue1=0,iValue2=0,iResult=0;

    printf("Enter first number:\n");
   if (scanf("%d",&iValue1)!=1)
   {
    fprintf(stderr,"unable to proceed input is invalid");
    return EXIT_FAILURE;
   }

    printf("Enter second number:\n");
    if (scanf("%d",&iValue2)!=1)
   {
    fprintf(stderr,"unable to proceed input is invalid");
    return EXIT_FAILURE;
   }
    iResult=Addition(iValue1,iValue2);
    
    printf("Addition is:%d\n",iResult);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//
//step5 :Test the program
//
//Tested test cases
//-------------------------------------------------------------------------------
//Inuput1   Input2   Output 
//-------------------------------------------------------------------------------
//  10          11      21
//  11          0       11
//  0           11      11
//  20          -9      11
//  -9          20      11
//  -20         -11     -31
///////////////////////////////////////////////////////////////////////////////////
