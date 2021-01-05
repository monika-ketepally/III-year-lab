// Broad cast network
#include<stdio.h>
int main(){
        int nodes;
        printf("enter no of nodes");
        scanf("%d",&nodes);
        printf("nodes are: ");
        int adjMat[nodes][nodes],i,j;
        for(i=0;i<nodes;i++){
        printf("%d  ",i);
        }
        printf("\n");
        for(i=0;i<nodes;i++){
        for(j=0;j<nodes;j++){
        printf("enter connection b/w %d->%d : ",i,j);
        scanf("%d",&adjMat[i][j]);
        }
        }
        int root;
        printf("enter root node: ");
        scanf("%d",&root);
        printf("adjacent nodes for %d root are:\n",root);
        for(i=0;i<nodes;i++){
        if(adjMat[root][i]==1){
        printf("%d  ",i);
        }
        }
        printf("\n");
        return 0;
}