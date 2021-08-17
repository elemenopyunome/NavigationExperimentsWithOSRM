#include <stdio.h>
#include <string>
#include <iostream>
#include <curl/curl.h>
#include "Downloader.h"
int main(void)
{
    HTTPDownloader download;
    for (int x = 101751; x < 333250; x++)
    {
        //std::string URL = "http://192.168.254.101/route/v1/driving/-96.806962,33.039895;-97.078540,33.101751?steps=true";
        std::string URL = "http://192.168.254.101/route/v1/driving/-96.806962,33.039895;-97.078540,33.";
        URL += std::to_string(x);
        URL += "?steps=true";
        std::string bla = download.download(URL);
        std::cout << x << std::endl;
    }
    return 0;
}