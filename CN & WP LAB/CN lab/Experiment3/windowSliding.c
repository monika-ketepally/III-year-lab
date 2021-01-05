//window sliding
#include<stdio.h>
int main(){
        int wSize,frames;
        printf("enter window size : ");
        scanf("%d",&wSize);
        printf("enter number of frames : ");
        scanf("%d",&frames);
        int frs[frames],i,j=0;
        printf("enter frames : ");
        for(i=0;i<frames;i++){
                scanf("%d",&frs[i]);
        }
        while(j<frames){
                printf("Transmitting the following frames from sender\n");
                for(i=j;i<j+wSize && i<frames;i++){
                        printf("%d  ",frs[i]);
                }
                printf("\nwaiting for acknowledgement fron reciver\n");
                j+=wSize;
        }
        return 0;
}