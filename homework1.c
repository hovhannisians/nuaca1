#include <stdio.h>

int main() {
    int A;
    FILE* in;
    fopen_s(&in, "INPUT.TXT", "r");
    fscanf_s(in, "%d", &A);
    fclose(in);

    int B = A / 10;
    int square = B * (B + 1) * 100 + 25;

    FILE* out;
    fopen_s(&out, "OUTPUT.TXT", "w");
    fprintf(out, "%d\n", square);
    fclose(out);

    return 0;
}