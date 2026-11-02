#include <iostream>
using namespace std;

// linux的符号给sort函数添加了注释
void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main()
{
    int arr[] = {12, 32, 4, 3, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}