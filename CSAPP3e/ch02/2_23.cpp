#include <stdio.h>  
//#include <stdafx.h>
#include <iostream>


using namespace std;

int fun1(unsigned word) {
    return (int)((word << 24) >> 24);
}

int fun2(unsigned word) {
    return ((int)(word << 24)) >> 24;
}

int main() {
    unsigned int a1 = 0x00000076;
    unsigned int a2 = 0x87654321;
    unsigned int a3 = 0x000000C9;
    unsigned int a4 = 0xEDCBA987;
    printf("fun1(a1) %x,", fun1(a1));
    printf("fun2(a1) %x\n", fun2(a1));

    printf("fun1(a2) %x,", fun1(a2));
    printf("fun2(a2) %x\n", fun2(a2));

    printf("fun1(a3) %x,", fun1(a3));
    printf("fun2(a3) %x\n", fun2(a3));

    printf("fun1(a4) %x,", fun1(a4));
    printf("fun2(a4) %x\n", fun2(a4));
    unsigned int a5 = 0xFFFFFFFF;
    printf("a5: %d\n", a5);
    system("pause");
}