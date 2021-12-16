#include <iostream>
using namespace std;
// n2    n2    n2
//  b    a    w

void Swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort(int A[], int n){
	int i, j, min;

	for (i = 0; i < n-1; i++){
		min = i;
		for (j = i+1; j < n; j++)
		if (A[j] < A[min]){
            min= j;
		}
		Swap(&A[min], &A[i]);
	}
}

int main(){
	int a[] = {3,92,25,87,9,73,51,100};
	SelectionSort(a, 8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
	return 0;
}

