//bribed queue 
#include<iostream>
using namespace std;
void printarray(int* arr, int size) {
    for (int i = 0;i < size;i++) {
        cout << ("%d", arr[i]);
    }
    cout << ("\n");

}
void bribedqueue(int* arr, int size) {
    int count = 0;
    for (int i = 1;i <= size - 1;i++) {
        int hold, j;
        hold = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > hold) {
            arr[j + 1] = arr[j];
            j--;
            count = count + 1;

        }
        arr[j + 1] = hold;


    }
    cout << ("no of time he bribed: %d", count);
    cout << ("\n");


}

//int array[]=[1,5,7,6];

int main()
{
    int arr[] = { 1,2,3,4,5,8,6,7 };
    int size = 8;
    printarray(arr, size);
    bribedqueue(arr, size);
    return 0;
}