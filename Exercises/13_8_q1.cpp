#include <bits/stdc++.h>

template <typename T, typename U>
struct Website
{
    T adsWatched{};
    U percentageClick{};
    U avgEPC{};
};

template <typename T>
T getInput(std::string print) {
    std::cout << print;
    T input{};
    std::cin >> input;
    return input;
}

double profitMade(Website<int, double>& website) {
    return website.adsWatched * website.avgEPC * (website.percentageClick / 100);
}

Website<int, double> getWebsite() {
    int percentageClick{ getInput<int>("enter ads:") };
    double adsWatched{ getInput<double>("Enter Percentage of users clicking on ad: ") };
    double avgEPC{ getInput<double>("enter average per click:") };

    return { percentageClick, adsWatched, avgEPC };
}



int main() {
    Website website{ getWebsite() };
    std::cout << "Profit made: " << profitMade(website) << std::endl;

    std::unordered_set<int> s;

    return 0;
}
