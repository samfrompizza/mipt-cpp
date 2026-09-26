CXX      := g++-14
CXXFLAGS := -std=c++23 -Wall -Wextra -Wpedantic

SOURCES  := $(wildcard *.cpp)
TARGETS  := $(SOURCES:.cpp=)

.PHONY: all clean

all: $(TARGETS)

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
