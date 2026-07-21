#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	int array[n][3];
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d", &array[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				if(array[i][k]>array[i][k+1]){
					int temp =array[i][k];
					array[i][k]=array[i][k+1];
					array[i][k]=temp;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n", array[j][1]);
	}
	return 0;
}
