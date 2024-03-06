# include<stdio.h>
# include<stdlib.h>

/*
Q1. Write a program to input n numbers on command line argument and 
calculate maximum of them. 
*/
int main(int argc, char *argv[])
{
    int i,sum;
    for(i=1,sum=0; i<argc; i++)
    {
        sum += atoi(argv[i]);
    }
    printf("Sum is %d\n",sum);
    return 0;
}