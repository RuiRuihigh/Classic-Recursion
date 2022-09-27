#include <QCoreApplication>
#include<iostream>
#include<string>
#include<stack>
#include"Hanoi.h"
using namespace std;
int main()
{
    stack<int> A;
    stack<int> B;
    stack<int> C;
    cout<<"Begin"<<endl;
    creat_solve(10,A,B,C);
    show(C);
    return 0;
}
