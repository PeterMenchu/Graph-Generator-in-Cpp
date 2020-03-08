// Peter Menchu 2018 (revised 2020)
// Implementation for my graph generator class.
#include <iostream>
#include "graphgen.h"

using namespace std;
int main() {
    // declare a graph
    Graph newGraph;
    srand (time(nullptr)); // seed for rand
    int v; //# of vertices
    int graphcount = 0;// # graphs to generate
    ofstream fout;// output file stream
    string output;// file name
    char type;// type of graph
    cout << "Would you like to create undirected or directed graphs? (enter u/d, undirected is default): ";
    cin >> type;
    cout << "Enter number of graphs to generate (integer > 0): ";
    while (graphcount <= 0){
        cin >> graphcount;
        if (graphcount <= 0){
            cout << "Invalid entry, try again.\n";
        }
    }
    cout << "Enter number of vertices used to create the graphs (integer > 0): ";
    cin >> v;
    // specify output file
    cout << "Enter name of output text file: (recommend using ingraphs.txt or similar): ";
    cin >> output;
    fout.open(output.c_str());// creates the output file
    fout << type << endl;
    fout << graphcount << endl;
    fout << v;

    // loop thru generating matrices
    if (type == 'd'){// directed graphs
        for (int i = 0; i < graphcount; i++){
            //memset(graph, -1, sizeof(graph));
            newGraph.generateDir(fout, v);
        }
    } else {// undirected graphs
        //int graph[v][v];
        for (int i = 0; i < graphcount; i++){
            //memset(graph, -1, sizeof(graph));
            newGraph.generateUndir(fout, v);
        }

    }
    cout << "Graph(s) generated, check the project folders to find where your system placed the file.\n";
    fout.close();
    return 0;
}
// Peter Menchu 2018 (revised 2020)