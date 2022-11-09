// =========================================================
// File: appGrafo.cpp
// Author: José Ricardo Rosales Castañeda - A01709449
// Date: 09/11/2022
// =========================================================

#include <iostream>
#include <cstring>
#include "ugraph.h"
#include "exception.h"
#include "header.h"


int main() {
    std::fstream inputF("inputGraph.txt", std::ios::in);
    int line;

    inputF >> line;
    UMatrixGraph<int> graph(line);

    graph.loadGraph(inputF);

    std::cout << "DFS: ";
    dfs(0, &graph);
    std::cout << std::endl;

    std::cout << "BFS: ";
    bfs(0, &graph);
    std::cout << std::endl;

    return 0;
}