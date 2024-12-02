/*boilerplate includes*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int main()
{
    //---------------------------------------------
    /*variable creation*/
    //---------------------------------------------

    // Gravitational constants
    const double G = 6.67430e-11;  // m^3/kg/s^2
    const double M_sun = 1.989e30; // Mass of the Sun in kg
    const double mu = G * M_sun;   // Gravitational parameter for the Sun
    const double g = 9.81;         // m/s^2

    // planet reference
    struct Planet
    {
        char name[10];
        double orbital_radius;
        double orbital_period; 
    };

    const struct Planet planets[] = {
        // Orbital period in seconds
        {"Mercury", 57910000 * 1000, 7600521.6},     // Orbital period: ~88 days
        {"Venus", 108200000 * 1000, 19413907.2},     // Orbital period: ~225 days
        {"Earth", 149600000 * 1000, 31557600.0},     // Orbital period: ~365.25 days
        {"Mars", 227940000 * 1000, 59355072.0},      // Orbital period: ~687 days
        {"Jupiter", 778330000 * 1000, 374335776.0},  // Orbital period: ~4331 days
        {"Saturn", 1429400000 * 1000, 929596608.0},  // Orbital period: ~10,747 days
        {"Uranus", 2870990000 * 1000, 2651370016.0}, // Orbital period: ~30,589 days
        {"Neptune", 4504300000 * 1000, 5200418592.0} // Orbital period: ~59,800 days
    };

    // user variables
    int start_planet;
    int destination_planet;
    double initial_mass;
    int rocket_type;

    


    //---------------------------------------------
    /*begin program*/
    //---------------------------------------------

    //---------------------------------------------
    /*end program*/
    //---------------------------------------------
    return 0;
}
