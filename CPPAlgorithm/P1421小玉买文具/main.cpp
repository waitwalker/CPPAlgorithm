//
//  main.cpp
//  P1421小玉买文具
//
//  Created by etiantian on 2021/11/20.
//

/// https://www.luogu.com.cn/problem/P1421
/// 题目描述
///班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是 11 元 99 角，而班主任给小玉的钱是 aa 元 bb 角，小玉想知道，她最多能买多少只签字笔呢。

///输入格式
///输入只有一行两个整数，分别表示 aa 和 bb。

///输出格式
///输出一行一个整数，表示小玉最多能买多少只签字笔。


#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    cin>>a>>b;
    cout<<(a*10+b)/(19)<<endl;
    return 0;
}
