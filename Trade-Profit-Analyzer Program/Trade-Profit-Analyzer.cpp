#include <iostream>
#include <vector>
using namespace std;
int main() {
	int numTrades;
	vector<double>profits;

	cout << "Enter number of trades:";
	cin >> numTrades;

	for (int i = 1; i <= numTrades; i++) {
		double buyPrice, sellPrice;
		cout << "\nTrade" << i << endl;
		cout << "Enter buy price";
		cin >> buyPrice;
		cout << "Enter sell price";
		cin >> sellPrice;

		double profit = sellPrice - buyPrice;
		profits.push_back(profit);

		if (profit > 0) {
			cout << "You made a profit of $" << profit << endl;
			if (profit > 100) {
				cout << "Great trade" << endl;
			}
		}
		else if (profit < 0) {
			cout << "You made a loss of $" << -profit << endl;
			if (profit < -100) {
				cout << "Big loss, reconsider your strategy" << endl;
			}
		}
		else {
			cout << "No profit or loss" << endl;
		}
	}
	double total = 0, maxProfit = profits[0], minProfit = profits[0];
for (double p : profits) {
	total += p;
	if (p > maxProfit) maxProfit = p;
	if (p < minProfit) minProfit = p;
}
double average = total/profits.size();

cout << "\n==============" << endl;
cout << "Total Profit/Loss = $" << total << endl;
cout << "Average Profit/Loss = $" << average << endl;
cout << "Highest Profit/Loss = $" << maxProfit << endl;
cout << "Lowest Profit = $" << minProfit << endl;
cout << "==============" << endl;
return 0;
}


