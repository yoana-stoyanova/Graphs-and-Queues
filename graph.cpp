
#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;
int dist[8];
int main()
{
    vector<vector<int>> g(8);

    int source=7;
    queue<int> q;
    q.push(source);
    for(int i=0; i<8; i++)
    {
        dist[i]=10000000;
    }
    dist[7]=0;
    int m;

    cin>>m;
    for(int k=0; k<m; k++)
    {
        int from,to;
        cin>>from>>to;
        g[from].push_back(to);
        g[to].push_back(from);
    }
    while(!q.empty())
    {
        int currV=q.front(); q.pop();
        for(int i=0; i<g[currV].size(); i++)
        {
            int nextV=g[currV][i];
            if(dist[currV]+1<dist[nextV])
            {
                dist[nextV]=dist[currV]+1;
                q.push(nextV);
            }
        }
    }
    cout<<dist[3];
    return 0;
}

/****
10
1 4
1 2
1 3
1 5
5 6
5 7
3 4
7 6
4 6
4 5
*/