#include<stack>
#include<iostream>
#include<string>
using namespace std;

void move(int n, stack<int>& p1, stack<int>& p2,stack<int>& p3){//move from p1 to p2
    if (n==1){
        int temp = p1.top();
        p1.pop();
        p2.push(temp);
    }
    else{
        move(n-1,p1,p3,p2);
        move(1,p1,p2,p3);
        move(n-1,p3,p2,p1);
    }
}

void creat_solve(int n, stack<int>& po1, stack<int>& po2, stack<int>& po3){//po1 to po3
    for (int i=n;i>=1;i--){
        po1.push(i);
        //cout<<po1.top();
    }

    move(n,po1,po3,po2);
}

string show(stack<int> c){
    cout << "[";
    while (!c.empty()){
        int temp = c.top();
        c.pop();
        cout << temp << ",";
    }
    cout << "]" << endl;
}
