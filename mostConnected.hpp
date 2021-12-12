#pragma once
#include "mostConnected.h"
#include "tree"
#include <queue>

string mostConnected(Node* root) {
    int largest = root->children.size();
    Node* mostConnectedNode = root;
    std::queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        if (temp->size() > largest) {
            largest = temp->size();
            mostConnectedNode = temp;
        }
        for (unsigned i = 0; i < temp->size(); i++) {
            q.push(temp->children.at(i));
        }

    }
    return //globalarr[mostConnectedNode->data];
} 