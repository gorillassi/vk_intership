#include "graph.hpp"
#include <iostream>

void Graph::addRib(int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

std::vector<int> Graph::bfs(int initVertex) {
    std::vector<int> dist(V, -1);
    std::queue<int> q;
    
    dist[initVertex] = 0;
    q.push(initVertex);
    
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        
        for (int neighbor : adjList[v]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[v] + 1;
                q.push(neighbor);
            }
        }
    }
    return dist;
}