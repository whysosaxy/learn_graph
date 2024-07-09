//
// RandomGraphGenerator.cpp
// Created by Neeraj on 09/07/24.
//

#include "RandomGraphGenerator.h"
#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>

RandomGraphGenerator::RandomGraphGenerator(int n, int m) : vertices(n), edges(m), G(n, 0) {}

graph RandomGraphGenerator::generateGraph() {
    std::mt19937 gen(time(0)); // Mersenne Twister random generator seeded with time
    std::uniform_int_distribution<> vertex_distrib(0, vertices - 1); // Uniform distribution for vertex selection

    std::vector<std::vector<bool>> adj_matrix(vertices, std::vector<bool>(vertices, false)); // Adjacency matrix to track edges

    int edges_added = 0;

    while (edges_added < edges) {
        int source = vertex_distrib(gen);
        int destination = vertex_distrib(gen);

        if (source != destination && !adj_matrix[source][destination]) {
            G.add_edge(source, destination);
            adj_matrix[source][destination] = true;
            adj_matrix[destination][source] = true; // Assuming undirected graph
            ++edges_added;
        }
    }

//    G.print_graph();
    return G;
}

