#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <queue>

class Graph
{
private:
    int V, R;
    std::vector<std::vector<int>> adjList;

public:
    Graph(int vertices, int ribs) : V(vertices), R(ribs), adjList(vertices){}

    void addRib(int u, int v);
    std::vector<int> bfs(int initVertex);
};

#endif // GRAPH_HPP