/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
long int multiply(int n);
int main()
{
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    printf("Factorial of %d =%ld",n,multiply(n));
    return 0;
}

long int multiply(int n){
    if(n>=1)
    return n*multiply(n-1);
    else
    return 1;
}
