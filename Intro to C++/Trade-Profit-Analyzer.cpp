#include <iostream>
using namespace std;
int main() {
	int numTrades;
	double totalProfit = 0;

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
		totalProfit += profit;

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
	cout << "n================" << endl;
	cout << "Total Profit/Loss = $" << totalProfit << endl;
	cout << "==============" << endl;
}
