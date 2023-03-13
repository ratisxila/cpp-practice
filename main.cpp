#include <bits/stdc++.h>
using namespace std;

struct Person
{
    string name, lastName;
    int age = 0;
};

int main()
{
    int n;
    cin >> n;
    vector<Person> persons(n);
    for (size_t i = 0; i < n; i++)
    {
        cout << "Person " << i + 1 << ':' << endl;
        cin >> persons[i].name >> persons[i].lastName >> persons[i].age;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << persons[i].name<<' ' << persons[i].lastName <<' '<< persons[i].age<<endl;
    }
}