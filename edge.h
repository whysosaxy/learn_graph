//
// edge.h
// Created by Neeraj on 09/07/24.
//

#ifndef GRAPHWORK_EDGE_H
#define GRAPHWORK_EDGE_H

#include <cstdio>

class edge {
    int source;
    int destination;
    int weight;
public:
    edge(int s, int d, int w = 0) : source{s}, destination{d}, weight{w} {}
    void set_source(int);
    void set_destination(int);
    int get_destination() const;
    int get_source() const;
    void print_edge() const;
};

#endif //GRAPHWORK_EDGE_H
