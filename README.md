# CSC150-DI-Final 🚀 Mission Planner

A simplified program designed to help plan theoretical space missions by providing approximate mission parameters for journeys from Earth to other planets in our solar system. Using predefined orbital data and simplified calculations, the user is provided with essential details such as launch windows, travel times, and fuel requirements based on the selected rocket type.

---

## 🌌 Features

- **Destination Planet Selection**: Choose a destination planet from a predefined list (e.g., Mars, Jupiter, Saturn).
- **Rocket Type Selection**: Select a rocket type to customize fuel efficiency calculations:
  - Solid Rocket Booster
  - Liquid-Fueled Rocket
  - Ion Thruster
- **Simplified Mission Calculations**: Provides approximate mission parameters using predefined data and simplified equations.
- **Fuel Estimation**: Provide a rough estimate of the fuel required for the mission, based on the selected rocket type.
- **Mission Summary**: Present mission details, including:
  - Launch time
  - Travel time
  - Fuel required

---

## 🛠️ How It Works

1. **Input**:
   - Select the destination planet (origin is always Earth).
   - Choose the rocket type from three options:
     - Solid Rocket Booster
     - Liquid-Fueled Rocket
     - Ion Thruster

2. **Processing**:
   - Use predefined orbital data for the selected destination planet, including approximate delta-v and transfer time.
   - Utilize predefined rocket specifications, each with a specific impulse:
     - **Solid Rocket Booster**: 250 seconds
     - **Liquid-Fueled Rocket**: 350 seconds
     - **Ion Thruster**: 3000 seconds
   - Calculate the exhaust velocity.
   - Estimate the fuel required using the simplified Tsiolkovsky Rocket Equation

3. **Output**:
   - Display mission details:
     - **Travel Time**: Approximate duration of the journey in days.
     - **Fuel Required**: Estimated fuel needed as a percentage of the initial spacecraft mass.
     - **Selected Rocket Type**: Display the rocket type and its specific impulse.

---

## 📄 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## 🌟 Acknowledgments

- Simplified orbital mechanics based on the principles of Keplerian motion.
- Inspired by the basics of space mission planning.

---

## 📚 Citations and References

- [NASA: Orbits and Kepler's Laws](https://science.nasa.gov/solar-system/orbits-and-keplers-laws/)
- [NASA: Basics of Space Flight - Chapter 4.1](https://solarsystem.nasa.gov/basics/chapter4-1/)
- [Hohmann Transfer Orbit](https://en.wikipedia.org/wiki/Hohmann_transfer_orbit)
- [NASA Glenn Research Center: Ideal Rocket Equation](https://www.grc.nasa.gov/www/k-12/rocket/rktpow.html)
