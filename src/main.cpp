#include "graph.hpp"
#include <iostream>
#include <fstream>

int main(){
    std::ifstream inputFile("graph.txt");
    if (!inputFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    int num_of_vertices, num_of_ribs, initial_vertex;
    inputFile >> num_of_vertices >> num_of_ribs;

    Graph g(num_of_vertices, num_of_ribs);

    for (int i = 0; i < num_of_ribs; i++) {
        int u, v;
        inputFile >> u >> v;
        g.addRib(u, v);
    }

    inputFile >> initial_vertex; 

    inputFile.close();

    std::vector<int> distances = g.bfs(initial_vertex);
    for (int i = 0; i < num_of_vertices; i++)
    {
        std::cout << distances[i] << std::endl;
    }
    
    return 0;
}