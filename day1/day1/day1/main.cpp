//
//  main.cpp
//  day1
//
//  Created by waitwalker on 2021/11/2.
//

#include <iostream>
#include "Sum.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    int sum = Sum().calculateSum(10, 20);
    cout << "两数之和:" <<sum <<"\n";
    
    return 0;
}
