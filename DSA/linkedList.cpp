#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d) : data(d), next(nullptr) {}
};
void insertAtEnd(Node* &head, int value)
{
    Node *n = new Node(value);
    if (head == nullptr)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(Node* head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}
int main()
{
    Node *head = nullptr;
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    display(head);
}