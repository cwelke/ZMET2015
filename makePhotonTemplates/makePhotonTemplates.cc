#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
#include <string>
#include <sstream>

#include "TChain.h"
#include "TDirectory.h"
#include "TFile.h"
#include "TH1F.h"
#include "TMath.h"

#include "Math/VectorUtil.h"

#include "makePhotonTemplates.h"

#include "../sharedCode/histTools.h"
#include "../sharedCode/ZMET.h"
#include "../sharedCode/METTemplateSelections.h"

using namespace std;

const bool debug = false;

makePhotonTemplates::makePhotonTemplates()
{
};

makePhotonTemplates::~makePhotonTemplates()
{
};

void makePhotonTemplates::ScanChain ( TChain * chain , const string iter , const string sample ){

  // if( zmet.isData() )        cout << "Running on Data."        << endl;
  // else                       cout << "Running on MC.  "        << endl;

  int npass = 0;
  METTemplates mettemplates;
  mettemplates.setBins();
  mettemplates.bookMETHists(mettemplate_hists);
  // bookHistos();

  TObjArray *listOfFiles = chain->GetListOfFiles();
  unsigned int nEventsChain = 0;
  unsigned int nEvents = chain->GetEntries();
  nEventsChain = nEvents;
  unsigned int nEventsTotal = 0;

  if(debug) cout << "Begin file loop" << endl;

  // file loop
  TIter fileIter(listOfFiles);
  TFile* currentFile = 0;
  while ( (currentFile = (TFile*) fileIter.Next()) ){

	TFile f(currentFile->GetTitle());
    TTree *tree = dynamic_cast<TTree*>(f.Get("mt2"));
    zmet.Init(tree);

    // event loop
    //unsigned int nEvents = tree->GetEntries();
    nEvents = tree->GetEntries();	
	cout<<"Processing File: "<<TString(currentFile->GetTitle())<<endl;

    for (unsigned int event = 0 ; event < nEvents; ++event){
   
	  zmet.GetEntry(event);
      ++nEventsTotal;

	  if (nEventsTotal % 1000 == 0){ // progress feedback to user
		if (isatty(1)){ // xterm magic from L. Vacavant and A. Cerri               
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
                 "\033[0m\033[32m <---\033[0m\015", (float)nEventsTotal/(nEventsChain*0.01));
          fflush(stdout);
        }
      }

	  //~-~-~-~-~-~-~-~~-//
	  //trigger variables//
	  //~-~-~-~-~-~-~-~-~//

	  
	  //~-~-~-~-~-~-~-~-//
      // event selection// 
	  //~-~-~-~-~-~-~-~-//

	  if( zmet.ngamma() < 1 ) continue;
	  if( zmet.njets() < 2 ) continue;
	  if( zmet.gamma_pt().at(0) < 22 ) continue;
	  
	  mettemplates.FillTemplate(mettemplate_hists, zmet.njets(), zmet.ht(), zmet.gamma_pt().at(0), zmet.met_pt() );

	  // if( templates.njets() < 2 )                                           continue; // >=2 jets
	  // if( templates.njets() > 3 && !doinclusive )                           continue;//jet selection 
      // if( templates.etg() <  20 )                                           continue; // photon pt  > 20 GeV
      // if( fabs( templates.etag() ) > 2 )                                    continue; // photon eta < 2

	  // if(hoetight           ){ if( templates.hoe() > 0.05 )                 continue; // H/E < 0.05
	  // }else if(hoesupertight){ if( templates.hoe() > 0.01 )                 continue; // H/E < 0.01
	  // }else                  { if( templates.hoe() > 0.1  )                 continue; // H/E < 0.1	  
	  // // }else                  { if( templates.hoe() > 0.1  )                 continue; // H/E < 0.1	  
	  // }

      // if( templates.photon_pixelseed() == 1 )                               continue; // veto pixel match
	  // if(emftight            ){ if( templates.jetneutralemfrac() < 0.8 )    continue; // jet neutral EM fraction cut
	  // }else if(emfsupertight ){ if( templates.jetneutralemfrac() < 0.9 )    continue; // jet neutral EM fraction cut
	  // }else                   { if( templates.jetneutralemfrac() < 0.7 )    continue; // jet neutral EM fraction cut
	  // }

      // if( templates.jetpt() - templates.etg() < -5 )                        continue; // pfjet cleaning
      // if( templates.elveto() == 1 )                                         continue; // remove photons with nearby electrons
      // if( templates.maxleppt() > 20.0 )                                     continue; // veto leptons pt > 20 GeV
      // if( acos( cos( templates.phig() - templates.pfmetphi() ) ) < 0.14 )   continue; // kill photons aligned with MET
      // // if( bveto && templates.nbm() > 0 )                                    continue; // apply medium csv b-veto 
      // // if( bveto && templates.nbl() < 2 )                                    continue; // apply medium csv b-veto 
      // // if( bveto && templates.nbl() > 0 )                                    continue; // apply loose csv b-veto 
      // // if( pt40 && ( templates.njets40() < 2 || templates.ht40() < 100.0 ) ) continue; // require 2 pT > 40 GeV jets with HT > 100 GeV
      // if( isdata && !(templates.csc()==0 && 
	  // 				  templates.hbhe()==1 && 
	  // 				  templates.hcallaser()==1 && 
	  // 				  templates.ecallaser()==1 && 
	  // 				  templates.ecaltp()==1 && 
	  // 				  templates.trkfail()==1 && 
	  // 				  templates.eebadsc()==1 && 
	  // 				  templates.hbhenew()==1) )                             continue; // MET filters
	  // // if( isdata && (h20 < 1 && h30 < 1 && h50 < 1 && h75 < 1 && h90 < 1 )) continue; // require trig
	  // if( isdata && (h20 < 1 && h50 < 1 && h75 < 1 && h90 < 1 )) continue; // require trig
	  
      ++npass;

	  //-~-~-~-~-~-~-~-~-~-~-~-//
	  //Deal with event weights//
	  //-~-~-~-~-~-~-~-~-~-~-~-//

	  //-~-~-~-~-~-~-~-~-~-//
	  //Fill Template hists//
	  //-~-~-~-~-~-~-~-~-~-//
	  // fillUnderOverFlow( hphotonPt20 , templates.etg() , templates.weight() );

	  
		
	  // }else{
	  // 	  cout << "NO TRIGGERS PASS!!!" << endl;
	  // 	  exit(0);
	  // 	}

    } // end loop over events
  } // end loop over files



  cout << npass << " events passing selection" << endl;

  mettemplates.NormalizeTemplates(mettemplate_hists);

  if (nEventsChain != nEventsTotal)
    std::cout << "ERROR: number of events from files is not equal to total number of events" << std::endl;
  
  //-------------------------------------------
  // normalize templates
  //-------------------------------------------
  // if( normalized ){   
  // }

  // make histos rootfile
  TDirectory *rootdir = gDirectory->GetDirectory("Rint:");
  rootdir->cd();


  string outputfilename = 	Form("../output/photon/%s/%s_photon_templates.root",
								 iter.c_str(),
								 sample.c_str()
								 );

  cout << "Writing templates to " << outputfilename << endl;
  saveHist(outputfilename.c_str(),"*");

  // deleteHistos();
  
} // end ScanChain


void makePhotonTemplates::bookHistos(){

  TDirectory *rootdir = gDirectory->GetDirectory("Rint:");
  rootdir->cd();

  vector <int> photon_ptcuts;
  photon_ptcuts.push_back(22);
  photon_ptcuts.push_back(30);
  photon_ptcuts.push_back(36);
  photon_ptcuts.push_back(50);
  photon_ptcuts.push_back(75);
  photon_ptcuts.push_back(90);
  photon_ptcuts.push_back(120);
  photon_ptcuts.push_back(165);

  vector <int> photon_njetcuts;
  photon_ptcuts.push_back(2);
  photon_ptcuts.push_back(3);

  vector <int> photon_htcuts;
  photon_ptcuts.push_back(30);
  photon_ptcuts.push_back(60);
  photon_ptcuts.push_back(90);
  photon_ptcuts.push_back(120);
  photon_ptcuts.push_back(180);
  photon_ptcuts.push_back(240);
  photon_ptcuts.push_back(300);

}

  

