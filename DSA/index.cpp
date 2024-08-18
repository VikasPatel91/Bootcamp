#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d) : data(d), next(nullptr) {};
};
void insertAtEnd(Node *&head, int value)
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
void display(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = nullptr;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    display(head);
}