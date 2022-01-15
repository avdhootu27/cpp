#include <iostream>
using namespace std;

int binarySearch(int *A, int n, int target) {
	int low = 0, high = n-1;
	while(low <= high) {
		int mid = (low + high) / 2;
		if(A[mid] == target) {
			return mid;
		}
		else if(A[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

int main() {
    int A[] = {4, 9, 11, 15, 16, 25, 27, 32};
    cout<<binarySearch(A, 8, 27)<<endl;
    return 0;
}
