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
const double G = 6.67430e-11;     // m^3/kg/s^2
const double M_sun = 1.989e30;    // Mass of the Sun in kg
const double mu = G * M_sun;      // Gravitational parameter for the Sun
const double g = 9.81;            // m/s^2
const float e = 2.71828;          // Euler's number
const double r1 = 149600000000.0; // Earth's orbital radius in meters

// user variables
int rocket_type;

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
/*Functions*/
//---------------------------------------------

// Fuel fraction calculation
double fuelFraction(double r2)
{
    // exhaust velocity
    double Ve = rockets[rocket_type].specific_impulse * g;
    // total delta v
    double V_1 = sqrt(mu / r1);
    double V_2 = sqrt(mu / r2);
    double V_T1 = sqrt(mu * (2 * r2) / (r1 * (r1 + 2)));
    double V_T2 = sqrt(mu * (2 * r1) / (r2 * (r1 + 2)));
    double DeltaV1 = fabs(V_T1 - V_1);
    double DeltaV2 = fabs(V_T2 - V_2);
    double totalDeltaV = DeltaV1 + DeltaV2;
    // fuel fraction
    double fuelFraction = 1 - pow(e, -totalDeltaV / Ve);
    return fuelFraction;
}

// transfer time
double transferTime(double r2)
{
    // Semi-major axis calculation
    double semi_major_axis = (r1 + r2) / 2.0;
    double transfer_time_seconds = M_PI * sqrt(pow(semi_major_axis, 3.0) / mu);
    // Convert seconds to days
    double transfer_time_days = transfer_time_seconds / 86400.0;
    return transfer_time_days;
}

//---------------------------------------------
/*begin main*/
//---------------------------------------------

int main()
{

    // user variables
    int destination_planet;

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

    // printf("\nYou entered: %d\n", destination_planet);
    while (scanf("%d", &destination_planet) != 1 || destination_planet < 1 || destination_planet > 9)
    {
        while (getchar() != '\n')
            ;
        printf("\n------------------------------------------------------\n");
        printf("ERROR, that's not a planet within our solar \nsystem, please enter a number from the list above.\n");
        printf("------------------------------------------------------\n");
        printf("Select a planet 1 - 9: ");
    }

    destination_planet = destination_planet - 1; // changing to 0 index

    printf("\n------------------------------------------------------\n");
    printf("Your destination planet is: %s", planets[destination_planet].name);
    printf("\n------------------------------------------------------\n");

    printf("Now, please select your rocket type for this mission: (1 - 3):\n\n");
    printf("1. Solid Rocket Booster: 250 seconds\n");
    printf("2. Liquid-Fueled Rocket: 350 seconds\n");
    printf("3. Ion Thruster: 3000 seconds\n");

    while (scanf("%d", &rocket_type) != 1 || rocket_type < 1 || rocket_type > 3)
    {
        while (getchar() != '\n')

        printf("\n------------------------------------------------------\n");
        printf("ERROR, that's not a supported rocket type at the\nmoment, please select from the list above.\n");
        printf("------------------------------------------------------\n");
        printf("Select a rocket type 1 - 3: ");
    }
    rocket_type = rocket_type - 1;
    printf("\n------------------------------------------------------\n");
    printf("You're rocket type is: %s", rockets[rocket_type].type);
    printf("\n------------------------------------------------------\n");
    printf("Calculating your Mission Report...\n");

    //---------------------------------------------
    /*call and print functions*/
    //---------------------------------------------

    printf("\n--------------------------------------------------\n");
    printf("               - MISSION REPORT -                  \n");
    printf("--------------------------------------------------\n");
    printf("Destination Planet: %s\n", planets[destination_planet].name);
    printf("Rocket Type       : %s\n", rockets[rocket_type].type);
    printf("--------------------------------------------------\n");
    printf("Transfer Time     : %.2f days\n", transferTime(planets[destination_planet].orbital_radius));
    printf("Fuel Usage        : %.2f%% of ship's mass\n", fuelFraction(planets[destination_planet].orbital_radius) * 100);
    printf("--------------------------------------------------\n");
    printf("                 Have a safe trip!                \n");
    printf("--------------------------------------------------\n\n");

    //---------------------------------------------
    /*end program*/
    //---------------------------------------------
    return 0;
}
