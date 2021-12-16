#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
                                             
void BucketSort(float arr[],int n){         // This is for floating point numbers
    vector<float>b[n];
    for(int i=0;i<n;i++){
        int bi = n*arr[i];
        b[bi].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        sort(b[i].begin(),b[i].end());
    }
    int index = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<b[i].size();j++){
            arr[index++] = b[i][j];
        }
    }
}

int main(){
    float a[]={0.32,0.54,0.19,0.36,0.39,0.71,0.34,0.98,0.06,0.27};
    BucketSort(a,10);
    for(int j=0;j<10;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}
