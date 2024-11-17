# Compiler and linker settings
CC = g++
CFLAGS = -Wall -g -I./headers -I./externalLibraries/include -I./externalLibraries/include/ImGui -I./externalLibraries/include/SDL2
LDFLAGS = -L./externalLibraries/lib
LIBS = -lSDL2 -lSDL2main

# Source and object files
SRC = main.cpp \
      ImGui/imgui.cpp ImGui/imgui_draw.cpp ImGui/imgui_impl_sdl2.cpp \
      ImGui/imgui_impl_sdlrenderer2.cpp ImGui/imgui_tables.cpp ImGui/imgui_widgets.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = PROJECTNAME.exe

# Default target
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC) $(LDFLAGS) $(LIBS) -v

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove generated files
clean:
	rm -f $(OBJ) $(EXEC)

# Phony targets
.PHONY: all clean
