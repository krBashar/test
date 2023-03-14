#include <bits/stdc++.h>

using namespace std;

int arr[10000000] = {0};


bool is_prime(int x)
{
    if(x <= 1)
    {
        return false;
    }

    else if(x == 2)
    {
        return true;
    }

    else
    {
        for (int i=2; i<=(x/2); i++)
        {
            if (x%i == 0) {
                return false;
            }
        }
        return true;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long t,n,x;

    for(int i=1; i<=3162; i++)
    {
        for(int j=1; j<=56; j++)
        {
            x = (i*i)+pow(j,4);
            if(x<10000000 && is_prime(x)==true)
            {
                arr[x] = 1;
            }
        }
    }

    for(int i=1; i<=10000000; i++)
    {
        arr[i] = arr[i] + arr[i-1];
    }

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;

        cout<<arr[n]<<endl;
    }

    return 0;
}
