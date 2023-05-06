#include<iostream>
using namespace std;

void soort(int *A,int p,int q,int r)
{
int n1=q-p+1;
int n2=r-q;
int a[20];
int b[20];
for(int i=1;i<=n1;i++)
{
     a[i]=A[p+i-1];


}
for(int j=1;j<=n2;j++)
{
    b[j]=A[q+j];
}
a[n1+1]=10000;
b[n2+1]=10000;
int i=1;
int j=1;
for (int k = p; k<=r; k++)
{
        if(a[i]<=b[j])
        {
             A[k]=a[i];
            i++;
        }
        else{
            A[k]=b[j];
            j++;
        }

    /* code */
}





}
void asort(int *A,int p1, int r1)
{
    if(p1<r1)
    {
        asort(A,p1,(r1+p1)/2);
        asort(A,(r1+p1)/2+1,r1);
        soort(A,p1,(r1+p1)/2,r1);
    }
}
int main()
{
    int shu[10]={1,2,8,4,9,1,23,4,65,88};
     asort(shu,0,9);
    return 0;
}