#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int num;
        Node* next;

};

class linkedListDemo {
private:
        
    
public:
    Node *head, *tail;
    int length = 0;
    linkedListDemo() {
        head = NULL;
        tail = NULL;
    }

    void push(int num) {

        Node* temp = new Node();
        temp->num = num;
        temp->next = NULL;


        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        length += 1;

    }

    int remove(int num) {
        

        if (head->num == num) {
            head = head->next;
            length--;
            return 1;
        }

        Node* itr = head;
        
        while (itr != NULL) {
            Node* next = itr->next;
            if (next->num == num) {
                itr->next = next->next;
                length--;
                return 1;
            }
        }

        return 0;
    }

    
};

void printLinkedList(Node* head) {

    Node* itr = head;
    

    while (itr != NULL) {
        cout << itr->num << " -->";
        itr = itr->next;
    }

    cout << endl;
}




int main() {

    linkedListDemo l;

    l.push(2);
    l.push(3);
    l.push(5);

    l.remove(2);
    l.remove(5);
    l.remove(3);



    printLinkedList(l.head);



    return 0;
}

