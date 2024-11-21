/*
 Grundlegendes Verständnis von Betriebssystemen:
 Du musst die Unterschiede und Gemeinsamkeiten zwischen verschiedenen Betriebssystemen (Windows, Linux, macOS) verstehen.
 Dies umfasst Dateisysteme, Prozessverwaltung, Speicherverwaltung und Netzwerkschnittstellen.
 Kenntnisse in C++ und anderen relevanten Programmiersprachen:
 C++ ist eine gute Wahl für plattformübergreifende Entwicklung, aber Kenntnisse in anderen Sprachen
 wie Python, Java oder Rust können ebenfalls nützlich sein, je nach den Anforderungen deines Frameworks.
 Plattformübergreifende Bibliotheken und Tools:
 Vertraue dich mit bestehenden plattformübergreifenden Bibliotheken und Tools an, wie Boost, SDL, OpenGL, und CMake.
 Diese können dir helfen, wiederkehrende Aufgaben zu bewältigen und dir zeigen, wie plattformübergreifende Lösungen implementiert werden.
 Abstraktionsschichten und Design Patterns:
 Lerne, wie du Abstraktionsschichten und Design Patterns wie Factory, Singleton und Adapter verwenden kannst,
 um plattformspezifische Implementierungen zu kapseln und eine einheitliche API bereitzustellen.

 Compiler und Build-Systeme:
 Verstehe, wie verschiedene Compiler (GCC, Clang, MSVC) und Build-Systeme (CMake, Make, Ninja) funktionieren
 und wie du sie für verschiedene Plattformen konfigurieren kannst.
 Erfahrung mit plattformspezifischen APIs:
 Du musst wissen, wie du plattformspezifische APIs (z.B. WinAPI für Windows, POSIX für Unix-basierte Systeme) verwendest
 und wie du sie abstrahieren kannst, um eine einheitliche Schnittstelle zu schaffen.
 Fehlerbehebung und Debugging:
 Entwickle starke Fähigkeiten im Debugging und in der Fehlerbehebung, da du auf verschiedene Probleme stoßen wirst, die plattformspezifisch sein können.
 Dokumentation und Tests:
 Stelle sicher, dass du deinen Code gut dokumentierst und umfassende Tests schreibst, um sicherzustellen, dass dein Framework auf allen unterstützten Plattformen stabil und zuverlässig funktioniert.
 Community und Open Source:
 Beteilige dich an Open-Source-Projekten und lerne von bestehenden Frameworks. Dies kann dir wertvolle Einblicke und praktische Erfahrungen bieten.
 Ein Beispiel für eine einfache plattformübergreifende Abstraktion könnte so aussehen:

 */





#ifdef _WIN32
// Windows-spezifischer Code für x86_64
#include <windows.h>
void platform_specific_function() {
    // Beispiel für eine Windows-spezifische Funktion
    MessageBox(NULL, "Hello, Windows x86_64!", "Message", MB_OK);
}
#else
// Linux-spezifischer Code für x86_64
#include <unistd.h>
void platform_specific_function() {
    // Beispiel für eine Linux-spezifische Funktion
    write(1, "Hello, Linux x86_64!\n", 21);
}
#endif

int main() {
    platform_specific_function();
    return 0;
}


/*

class FileSystem {
public:
    virtual void createFile(const std::string& path) = 0;
    virtual void deleteFile(const std::string& path) = 0;
};

#ifdef _WIN32
class WindowsFileSystem : public FileSystem {
public:
    void createFile(const std::string& path) override {
        // Windows-spezifische Implementierung
        CreateFile(path.c_str(), GENERIC_WRITE, 0, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
    }
    void deleteFile(const std::string& path) override {
        // Windows-spezifische Implementierung
        DeleteFile(path.c_str());
    }
};
#else
class LinuxFileSystem : public FileSystem {
public:
    void createFile(const std::string& path) override {
        // Linux-spezifische Implementierung
        int fd = open(path.c_str(), O_CREAT | O_WRONLY, 0644);
        close(fd);
    }
    void deleteFile(const std::string& path) override {
        // Linux-spezifische Implementierung
        unlink(path.c_str());
    }
};
#endif

*/
