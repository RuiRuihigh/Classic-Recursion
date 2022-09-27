#ifndef HANOI_H
#define HANOI_H

#include<stack>
#include<string>
using namespace std;
void move(int n, stack<int>& p1, stack<int>& p2,stack<int>& p3);
void creat_solve(int n, stack<int>& po1, stack<int>& po2, stack<int>& po3);
string show(stack<int> c);

#endif // HANOI_H
