CC=g++
CFLAGS=-Wall -Wextra -std=c++17
LDFLAGS=-lm
SRCS=$(wildcard src/*.cpp)
OBJS=$(SRCS:.cpp=.o)
EXEC=simulation

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean the build

clean:
	rm -f $(OBJS) $(EXEC)
	make clean -C tests