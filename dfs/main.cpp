#include <iostream>

using namespace std;
 int m,n;
char mat[8][8];
int r[3] = {0,-1,0};
int c[3] = {-1,0,1};
char a[8] ={'@','I','E','H','O','V','A','#'};

void dfs(int x,int y,int k)
{
    bool flag = false;
    int tx,ty;
    if(k==8)
        return;
    for(int i =0;i<3;i++)
    {
        if(x+r[i]>0 && x+r[i]<m && y+c[i]>0 && y+c[i]<n)
        {
             tx = x+r[i];
             ty = y+c[i];
            if(mat[tx][ty]==a[++k])
            {
                flag = true;
                break;
                if(i==0)
                    cout<<"left";
                if(i==1)
                    cout<<"forth";
                else
                    cout<<"right";
            }
        }

    }
    if(flag==true)
        dfs(tx,ty,k);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>m>>n;
        for(int i =0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                char c;
                cin>>c;
                mat[i][j]=c;
            }
        }
        int j=0;
        for(;j<n;j++)
        {
           if( mat[m-1][j] == '@')
            break;
        }
        dfs(m-1,j,0);
    }
    return 0;
}
