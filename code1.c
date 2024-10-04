#include <stdio.h>


void combinations(int score) {
    printf("possible combinations of scoring plays if a team score is %d:\n", score);

    for (int td_2pt = 0; td_2pt <= score /8; td_2pt++){
        for (int td_fg = 0; td_fg <= score /7; td_fg++) {
            for (int td = 0; td <= score / 6; td++) {
                for (int fg = 0; fg <= score / 3; fg++) {
                    for(int safety = 0; safety <= score / 2; safety++) {
                        int total = (td_2pt * 8) + (td_fg *7) + (td * 6) + (fg * 3) + (safety * 2);

                        if (total == score) {
                            printf("%d TD + 2pt, %d TD + fg, %d TD, %d FG, %d safety \n", td_2pt, td_fg, td, fg, safety);
                        }
                    }
                }
            }
        }
    }
}

int main() {
    int score;

    while(1){
        printf("enter 0 or 1 to stop \n");
        printf("Enter the nfl score: ");
        scanf("%d", &score);

        if (score <= 1) {
            break;
        }

        combinations(score);
    }

    return 0;
}