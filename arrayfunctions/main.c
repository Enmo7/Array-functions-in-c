#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade_1[10] = {10,20,40,50,60,30,70,20,50,40};

    display(grade_1);
    //printf("Hello world!\n");
    //return 0;
}
void display(int arr[10])
{
    int i, avv, sum = 0;

    for(i=0; i<10; i++)
    {
        sum+=arr[i];

    }
    avv = sum/10;
    printf("%d", avv);
}
