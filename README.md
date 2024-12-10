# CSC150-DI-Final 🚀 Mission Planner

A program designed to help plan theoretical space missions by providing mission parameters for journeys from Earth to other planets in our solar system. Using simplified Keplerian mechanics and the Tsiolkovsky Rocket Equation, the program calculates travel times and fuel requirements for different rocket types and destinations.

---

## 🌌 Features

- **Destination Planet Selection**: Choose a destination planet from a predefined list (e.g., Mercury, Mars, Jupiter, Pluto).
- **Rocket Type Selection**: Select one of three rocket types, each with a specific impulse, which influences fuel efficiency:
  - **Solid Rocket Booster**: 250 seconds
  - **Liquid-Fueled Rocket**: 350 seconds
  - **Ion Thruster**: 3000 seconds
- **Travel Time Calculation**: Compute the approximate time (in days and years) for a Hohmann transfer orbit between Earth and the selected planet.
- **Fuel Requirement Estimation**: Use the simplified Tsiolkovsky Rocket Equation to estimate the fuel fraction required for the mission.
- **Mission Summary**: Display mission details in a user-friendly and creative format, including:
  - Travel time
  - Fuel usage
  - Selected rocket type and destination

---

## 🛠️ How It Works

1. **User Input**:
   - Select a destination planet from the predefined list of planets in the solar system (origin is always Earth).
   - Choose a rocket type from the three options provided.

2. **Processing**:
   - **Travel Time**:
     - Compute the travel time using Keplerian mechanics and the semi-major axis of the Hohmann transfer orbit.
   - **Fuel Requirement**:
     - Calculate the delta-v for the transfer orbit.
     - Compute the fuel fraction using the Tsiolkovsky Rocket Equation, which depends on the rocket's exhaust velocity.

3. **Output**:
   - Generate a mission report with:
     - **Destination Planet**: Name of the selected planet.
     - **Rocket Type**: Name and specific impulse of the selected rocket.
     - **Transfer Time**: Approximate duration of the journey in days and years.
     - **Fuel Usage**: Percentage of the spacecraft's initial mass consumed as fuel.
   - Output is presented in a creative, ASCII-styled mission report.

---

## 📄 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## 🌟 Acknowledgments

- Simplified orbital mechanics inspired by Keplerian motion.
- Fundamentals of space mission planning and the ideal rocket equation.

---

## 📚 Citations and References

- [NASA: Orbits and Kepler's Laws](https://science.nasa.gov/solar-system/orbits-and-keplers-laws/)
- [NASA: Basics of Space Flight - Chapter 4.1](https://solarsystem.nasa.gov/basics/chapter4-1/)
- [Hohmann Transfer Orbit](https://en.wikipedia.org/wiki/Hohmann_transfer_orbit)
- [NASA Glenn Research Center: Ideal Rocket Equation](https://www.grc.nasa.gov/www/k-12/rocket/rktpow.html)
- [NASA Planetary Fact Sheet](https://nssdc.gsfc.nasa.gov/planetary/factsheet/)
