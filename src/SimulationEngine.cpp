```cpp
#include "SimulationEngine.h"
#include "Scenario.h"
#include "RandomGenerator.h"

SimulationEngine::SimulationEngine(const std::vector<std::shared_ptr<Scenario>>& scenarios) : scenarios_(scenarios), results_(scenarios.size()) {}

SimulationEngine::~SimulationEngine() {
    // No specific destructor needed for this class
}

void SimulationEngine::runSimulations(int numSimulations) {
    for (auto& scenario : scenarios_) {
        double result = 0.0;
        for (int i = 0; i < numSimulations; ++i) {
            result += scenario->getOutcome(randomGenerator_.getRandomNumber());
        }
        results_[scenarios_.index(scenario)] = result / numSimulations;
    }
}

std::vector<double> SimulationEngine::getResults() const {
    return results_;
}
```