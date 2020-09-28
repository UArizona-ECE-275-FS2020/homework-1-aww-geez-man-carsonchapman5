/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 


 namespace C137 {
    void Morty(int start, int stop, int step) {
        int i;
        for (i = start; i <= stop; i += step) {
             std::cout << i << ": ";
           if (i % 15 == 0) {
             std::cout << "Aww Geez Man" << std::endl;
           }
           else if (i % 5 == 0) {
             std::cout << "Geez" << std::endl;
           }
           else if (i % 3 == 0) {
             std::cout << "Aww" << std::endl;
           }
           std::cout << "\n";
        }
      }
    void Morty(int start, int stop) {
     int step = 1;
     C137::Morty(start, stop, step);
    }
}
  




// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 
namespace Z286 {
  void Morty (int start, int stop, int step) {
    int i;
        for (i = start; i <= stop; i += step) {
             std::cout << i << ": ";
           if (i % 15 == 0) {
             std::cout << "naM zeeG wwA" << std::endl;
           }
           else if (i % 5 == 0) {
             std::cout << "zeeG" << std::endl;
           }
           else if (i % 3 == 0) {
             std::cout << "wwA" << std::endl;
           }
           std::cout << "\n";
        }
    }
  void Morty(int start, int stop) {
     int step = 1;
     Z286::Morty(start, stop, step);
   }
}