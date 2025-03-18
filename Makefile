CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = program
SRCDIR = src
SRCS = $(SRCDIR)/main.cpp $(SRCDIR)/graph.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(SRCDIR)/%.o: $(SRCDIR)/%.cpp $(SRCDIR)/graph.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(SRCDIR)/*.o $(TARGET)
