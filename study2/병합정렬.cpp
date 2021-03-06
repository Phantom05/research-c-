#include <stdio.h>

int number = 8;
int sorted[8]; // 빈배열. 

void merge(int a[], int m, int middle, int n){
	int i = m;         // 시작점
	int j = middle +1; // 중간점
	int k = m;         // 끝점
	
	// 작은 순서대로 배열에 삽입
	//	6 7  5 8
	while(i <= middle && j<= n){
		if(a[i] <= a[j]){
			sorted[k] = a[i];
			i++;
		}else{
			sorted[k] = a[j]; 
			j++;
		}
		k++;
	}
	
	// 남은 데이터도 삽입.
	if(i > middle){
		for(int t = j; t<= n; t++){
			sorted[k] = a[t];   
			k++;
		}
	}else{
		for(int t = i; t <= middle; t++){
			sorted[k] = a[t];
			k++;
		}
	}
	// 정렬된 배열을 삽입. 
	for(int t = m; t <= n; t++){
		a[t] = sorted[t];
	}
}

void mergeSort(int a[],int m, int n){
	// 크기가 1보다 큰 경우
	if(m < n){
		int middle = (m + n) / 2;
		mergeSort(a,m,middle);
		mergeSort(a,middle +1,n);
		merge(a,m,middle,n);
	} 
}

int main(void){
	printf("%d",sorted);
	int array[number] = {4,2,6,3,7,8,5,1};
	mergeSort(array,0,number - 1);
	for(int i =0; i < number; i++){
		printf("%d ",array[i]);
	}
} 
