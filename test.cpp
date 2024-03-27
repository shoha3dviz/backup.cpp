#include <iostream>
#include <filesystem>

void copyFolder(const std::filesystem::path& source, const std::filesystem::path& destination) {
    try {
        std::filesystem::copy(source, destination, std::filesystem::copy_options::recursive);
        std::cout << "Papka nusxalandi!" << std::endl;
    } catch (const std::filesystem::filesystem_error &e) {
        std::cerr << "Xatolik yuz berdi: " << e.what() << std::endl;
    }
}

int main() {
    std::filesystem::path sourcePath = "/home/ubuntu/Desktop/filecpp/";
    std::filesystem::path destPath = "/home/ubuntu/Documents/";

    copyFolder(sourcePath, destPath);

    return 0;
}

