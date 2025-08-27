#ifndef WINDOW_H
#define WINDOW_H

#include <GLFW/glfw3.h>

// Struct to hold window info
typedef struct {
    GLFWwindow* window;
    int width;
    int height;
    const char* title;
} Window;

// Create the window (returns 0 on success, -1 on failure)
int Window_create(Window* win, int width, int height, const char* title);

// Destroy the window
void Window_destroy(Window* win);

// Check if the window should close
int Window_shouldClose(Window* win);

// Poll window events
void Window_pollEvents(Window* win);

// Get the GLFWwindow pointer (for Vulkan surface creation etc.)
GLFWwindow* Window_getGLFWwindow(Window* win);

#endif // WINDOW_H
