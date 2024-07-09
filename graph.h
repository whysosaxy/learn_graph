//
// Created by Neeraj on 09/07/24.
//
#include <cstdio>
#include "edge.h"
#include <vector>
#ifndef GRAPHWORK_GRAPH_H
#define GRAPHWORK_GRAPH_H


class graph {
    int vertices;
    int edges;
    std::vector<std::vector<edge>> alist;

public:
    graph(int n, int m) : vertices{n}, edges{m}, alist(n) {}
    void print_graph() const;
    void add_edge(int, int);
    void bfs(int) const;
    void dfs(int) const;
};

#endif //GRAPHWORK_GRAPH_H
