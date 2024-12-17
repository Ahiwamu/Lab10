#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");

    string text;
    double sum = 0.0;
    double sumsqrt = 0.0; 
    int count = 0;

    while(getline(source,text)){
        sum += stod(text);
        sumsqrt += pow(stod(text),2);
        count++;
    }
    
    double mean = sum / count;
    double sd = sqrt(double(sumsqrt/count) - pow(mean,2));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd;
}