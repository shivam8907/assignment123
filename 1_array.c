/*program that takes as input an array of numbers of length N and a number p p is greater then 0 and 
a number.The objective to return the array shifted by p position in d direction.*/
#include<stdio.h>
 

void printArray(int arr[], int size);
 
int gcd(int a, int b);
 

void leftshift(int arr[], int d, int n)
{
    int i, j, k, temp;
    
    d = d % n;
    int g_c_d = gcd(d, n);
    for (i = 0; i < g_c_d; i++) {
    
        temp = arr[i];
        j = i;
        while (1) {
            k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

/* function to print an array */
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
 
/*  program to test above functions */
int main()
{
    int arr[] = { 1, 3, 2, 7, 4, 6 };
    leftshift(arr, 3, 6);
    printArray(arr, 6);
    getchar();
    return 0;
}
//time complexity: O(N)
//space complexity:O(1)