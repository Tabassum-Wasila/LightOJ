#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin>>n;
        int x = n/2;
        int y = n - x;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
