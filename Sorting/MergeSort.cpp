#include<iostream>
using namespace std;
// nlogn    nlogn    nlogn
//   b        a        w

void Merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void Mergesort(int A[],int left,int right){
    int mid;
    if(right>left){
        mid = (right+left)/2;
        Mergesort(A,left,mid);
        Mergesort(A,mid+1,right);
        Merge(A,left,mid,right);
    }
}

int main(){
    int a[]={3,92,25,87,9,73,51,100};
    Mergesort(a,0,7);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
