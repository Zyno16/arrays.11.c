#include <stdio.h>
#include <stdlib.h>

int main()
{
        int t[100],p[100],b[100];
         int i, size,pcount,icount;

        printf("enter the number");
        scanf("%d",&size);


        for(i=0;i<size;i++){
            printf("enter the t[%d]=",i+1);
            scanf("%d",&t[i]);}
            pcount=0;
            icount=0;
            for(i=0;i<size;i++){
                if(t[i]%2==0){
                    p[pcount]=t[i];
                pcount++;}
                else {t[icount]=t[i];
                      icount++;
                }

            }
            printf("display the pair number");
            for(i=0;i<pcount;i++)
                printf("the pair number is %d\n",p[i]);

            printf("display the impair number");
            for(i=0;i<icount;i++)
                printf("the pair number is %d\n",b[i]);



    return 0;
}
