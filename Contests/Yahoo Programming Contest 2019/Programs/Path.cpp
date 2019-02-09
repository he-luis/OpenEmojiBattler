#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int NO_OF_VERTICES = 4, NO_OF_EDGES = 3;

    vector <int> degree(NO_OF_VERTICES + 1, 0);
    for(int i = 1; i <= NO_OF_EDGES; i++)
    {
        int u, v;
        cin >> u >> v;

        degree[u]++;
        degree[v]++;
    }

    vector <int> degree_count(NO_OF_VERTICES + 1, 0);
    for(int i = 1; i <= NO_OF_VERTICES; i++)
    {
        degree_count[degree[i]]++;
    }

    cout << (degree_count[1] == 2 && degree_count[2] == NO_OF_VERTICES - 2 ? "YES\n" : "NO\n");
    return 0;
}
