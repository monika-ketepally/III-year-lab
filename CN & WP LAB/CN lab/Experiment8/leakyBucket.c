#include<stdio.h>
int main(){
        int bs,r,inp,tot=0,i,j;
        printf("Enter bucket size\n");
        scanf("%d",&bs);
        printf("Enter output rate\n");
        scanf("%d",&r);
        printf("Enter no.of inputs\n");
        scanf("%d",&inp);
        int pct[inp],itr;
        printf("Enter inputs\n");
        for(i=0;i<inp;i++){
                scanf("%d",&pct[i]);
        }
        printf("Enter no.of iterations\n");
        scanf("%d",&itr);
        for(i=0;i<itr;i++){
                printf("iteration %d\n",i+1);
                for(j=0;j<inp;j++){
                        tot+=pct[i];
                        if(tot<=bs){
                                printf("current bucket size is:%d .Added at rate of %d\n",tot,pct[j]);
                        }
                        else{
                                tot-=pct[j];
                                printf("current bucket size is:%d .Thrown out at rate of %d\n",tot,pct[j]);
                        }
                }
                if(tot<=r){
			printf("packet sent at rate : %d to output\n",tot);
                        tot = 0;
                        printf("current bucket size is %d\n",tot);
                }
                else{
                        tot = r;
                        printf("\npackets sent to the output at rate:%d\n",r);
                        printf("current bucket size:%d",tot);

                }
        }


        return 0;
}