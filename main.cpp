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

int main()
{
    //Variables
    string licenseKey;

    cout<<"Hi there!"<<endl;
    cout<<"Please enter your lisense-key: "<<endl;
    cin>>licenseKey;

    cout<< hash<string>{}("License2")<<endl;
    
    if(validateLicense(licenseKey))
    {
        cout<<"Nice, you have now validated the program."<<endl;
    }
    else
    {
        cout<<"Not okay"<<endl;
    }

    return 0;
}