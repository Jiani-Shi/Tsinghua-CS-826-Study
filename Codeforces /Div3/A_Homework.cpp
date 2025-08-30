#include<iostream>
#include<string>
// 竞赛编程推荐使用万能头文件 #include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;   // 有几个测试用例
    while(t--){   // 循环遍历t次
        int n,m;   // 定义字符串a,b的长度
        string a,b,c;   // 定义字符串a,b和分配字符串c
        cin>>n>>a;
        cin>>m>>b;
        cin>>c;

        string res=a;   // 初始化结果

        for(int i=0;i<m;i++){
            if(c[i]=='V'){
                res=b[i]+res;   // 字符串加法表示简单拼接
            }
            else{
                res=res+b[i];
            }
        }

        cout<<res<<endl;
    }
    return 0;
}
