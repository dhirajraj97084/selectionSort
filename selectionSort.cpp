#include <iostream>
using namespace std;

void printSortedArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minindex] < arr[j])
            {
                minindex = j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}

int main()
{
    int arr[8] = {4, 5, 1, 3, 6, 7, 2, 0};
    selectionSort(arr, 8);
    printSortedArray(arr,8);

    return 0;

}