#include<stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int j = h;
    int i = l+1;
    while(i <= j)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[l], &arr[j]);
    return j;
}
void quicksort(int ARR[], int L, int H)
{
    if(L < H)
    {
        int k = partition(ARR,L,H);
        quicksort(ARR, L, k - 1);
        quicksort(ARR, k + 1, H);
    }
}
int main()
{
    printf("Enter the number of elements of the array: ");
    int n;
    scanf("%d", &n);
    int x[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    quicksort(x,0,n-1);
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    return 0;
}
