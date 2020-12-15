#include <iostream>
//przez 3 to fizz
//przez  5 to buzz
//przez  3i5 czyli przez 15 to fizzbuzz
bool fizzbuzz(int n)
{
    if (n % 3 == 0)
    {
        return "Fizz";
    }
    else if (n % 5 == 0)
    {
        return "buzz";
    }
    else if(n % 15 == 0)
    {
        return "FizzBuzz";
    }
    // return "cuj";
    return 0;
}
