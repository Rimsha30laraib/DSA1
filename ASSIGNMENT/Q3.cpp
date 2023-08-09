//fixing the code
#include<iostream>
using namespace std;
void printarray(int* arr, int size) {
    for (int i = 0;i < size;i++) {
        cout << ("%d", arr[i]);
    }
    cout << ("\n");

}
void fixingthecode(int* arr, int size, int tosearch) {
    for (int i = 0;i <= size - 1;i++) {
        if (tosearch == arr[i]) {
            cout << ("value found at index: %d", i);
            break;
        }


    }



}

//int array[]=[1,5,7,6];

int main()
{
    int arr[] = { 4,3,7,8,9,5,34,65,78 };
    int size = 9;
    int tosearch = 65;
    printarray(arr, size);
    fixingthecode(arr, size, tosearch);
    return 0;
}