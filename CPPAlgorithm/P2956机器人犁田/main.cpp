//
//  main.cpp
//  P2956机器人犁田
//
//  Created by etiantian on 2021/11/28.
//
/*
 Farmer John为了让自己从无穷无尽的犁田工作中解放出来，于是买了个新机器人帮助他犁田。这个机器人可以完成犁田的任务，可惜有一个小小的缺点：这个犁田机器人一次只能犁一个边的长度是整数的长方形的田地。

 因为FJ的田地有树和其它障碍物，所以FJ设定机器人去犁很多不同的长方形。这些长方形允许重叠。他给机器人下了P个指令，每个指令包含一个要犁长方形的地。这片田地由长方形的左下角和右上角坐标决定。他很好奇最后到底有多少个方格的地被犁过了。

 一般来说，田地被分割为很多小方格。这些方格的边和x轴或y轴平行。田地的宽度为X个方格，高度为Y个方格 (1 <= X <= 240; 1 <= Y <= 240). FJ执行了I (1 <= I <= 200)个指令，每个指令包含4个整数：Xll, Yll, Xur, Yur (1 <= Xll <= Xur; Xll <= Xur <=X; 1 <= Yll <= Yur; Yll <= Yur <= Y), 分别是要犁的长方形的左下角坐标和右上角坐标。机器人会犁所有的横坐标在Xll..Xur并且纵坐标在Yll..Yur范围内的所有方格的地。可能这个长方形会比你想象的多一行一列（就是说从第Xll列到第Xur列一共有Xur - Xll + 1列而不是Xur - Xll列）。

 考虑一个6方格宽4方格高的田地。FJ进行了2个操作（如下），田地就被犁成"*"和"#"了。虽然一般被犁过的地看起来都是一样的。但是标成"#"可以更清晰地看出最近一次被犁的长方形。

 一共14个方格的地被犁过了。
 */

//https://www.luogu.com.cn/problem/P2956

#include <iostream>
#include <cstring>
//#include <bits/stdc++.h>

using namespace std;

bool a[240+5][240+5];

void ex(int x, int y, int s, int t) {
    for (int j = x; j <= s; j++) {
        for (int k = y; k <= t; k++) {
            a[j][k] = 1;
        }
    }
}


int main(int argc, const char * argv[]) {
    int m, n, c;/// m行n列,c个指令,也就是执行了c条命令
    int x, y, s, t, count = 0;/// 输入的起点和终点坐标,count计数已经犁过的个数
    memset(a, 0, sizeof(a));///二维数组初始化
    cin>>m>>n>>c;
    for (int i = 0; i < c; i++) {
        cin>>x>>y>>s>>t;
        ex(x, y, s, t);
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j]) {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
