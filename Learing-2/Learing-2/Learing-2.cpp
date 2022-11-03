// Learing-2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std; 
#include <string>


int main()
{
    //std::cout << "Hello World!\n";

    //cout <<   "打印出来内容"<< end; 

    cout <<  /* 注解*/ "打印出来内容" << endl;


 // 快捷键  注释，  ctrl + k  + [c] [u] 完成注解  

    //测试 

    float  tizhong = 110;
    
    int  nianling = 21; 

    char  sex = 'X';
    
    string   mingcheng = "LI"; 

    bool  bianxing = 1; 

  // 我们往这里 多加入了一些东西那就是 加入了  string 


    cout<< "姓名:" << mingcheng << "  " << "性别:" << sex << "  " << "年龄：" << nianling << "  "  << "体重：" << tizhong << "   " <<  "是否是变性人："<< bianxing  << endl;


// 写常量   

// 常量我写错了， 我加入了 =  不要加入等于好 
//  另外我的宏 后面加入 ； 不要加入这个符号， 会报错  


#define PI 3.14  

#define  Mon  12   



  cout << "圆周率: " << PI << endl; 


  // 这种定义的常量我也错了 
  // 我丢失了 float  类型定义 
  // 没有写 等于好，  
  // const 写法 就是正常的变量定义， 前面加入const  

  const  float  newPi = 3.14; 


  // 实际测试， 宏没提示， 但是 const 是可以提示的   
  cout << "从新输出:" << newPi << PI << endl; 
  


  // 标识符命名 ，注意不要和 c++ 自己的重复就好了  


  //  学习了 只是编译， 不运行   生产=》 编译  ctrl+f7 











}

 //运行程序: ctrl + f5 或调试 >“开始执行(不调试)”菜单
 //调试程序: f5 或调试 >“开始调试”菜单

 //入门使用技巧: 
 //  1. 使用解决方案资源管理器窗口添加/管理文件
 //  2. 使用团队资源管理器窗口连接到源代码管理
 //  3. 使用输出窗口查看生成输出和其他消息
 //  4. 使用错误列表窗口查看错误
 //  5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
 //  6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
