#include<iostream>
using namespace std;
// n    n2    n2
// b    a    w

void BubbleSort(int A[],int n){
    int pass,i,temp,swapped=1;
    for(pass=n-1;pass>=0 && swapped; pass--){
        swapped=0;
        for(i=0;i<=pass-1;i++){
            if(A[i]>A[i+1]){
                //swap elements
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                swapped = 1;
            }
        }
    }
}

int main(){
    int a[]={5,6,33,98,22,4};
    BubbleSort(a,6);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
