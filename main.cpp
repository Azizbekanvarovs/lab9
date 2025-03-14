//prob1
// #include <iostream>
// using namespace std;
//
// int multiply(int a, int b) {
//     if (b == 0)
//         return 0;
//     if (b < 0)
//     return -a + multiply(a, b + 1);
//     return a + multiply(a, b - 1);
// }
//
// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << multiply(x, y) << endl;
//     return 0;
// }

//prob2
// #include <iostream>
// using namespace std;
//
// int factorial(int n) {
//     if (n == 0)
//         return 1;
//     return n * factorial(n - 1);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << factorial(n) << endl;
//     return 0;
// }

//prob3
// #include <iostream>
// using namespace std;
//
// int fibonacci(int n) {
//     if (n == 1)
//         return 1;
//     else if (n == 0)
//         return 0;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << fibonacci(n) << endl;
//     return 0;
// }

//prob4
// #include <iostream>
// using namespace std;
//
// int sum(int n) {
//     if (n == 0)
//         return 0;
//     return n + sum(n - 1);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << sum(n) << endl;
//     return 0;
// }

//prob5
// #include <iostream>
// using namespace std;
//
// int descending(int n) {
//     if(n == 0)
//         return 0;
//     cout << n << " ";
//     return descending(n - 1);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     descending(n);
//     return 0;
// }

//prob6
// #include <iostream>
// using namespace std;
//
// int countDigits(int n) {
//     if (n == 0)
//         return 0;
//         return 1 + countDigits(n / 10);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     if (n==0)
//         cout << "0" << endl;
//     else
//         cout << countDigits(n) << endl;
//     return 0;
// }

//prob7
// #include <iostream>
// using namespace std;
//
// int sumDigits(int number) {
//     if (number == 0)
//         return 0;
//     return number % 10 + sumDigits(number / 10);
// }
//
// int main() {
//     int number;
//     cin >> number;
//     cout << sumDigits(number) << endl;
//     return 0;
// }

//prob8
// #include <iostream>
// using namespace std;
//
// int power(int x, int y) {
//     if (y == 0)
//         return 1;
//     return x * power(x, y - 1);
// }
//
// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << power(x, y) << endl;
//     return 0;
// }

//prob9
// #include <iostream>
// using namespace std;
//
// int reverse(int n, int rev=0) {
//     if (n==0)
//         return rev;
//     return reverse(n / 10, rev * 10 + n % 10);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << reverse(n);
//     return 0;
// }

//prob10
// #include <iostream>
// using namespace std;
//
// bool isPalindromeHelper(int n, int original, int rev) {
//     if (n == 0)
//         return original == rev;
//     return isPalindromeHelper(n / 10, original, rev * 10 + n % 10);
// }
//
// bool isPalindrome(int n) {
//     return isPalindromeHelper(n, n, 0);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << (isPalindrome(n) ? "true" : "false") << endl;
//     return 0;
// }

//prob11
// #include <iostream>
// using namespace std;
//
// bool isPrime(int n, int i = 2) {
//     if (n <= 1)
//         return false;
//     if (i > sqrt(n))
//         return true;
//     if (n % i == 0)
//         return false;
//     return isPrime(n, i + 1);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << (isPrime(n) ? "true" : "false") << endl;
//     return 0;
// }