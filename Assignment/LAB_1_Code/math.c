/*
 * math.c
 *
 *  Created on: Oct 1, 2017
 *      Author: phili
 */

#include <math.h>

#ifndef MATH_C_
#define MATH_C_

int math(int num1, int num2, char Operator)
{
    char Operator;

       switch(Operator) {
          case '+' :
             answer = num1 + num2;
             break;
          case '-' :
              answer = num1 - num2;
              break;
          case '*' :
             answer = num1 * num2;
             break;
          case '/' :
             answer = num1 / num2;
             break;
          case '%' :
             answer = num1 % num2;
             break;
          default :
             printf("Invalid operation!\n" );
       }
       printf("The answer is ", answer)


}
