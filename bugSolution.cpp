std::vector<int> myVector(10); 
for (int i = 0; i < 10; ++i) { // Corrected: Accessing within vector bounds
    myVector[i] = i * 2; 
}

std::map<std::string, int> myMap; 
myMap["key"] = 10; 
int value = myMap.count("anotherKey") ? myMap["anotherKey"] : 0; // Corrected: Check for existence before access
// Or use std::map::at to throw exception if key not found: int value = myMap.at("anotherKey");