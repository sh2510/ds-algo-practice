
#include <iostream>
#include <vector>
#include "../header/RecursionExercise.h"

int RecursionExercise::sumOfNaturalNumbersByLooping(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
        std::cout << "iter: " << i << "  sum: " << sum << std::endl;
    }
    return sum;
}

int RecursionExercise::sumOfNaturalNumbersByRecursion(int n, int sum){
    std::cout << "ascending phase n: " << n << "  sum: " << sum << std::endl;
    if(n == 0){
        return 0;
    }
    sum = sumOfNaturalNumbersByRecursion(n - 1, sum) + n;
    std::cout << "descending phase n: " << n << "  sum: " << sum << std::endl;
    return sum;
}


int RecursionExercise::sumOfNaturalNumbersByRecursion(int n){
    if(n == 0){
        return 0;
    }
    std::cout << "ascending phase n: " << n << std::endl;
    return sumOfNaturalNumbersByRecursion(n - 1 ) + n;
}

int RecursionExercise::sumOfNaturalNumbersByFormula(int n){
    return n * (n + 1) / 2;
}

int RecursionExercise::factorial(int n) {
    if(n >= 0) {
        std::cout << "ascending phase n: " << n << std::endl;
        if (n == 0) {
            return 1;
        }

        int fact = factorial(n - 1) * n;
        std::cout << "descending phase n: " << n << "  fact: " << fact << std::endl;
        return fact;
    }
    return 0;
}

int RecursionExercise::exponent(int n, int power) {
    if(power >= 0){
        std::cout << "ascending phase n: " << n << "  power: " << power << std::endl;
        if(power == 0){
            return 1;
        }
        int res = exponent(n, power - 1) * n;
        std::cout << "descending phase n: " << n << "  power: " << power << std::endl;
        return res;
    }
    return 0;
}

int RecursionExercise::exponentOptimized(int n, int power) {
    std::cout << "ascending phase n: " << n << "  power: " << power << std::endl;
    if(power == 0){
        return 1;
    }
    if(power % 2 == 0){
        std::cout << "descending phase (even) n: " << n << "  power: " << power << std::endl;
        return exponentOptimized(n * n, power / 2);
    } else {
        std::cout << "descending phase (odd) n: " << n << "  power: " << power << std::endl;
        return n * exponentOptimized(n * n, (power - 1) / 2);
    }
}

double RecursionExercise::taylorSeriesEPowerX(int x, int n) {
    static double power = 1;
    static double fact = 1;
    double res;
    std::cout << "ascending phase x: " << x << "  n: " << n << " power: " << power << " fact: " << fact << " res: " << res <<  std::endl;
    if(n == 0){
        return 1;
    }
    res = taylorSeriesEPowerX(x, n - 1);
    power = power * x;
    fact = fact * n;
    std::cout << "descending phase x: " << x << "  n: " << n << " power: " << power << " fact: " << fact << " res: " << res <<  std::endl;
    return res + (power / fact);
}

double RecursionExercise::taylorSeriesEPowerXUsingHornersRule(double x, double n) {
    static double res = 1;
    std::cout << "ascending phase x: " << x << "  n: " << n << " res: " << res << std::endl;
    if(n == 0){
        return res;
    }
    res = 1 + (x / n) * res;
    return taylorSeriesEPowerXUsingHornersRule(x, n - 1);
}

double RecursionExercise::taylorSeriesEPowerXUsingHornersRuleByIteration(double x, double n) {
    double res = 1;
    for (; n > 0; n--){
        res = 1 + (x / n) * res;
        std::cout << "x: " << x << "  n: " << n << " res: " << res << std::endl;
    }
    return res;
}

void RecursionExercise::printFibonacciNumbersByIteration (int n){
    int num = 0;
    int ini1 = 0;
    int ini2 = 1;
    std::cout << 0 << " " << 1 << " ";
    if (n > 2){
        for(int i = 2; i <= n - 1; i++){
            num = ini1 + ini2;
            std::cout << num << " ";
            ini1 = ini2;
            ini2 = num;
        }
        std::cout << std::endl;
    }
}

int RecursionExercise::getFibonacciSeriesTermByExcessiveRecursion(int n){
    if(n <= 1){
        return n;
    }
    int res = getFibonacciSeriesTermByExcessiveRecursion(n - 2) + getFibonacciSeriesTermByExcessiveRecursion(n - 1);
    std::cout << "ascending phase res: " << res << " n: " << n << std::endl;
    return res;
}

int RecursionExercise::getFibonacciSeriesTermByOptimizedRecursion(int n, int* resultArray, int size){
    if(n <= 1){
        resultArray[n] = n;
        return n;
    } else {
        if (resultArray[n - 2] == -1) {
            resultArray[n - 2] = getFibonacciSeriesTermByOptimizedRecursion(n - 2, resultArray, size);
        }
        if (resultArray[n - 1] == -1) {
            resultArray[n - 1] = getFibonacciSeriesTermByOptimizedRecursion(n - 1, resultArray, size);
        }
    }
    std::cout << "descending phase n: " << n << " arr[n - 2]: " << resultArray[n - 2] << " arr[n - 1]:" << resultArray[n - 1] << " res array: " << printArray(resultArray, size) << std::endl;
    return resultArray[n - 2] + resultArray[n - 1];
}

std::string RecursionExercise::printArray(int * arrayptr, int size) {
    std::string res;
    for (int i = 0; i < size; i++){
        res.append(std::to_string(arrayptr[i]));
        res.append(" ");
    }
    return res;
}

void RecursionExercise::towerOfHanoi(int disks, int towerA, int towerB, int towerC){
    if(disks > 0){
        towerOfHanoi(disks - 1, towerA, towerC, towerB);
        std::cout << "res----> from " << towerA << " to " << towerC << std::endl;
        towerOfHanoi(disks - 1, towerB, towerA, towerC);
    }
}

