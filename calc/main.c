#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

int main() {
    SetConsoleTitle("C calc");
    int value1;
    int value2;
    int output;
    char checkforexit[10];
    printf("how to use:\n");
    printf("add two values must be numbers to get output\n");
    printf("type e after the output if u want to exit\n");
    getchar();
    while (TRUE)
    {
       printf("enter first value: \n");
       scanf("%d",&value1);
       printf("enter second value: \n");
       scanf("%d",&value2);
       output = value1 + value2;
       printf("output:\n");
       printf("%d \n",output);
    }
}