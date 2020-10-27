 #include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu trong mang la: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int x=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			x=arr[i];
		}
	}
	if(x!=0){
		printf("%d",x);
	}else{
		printf("No EVEN Number");
	}
}
