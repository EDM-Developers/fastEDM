#include "cli.h"

#if defined(WITH_ARRAYFIRE)
#include <arrayfire.h>
#endif

#include <iostream>
#include <queue>

std::atomic<bool> going = true;

bool keep_going()
{
  return going;
}

int main(int argc, char* argv[])
{
  if (argc < 2) {
    std::cerr << "Usage: ./edm_cli filename [numThreads=4]" << std::endl;
    return -1;
  }

  std::string fnameIn(argv[1]);

  int nthreads = 4;
  if (argc > 2) {
    nthreads = atoi(argv[2]);
  }

#if defined(WITH_ARRAYFIRE)
  af::info();
#endif

  int verbosity = 1;
  ConsoleIO io(verbosity);

  std::ifstream i(fnameIn);
  json testInputs;
  i >> testInputs;

  json results = run_tests(testInputs, nthreads, &io);

  size_t ext = fnameIn.find_last_of('.');
  fnameIn = fnameIn.substr(0, ext);
  std::string fnameOut = fnameIn + "-out.json";

  remove(fnameOut.c_str());

  // Remove the "<< std::setw(4)" to save space on the saved JSON file
  std::ofstream o(fnameOut);
  o << std::setw(4) << results << std::endl;

  return 0;
}
