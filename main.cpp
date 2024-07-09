#include "RandomGraphGenerator.h"

int main() {
    int n = 7; // Number of vertices
    int complete = n * (n-1) / 2; // Number of edges in a complete graph
    int m = 8; // Number of edges


    RandomGraphGenerator generator(n, m);
    graph G = generator.generateGraph();
    G.print_graph();

    for (int i = 0; i < n; ++i) {
        printf("Depth-first search for node %d: ", i);
        G.dfs(i);
        printf("\n");
    }
    return 0;
}
