#include <iostream>

using namespace std;

double w[] = { 0.6, 1.2, 2.4, 0.6, 1.2 };//You can also change this to a vector

//TODO: Define a  ComputeProb function and compute the Probabilities
double w_sum = 0;

void ComputeProb(double w[], int n){
    
    for (int i = 0; i < n; i++) {
            w_sum = w_sum + w[i];
        }
    
    for (int j = 0; j < n; j++) {
        w[j] = w[j] / w_sum;
        cout << "P" << j + 1 << "=" << w[j] << endl;
    }

    
}




int main()
{
    //TODO: Print Probabilites each on a single line:
    //P1=Value
    //:
    //P5=Value
    
    ComputeProb(w, sizeof(w) / sizeof(w[0]));

    
    
    
    return 0;
}
