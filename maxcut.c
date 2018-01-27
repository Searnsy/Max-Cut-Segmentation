/**
 * A PLANAR MAXCUT algorithm using modifications that I have designed
 * from the Liers and Pardella algorithm (Partioning planar grphs: a 
 * fast coombinatorial approcah for max-cut).
 *
 * This algorithm is intended to run in O(n^(3/2)log(n)) time, but due to
 * time constraints of implementation, it may run in slower time O(mn^2)
 * using Edmond's Blossom algorithm as a backup.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Edge_S Edge;
typedef struct Vertex_S Vertex;


struct Edge_S{
	Vertex v1;
	Vertex v2;
	Edge cw1;
	Edge ccw1;
	Edge cw2;
	Edge ccw2;
} Edge;


struct Vertex_S{
	int num;
}


