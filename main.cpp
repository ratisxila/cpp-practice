#include <iostream>
using namespace std;
int main()
{
  int dosh{};
  cout << "enter your amount of Tetri (because I do not know American money) and be thankful, doing this in miliseconds ain't easy" << endl;
  cin >> dosh;
  int _1_lari{100};
  int _50_tetri{50};
  int _20_tetri{20};
  int _10_tetri{10};
  int _5_tetri{5};
  int _2_tetri{2};
  int _1_tetri{1};

  int dune_1_lari{(dosh - (dosh % _1_lari)) / _1_lari};
  int leftover_1(dosh % _1_lari);
  int dune_50_tetri{(leftover_1 - (leftover_1 % _50_tetri)) / _50_tetri};
  int leftover_2(leftover_1 % _50_tetri);
  int dune_20_tetri{(leftover_2 - (leftover_2 % _20_tetri)) / _20_tetri};
  int leftover_3(leftover_2 % _20_tetri);
  int dune_10_tetri{(leftover_3 - (leftover_3 % _10_tetri)) / _10_tetri};
  int leftover_4(leftover_3 % _10_tetri);
  int dune_5_tetri{(leftover_4 - (leftover_4 % _5_tetri)) / _5_tetri};
  int leftover_5(leftover_4 % _5_tetri);
  int dune_2_tetri{(leftover_5 - (leftover_5 % _2_tetri)) / _2_tetri};
  int leftover_6(leftover_5 % _2_tetri);
  int dune_1_tetri{(leftover_6 - (leftover_6 % _1_tetri)) / _1_tetri};

  cout << "1   lari: " << dune_1_lari << endl;
  cout << "50 tetri: " << dune_50_tetri << endl;
  cout << "20 tetri: " << dune_20_tetri << endl;
  cout << "10 tetri: " << dune_10_tetri << endl;
  cout << "5  tetri: " << dune_5_tetri << endl;
  cout << "2  tetri: " << dune_2_tetri << endl;
  cout << "1  tetri: " << dune_1_tetri << endl;
}