#include <iostream>
#include <cctype>
#include <vector>
using namespace std;

int getSmallest(vector<int> &numbers)
{
  int smallest{numbers[0]};
  for (int i{}; i < numbers.size(); i++)
    if (smallest > numbers.at(i))
      smallest = numbers.at(i);
  return smallest;
}

int getLargest(vector<int> &numbers)
{
  int largest{numbers[0]};
  for (int i{}; i < numbers.size(); i++)
    if (largest < numbers.at(i))
      largest = numbers.at(i);

  return largest;
}

double getMean(vector<int> &numbers)
{
  double sum{};
  for (auto number : numbers)
    sum += number;
  return sum / numbers.size();
}

void addNumber(vector<int> &numbers)
{
  int number;
  cout << "add a number:";
  cin >> number;
  numbers.push_back(number);
}

void printNumbers(vector<int> &numbers)
{
  for (int i{}; i < numbers.size(); i++)
  {
    cout << numbers[i] << (i != numbers.size() - 1 ? ", " : ".");
  }
}

void dispatch(char action, vector<int> &numbers)
{

  if (tolower(action) != 'a' && numbers.empty())
  {
    cout << "no meaning";
    return;
  }

  switch (tolower(action))
  {
  case 'p':
    printNumbers(numbers);
    break;
  case 'a':
    addNumber(numbers);
    break;
  case 'm':
    cout << "the mean number is: " << getMean(numbers);
    break;
  case 'l':
    cout << "the largest number is: " << getLargest(numbers);
    break;
  case 's':
    cout << "the smallest number is: " << getSmallest(numbers);
    break;
  default:
    cout<<"please enter a correct letter";
  }
}

int main()
{
  vector<int> numbers{};
  int b{};
  char action = '\0';
  while (tolower(action) != 'q')
  {

    cout << "\tP-print numbers\n\tA-add number\n\tM-display mean for number\n\tS-display smallest number\n\tL-display largest number\n\tQ-quit\n\tenter: ";
    cin >> action;
    dispatch(action, numbers);
    cout << "\n\n";
  }
  cout << "Quitting..." << endl;
}