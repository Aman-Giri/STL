#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;
    s.push("Aman");
    s.push("Kumar");
    s.push("Giri");

    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"size of the stack: "<<s.size()<<endl;
    cout<<"empty or not: "<<s.empty()<<endl;
    
}
    
