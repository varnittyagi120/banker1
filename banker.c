#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
struct bank
{

};
int main()
{
int p,r,i,j;
int allocation[2][2]={{1,2},
                      {3,4}};
int need[5][3];
int max[5][3];
int avilamount[3];
printf("Here we are taking three resources and five proccesses\n");
printf("Enter the value of allocation\n");
for(i=0;i<5;i++)
    {
   for(j=0;j<3;j++)
      {
        scanf("%d",&allocation[i][j]);
      }
      printf("\n");
     }
printf("values of allocation is\n")
for(i=0;i<5;i++)
    {
   for(j=0;j<3;j++)
      {
        printf("%d ",allocation[i][j]);
      }
      printf("\n");
     }
printf("Enter the value of max\n");
for(i=0;i<5;i++)
    {
   for(j=0;j<3;j++)
      {
        scanf("%d",&max[i][j]);
      }
      printf("\n");
     }
printf("value of max is");
for(i=0;i<5;i++)
    {
   for(j=0;j<3;j++)
      {
        printf("%d ",max[i][j]);
      }
      printf("\n");
     }
printf("Enter the available amount");
for(i=0;i<3;i++);
{
scanf("%d",&availamount[i][j]);
}
printf("available amount is");
for(i=0;i<3;i++)
{
printf("%d ",availamount[i]);
}

//pthread_t t1,t2,t3,t4,t5;
//pthread_create(&t1,NULL,Bank,NULL);
//pthread_create(&t2,NULL,Bank,NULL);
//pthread_create(&t3,NULL,Bank,NULL);
//pthread_create(&t4,NULL,Bank,NULL);
//pthread_create(&t5,NULL,Bank,NULL);
//pthread_join(t1,NULL);
//pthread_join(t2,NULL);
//pthread_join(t3,NULL);
//pthread_join(t4,NULL);
//pthread_join(t5,NULL);

}
