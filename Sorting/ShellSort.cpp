#include<iostream>
using namespace std;

void ShellSort(int A[],int n){
    int i,j,inc,temp;
    inc = (int)(n/2)-1;
    while(inc>=1){
        for(i=inc;i<=n-1;i++){
            temp = A[i];
            j = i;
            while(j>=inc && A[j-inc]>temp){
                A[i] = A[j-inc];
                j = j-inc;
            }
            A[j]=temp;
        }
        inc--;
    }
}

int main(){
    int a[]={4,88,45,35,66,7,27,72};
    ShellSort(a,8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
