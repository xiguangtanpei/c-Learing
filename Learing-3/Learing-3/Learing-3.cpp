// Learing-3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string.h>

using namespace std; 



int main()
{
    std::cout << "Hello World!\n";


    float  tizhong = 110;

    int  nianling = 21;

    char  sex = 'X';

    string   mingcheng = "LI";

    bool  bianxing = 1;

    /// 开始学习 输入， 开始我弄错了 

    cout << "输入姓名：";
    cin >> mingcheng; 

    cout << "输入性别 【X L】:";
    cin >> sex; 
    cout << "输入年龄:"; 
    cin >> nianling; 
    cout << "输入体重 ：";
    cin >> tizhong;
    cout << "输入是否是变性人【1 ，0 】:"; 
    cin >> bianxing; 


    // 原来 这里是这样的处理情况 ， 
    // cin 可以实现自己转换 
    // 转换不成功， 就会出现一个  0  






    // 我们往这里 多加入了一些东西那就是 加入了  string 


    cout << "姓名:" << mingcheng << "  " << "性别:" << sex << "  " << "年龄：" << nianling << "  " << "体重：" << tizhong << "   " << "是否是变性人：" << bianxing << endl;



}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
