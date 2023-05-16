#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter total parkour distance - ";
    cin>>n;
    
    int s;
    cout<<"Enter the starting location - ";
    cin>>s;
    
    int f;
    cout<<"Enter the destination point - ";
    cin>>f;
    
    vector<int> height;
    
    for(int i=0;i<n;i++)
    {
        int temp;
        cout<<"Enter height of building "<<i<<" - ";
        cin>>temp;
        height.push_back(temp);
    }
    
    int dist=0,c=0;
    
    for(int i=0;i<height.size();i++)
    {
        if(i==s)
            c++;
        if(c>0 && i!=f)
        {
            if(abs(height[i]-height[i+1]>2))
            {
                cout<<"That jump is impossible";
                exit(0);
            }
            if(height[i]>height[i+1])
                dist+=height[i]-height[i+1];
            else
                dist+=height[i+1]-height[i];
        }
    }
    
    cout<<"Blocks climbed down and up - "<<dist;
}