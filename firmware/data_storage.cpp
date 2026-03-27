// data_storage.cpp

#include <EEPROM.h>

// Initialize data storage
void initStorage() {
    // Initialize EEPROM
    EEPROM.begin();
}

// Save a measurement point to EEPROM
void saveMeasurementPoint(int index, float measurement) {
    EEPROM.put(index * sizeof(float), measurement);
}

// Load stored data from EEPROM
float loadStoredData(int index) {
    float measurement;
    EEPROM.get(index * sizeof(float), measurement);
    return measurement;
}

// Export stored data to CSV format
void exportToCSV(String filename) {
    // Implementation for exporting data to CSV file
}

// Delete stored data from EEPROM
void deleteStoredData(int index) {
    float zeroMeasurement = 0.0;
    EEPROM.put(index * sizeof(float), zeroMeasurement);
}

// Get status of the data storage
String getStorageStatus() {
    return "EEPROM Size: " + String(EEPROM.length()) + " bytes";
}