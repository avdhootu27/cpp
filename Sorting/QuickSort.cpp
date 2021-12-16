#include <iostream>
using namespace std;
// nlogn    nlogn    n2
//   b        a      w

void Swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int Partition (int A[], int low, int high)
{
    int pivot = A[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++){
        if (A[j] < pivot){
            i++;
            Swap(&A[i], &A[j]);
        }
    }
    Swap(&A[i + 1], &A[high]);
    return (i + 1);
}

void quickSort(int A[], int low, int high){
    if (low < high)
    {
        int pi = Partition(A, low, high);

        quickSort(A, low, pi - 1);
        quickSort(A, pi + 1, high);
    }
}

int main(){
    int a[] = {3,92,25,87,9,73,51,100};
    quickSort(a, 0, 7);
    for (int i = 0; i < 8; i++){
        cout << a[i] << " ";
    }
    return 0;
}
