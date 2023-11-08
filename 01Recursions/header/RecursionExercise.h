
#ifndef DS_ALGO_RECURSIONEXERCISE_H
#define DS_ALGO_RECURSIONEXERCISE_H


class RecursionExercise {

public:
    static int sumOfNaturalNumbersByLooping(int n);

    int sumOfNaturalNumbersByRecursion(int n, int sum);

    int sumOfNaturalNumbersByRecursion(int n);

    int sumOfNaturalNumbersByFormula(int n);
    //Looping takes only one activation record with creation of only a few variables
    //Compared to looping, recursion is more expensive
    //as it needs to create n + 1 activation records in stack with creation of variable at each record
    //But, recurrence relation can be directly applied to write functions in a program
    //By Formula it is fastest with O(1) time and space complexity

    int factorial(int n);

    int exponent(int n, int power);

    int exponentOptimized(int n, int power);

    double taylorSeriesEPowerX(int x, int n);

    double taylorSeriesEPowerXUsingHornersRule(double x, double n);

    double taylorSeriesEPowerXUsingHornersRuleByIteration(double x, double n);

    void printFibonacciNumbersByIteration(int n);

    int getFibonacciSeriesTermByExcessiveRecursion(int n);

    int getFibonacciSeriesTermByOptimizedRecursion(int n, int* resultArray, int size);

    std::string printArray(int * arrayptr, int size);

    void towerOfHanoi(int disks, int towerA, int towerB, int towerC);

};


#endif //DS_ALGO_RECURSIONEXERCISE_H
