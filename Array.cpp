#include <iostream>
using namespace std;
void reversArr(int arr[], int length)
{
    int temp, i=0, j=length-1;
    for(i; i<j; i++, j--)
    {
        temp = arr[j];
        arr[j]= arr[i];
        arr[i] = temp;
    };
};
void printArr(int arr[], int length)
{
    int i =0;
    for(i; i< length; i++)
    {
        cout<<arr[i]<<"\t";
    };
};
int main()
{

    int arr[]= {2,3,4,5};

    reversArr(arr,4);
    printArr(arr, 4);

    return 0;
}
