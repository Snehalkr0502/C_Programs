#include<stdio.h>  
int main()    
{
    int a=10, b=20;      
    printf("Before swap a=%d b=%d",a,b);

    //Swap the value
    a=a+b; 
    b=a-b; 
    a=a-b;

    //print after swap
    printf("\nAfter swap a=%d b=%d",a,b);    
    return 0;  
}