/*boilerplate includes*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>
#include <math.h>

//---------------------------------------------
/*global variable creation*/
//---------------------------------------------

// Gravitational constants
const double G = 6.67430e-11;  // m^3/kg/s^2
const double M_sun = 1.989e30; // Mass of the Sun in kg
const double mu = G * M_sun;   // Gravitational parameter for the Sun
const double g = 9.81;         // m/s^2

// planet reference
struct Planet
{
    const char name[20];
    double orbital_radius;
    double orbital_period;
    double orbital_period_days;
};

const struct Planet planets[] = {
    // Orbital period in seconds
    // Orbital radius inn meters
    ////adding '.0' to raidus to avoid overflow
    {"Mercury\0", 57900000000.0, 7603200.0},
    {"Venus\0", 108200000000.0, 19414080.0},
    //{"Earth", 149600000000.0, 31553280.0},
    {"Our Moon\0", 384000000.0, 2358720.0},
    {"Mars\0", 228000000000.0, 59356800.0},
    {"Jupiter\0", 778500000000.0, 374198400.0},
    {"Saturn\0", 1432000000000.0, 928540800.0},
    {"Uranus\0", 2867000000000.0, 2642889600.0},
    {"Neptune\0", 4515000000000.0, 5166720000.0},
    {"Pluto\0", 5906400000000.0, 7824384000.0}};

// rocket type variables
typedef struct
{
    const char type[30];  // Rocket type
    int specific_impulse; // Specific impulse in seconds
} Rocket;
Rocket rockets[] = {
    {"Solid Rocket Booster\0", 250},
    {"Liquid-Fueled Rocket\0", 350},
    {"Ion Thruster\0", 3000}};

//---------------------------------------------
/*begin main*/
//---------------------------------------------

int main()
{

    // user variables
    int destination_planet;
    double initial_mass;
    int rocket_type;

    //---------------------------------------------
    /*variable and struct testing*/
    //---------------------------------------------

    // testing out variables and structs
    /*     int test_variable_planets = 3;
        printf("\n--------------------------------------------\n\n");
        printf("Gravitational Constant: %e m/s\n\n", G);
        printf("The Sun's mass: %e Kg\n\n", M_sun);
        printf("Planet Name: %s\n\n", planets[test_variable_planets].name);
        printf("Orbital Radius: %.2f m\n\n", planets[test_variable_planets].orbital_radius);
        printf("Orbital Period: %.2f seconds\n\n", planets[test_variable_planets].orbital_period);

        int test_variable_rockets = 0;
        printf("\n--------------------------------------------\n\n");
        printf("Rocket type: %s\n\n", rockets[test_variable_rockets].type);
        printf("Rocket Impulse: %d\n\n", rockets[test_variable_rockets].specific_impulse); */
    //---------------------------------------------
    /*end testing*/
    //---------------------------------------------
    printf("\n--------------------------------------------\n\n");
    printf("Mission Central");
    printf("\n--------------------------------------------\n\n");
    printf("Welcome to Mission Central, where we will plan for your mission to a planet within our solar system from Earth.\n\n");
    printf("\n--------------------------------------------\n\n");
    printf("Please select your destination planet (1 - 9): \n");
    printf("\n--------------------------------------------\n\n");
    printf("1. Mercury \n");
    printf("2. Venus \n");
    printf("3. Our Moon \n");
    printf("4. Mars \n");
    printf("5. Jupiter \n");
    printf("6. Saturn \n");
    printf("7. Uranus \n");
    printf("8. Neptune \n");
    printf("9. Pluto \n\n");
    printf("Select a planet 1 - 9: ");
    scanf("%d", &destination_planet);

    // printf("\nYou entered: %d\n", destination_planet);
    if (destination_planet > 9 || destination_planet < 1)
    {
        printf("\n--------------------------------------------\n");
        printf("ERROR, that's not a planet within our solar system, please enter a number from the list above.\n");
        printf("\n--------------------------------------------\n");
        printf("Select a planet 1 - 9: ");
        scanf("%d", &destination_planet);
    }
    
    destination_planet = destination_planet - 1;
    printf("\n--------------------------------------------\n");
    printf("Your destination planet is: %s", planets[destination_planet].name);
    printf("\n--------------------------------------------\n\n");
    


    printf("Now, please select your rocket type for this mission: (1 - 3):\n\n");
    printf("1. Solid Rocket Booster: 250 seconds\n2. Liquid-Fueled Rocket: 350 seconds\n3. Ion Thruster: 3000 seconds\n");
    scanf("%d", &rocket_type);
    if (rocket_type > 3 || rocket_type < 1)
    {
        printf("\n--------------------------------------------\n");
        printf("ERROR, that's not a supported rocket type at the moment, please select from the list above.\n");
        printf("\n--------------------------------------------\n");
        printf("Select a rocket type 1 - 3: ");
        scanf("%d", &rocket_type);
    }
    rocket_type = rocket_type - 1;
    printf("\n--------------------------------------------\n");
    printf("You're rocket type is: %s", rockets[rocket_type].type);
    printf("\n--------------------------------------------\n\n");
    

    //---------------------------------------------
    /*end program*/
    //---------------------------------------------
    return 0;
}
