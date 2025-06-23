//#include <iostream>
//#include <fstream>
//
//int main() {
//    std::ifstream inputFile("INPUT.TXT");
//    std::ofstream outputFile("OUTPUTs.TXT");
//
//    long long A, B;
//    inputFile >> A >> B;
//
//    long long sum = A + B;
//
//    outputFile << sum;
//
//    inputFile.close();
//    outputFile.close();
//
//    return 0;
//} 


#include <stdio.h>

int main() {
    int n = 0;
    int s = 0;

    scanf_s("%d", &n);
    if (n >= 0) {
        while (n > 0)
            s += n--;

       

    }
    else {
        while (n <= 1)
            s += n++;
       
    }
    printf("gumary = %d\n", s);

   /* for (; n>0; n--) {
        s += n;
    }*/


    return 0;
}
