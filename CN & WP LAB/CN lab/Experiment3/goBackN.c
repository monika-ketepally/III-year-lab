//go gack n arq   
#include<stdio.h>  
int main(){
	int wSize,i,j=0;
	printf("enter window size : ");
        scanf("%d",&wSize);
        while(1){
		for(i=j;i<wSize;i++){ 
                      printf("frame %d transmitted\n",i);
                }
		printf("\nenter last transmitted frame : \n");
		scanf("%d",&j);
                if(j==wSize-1){
                     break;    
		}                                                                                                                                                                                                          
	}
        printf("\nAll frames transmitted\n");

        return 0;
} 
