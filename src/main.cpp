#include <iostream>
#include "SimulationEngine.h"
#include "TaxLossHarvesting.h"
#include "Reporting.h"

int main() {
    try {
        // Initialize and run the simulation engine
        SimulationEngine simEngine;
        simEngine.runSimulation();

        // Apply tax loss harvesting
        TaxLossHarvesting taxLossHarvesting(simEngine.getResults());
        taxLossHarvesting.applyHarvesting();

        // Generate and print the report
        Reporting report(taxLossHarvesting.getResults());
        report.generateReport();

        std::cout << "Simulation complete and report generated." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }
    return 0;
}