// Peter Menchu 2018 (revised in 2020)
// Program that creates directed or undirected graphs
#include "graphgen.h"
void Graph::generateDir(ofstream& fout, int v){
	// randomize each edge weight value, 0 is no edge
        for (int i = 0; i < v; i++){
                fout << endl;
                for (int j = 0; j < v; j++){
                        if (i == j){
                                fout << 0;// I did not include edges from/to the same node (loops)
                        } else {
                                fout << rand() % 10;
                        }
                }
        }

        return;
}

void Graph::generateUndir(ofstream& fout, int v){
	// randomize each i,j pair only once and set j,i to the same value
        int graph[v][v];
        memset(graph, -1, sizeof(graph));
        for (int i = 0; i < v; i++){
                fout << endl;
                for (int j = 0; j < v; j++){
                        if (i == j){
                                graph[i][j] = 0;
                        }
                        else if (graph[i][j] == -1){
                                graph[i][j] = rand() % 10;
				// account for bidirectional edges
                                graph[j][i] = graph[i][j];
                        }
                        fout << graph[i][j];
                }
        }

        return;
}
// Peter Menchu 2018 (revised in 2020)



