#include <stdio.h>

#ifndef HAIR_PROTOCOLS_H
#define HAIR_PROTOCOLS_H

#define PABA "A member of the B-vitamin complex that acts as a precursor for catalase production. (PABA pen B-vitamin complex sung a um ahia, catalase pianna dia sil poimo ahi)"
#define MELANOCYTE "A specialized cell in the hair follicle that produces melanin pigment. (Mihing sam zung a cell poimo khat ahia, rong vom a piang sah hi)"
#define HPO "Hydrogen peroxide, a molecule that accumulates in the hair follicle and bleaches pigment. (Tami hydrogen peroxide in mihing sam a kaang sah hi)"

#define CHABI "1. PABA: Para-aminobenzoic acid \n2. MELANOCYTE: Pigment-producing cell (Rong bawldoh cell) \n3. HPO: Hydrogen peroxide (Sam kaang sah tu)\n"

#endif

void print_daily_protocol() {
    printf("\n=== Protocol 1: Daily ===\n");
    printf("Goal: Support the %s\n\n", MELANOCYTE);
    printf("Instructions:\n");
    printf("1. Take 1 tablespoon of UNSULPHURED blackstrap molasses.\n");
    printf("2. Dissolve it entirely in a cup of warm (not hot) water. Stir thoroughly.\n");
    printf("3. Drink it on an empty stomach first thing in the morning (before coffee, tea, or breakfast).\n");
    printf("\nScience Note:\n");
    printf("- Molasses provides %s\n", PABA);
    printf("- This process helps neutralize %s\n", HPO);
}

void print_weekly_protocol() {
    printf("\n=== Protocol 2: Weekly ===\n");
    printf("Instructions:\n");
    printf("1. Twice a week, mix 5 drops of rosemary essential oil with 1 tablespoon of a carrier oil (like jojoba or coconut oil).\n");
    printf("2. Massage this blend into your entire scalp for a full 5 minutes using small circular motions.\n");
    printf("3. Leave the oil in overnight and wash your hair in the morning.\n");
    printf("\nScience Note:\n");
    printf("- This increases blood flow, delivering nutrients directly to the hair follicle.\n");
}

int main(void) {
    int choice;

    printf("==================================================\n");
    printf("Hair Reversal Protocol App\n");
    printf("Source: https://www.youtube.com/watch?v=xtHHGZk4A-I\n");
    printf("Copyright (c) David Vumlallian Zou, 14 July 2026\n");
    printf("==================================================\n\n");

    printf("--- Glossary (CHABI) ---\n");
    printf("%s", CHABI);
    printf("------------------------\n\n");

    printf("Which protocol would you like to view?\n");
    printf("1. Daily Protocol (Blackstrap Molasses)\n");
    printf("2. Weekly Protocol (Rosemary Oil Massage)\n");
    printf("Enter 1 or 2: ");
    
    scanf("%d", &choice);

    if (choice == 1) {
        print_daily_protocol();
    } else if (choice == 2) {
        print_weekly_protocol();
    } else {
        printf("\nInvalid choice. Please run the program again.\n");
    }

    return 0;
}
