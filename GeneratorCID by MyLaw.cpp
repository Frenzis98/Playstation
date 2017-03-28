#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Generator(int model[])
{
    srand(time(0));
    for (int i=0;i<6;i++)
    {
        model[i]=rand()%255+1;
    }
}
void Stampa (int model[], string &inizio, string &TargetId, string &Chassis)
{
    cout << inizio << TargetId << Chassis ;
    for (int i=0; i<6; i++)
    {
        cout << hex << model[i];
    }
}
int main()
{
    int option, flag;
    int model[] {0,0,0,0,0,0};
    string inizio = "00000001";
    string TargetId = "0085";
    string Chassis = "0400";
    do{
        system("cls");
    cout << "#########################\n"
         << "###   Generator CID   ###\n"
         << "###  Frenzis - MyLaw  ###\n"
         << "###     Vers : 1.3    ###\n"
         << "#########################\n\n";
    cout << "Console ID :\n";
    Stampa(model, inizio, TargetId, Chassis);
    cout << "\n\n#########################\n"
         << "### 1. Generate CID   ###\n"
         << "### 2. Target: Japan  ###\n"
         << "### 3. Target: Europe ###\n"
         << "### 4. Target: USA    ###\n"
         << "#########################\n";
    cout << "Selection : ";cin >> option;
    switch (option)
    {
        case (1): Generator(model);flag = 1; break;
        case (2): TargetId = "0083";flag = 1; break;
        case (3): TargetId = "0085";flag =1; break;
        case (4): TargetId = "0084";flag =1; break;
        default : cout << "Error 404.";flag = 1;break;
    }
    }while (flag==1);
    return 0;
}
