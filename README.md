# NYU-processor-design-lab-update
----------------------------------------
Picture of asking name system


*The paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?
Both of them are relative to the CMAkelist file, both of the these code help the compiler to find the path for the file


*What are some differences between cmake and ninja?
cmake generate a fast buidl system and ninja build the program that only allow other system, program to excecuted


*Why is it important to run cmake in its own directory?
It helps to keep the build process clean and faster, and it can prevent to wrongly afftecting other files.  
