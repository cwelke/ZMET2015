#include <stdexcept>
#include <iostream>
#include <map>

#include "TH1F.h"

#ifndef METTEMPLATESELECTIONS_H
#define METTEMPLATESELECTIONS_H

class METTemplates
{

public:
  METTemplates();
  ~METTemplates();

  void bookMETHists( std::map<std::string, TH1F*> &methists );
  void setBins();
  int getNjetsBin( const int &njets );
  int getHTBin( const float &HT );
  int getpTBin( const float &pT );

  void FillTemplate( std::map<std::string, TH1F*> &methists, int njets, float ht, float pt, float met );
  void NormalizeTemplates( std::map<std::string, TH1F*> &methists );

  
private:
  std::vector <int> photon_ptcuts;
  std::vector <int> photon_njetcuts;
  std::vector <int> photon_htcuts;
  
};

#endif
