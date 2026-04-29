#include <stdio.h>

int main() {

    int    a;
    float  b;
    double c;
    char   ch;

    // ====================================================
    //  WELCOME MESSAGE
    // ====================================================
    printf("\n");
    printf("***********************************************\n");
    printf("*                                             *\n");
    printf("*     hello! i am your C number analyzer     *\n");
    printf("*     give me some data and i will think      *\n");
    printf("*     really hard about it for you :)        *\n");
    printf("*                                             *\n");
    printf("***********************************************\n");
    printf("\n");

    // ====================================================
    //  GET INPUT FROM USER
    // ====================================================
    printf(">> step 1 - give me an integer  : ");
    scanf("%d", &a);

    printf(">> step 2 - give me a float     : ");
    scanf("%f", &b);

    printf(">> step 3 - give me a double    : ");
    scanf("%lf", &c);

    printf(">> step 4 - give me a character : ");
    scanf(" %c", &ch);

    // ====================================================
    //  SHOW WHAT USER ENTERED
    // ====================================================
    printf("\n-----------------------------------------------\n");
    printf(" okay! here is what you typed:\n");
    printf("-----------------------------------------------\n");
    printf("  integer   =  %d\n",    a);
    printf("  float     =  %.2f\n",  b);
    printf("  double    =  %.4lf\n", c);
    printf("  character =  %c\n",    ch);
    printf("-----------------------------------------------\n");

    // ====================================================
    //  ANALYZE THE CHARACTER
    // ====================================================
    printf("\n");
    printf(">> thinking about your character '%c'...\n", ch);
    printf("\n");

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        printf("   '%c' is a LETTER - nice choice!\n", ch);

        if (ch >= 'a' && ch <= 'z')
            printf("   it is lowercase - small but mighty.\n");
        else
            printf("   it is uppercase - standing tall!\n");

        // check vowel or consonant
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("   bonus: it is a VOWEL - every word needs you!\n");
        else
            printf("   bonus: it is a CONSONANT - the strong silent type.\n");

    } else if (ch >= '0' && ch <= '9') {

        printf("   '%c' is a DIGIT disguised as a character!\n", ch);
        printf("   sneaky little thing.\n");

    } else {

        printf("   '%c' is a SPECIAL CHARACTER - living outside the rules.\n", ch);

    }

    // ====================================================
    //  ANALYZE THE INTEGER
    // ====================================================
    printf("\n");
    printf(">> thinking about your integer %d...\n", a);
    printf("\n");

    if (a > 0)
        printf("   %d is POSITIVE - above zero, looking good!\n", a);
    else if (a < 0)
        printf("   %d is NEGATIVE - below zero, still valid though.\n", a);
    else
        printf("   %d is ZERO - the center of everything.\n", a);

    if (a % 2 == 0)
        printf("   %d is EVEN - plays well with 2.\n", a);
    else
        printf("   %d is ODD - a bit of a lone wolf.\n", a);

    // bonus divisibility facts
    if (a != 0) {
        if (a % 3 == 0) printf("   fun fact: %d is also divisible by 3!\n", a);
        if (a % 5 == 0) printf("   fun fact: %d is also divisible by 5!\n", a);
        if (a % 7 == 0) printf("   fun fact: %d is also divisible by 7!\n", a);
    }

    // ====================================================
    //  ANALYZE THE FLOAT
    // ====================================================
    printf("\n");
    printf(">> thinking about your float %.2f...\n", b);
    printf("\n");

    if (b > 0)
        printf("   %.2f is POSITIVE - floating happily above zero.\n", b);
    else if (b < 0)
        printf("   %.2f is NEGATIVE - sinking below zero.\n", b);
    else
        printf("   %.2f is ZERO - perfectly balanced.\n", b);

    if (b == (int)b)
        printf("   this float has no decimal part - pretending to be whole!\n");
    else
        printf("   this float has a decimal part - truly floating.\n");

    // ====================================================
    //  ANALYZE THE DOUBLE
    // ====================================================
    printf("\n");
    printf(">> thinking about your double %.4lf...\n", c);
    printf("\n");

    if (c > 0)
        printf("   %.4lf is POSITIVE - precise and above zero.\n", c);
    else if (c < 0)
        printf("   %.4lf is NEGATIVE - precise and below zero.\n", c);
    else
        printf("   %.4lf is ZERO - precise nothingness.\n", c);

    if (c == (int)c)
        printf("   this double is secretly a whole number!\n");
    else
        printf("   this double has real decimal depth.\n");

    // ====================================================
    //  FINAL VERDICT
    // ====================================================
    printf("\n");
    printf("***********************************************\n");
    printf("*              FINAL VERDICT                  *\n");
    printf("***********************************************\n");
    printf("\n");

    // character verdict
    printf("  your char    -> ");
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch >= 'a' && ch <= 'z') printf("lowercase letter\n");
        else                        printf("uppercase letter\n");
    } else if (ch >= '0' && ch <= '9')  printf("digit character\n");
    else                                printf("special character\n");

    // integer verdict
    printf("  your int     -> ");
    if      (a == 0)               printf("zero\n");
    else if (a > 0 && a % 2 == 0) printf("positive and even\n");
    else if (a > 0 && a % 2 != 0) printf("positive and odd\n");
    else if (a < 0 && a % 2 == 0) printf("negative and even\n");
    else                           printf("negative and odd\n");

    // float verdict
    printf("  your float   -> ");
    if      (b > 0) printf("positive\n");
    else if (b < 0) printf("negative\n");
    else            printf("zero\n");

    // double verdict
    printf("  your double  -> ");
    if      (c > 0) printf("positive\n");
    else if (c < 0) printf("negative\n");
    else            printf("zero\n");

    // ====================================================
    //  MOOD REACTION
    // ====================================================
    printf("\n>> my honest reaction:\n\n");

    int is_letter  = (ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z');
    int all_pos    = (a > 0 && b > 0 && c > 0);
    int all_neg    = (a < 0 && b < 0 && c < 0);
    int all_zero   = (a == 0 && b == 0 && c == 0);

    if (is_letter && all_pos)
        printf("   a letter and all positive? you are an optimist!\n");
    else if (is_letter && all_neg)
        printf("   a letter with all negatives... rough day huh?\n");
    else if (!is_letter && all_pos)
        printf("   not a letter but all positive - unique energy.\n");
    else if (all_zero)
        printf("   everything is zero... very zen of you.\n");
    else if (all_neg)
        printf("   all negative values. bold. respect.\n");
    else
        printf("   a mixed bag! just like real life.\n");

    // ====================================================
    //  GOODBYE
    // ====================================================
    printf("\n-----------------------------------------------\n");
    printf(" all done! thanks for feeding me data :)\n");
    printf(" see you next run!\n");
    printf("-----------------------------------------------\n\n");

    return 0;
}