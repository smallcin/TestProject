//
//  main.cpp
//  宏定义
//
//  Created by student on 15/11/16.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <iostream>
using namespace std;

static int a[56];
int main()
{
    char input;
    for(int i = 0; i < 52; ++i)
        a[i] = i;
    while(std::cin >> input)
    {
        for(int i = 0; i < 51; ++i)
        {
            for(int j = 0; j <= i; ++j)
            {
                if(a[j] + a[j+1] % 2)
                {
                    int temp;
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(int i = 0; i < 52; ++i)
            std::cout << a[i] << " ";
        std::cout << std::endl;
    }
}
