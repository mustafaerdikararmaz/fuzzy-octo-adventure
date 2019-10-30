#include <stdio.h>
int main()
{
int array[25] = {1,1,2,2,2,0,0,0,2,3,3,3,4,4,4,6,6,1,2,3,4,6,6,7,9};
int range1, range2;
int a=0,i;
int cnt[10]={0};

scanf("%d%d",&range1,&range2);
for(i=range1-1;i<=range2-1;i++){
     switch(array[i])
     {
         case 0:
         cnt[0]++;
         break;
          case 1:
         cnt[1]++;
         break;
          case 2:
         cnt[2]++;
         break;
          case 3:
         cnt[3]++;
         break;
          case 4:
         cnt[4]++;
         break;
          case 5:
         cnt[5]++;
         break;
          case 6:
         cnt[6]++;
         break;
          case 7:
         cnt[7]++;
         break;
          case 8:
         cnt[8]++;
         break;
          case 9:
         cnt[9]++;
         break;
     }
}
printf("Range:[%d-%d], histogram: ",range1,range2);
for(a=0;a<=9;a++){
	if(cnt[a]==0)
	continue;
	else
	printf(" %d:%d",a, cnt[a]);
}
printf("\n");
return 0;
}


























