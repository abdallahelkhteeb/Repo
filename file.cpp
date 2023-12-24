#include<iostream> 
#include <string>
#include <set>
using namespace std;




int main() {
    int n, ans = 0;
    string s;
    cin >> n >> s;
    set<int> st;
    for(int i = 0; i < n; ++i) {
        st.insert(s[i]);
        ans += st.size();
    }

    cout << ans << endl;
    return 0;
}