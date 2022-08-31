// bt12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>

int a[8] = { 2,1,2,6,7,8,5,9 };
int n = 8;
int b = 0;
void inmang(int a[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
}
int timxuathien(int a[], int* b)
{
    int max = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        int solan = 0;
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[j])
            {
                solan++;
            }
        }
        if (max < solan)
        {
            max = solan;
            *b = a[i];


        }
    }
    return max;
}
void vitri(int a[], int b)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {

            printf("\n%d", i + 1);
        }
    }
}
int main() {
    if (timxuathien(a, &b) > 1)
    {
        inmang(a);
        printf("\nso %d xuat  hien:%d lan", b, timxuathien(a, &b));
        printf("\nvi tri cua %d:", b);
        vitri(a, b);
    }
    else
    {
        printf("\nkhong co so nao xuat hien qua 1 lan!!!!");
    }

}