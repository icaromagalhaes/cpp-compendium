#include <dp.h>
#include <iostream>
#include <cassert>

using namespace compendium;

bool binary_knapsack_UnitTest()
{
    // TODO remove hardcoded "10" value
    int N, V, W(10), C;

    std::vector< std::pair<int, int> > sack;
    while(std::cin >> N && N > 0)
    {

        std::cin >> C;

        sack.clear();

        while(N--)
        {
            std::cin >> V >> W;
            sack.push_back(std::make_pair(V, W));
        }

        std::cout << DP::binary_knapsack(C, sack, sack.size())
            << " min." << std::endl;

    }

    return true;
}

bool coin_change_UnitTest()
{

    int cents, q;

    while (std::cin >> cents >> q)
    {
        int *coins = new int[q];
        for (int i = 0; i < q; i++)
            cin >> coins[i];

        std::cout << "Cents: " << cents << std::endl << "Coins: ";

        for (int i = 0; i < q; i++)
        {
            std::cout << coins[i] << " ";
        }

        std::cout << std::endl << DP::coin_change(cents, coins, q) << std::endl;

        delete coins;
    }

    return true;

}

bool word_break_UnitTest()
{

    std::vector<std::string> dictionary;
    std::string curr_word;
    std::string input;
    int tries;

    std::cin >> qt_words;

    while(qt_words--)
    {
        std::cin >> curr_word;
        // adding word to dictionary
        dictionary.push_back(word);
    }


    std::cin >> tries;

    while (tries--)
    {
        std::cin >> in;
        std::cout << in << " ";
        std::cout << (DP::word_break(in) ? "In": "Out") << std::endl;
    }

    return true;

}

bool binomial_coefficient_UnitTest()
{

    int n, k;

    while (std::cin >> n >> k)
    {
        std::cout << "C(" << n << ", " << k << "): "
            << DP::binomial_coefficient(n, k) << std::endl;
    }

    return true;

}

int main( /* int argc, char const *argv[] */ ) // temp wunused input parsing vars
{

    assert(binary_knapsack_UnitTest());
    assert(coin_change_UnitTest());
    assert(word_break_UnitTest());
    assert(binomial_coefficient_UnitTest());

    std::clog << "all tests passed" << std::endl;

    return 0;
}
