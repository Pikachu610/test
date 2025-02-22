#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

typedef struct Node *NodePtr;
NodePtr NewNode(int xdata)
{
    NodePtr newNode = new Node;
    newNode->data = xdata;
    newNode->next = nullptr;
    return newNode;
}

// kiểm tra rỗng
bool isEmpty(NodePtr a){
    return a == nullptr;    
}

// đếm số phần tử
int Size(NodePtr a){
    int count = 0;
    while(a != nullptr){
        count++;
        a = a-> next;
    }
    return count;
}

//chen 1 phtu
void insert(NodePtr &a, int p, int x){
    int n= Size(a);
    if(p < 0 || p > n+1){
        cout << "Vi tri chen khong hop le" << endl;
        return;
    }
    NodePtr newNode = NewNode(x);
    if(isEmpty(a)){
        a = newNode;
        return;
    }
    if(p == 0){
        newNode -> next = a;
        a = newNode;
        return;
    }
    if(p == n+1){
        NodePtr Cuoi =a;
        while(Cuoi -> next != nullptr){
            Cuoi = Cuoi -> next;
        }
        Cuoi -> next = newNode;
        return;
    }
    // ví dụ chèn vào vị trí 2 thì cần tìm đến vị trí 1
    for(int i = 1; i< p-1; i++){
        a = a -> next;
    }
    newNode -> next = a -> next;
    a -> next = newNode;
}

// xóa 1 phần tử
void Delete(NodePtr &a, int p){
    if (isEmpty(a)){
        return;
    }
    if(p == 0){
        a = a -> next;
        return;
    }
}

int main()
{
    return 0;
}