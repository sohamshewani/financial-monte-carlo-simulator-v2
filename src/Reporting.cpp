```cpp
#include "Reporting.h"
#include <fstream>
#include <iostream>
#include <sstream>

Reporting::Reporting(const std::shared_ptr<SimulationEngine>& engine) : engine_(engine) {
    if (!engine_) {
        throw std::invalid_argument("Simulation engine cannot be null");
    }
}

Reporting::~Reporting() {
    // No specific destructor needed for this class
}

void Reporting::generateReports(const std::string& filename) {
    std::ofstream reportFile(filename);
    if (!reportFile.is_open()) {
        throw std::runtime_error("Failed to open file for writing");
    }
    reportFile << "Scenario,Result\n";
    for (size_t i = 0; i < engine_->getResults().size(); ++i) {
        reportFile << engine_->getScenarios()[i]->getName() << "," << engine_->getResults()[i] << "\n";
    }
}
```