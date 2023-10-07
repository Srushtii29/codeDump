#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d) //inserting node at beginning
{
    //new node created
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d)
{
    //new node created
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &head,Node* &tail, int pos, int d)
{
    //insert at head i.e. start position
    if(pos==1)
    {
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    } 

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    //insert at tail i.e. last position
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }

}

void print(Node* head) //traversing a linked list
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<< temp->data <<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    //create a new node
    Node* n1 = new Node(10);
    //cout<< n1 -> data <<endl;
    //cout<< n1 -> next <<endl;

    //head pointed to n1
    Node* head = n1;
    Node* tail = n1;
    print(head);
    insertAtHead(head, 15);
    insertAtHead(head, 25);
    print(head);
    insertAtTail(tail, -15);
    insertAtTail(tail, -25);
    print(head);
    insertAtPosition(head,tail,3,5);
    print(head);
    insertAtPosition(head,tail,5,-5);
    print(head);
    insertAtPosition(head,tail,1,35);
    print(head);
    cout<<"head:"<<head->data <<"\ntail: "<<tail->data;
    return 0;
}