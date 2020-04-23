#include <iostream>
#include <string>
using namespace std;


int main(int argc, char* argv[])
{
    string s;
    size_t first_pos;
    string first_word;
    setlocale(LC_ALL, "RUS");

    cout << "Input string: ";
    getline(cin, s);

    first_pos = s.find(' ');
    first_word = s.substr(0, first_pos);

    s.replace(s.begin(), s.begin() + first_pos, s.substr(s.rfind(' ') + 1));
    s.replace(s.begin() + s.rfind(' ') + 1, s.end(), first_word);

    cout <<"New string: "<< s << endl;
}