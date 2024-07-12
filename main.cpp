#include <bits/stdc++.h>
#include "GraphUtils.h"
using namespace std;

int main()
{
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {2, 0}, {2, 3}, {3, 3}};
    unordered_map<int, list<int>> adjListDirected = createAdjListDirected(edges);
    unordered_map<int, list<int>> adjListUndirected = createAdjListUndirected(edges);

    cout << "Directed Graph Adjacency List:" << endl;
    printAdjList(adjListDirected);

    cout << "Undirected Graph Adjacency List:" << endl;
    printAdjList(adjListUndirected);

    cout << "DFS Traversal starting from node 2 in directed graph:" << endl;
    vector<int> dfsOrder = DFS(adjListDirected, 2);
    for (int node : dfsOrder)
    {
        cout << node << " ";
    }
    cout << endl;

    cout << "BFS Traversal starting from node 2 in directed graph:" << endl;
    vector<int> bfsOrder = BFSUtil(2, adjListDirected);
    for (int node : bfsOrder)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}