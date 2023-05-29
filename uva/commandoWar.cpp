#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s;
    int c = 1;
    do
    {
        vector<pair<int, int>> v;
        cin >> s;
        if (s != 0)
        {
            for (int i = 0; i < s; i++)
            {
                int a, b;
                cin >> a >> b;
                v.emplace_back(a, b);
            }

            sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) -> bool
                 { if(a.second == b.second) return a.first > b.first;
                    return a.second > b.second; });

            for (int i = 1; i < v.size(); i++)
            {
                v[i].first += v[i - 1].first;
            }

            sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) -> bool
                 { return a.first + a.second > b.first + b.second; });

            cout << "Case " << c++ << ": " << (v[0].first + v[0].second) << '\n';
            v.clear();
        }
    } while (s != 0);
    return 0;
}
