#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a,b;
    int arr1[n], arr2[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a>>b;

        arr1[i] = a;
        arr2[i] = b;
    }

    int count=0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
            }
        }
    }

    cout<<count;

    return 0;

}


