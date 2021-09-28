#include <string>
#include <fstream>
#include <iostream>
#include <dirent.h>

int main()
{
    DIR* dir;
    struct dirent *ent;
    if ((dir = opendir("../scenes")) != NULL)
    {
        readdir(dir); readdir(dir);

        while ((ent = readdir(dir)) != NULL)
        {
            std::string name = ent->d_name;

            std::cout << "Scene: " << name << "\n";

            std::ifstream file("../scenes/" + name);

            std::string buf = "";
            while (true)
            {
                std::string temp;
                file >> temp;

                buf += temp + " ";

                if (temp == "") break;
            }

            std::cout << buf;
        }
        closedir(dir);
    }
    else
    {
        std::cerr << "Error opening scene dir\n";
        return 1;
    }

    return 0;
}