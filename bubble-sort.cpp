#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the size of the array : ";
	cin >> n; 
	
	int arr[100];
	
	cout << "Enter the " << n << " elements..." << endl;
 	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	bool isSwap = false;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
				isSwap = true;
			}
		}

		if(!isSwap)
		{
			break;
		}
			
	}
	
	cout << "Sorted Array { ";
	for(int k = 0; k < n; k++)
	{
		cout << arr[k] << " "; 
	}
	cout << "}" << endl;
}

