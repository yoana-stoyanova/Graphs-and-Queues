#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main ()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int m; cin>>m;
    int q;
    vector <int> h;
    h.push_back(a[0]);
    //h[0]=a[0];
    for(int i=1; i<n; i++){h.push_back(a[i]+h[i-1]);}
    for(int i=0; i<m; i++)
    {
        cin>>q;
        vector<int>::iterator it=lower_bound(h.begin(),h.end(),q);
        cout<<it-h.begin()+1<<endl;
    }

    return 0;
}
