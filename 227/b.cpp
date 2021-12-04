//include libraries
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <valarray>
#include <string>
#include <typeinfo>
#include <utility>
#include <vector>
using namespace std;
#define rep(i, n) for (int i=0; i < (n); i++)
#define rep1(i, n, w) for (int i=0; i < (n); i+=j)
#define rep2(i, n, w) for (int i=(n); i > 0; i-=j)
#define rep3(i, s, e, j) for (int i=s; i < (e); i += j)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i, n) cin >> s[i];
    int ans = 0;
    set<int> Set;
    rep(i, n) {
        for (int a = 1; a <= 150; a++) {
            for (int b = 1; b <= 150; b++) {
                int tmpS = 4 * a * b + 3 * a + 3 * b;
                if (tmpS > 1000) break;
                if (tmpS == s[i]) {
                    Set.insert(i);
                }
            }
        }
    }
    cout << n - Set.size() << endl;
    return 0;
}