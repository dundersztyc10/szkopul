#include <iostream>
#include <vector>

using namespace std;

int min_=200;

void check_min(int t[],int p){
    for(int i=0; i<p-1; ++i){
        for(int j=0; j<p; ++j){
            if(t[i]>=t[j] && i!=j){
                if(t[i]-t[j]<min_){
                    min_ = t[i]-t[j];
                }
            }
            else if(t[i]<t[j] && i!=j){
                if(t[j]-t[i]<min_){
                    min_ = t[j]-t[i];
                }
            }
        }
    }
//cout << min_;

int final_ = 0;
    for(int i=0; i<p-1; ++i){
        for(int j=i; j<p; ++j){
            if(t[i]>=t[j] && i!=j){
                if(t[i]-t[j]==min_){
                    final_++;
                }
            }
            else if(t[i]<t[j] && i!=j){
                if(t[j]-t[i]==min_){
                    final_++;
                }
            }
        }
    }
cout << final_;
}

int main()
{
int n;
cin >> n;
int tab[n];
for(int i=0; i<n; ++i){
    int h;
    cin >> h;
    tab[i] = h;
}
check_min(tab,n);
    return 0;
}
