//write a program interchange two number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    clrscr();
    printf("enter x and y:");
    scanf("%d%d",&x,&y);
    printf("\nbefore swapping\nfirst number:%d\nsecond number=%d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\nafter swapping\n first number:%d\nsecond number:%d",x,y);
    getch();
}