```cpp
#ifndef SIMULATION_ENGINE_H
#define SIMULATION_ENGINE_H

#include <vector>
#include <memory>
#include <stdexcept>
#include <iostream>

#include "Asset.h"
#include "Scenario.h"
#include "RandomGenerator.h"

class SimulationEngine {
public:
    SimulationEngine(const std::vector<std::shared_ptr<Scenario>>& scenarios);
    ~SimulationEngine();

    void runSimulations(int numSimulations);
    std::vector<double> getResults() const;

private:
    const std::vector<std::shared_ptr<Scenario>>& scenarios_; // Scenarios to run simulations on
    std::vector<double> results_; // Results of the simulations
    RandomGenerator randomGenerator_; // Random number generator for simulations
};

#endif // SIMULATION_ENGINE_H
```