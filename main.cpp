#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n=0;
    int sum=0;
    cout<<"enter n value"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        sum=sum+i;

    }

    cout<<"The sum is"<<" "<<sum<<endl;
}

