#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jerseyNo;
    char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jerseyNo = 7;
    char temp[100] = "India";
    strcpy(dhoni->country, temp);

    Cricketer *kohli = new Cricketer;
    // kohli = dhoni;
    kohli->jerseyNo = dhoni->jerseyNo;
    strcpy(kohli->country, dhoni->country);

    delete dhoni;

    cout << kohli->jerseyNo << " " << kohli->country << endl;

    return 0;
}