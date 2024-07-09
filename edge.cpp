//
// Created by Neeraj on 09/07/24.
//

#include "edge.h"

void edge::print_edge() const {
    if (weight == 0) {
        printf("{%d, %d} ", source, destination);
    } else {
        printf("{%d, %d, %d} ", source, destination, weight);
    }
}

void edge::set_source(int x)
{
    source = x;
}
void edge::set_destination(int x)
{
    destination = x;
}
int edge::get_destination() const
{
    return destination;
}
int edge::get_source() const
{
    return source;
}