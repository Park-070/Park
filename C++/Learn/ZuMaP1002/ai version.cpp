#include <cstdio>
#include <iostream>
using namespace std;
int m,n;//B
int hx,hy;//horse
int main() {
    cin>>m>>n>>hx>>hy;
    bool horse_block[25][25] = {false};
    int dx[] = {1,1,-1,-1,2,2,-2,-2,0};
    int dy[] = {2,-2,2,-2,1,-1,1,-1,0};
    for (int i = 0; i < 9; ++i) {
        int nx = hx + dx[i];
        int ny = hy + dy[i];
        if (nx >= 0 && ny >= 0 && nx <= m && ny <= n)
            horse_block[nx][ny] = true;
    }
    int dp[25][25] = {0};
    dp[m][n] = !horse_block[m][n];
    for(int x = m; x >= 0; x--){
        for(int y = n; y >= 0; y--){
            if(x == m && y == n) continue;
            if(horse_block[x][y]) dp[x][y] = 0;
            else{
                int right = (x < m) ? dp[x+1][y] : 0;
                int down = (y < n) ? dp[x][y+1] : 0;
                dp[x][y] = right + down;
            }
        }
    }
    cout << dp[0][0] << endl;
    system("pause");
    return 0;
}