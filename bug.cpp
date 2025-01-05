std::vector<int> myVector(10); 
for (int i = 0; i <= 10; ++i) { // Error: Accessing beyond vector bounds
    myVector[i] = i * 2; 
}

std::map<std::string, int> myMap; 
myMap["key"] = 10; 
int value = myMap["anotherKey"]; // Error: Accessing uninitialized element