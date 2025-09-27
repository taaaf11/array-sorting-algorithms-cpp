#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int value)
{
	int left = 0, right = size - 1;
	
	while(left <= right)
	{
		int mid = left + (right - left) / 2;
		
		if(arr[mid] == value)
		{
			return mid;
		}
		
		else if(arr[mid] > value)
		{
			left = mid + 1;
		}
		
		else if(arr[mid] < value)
		{
			right = mid + 1;
		}
	}
}


int main()
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	
	int value;
	
	cout << "Enter the key : ";
	cin >> value;
	
	int result = binarySearch(arr, 6, value); 
	
	cout << "Result : " << result << endl;
}
