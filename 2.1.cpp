#include<iostream>
using namespace std;
int besti=0,bestj=0;
int MaxSum(int n,int *a)
{

    int sum = 0,b = 0;
    int i=0;
    for(int j=1; j<=n; j++)
    {

        if(b > 0)
            b+=a[j];
        else
        {
            b = a[j];
            i=j;
        }
        if(b>sum)
        {
            sum = b;
            besti=i;
            bestj=j;
        }
    }
    return sum;
}
int main()
{
    int n;
    cout<<"请输入需要输入的元素的个数："<<endl;
    cin>>n;
    int a[n];
    cout<<"请输入"<<n<<"个元素："<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"最大子段和为:"<<MaxSum(n,a)<<"  ";
    cout<<"起始下标为:"<<besti<<" 终止下标为:"<<bestj;
}
