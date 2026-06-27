#include <cstdio>
#include <iostream>
using namespace std;
int m,n;//B
int hx,hy;//horse
int xplus(int x,int y);
int yplus(int x,int y);
bool ishorse(int x,int y);
int main() {
    cin>>m>>n>>hx>>hy;
    cout<<xplus(0,0)+yplus(0,0)<<endl;
    system("pause");
    return 0;
}

int xplus(int x,int y){
    //printf("x=%d,y=%d\n",x+1,y);
    if(x<=hx+3&&x>=hx-3&&y<=hy+3&&y>=hy-3) {
        if(ishorse(x+1,y)) return 0;
    }
    if(x+1==m&&y==n) return 1;
    if(x+1>m) return 0;
    return xplus(x+1,y)+yplus(x+1,y);
}
int yplus(int x,int y){
    //printf("x=%d,y=%d\n",x,y+1);
    if(x<=hx+3&&x>=hx-3&&y<=hy+3&&y>=hy-3) {
        if(ishorse(x,y+1)) return 0;
    }
    if(y+1==n&&x==m) return 1;
    if(y+1>n) return 0;
    return xplus(x,y+1)+yplus(x,y+1);
}
bool ishorse(int x,int y){
    // 预先计算所有被马和马脚控制的格子
    static bool horse_block[25][25] = {false};
    static bool initialized = false;
    if (!initialized) {
        int dx[] = {1,1,-1,-1,2,2,-2,-2,0};
        int dy[] = {2,-2,2,-2,1,-1,1,-1,0};
        for (int i = 0; i < 9; ++i) {
            int nx = hx + dx[i];
            int ny = hy + dy[i];
            if (nx >= 0 && ny >= 0 && nx <= m && ny <= n)
                horse_block[nx][ny] = true;
        }
        initialized = true;
    }
    return horse_block[x][y];
    return false;
}