#include<iostream>
#include<stack>

using namespace std;

void reverseStack(string str){
stack<string> st;
for(int i=0; i<str.length(); i++){

    string word = "";
    while(str[i]!=' ' && i<str.length()){
        word += str[i];
        i++;
    }
    st.push(word);
}
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
cout<<endl;
}
int main(){
    string str ="Hey, how are you doing?";
    reverseStack(str);
    
    
    return 0;
}