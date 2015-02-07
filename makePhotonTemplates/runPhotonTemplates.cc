// #include <string>

// // #include "makePhotonTemplates.C"

// #include "makePhotonTemplates.h"

// #include "TChain.h"
// #include "TSystem.h"
// #include "TROOT.h"
// #include "TStyle.h"


// using namespace std;

void runPhotonTemplates( std::string selection = "" ){

  string iter = "V00-02-05";

  string sample = "All_Data"; 
  // string sample = "ttbar"; 
  // string sample = "wjets"; 

  // string sample = "All"; 

  gSystem->Load("libmakePhotonTemplates.so");
  gROOT ->SetStyle("Plain");
  gStyle->SetOptStat(111111);

  TChain* ch = new TChain("T1");

  if ( sample == "with_calo" ){
	// ch->Add("../photon_output/V00-01-00/Photon_calo_baby.root");
	ch->Add("/nfs-6/userdata/cwelke/Zmet/templateBabies/V00-01-00Pt-50to80_full_baby.root");
	ch->Add("/nfs-6/userdata/cwelke/Zmet/templateBabies/V00-01-00Pt-80to120_full_baby.root");
	ch->Add("/nfs-6/userdata/cwelke/Zmet/templateBabies/V00-01-00Pt-120to170_full_baby.root");
	ch->Add("/nfs-6/userdata/cwelke/Zmet/templateBabies/V00-01-00Pt-170to300_full_baby.root");
  }
  
  if( sample == "ttbar" ){
	// ch->Add("/home/users/cwelke/ZMet_2012/photon_output/V00-02-03/Photon_*_MC_53X_baby.root");
	ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/ttbar_slmc_53X_baby.root");  
	ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/ttbar_flmc_53X_baby.root");  
}

  if( sample == "All" ){

	// ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-06/photon_*_baby.root");

	ch->Add("/nfs-6/userdata/cwelke/ZHMet2012/photon_output/V00-02-21/photon_mght40*_baby.root");
	ch->Add("/nfs-6/userdata/cwelke/ZHMet2012/photon_output/V00-02-21/photon_mght100*_baby.root");
	ch->Add("/nfs-6/userdata/cwelke/ZHMet2012/photon_output/V00-02-21/merged/photon_mght200_baby.root");
	ch->Add("/nfs-6/userdata/cwelke/ZHMet2012/photon_output/V00-02-21/merged/photon_mght400_baby.root");

	// ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/ttbar_slmc_53X_baby.root");  
	// ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/ttbar_flmc_53X_baby.root");  
  }

  if( sample == "wjets" ){
	// ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/ttbar_slmc_53X_baby.root");  
	// ch->Add("/nfs-6/userdata/cwelke/ZHMet2012/photon_output/V00-02-21/merged/photon_wjtolnug_baby.root");
	ch->Add("/nfs-6/userdata/cwelke/ZHMet2012/photon_output/V00-02-21/wbb_53X_*_baby.root");
  	// ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/data_53X_2012*_baby.root");
  }

  if( sample == "All_Data" ){
	// ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/ttbar_slmc_53X_baby.root");  
	// ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/ttbar_flmc_53X_baby.root");  

	// ch->Add("/nfs-6/userdata/cwelke/ZHMet2012/photon_output/V00-02-21/merged/photon_wjtolnug_baby.root");

  	ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/data_53X_2012A_baby.root");
  	ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/data_53X_2012B_baby.root");
  	ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/data_53X_2012C_baby.root");
  	ch->Add("/home/users/cwelke/Analysis/Winter2012/photon_output/V00-02-05/data_53X_2012D_baby.root");

  }

  makePhotonTemplates* myLooper = new makePhotonTemplates( selection );
  myLooper->ScanChain( ch , iter , sample );

  
  // makePhotonTemplates myLooper(selection);
  // myLooper.ScanChain( ch , iter , sample );

}

