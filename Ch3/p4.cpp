#include <vector>
#include <iostream>
#include <algorithm>

int main()
// read some temperatures into a vector
{
    std::vector<double> temps; // temperatures
    for (double temp; std::cin >> temp; ) // read into temp
        temps.push_back(temp); // put temp into vector
    
    // compute mean temperature:
    double sum = 0;
    for (double x: temps) {
        sum += x;
    }
    std::cout << "Average temperature: " << sum/temps.size() << '\n';

    // compute median temperature:
    std::sort(temps.begin(), temps.end());
    std::cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}