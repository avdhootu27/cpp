#include<iostream>
using namespace std;
// n    n2    n2
// b    a    w

void InsertionSort(int A[],int n){
    int i,j,v;
    for(i=1;i<=n;i++){
        v=A[i];
        j=i;
        while(A[j-1]>v && j>=1){
            A[j]=A[j-1];
            j--;
        }
        A[j]=v;
    }
}

int main(){
    int a[]={11,64,2,87,456,24,79,55};
    InsertionSort(a,8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
