//
//  main.c
//  Percentage in C
//
//  Created by APPLE on 09/07/2024.
//

#include <stdio.h>


int main (int argc, const char ** argv) {
    int scores[] = {40, 46, 90, 97, 123};
    int num_subjects = 5;
    int total = 0;
    float percentage;

    // Calculate total score
    for (int i = 0; i < num_subjects; ++i) {
        total += scores[i];
    }

    // Calculate percentage
    percentage = (float)total / num_subjects;

    printf("Total score: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}



