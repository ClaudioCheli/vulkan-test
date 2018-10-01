#include "Window.h"
#include "Instance.h"

#include <iostream>

int main()
{
    Window window;
    Instance instance("Vulkan", "Engine name");

    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    std::cout << extensionCount << " extensions supported" << std::endl;

    while (!window.shouldClose())
    {
        glfwPollEvents();
    }

    instance.~Instance();
    window.~Window();

    return 0;
}