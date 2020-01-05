// ConsoleApplication2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int maxDiff(int arr[], int arr_size)
{
	int max_diff = arr[1] - arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		for (int j = i + 1; j < arr_size; j++)
		{
			if (arr[j] - arr[i] > max_diff)
				max_diff = arr[j] - arr[i];
		}
	}
	return max_diff;
}

int main()
{
	int arr[] = {0,0,0,0,0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function calling 
	printf("%d", arr[0]);
	printf("%d", maxDiff(arr, n));

	return 0;
}