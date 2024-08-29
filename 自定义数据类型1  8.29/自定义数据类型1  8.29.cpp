// 自定义数据类型1  8.29.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//构造数据类型：用户自己建立的数据类型（自定义数据类型）
//c语言中的自定义数据类型有：数组类型，结构体类型，共用体类型，枚举类型。
//结构体：c语言允许用户根据需要自己建立的由不同类型数据组成的组合型的数据类型，我们把他称为结构体（struct).
//typedef:给类型取别名
//
/*struct 结构体名
{

    结构成员：
    
 }   */

#include <stdio.h>
typedef int 整形;
struct student  //定义了一个名字叫做student的结构
{
    int ID;
    char name[10];
    float score;
};
int main()
{

    int a = 10;
    int b = 20;

    student aa = { 1,"张三",60.1f };//一一对应上面三项，分别赋值。
    aa.ID = 10;//访问结构体里面的成员：变量.结构成员
    aa.score = 1.6f;
    //aa.name="张三"；(错误）
    char name[10]="张三";
    return 0;
};


typedef struct Hero
{
    int ATT;//攻击
    char name[10];
    int Def;//防御
}hero;
//定义结构体时没有写结构名，那么typedef给这个结构体取别名
int main()
{
    hero arr[3] = {
        {10,"剑圣",5},
        {5,"盖伦",10},
        {0,"法师",0} 
    };
    for (int  i = 0; i < 3; i++)
    {
        printf("%d\t %s\t %d\n", arr[i].ATT, arr[i].name, arr[i].Def);
    }

};



//多个学生时
//定义结构体时没写结构名，也没用typedef取别名，但在{}后写了标识符
struct 
{
    int a;
    int b;
}s1,s2,s3[10];//此时这三个不是别名，是该结构的变量
int main()
{
    s1 = { 1,2 };
    
}

