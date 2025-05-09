#include <iostream>
#include <list>
#include <string>
using namespace std;


int main(){

    int N;
    string s;
 
    cin >> N;

    list<char>::iterator it; // iterator란 무엇인가?
    // list<char>::iterator it = password.begin(); // iterator를 사용하여 list의 요소에 접근할 수 있다.
    list<char> password;
    
    for(int i = 0 ; i < N ; ++i){
        
        cin >> s;    

        password.clear();
        it = password.begin();    
        
        
        for(int j = 0 ; j < s.length(); ++j){
            if(s[j] =='<') {
                if(it != password.begin()) it--;
            }
            else if(s[j]=='>'){
                if( it != password.end()) it++;
            }
            else if(s[j]=='-'){
                if(it != password.begin()) it = password.erase(--it);
            }
            else{
                it = password.insert(it, s[j]);
                it++;
            }   
        }

        for(char x : password) cout << x;
        cout << endl;
    }
    return 0;
}