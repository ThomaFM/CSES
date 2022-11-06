//https://cses.fi/problemset/task/1092

#include <bits/stdc++.h>
using namespace std;

int main(){


    long long inp;
    cin >> inp;
    vector<int> list1;
    vector<int> list2;
    long long total = (inp*(inp+1))/2;
    long long half = total/2;
    int dec = inp;
    //if sum of digits is odd you can not split them evenly
    if((total&1) == 1){
        cout << "NO";
    }else{
        //Make first list through greedyily taking highest numbers when possible
        while(true){
            if(half > dec){
                half = half - dec;
                list1.push_back(dec);
                dec--;
            }else{
                list1.push_back((int)(half));
                break;
            }
        }
        
        //Remaining go to second list
        for(int i = dec; i > 0; i--){
            if(i == (int)(half))
                continue;
            list2.push_back(i);
        }
        

        //Output
        cout << "YES\n" << list1.size() << "\n";
        for(auto x: list1)
            cout << x << " ";
        cout << "\n" << list2.size() << "\n";
        for(auto x: list2)
            cout << x << " ";
        

    }

    return 0;
}