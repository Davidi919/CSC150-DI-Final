# CSC150-DI-Final 🚀 Mission Planner

A simplified program designed to help plan theoritical space missions by calculating the optimal Hohmann transfer orbit between two planets. Using predefined orbital data and basic Keplerian motion. The user will be provided with essential details such as travel time, delta-v, and fuel estimates based on user-selected rocket types.

---

## 🌌 Features

- **Planet Selection**: Choose a starting and destination planet from a predefined list (e.g., Earth, Mars, Venus).
- **Rocket Type Selection**: Select a rocket type (Solid Rocket Booster, Liquid-Fueled Rocket, or Ion Thruster) to customize fuel efficiency calculations.
- **Hohmann Transfer Calculations**: Automatically compute the most efficient transfer orbit between two planets.
- **Delta-v Calculation**: Calculate the total velocity change required for the mission.
- **Fuel Estimation**: Provide a rough estimate of the remaining spacecraft mass after the burn, based on the selected rocket type and initial spacecraft mass.
- **Mission Summary**: Present mission details, including:
  - Travel time
  - Delta-v requirements
  - Fuel estimates

---

## 🛠️ How It Works

1. **Input**:
   - Select the starting planet.
   - Select the destination planet.
   - Enter the initial spacecraft mass.
   - Choose the rocket type from three options (Solid Rocket Booster, Liquid-Fueled Rocket, Ion Thruster).

2. **Processing**:
   - Use predefined orbital data for selected planets.
   - Compute the Hohmann transfer trajectory and delta-v requirements.
   - Estimate remaining spacecraft mass after fuel burn using the Tsiolkovsky Rocket Equation.

3. **Output**:
   - Display mission details:
     - Travel time (in days)
     - Total delta-v (in m/s)
     - Initial and remaining spacecraft mass after burn
     - Selected rocket type and its efficiency

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
- [NASA: Basics of Space Flight - Chapter 4.1](https://science.nasa.gov/learn/basics-of-space-flight/chapter4-1/)
- [Orbital Mechanics: Hohmann Transfer](https://orbital-mechanics.space/orbital-maneuvers/hohmann-transfer.html)
- [NASA Glenn Research Center: Ideal Rocket Equation](https://www1.grc.nasa.gov/beginners-guide-to-aeronautics/ideal-rocket-equation/)

