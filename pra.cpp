#include <iostream>
#include <vector>

using namespace std;

void check(string s){
    int last_a_position;
    bool not_letter_a=false;
    for(int i=0; i<s.size();++i){
        char t = s[i];
        if(t=='a'){
            last_a_position = i;
        }
        if(t!='a'){
            not_letter_a = true;
        }
    }
    if(not_letter_a==true && last_a_position == s.size()-1){
        cout<<"NIE";
    }
    if(not_letter_a==false){
        cout<<s;
    }
    if(not_letter_a==true && last_a_position != s.size()-1){
        for(int i=0; i<=last_a_position;++i){
            cout << s[i];
        }
    }

}

int main()
{
    string s;
    cin >> s;
    check(s);

    return 0;
}
