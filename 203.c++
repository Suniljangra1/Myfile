// Assignment 41 Question 3 :
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> stk;   // create a int type stack 
    stk.push(101);   // insert element in stack using push function
    stk.push(10);
    stk.push(11);
    stk.push(1);
    cout<<"\nTop value of the stack is "<< stk.top()<<endl; // it is return the top value of the stack 
    cout<<"------------------------------------------------------------------------\n";
    stk.pop();   // Basically the   pop function is using for delete last element 
     //Pop function jo last mya element aya hai usko phela delete kreaga :
     cout<<"\n------------------------------------------------------------------------\n";
    if(!stk.empty())  // empty function is return true (stack is empty ) 
    cout<<"\nstack not empty : "; // if empty function return false (stack is not empty )
    else 
    cout<<"\nstack is empty : ";
    cout<<"\n------------------------------------------------------------------------\n";

    stk.emplace();  // ye function return krta value jo value suru mya ayi thi use bi phela (first element sya bi phela)
    // agr es function mya hum value rakhyage to vo vlaue sb sya phlea element bn jyagi stack ka  stk.emplace(5);
    cout<<"\n------------------------------------------------------------------------\n";
   while(!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }
    cout<<"\n------------------------------------------------------------------------\n";
    stack<int>st;   // create stack for swap value 
    st.swap(stk);  // this function work is swap the value in another stack 
    while(!st.empty())  // return fasle if stack is not empty ,and true for stack is empty
    {
        cout<<st.top()<<"\n";  // find the value of the top in stack 
        st.pop();   // delete the value from the top of the stack 
    }
    cout<<"\n------------------------------------------------------------------------\n";
}