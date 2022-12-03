// Write your name
// Write your perm number
// Do not include a main function in this file
// Only submit this file
// See code.h for the descriptions of each problem
#include "code.h"


/* Problem 1: 10 pts */
 
TeaPacket* bestPacket(TeaPacket* head){
   int value = 0;
   if (head->next == nullptr)
   {
      return head;
   }
   else
   {
      if (head->rating * head->rarity >= bestPacket(head->next)->rating * bestPacket(head->next)->rarity)
      {
         return head;
      }
      else
      {
         return bestPacket(head->next);
      }
   }
}



/* Problem 2: 10 points*/

Node* insert(Node* head, int value){
   Node* cur = head;
   while (cur->data < value)
   {
      cur = cur->next;
   }
   Node insertion;
   insertion.data = value;
   cur->next = &insertion;
   return head;
}

/* Problem 3: 10 points*/

bool isBalanced(std::string s){
   int aCount = 0;
   int bCount = 0;
   for (int i=0; i<s.size(); i++)
   {
      if (s.at(i) == 'A')
      {
         aCount++;
      }
      else if (s.at(i) == 'B')
      {
         bCount++;
      }
   }
   return aCount == bCount;
}


