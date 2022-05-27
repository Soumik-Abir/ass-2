#include<stdio.h>

int main(){
    int bm, gm, s1=0, s2=0, mx=0;
    for(int i=1;i<=10;i++)
    {
        printf("Enter marks of boy %d = \n", i);
        scanf("%d",&bm);
        printf("Enter marks of girl %d = \n", i);
        scanf("%d",&gm);

        s1+=bm;
        s2+=gm;

        if(bm>=gm &&bm>=mx)
            mx=bm;
        else if(gm>bm && gm>=mx)
            mx=gm;
    }
    printf("Highest Marks = %d \n",mx);
    printf("Boys total marks = %d \n",s1);
    printf("Girls Total Marks = %d\n",s2);

    if(s1>s2)
    printf("Boys are good in maths \n");
    else if(s1<s2)
    printf("Girls are good in maths \n");
    else
    printf("Boys & girls both are good in maths \n");

    return 0;
}
