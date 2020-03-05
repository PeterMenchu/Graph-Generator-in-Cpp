//
// Created by Peter Menchu on 3/4/20 (Original version in Fall 2018)
//
#ifndef GRAPH_GENERATOR_GRAPHGEN_H
#define GRAPH_GENERATOR_GRAPHGEN_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

// generates directed graphs
void generateDir(ofstream& fout, int v);
// generates undirected graphs
void generateUndir(ofstream& fout, int v);


#endif //GRAPH_GENERATOR_GRAPHGEN_H
