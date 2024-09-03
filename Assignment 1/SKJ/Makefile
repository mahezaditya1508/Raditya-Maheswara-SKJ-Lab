# Define the compiler
CXX = g++

# Define the compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Define the target executable
TARGET = add_numbers

# Define the source files
SRC = add_numbers.cpp

# The first target is the default target when you run 'make'
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean up the generated files
clean:
	rm -f $(TARGET)
	