#ifndef EDGE_HPP
#define EDGE_HPP
using namespace std;

#include <string>

class Edge {
private:
    string src;
    string dest;
    string label;
    double weight;

public:
    Edge(const string& srcId, const string& destId, const string& label, double weight);
    string getSrc() const {return src;}
    string getDest() const {return dest;}
    string getLabel() const {return label;}
    double getWeight() const {return weight;}
};

#endif