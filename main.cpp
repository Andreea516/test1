#include <iostream>

using namespace std;

int main()
{
    int n,i,v[100],s;
    cout<<"n=";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    s=0;
    for (i=1;i<=n;i++)
        if (v[i]>0)
            s=s+v[i];
    cout<<s;
    return 0;
}
