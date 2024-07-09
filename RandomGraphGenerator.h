//
// RandomGraphGenerator.h
// Created by Neeraj on 09/07/24.
//

#ifndef GRAPHWORK_RANDOMGRAPHGENERATOR_H
#define GRAPHWORK_RANDOMGRAPHGENERATOR_H

#include "graph.h" // Include your existing graph class interface
#include <random>
#include <ctime>
#include <algorithm>

class RandomGraphGenerator {
private:
    int vertices;
    int edges;
    graph G; // Your existing graph class

public:
    RandomGraphGenerator(int n, int m);
    graph generateGraph();
};

#endif //GRAPHWORK_RANDOMGRAPHGENERATOR_H
