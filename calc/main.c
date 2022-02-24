#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

///a basic C calculator
///by shadowdev
///check out www.shadowstudios.gd.rf

int main() {
    SetConsoleTitle("C calculator");
    int value1;
    int value2;
    int output;
    printf("how to use:\n");
    printf("add two values must be numbers to get output\n");
    printf("created by shadowdev on github: https://github.com/shadow9owo\n");
    Sleep(2000);
    while (TRUE)
    {
       system("cls||clear");
       printf("enter first value: \n");
       scanf("%d",&value1);
       printf("enter second value: \n");
       scanf("%d",&value2);
       output = value1 + value2;
       printf("output:\n");
       printf("%d \n",output);
       Sleep(1000);
    }
}