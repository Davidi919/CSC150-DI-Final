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
        char name[20];
        double orbital_radius;
        double orbital_period;
        double orbital_period_days;
    };

    const struct Planet planets[] = {
        // Orbital period in seconds
        // Orbital radius inn meters
        ////adding '.0' to raidus to avoid overflow
        {"Mercury", 57900000000.0, 7603200.0},
        {"Venus", 108200000000.0, 19414080.0},
        {"Earth", 149600000000.0, 31553280.0},
        {"Our Moon", 384000000.0, 2358720.0},
        {"Mars", 228000000000.0, 59356800.0},
        {"Jupiter", 778500000000.0, 374198400.0},
        {"Saturn", 1432000000000.0, 928540800.0},
        {"Uranus", 2867000000000.0, 2642889600.0},
        {"Neptune", 4515000000000.0, 5166720000.0},
        {"Pluto", 5906400000000.0, 7824384000.0}};

int main()
{
    

    // user variables
    int start_planet;
    int destination_planet;
    double initial_mass;
    int rocket_type;

    //---------------------------------------------
    /*begin program*/
    //---------------------------------------------

    // testing out variables
    printf("\n--------------------------------------------\n\n");
    printf("Gravitational Constant: %e m/s\n\n", G);
    printf("The Sun's mass: %e Kg\n\n", M_sun);
    printf("Planet Name: %s\n\n", planets[3].name);
    printf("Orbital Radius: %.2f m\n\n", planets[3].orbital_radius);
    printf("Orbital Period: %.2f seconds\n\n", planets[3].orbital_period);

    //---------------------------------------------
    /*end program*/
    //---------------------------------------------
    return 0;
}
