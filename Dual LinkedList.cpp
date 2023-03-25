
#include <iostream>

class Node {
public:
    Node* prev;
    int data;
    Node* next;

    Node(int d) {
        this->prev = NULL;
        this->data = d;
        this->next = NULL;
    };

   
};

class DualLinkedList {

public:
    Node* head= NULL;
    Node* tail=NULL;

    DualLinkedList() {
        this->head = this->tail = NULL;
    }

    void push_back(int s) {
        
        Node* temp = new Node(s);

        if (head == NULL && tail == NULL) {
            temp->data = s;
            temp->prev = NULL;
            temp->next = NULL;
            head = tail = temp;
        } 
        else {
            temp->data = s;
            temp->prev = tail;
            temp->next = NULL;
            tail->next = temp;
            tail = temp;
        }
        std::cout << head << "   " << tail << "\n";
    }
    
    void push_front() {}
     
    void pop_back() {}
    
    void pop_front() {}
    
    void print_list() {

        Node* i = head;
        if (head == NULL && tail == NULL) {
            std::cout << "LIST EMPTY" << std::endl;
            return;
        }
        std::cout << "LIST : ";
 
        do {

            std::cout << i->data << " ";
            i = i->next;
           
        } while(i!=NULL);

        std::cout << std::endl;
    }
      
};


int main() {
    
    DualLinkedList lst;
    int  c = 0, p = 0;

    do {

        std::cout << "1. add << " << std::endl;
        std::cout << "2. add >> " << std::endl;
        std::cout << "3. del << " << std::endl;
        std::cout << "4. del >> " << std::endl;
        std::cout << "5. print  " << std::endl;
        std::cout << "6. exit   " << std::endl;
        std::cin >> c;

        switch (c) {
        case 1:
            std::cout << "add << " << std::endl;
            std::cin >> p;
            lst.push_back(p);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            lst.print_list();
            break;
        case 6:
           
            break;
        }




    } while (c != 6);
    
   
}

