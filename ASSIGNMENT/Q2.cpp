//getting of the work
#include<iostream>
using namespace std;
void printarray(int* arr, int size) {
    for (int i = 0;i < size;i++) {
        cout << ("%d", arr[i]);
    }
    cout << ("\n");

}
void goingoffthework(int* arr, int size, int workperhour) {
    int count = 0;
    int max = 0;
    int min = 0;
    int m = 0;
    for (int i = 0; i <= size - 1;i++) {

        if (workperhour < arr[i]) {
            count = count + 1;
        }
        if (workperhour == arr[i]) {
            max = count;

        }

    }
    for (int j = size - 1;j >= 0;j--) {
        if (workperhour < arr[j]) {
            min = min + 1;
        }
        if (workperhour == arr[j]) {
            m = min;

        }


    }
    if (max >= m) {
        cout << ("consecutive days bob work :%d", max);
        cout << ("\n");
    }
    if (max <= m) {
        cout << ("consecutive days bob work: %d", m);
    }
    cout << ("\n");

    cout << ("days bob did overtime: %d", count);

    int main()
    {
        int arr[] = { 7,7,8,9,8,6,6,8,9,8,7 };
        int size = 11;
        int workperhour = 6;
        printarray(arr, size);
        goingoffthework(arr, size, workperhour);
        return 0;
    }