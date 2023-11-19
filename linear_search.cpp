#include <iostream>

	using namespace std;
	
	int linear_search(int x, int arr[], int size ) {
		
		for (int i=0; i<size; i++){
		if (arr[i] == x) {
		
				return x;
		
			} 
		} 
			// Should in case the user does not understand the -1
			cout << " 'Not found in the list' " << endl;
		return -1;
	}

int main () {
	// Input number to search from the user
	int x;
	cout << " The Enter the value of x " << endl;
	cin >> x;
	
	// Elements in the array
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = 10; // Size of the array
	
	cout << "the arr contains " << linear_search(x,arr,size) << endl;
	
	return 0;
	
}