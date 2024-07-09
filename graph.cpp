//
// Created by Neeraj on 09/07/24.
//
#include <vector>
#include <queue>
#include <stack>
#include <cstdio>
#include "graph.h"
void graph::add_edge(int s, int d)
{
    edge uv(s,d);
    alist.at(s).push_back(uv);

    edge vu(d,s);
    alist.at(d).push_back(vu);
}

void graph::print_graph() const
{
    for(int source = 0; source < vertices; ++source)
    {
        printf("vertex %d: ", source);
        for(const edge& this_edge : alist.at(source))
        {
            this_edge.print_edge();
        }
        printf("\n");
    }
}

void graph::bfs(int start) const {
    std::vector<bool> visited(vertices, false);
    std::queue<int> q;

    visited.at(start) = true;
    q.push(start);

    while (not q.empty()) {
        int current_source = q.front();
        printf("%d ", current_source);
        q.pop();
        for(const edge& u : alist.at(current_source))
        {
            int d = u.get_destination();
            if (not visited.at(d))
            {
                visited.at(d) = true;
                q.push(d);
            }
        }
    }
}

void graph::dfs(int start) const {
    std::vector<bool> visited(vertices, false); // Initialize the visited array
    std::stack<int> stack;                      // Initialize the stack

    stack.push(start);                          // Push the start node onto the stack

    while (!stack.empty()) {                    // While the stack is not empty
        int current_source = stack.top();       // Get the node at the top of the stack
        stack.pop();                            // Pop the node from the stack

        if (!visited.at(current_source)) {      // If the node has not been visited
            printf("%d ", current_source);      // Print the node
            visited.at(current_source) = true;  // Mark the node as visited
        }

        // Push all unvisited neighbors of the current node onto the stack
        for (const edge& u : alist.at(current_source)) {
            int d = u.get_destination();
            if (!visited.at(d)) {
                stack.push(d);
            }
        }
    }
}