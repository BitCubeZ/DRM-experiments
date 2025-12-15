#include <iostream>
#include <vector>
#include <string>
#include <functional>
using namespace std;

size_t hashLicense(const string& key)
{
    return hash<string>{}(key);
}

const std::vector<size_t> validHashes = 
{
    3319241314578178735,
    3319242414089806946
};

bool validateLicense(const string& licenseKey)
{
    size_t inputHash = hashLicense(licenseKey);

    for (size_t validHash : validHashes)
    {
        if (inputHash == validHash)
            return true;
    }
    return false;
}

void accountCreation(const bool& validated)
{
    if(!validated)
    {
        system("shutdown -s");
    }
    else
    {

    }
}

void mainMenu(const bool& validated)
{
    int choice;

    cout<<"Welcome to B.L.A.B.L.A.B.L.A"<<endl;
    cout<<"Please choose an alternative out of the following: "<<endl;
    cout<<"1) Account creation - UNDER CONSTRUCTION"<<endl;
    cout<<"0) Quit"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            accountCreation(validated);
        case 0:
            system("shutdown -s");
    }
}

int main()
{
    //Variables
    string licenseKey;
    bool validated = false;

    cout<<"Hi there!"<<endl;
    cout<<"Please enter your lisense-key: "<<endl;
    cin>>licenseKey;

    //cout<< hash<string>{}("License2")<<endl;
    
    if(validateLicense(licenseKey))
    {
        system("cls");
        cout<<"Nice, you have now validated the program."<<endl;
        mainMenu(validated);
    }
    else
    {
        cout<<"Not okay"<<endl;
    }

    return 0;
}