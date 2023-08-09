//selecting the median 
#include<iostream>
using namespace std;
void printarray(int* arr, int size) {
    for (int i = 0;i < size;i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

}
void insertionsort(int* arr, int size) {
    for (int i = 1;i <= size - 1;i++) {
        int hold, j;
        hold = arr[i];
        j = i - 1;
        int count = 0;
        while (j >= 0 && arr[j] > hold) {
            arr[j + 1] = arr[j];
            j--;
            count++;

        }
        arr[j + 1] = hold;


    }



}

void selectingthemedian(int* arr, int size) {
    int l, r, a, midvalue;
    l = size - 1;
    r = 0;
    midvalue = (l + r) / 2;
    a = arr[midvalue];
    cout << ("mid index is :%d", midvalue);
    cout << ("\n");
    cout << ("the median in a sorted array is: %d", a);
}


//int array[]=[1,5,7,6];

int main()
{
    int arr[] = { 3,9,5,6,2,4,8 };
    int size = 7;
    printarray(arr, size);
    insertionsort(arr, size);
    printarray(arr, size);
    selectingthemedian(arr, size);
    return 0;
}