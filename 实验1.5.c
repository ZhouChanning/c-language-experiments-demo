#include<stdio.h>
void BubbleSort(int a[],int n){
	int flag=1;
	int temp;
	for(int i=0;i<n&&flag==1;i++){
		flag=0;
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(){
	int a[]={5,4,8,9,1};
	int n=5;
	BubbleSort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
