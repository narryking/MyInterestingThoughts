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
    cout<<"��������Ҫ�����Ԫ�صĸ�����"<<endl;
    cin>>n;
    int a[n];
    cout<<"������"<<n<<"��Ԫ�أ�"<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"����Ӷκ�Ϊ:"<<MaxSum(n,a)<<"  ";
    cout<<"��ʼ�±�Ϊ:"<<besti<<" ��ֹ�±�Ϊ:"<<bestj;
}
