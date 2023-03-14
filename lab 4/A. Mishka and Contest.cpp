#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b;
    cin>>x;

    for(int i=1; i<=x; i++)
    {
        int z1,z2;
        cin>>a>>b;

        z1 = ((a-1)/3)*2;
        z2 = (b/3)*2;

        if((a-1)%3==2)
            z1++;
        if(b%3==2)
            z2++;

        cout<<"Case "<<i<<": "<<z2 - z1<<endl;
    }
    return 0;
}
