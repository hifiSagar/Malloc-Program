#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char*argv[])
{
    // // Get the size of int
    // size_t sizeOfInt = sizeof(int);

    // // Print the size of int
    // printf("Size of int: %zu bytes\n", sizeOfInt);
// int temp;
// int*ptr,num;
// printf("Enter a value to store dynamically\n");
// scanf("%d",&num);
// ptr=sizeof(int);
// printf("Before swaping\n");
// printf("Value of int data type is : %d\nValue of num is : %d",ptr,num);
// printf("\n");
// temp;
// temp=num;
// num=ptr;
// ptr=temp;
// printf("After Swaping\n");
// printf("Value of int data type is : %d\nValue of num is : %d",ptr,num);
int *ptr, num;
printf("Enter a value to store dynamically");
scanf("%d",&num);
ptr =(int*) malloc(sizeof(int));
printf("%d",ptr);
return 0;

}