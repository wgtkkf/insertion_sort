#include "insertion.h"
#include <iostream>
using namespace std;


// constructor
cinsertion::cinsertion()
{
    cout << "cinsertion object generation:\n" << endl;
}

// destructor
cinsertion::~cinsertion()
{
    cout << "insertion object destruction:" << endl;
}

// display
void cinsertion::show(int *num)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(i<size-1)
        {
            printf("%d ", *num);
            num++;
        }else if(i==size-1)
        {
            printf("%d end\n\n", *num);
        }
    }
}

// swap
void cinsertion::swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// insertion sort
void cinsertion::isort(int *num)
{
    int i, j;

    for(i=1;i<size;i++)
    {
        j = i;
        while ((j > 0) && (num[j-1] > num[j]))
        {
            swap(&num[j-1], &num[j]);
            j--;
            //show(&num[0]);
        }
    }
}