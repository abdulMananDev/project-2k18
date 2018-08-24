#include<stdio.h>
#include<conio.h>

 void swap(int*x,int *y)
 {
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;

 }
void select_sort(int a [],int n)
{ int i,j,imin;
  for(i=0;i<n-1;i++)
 imin=i;
  for (j=1;j<n;j++)

  if(a[imin]>a[j])
  imin=j;
  swap(&a[imin],&a[i] );}

void insert_sort(int a [],int n)
{    int i,k;
    for (i=1,i<n,i++)
    {
        value =a[i];
        hole =k;

       while (hole >0 && a[hole-1]>value)
       {
           a[hole]=a[hole-1];
           hole-=1;
       }

        a[hole]=value;

    }
    }
void printarray(int a [],int n)
{int h;
    for(h=0;h<n;h++)
   {
       printf("%d",a[h]);
   }
}

int main()
{
int a[]={5,4,3,2,1};int s;
 int n=sizeof(a)/sizeof(a[0]);
select_sort(a,n);
printf("the sorted array is:\n");
printarray(a,n);
while(1)
{
    scanf()




}
}
