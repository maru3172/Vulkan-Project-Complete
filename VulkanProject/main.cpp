#include "pch.h"
#include "Application.h"
#include "ComputeShaderApplication.h"

int main() {
    Application app;
    ComputeShaderApplication app2;

    try {
        app.run();
        app2.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
