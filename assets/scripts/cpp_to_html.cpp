#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
	
    while(getline(cin, s)){
        for(const char &c: s){
            if(c == '<')
                cout<<"&lt;";
            else if(c == '>')
                cout<<"&gt;";
            else
                cout<<c;
        }
        cout<<'\n';
    }
    
    return 0;
}