#include <iostream>
#include <vector>
using namespace std;

int main()
{
   char mod = '\0';
   vector<int> cod{};
   int b{};

   while (mod != 'q' && mod != 'Q')
   {

      cout << "\n\n P-print numbers\n A-add number\n M-display mean for number\n S-display smallest number\n L-display largest number\n Q-quit\n enter:";
      cin >> mod;
      if (mod == 'p' || mod == 'P')
      {
         if (cod.empty())
         {
            cout << "\nno meaning";
         }
         else
         {
            for (int i{}; i < cod.size(); i++)
            {
               cout << cod[i] << (i != cod.size() - 1 ? ", " : ".");
            }
         }
      }
      else if (mod == 'a' || mod == 'A')
      {
         cout << "add number:";
         cin >> b;
         cod.push_back(b);
      }
      else if (mod == 'm' || mod == 'M')
      {
         int all{};
         for (auto num : cod)
            all += num;
         cout << all / cod.size();
      }
      else if (mod == 'l' || mod == 'L')
      {
         if (cod.empty())
         {
            cout << "\nno meaning";
         }
         else
         {
            int big{cod[0]};
            for (int i{}; i < cod.size(); i++)
               if (big < cod.at(i))
                  big = cod.at(i);

            cout << "the largest number is:" << big;
         }
      }
      else if (mod == 's' || mod == 'S')
      {
         if (cod.empty())
         {
            cout << "\nno meaning";
         }
         else
         {
            int small{cod[0]};
            for (int i{}; i < cod.size(); i++)
            {

               if (small > cod.at(i))
               {
                  small = cod.at(i);
               }
            }
            cout << "the smallest number is:" << small;
         }
      }
   }
   cout << "Quitting..." << endl;
}
