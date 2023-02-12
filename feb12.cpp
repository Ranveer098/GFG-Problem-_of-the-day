#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int num)
  {
    val = num;
    next = NULL;
  }
};
class Solution
{
public:
  Node *primeList(Node *head)
  {
    Node *temp = head;
    while (temp != NULL)
    {
      int data = temp->val;
      int prime = INT_MAX;
      for (int i = 0; i * i <= temp->val; i++)
      {
        if (isPrime(data + i) && isPrime(data - i))
        {
          prime = min(prime, min(data + i, data - i));
          break;
        }
        else if (isPrime(data + i))
        {
          prime = min(prime, data + i);
          break;
        }
        else if (isPrime(data - i))
        {
          prime = min(prime, data - i);
          break;
        }
      }
      if (prime != INT_MAX)
        temp->val = prime;
      temp = temp->next;
    }
    return head;
  }
  bool isPrime(int val)
  {
    if (val <= 1)
      return false;
    for (int i = 2; i * i <= val; i++)
    {
      if (val % i == 0)
        return false;
    }
    return true;
  }
};

int main()
{
  int t;
  cin >> t;

  while (t - -)
  {
    int n;
    cin >> n;
    Node *head, *tail;
    int num;
    cin >> num;

    head = tail = new Node(num);
    for (int i = 0; i < n - 1; i++)
    {
      int num;
      cin >> num;
      tail->next = new Node(num);
      tail = tail->next;

      Solution ob;
      Node *temp = ob.primeList(head);
      while (temp != NULL)
      {
        cout << temp->val << " ";
        temp = temp->next;

        cout << endl;
            }
    }
    return 0;
  }