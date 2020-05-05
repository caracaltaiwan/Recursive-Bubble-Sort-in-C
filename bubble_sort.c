#include <stdio.h>

void bubble_sort(int array[], int number);
int array[10] = {10,9,6,7,8,5,4,3,2,1};
int compareMax = sizeof(array)/sizeof(int)-1;
int maxNumber = sizeof(array)/sizeof(int);
int i = 0;

int main(int argc, char* argv[]) {
	bubble_sort(array, 0);
	printf("\n");
	for(i=0;i<maxNumber;i++){
		printf("\n%d",array[i]);
	}
	//getchar();// Pause

    return 0; 
}

void bubble_sort(int array[], int number)
{
	int temp;
	
	printf("\n%d %d",array[number],array[number+1]);
	if(number!=compareMax){
		printf("\narray[number]:%d,array[number+1]:%d,number:%d",array[number],array[number+1],number);
		if(array[number]>array[number+1]||array[number]==array[number+1])
		{
			temp = array[number+1];
			array[number+1] = array[number];
			array[number] = temp;
			
			return bubble_sort(array, number+1);
		}
		else if(array[number]<array[number+1])
		{
			return bubble_sort(array, number+1);
		}
	}else{
		if(compareMax>0){
			compareMax-=1;
			return bubble_sort(array, 0);
		}
	}
}