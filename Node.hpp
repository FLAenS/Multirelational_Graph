#ifndef NODE_HPP
#define NODE_HPP
using namespace std;

#include <vector>
#include <tuple>
#include <string>

class Node {
private:
    string id;
    string name;
    string type;

public:
    Node(const string& id, const string& name, const string& type);

    string getId() const {return id;}
    string getName() const {return name;}
    string getType() const {return type;}
    
};


#endif 