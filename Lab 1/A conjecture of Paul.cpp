#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int arr[10000000] = {0};

bool is_prime(long long x)
{
    if(x <= 1)
    {
        return false;
    }

    else if(x == 2 || x == 3)
    {
        return true;
    }

    else
    {
        for (int i=2; i*i<=x; i++)
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

    long long x;

    for(int i=0; i<=3163; i++)
    {
        for(int j=0; j<=56; j++)
        {
            x = (i*i)+pow(j,4);
            if(x<=10000000 && is_prime(x)==true)
            {
                arr[x] = 1;
            }
        }
    }

    for(int i=1; i<=10000000; i++)
    {
        arr[i] = arr[i] + arr[i-1];
    }

    long long t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;

        cout<<arr[n]<<endl;
    }

    return 0;
}
