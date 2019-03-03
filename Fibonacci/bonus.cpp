#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
    if(argc != 3)
    {
        cout << "Please supply x and y values with a space in between and try again: " << endl;
        exit(1);
    }

    string x = argv[1];
    string y = argv[2];
    string input = "0";
    string output;
    int n = 0;
    int zeroCount = 0;
    int oneCount = 0;

    cout << "Subwords from '0'" << endl;
    while(input.length() < 1600)
    {
        for(int i = 0; i < input.length(); i++)
        {
            if(input[i] == '0')
            {
                output += x;
                
            }
            if(input[i] == '1')
            {
                output += y;
                
            }
        }
        
        
        cout << n << "  " << input << endl;
        input = output;
        n++;
        output = "";
    }

    input = "0";
    output = "";
    n = 0;

    const char separator = ' ';
    const int numWidth = 6;
    
    cout << endl;
    cout << "Results Table" << endl;
    cout << left << setw(numWidth) << setfill(separator) << "n";
    cout << left << setw(numWidth) << setfill(separator) << "lngth";
    cout << left << setw(numWidth) << setfill(separator) << "0's";
    cout << left << setw(numWidth) << setfill(separator) << "1's" << endl;
    

    while(input.length() < 1600)
    {
        for(int i = 0; i < input.length(); i++)
        {
            if(input[i] == '0')
            {
                output += x;
                zeroCount++;
            }
            if(input[i] == '1')
            {
                output += y;
                oneCount++;
            }
        }
        
        cout << left << setw(numWidth) << setfill(separator) << n;
        cout << left << setw(numWidth) << setfill(separator) << input.length();
        cout << left << setw(numWidth) << setfill(separator) << zeroCount;
        cout << left << setw(numWidth) << setfill(separator) << oneCount << endl;
        
        input = output;
        n++;
        zeroCount = 0;
        oneCount = 0;
        output = "";
    }
    return 0;
}
