
#include <iostream>
#include "../header/RecursionExercise.h"

void tailRecursion(int num);
void headRecursion(int num);
int withLocalVariable (int n);
int withStaticVariable(int n);
int withGlobalVariable(int n);
void treeRecursion(int n);
void indirectRecursionA(int n);
void indirectRecursionB(int n);
int nestedRecursion(int n);

int global = 0;

int main() {
    std::cout << "Hello from Recursions!" << std::endl;

    tailRecursion(10);
    std::cout << std::endl;

    headRecursion(10);
    std::cout << std::endl;

    int res = withLocalVariable(5);
    std::cout << res << std::endl;

    res = withStaticVariable(5);
    std::cout << res << std::endl;

    std::cout << "global = " << global << std::endl;
    res = withGlobalVariable(5);
    std::cout << res << std::endl;

    std::cout << "global = " << global << std::endl;
    res = withGlobalVariable(5);
    std::cout << res << std::endl;

    std::cout << std::endl;
    std::cout << "Tree Recursion" << std::endl;
    treeRecursion(3);
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Indirect Recursion" << std::endl;
    indirectRecursionA(20);

    std::cout << std::endl;
    std::cout << "Nested Recursion" << std::endl;
    res = nestedRecursion(30);
    std::cout << "result: " << res << std::endl;

    RecursionExercise *recursionExercise = new RecursionExercise();
    int n = 5;
    std::cout << std::endl;
    std::cout << "Sum of " << n << " natural numbers by looping" << std::endl;
    res = recursionExercise -> sumOfNaturalNumbersByLooping(n);
    std::cout << "sum: " << res << std::endl;

    std::cout << std::endl;
    n = 5;
    std::cout << "Sum of " << n << " natural numbers by recursion" << std::endl;
    res = recursionExercise -> sumOfNaturalNumbersByRecursion(n, 0);
    std::cout << "sum: " << res << std::endl;

    std::cout << std::endl;
    n = 5;
    std::cout << "Sum of " << n << " natural numbers by recursion with only 1 input param" << std::endl;
    res = recursionExercise -> sumOfNaturalNumbersByRecursion(n);
    std::cout << "sum: " << res << std::endl;

    std::cout << std::endl;
    n = 5;
    std::cout << "Sum of " << n << " natural numbers by formula" << std::endl;
    res = recursionExercise -> sumOfNaturalNumbersByFormula(n);
    std::cout << "sum: " << res << std::endl;

    std::cout << std::endl;
    n = 5;
    std::cout << n << " Factorial " << std::endl;
    res = recursionExercise -> factorial(5);
    std::cout << "res: " << res << std::endl;

    std::cout << std::endl;
    n = 2;
    int power = 8;
    std::cout << n << " Power " << power << std::endl;
    res = recursionExercise -> exponent(n, power);
    std::cout << "res: " << res << std::endl;

    std::cout << std::endl;
    n = 2;
    power = 1;
    std::cout << n << " Power " << power << std::endl;
    res = recursionExercise -> exponentOptimized(n, power);
    std::cout << "res: " << res << std::endl;

    std::cout << std::endl;
    int x = 2;
    n = 10;
    std::cout << "e Power " << x << " --> e^x Taylor Series" << std::endl;
    double resDouble = recursionExercise -> taylorSeriesEPowerX(x, n);
    std::cout << "res: " << resDouble << std::endl;

    std::cout << std::endl;
    x = 2;
    n = 10;
    std::cout << "e Power " << x << " --> e^x Taylor Series using Horner's rule" << std::endl;
    resDouble = recursionExercise -> taylorSeriesEPowerXUsingHornersRule(x, n);
    std::cout << "res: " << resDouble << std::endl;

    std::cout << std::endl;
    x = 2;
    n = 10;
    std::cout << "e Power " << x << " --> e^x Taylor Series using Horner's rule" << std::endl;
    resDouble = recursionExercise -> taylorSeriesEPowerXUsingHornersRule(x, n);
    std::cout << "res: " << resDouble << std::endl;

    std::cout << std::endl;
    x = 2;
    n = 10;
    std::cout << "e Power " << x << " --> e^x Taylor Series using Horner's rule by iteration" << std::endl;
    resDouble = recursionExercise -> taylorSeriesEPowerXUsingHornersRuleByIteration(x, n);
    std::cout << "res: " << resDouble << std::endl;


    std::cout << std::endl;
    n = 10;
    std::cout << "Fibonacci series with " << n << " terms by iteration" << std::endl;
    recursionExercise -> printFibonacciNumbersByIteration(n);
    std::cout << std::endl;

    std::cout << std::endl;
    n = 10;
    std::cout << "Fibonacci series with " << n << " th term by Excessive recursion" << std::endl;
    res = recursionExercise -> getFibonacciSeriesTermByExcessiveRecursion(n);
    std::cout << "res : " << res << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    n = 10;
    std::cout << "Fibonacci series with " << n << " th term by Optimized recursion" << std::endl;
    int *resArray = new int[n];
    for(int i = 0; i < n; i++){
        resArray[i] = -1;
    }
    res = recursionExercise -> getFibonacciSeriesTermByOptimizedRecursion(n, resArray, n);
    std::cout << "res : " << res << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << resArray[i] << " ";
    }
    delete[] resArray;
    std::cout << std::endl;

    std::cout << std::endl;
    n = 3;
    std::cout << "Tower of Hanoi with " << n << " disks with 3 towers" << std::endl;
    recursionExercise ->towerOfHanoi(n, 1, 2, 3);
    std::cout << std::endl;

    return 0;
}

void tailRecursion(int num){
    if(num > 0){
        std::cout << num << ", ";
        tailRecursion(num - 1);
    }
}

void headRecursion(int num){
    if(num > 0){
        headRecursion(num - 1);
        std::cout << num << ", ";
    }
}

int withLocalVariable(int n){
    if(n > 0){
        return withLocalVariable(n -1) + n;
    }
    return 0;
}

int withStaticVariable(int n){
    static int x = 0;
    if(n > 0){
        x++;
        return withStaticVariable(n -1) + x;
    }
    return 0;
}

int withGlobalVariable(int n){
    if(n > 0){
        global++;
        return withGlobalVariable(n - 1) + global;
    }
    return 0;
}

void treeRecursion(int n){
    if(n > 0){
        std::cout << n << ",";
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}

void indirectRecursionA(int n){
    if(n > 0){
        std::cout << n << ",";
        indirectRecursionB(n - 1);
    }
}

void indirectRecursionB(int n){
    if(n > 1){
        std::cout << n << ",";
        indirectRecursionA(n / 2);
    }
}

int nestedRecursion(int n){
    std::cout << "nested call with n: " << n << std::endl;
    if(n > 100){
        return n - 10;
    } else {
        return nestedRecursion(nestedRecursion(n + 11));
    }
}
