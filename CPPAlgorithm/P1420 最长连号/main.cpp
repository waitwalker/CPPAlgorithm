//
//  main.cpp
//  P1420 最长连号
//
//  Created by waitwalker on 2021/11/22.
//

/// https://www.luogu.com.cn/problem/P1420
/**
 题目描述
 输入长度为 nn 的一个正整数序列，要求输出序列中最长连号的长度。

 连号指在序列中，从小到大的连续自然数。

 输入格式
 第一行，一个整数 nn。

 第二行，nn 个整数 a_iai，之间用空格隔开。

 输出格式
 一个数，最长连号的个数。


 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int length;
    
    cin>>length;
    int array[length];
    for (int i = 0; i < length; i++) {
        cin>>array[i];
    }
    /// 最长连号
    int continueNum = 1;
    /// 临时连号
    int temp = 1;
    for (int j = 0; j < length; j++) {
        if (j == 0) {
            continueNum = 1;
            temp = 1;
        } else {
            /// 双指针移动
            if (array[j] - array[j-1] == 1) {
                temp++;
                if (temp >= continueNum) {
                    continueNum = temp;
                }
            } else {
                temp = 1;
            }
        }
    }
    cout<<continueNum<<endl;
    return 0;
}
