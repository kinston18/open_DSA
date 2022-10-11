// // /*
// // Given N strings. Print unique strings in lexographical order
// // with their frequency
// // N<= 10^5
// // |S| <= 100
// // */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;
    map<string,int> m;
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        // m[i] = s; //making a map
        m[s]++;
    }
//Range Based Loop
    for(auto pair : m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    return 0;
}

// // -------- MONK and class MARKS: Hackerearth -----------
//Please search this question on net for more info
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     multimap<int,string> list;
//     int turn;cin>>turn;
//     while(turn--){
//         string name; int marks;
//         cin>>name>>marks;
//         list.insert({marks,name});
//     }
//     map<int,string> :: iterator it;
//     it  = (--list.end());
//     while(it!=list.begin()){
//         cout<<it->second<<" "<<it->first<<endl;
//         --it;
//     }
//     cout<<it->second<<" "<<it->first<<endl;
//     return 0;
// }

