// -*- C++ -*-
#ifndef ZMET_H
#define ZMET_H
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include <vector> 
typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;

using namespace std; 
class ZMET {
private: 
protected: 
	unsigned int index;
	int	run_;
	TBranch *run_branch;
	bool run_isLoaded;
	int	lumi_;
	TBranch *lumi_branch;
	bool lumi_isLoaded;
	int	evt_;
	TBranch *evt_branch;
	bool evt_isLoaded;
	int	isData_;
	TBranch *isData_branch;
	bool isData_isLoaded;
	float	evt_scale1fb_;
	TBranch *evt_scale1fb_branch;
	bool evt_scale1fb_isLoaded;
	float	evt_xsec_;
	TBranch *evt_xsec_branch;
	bool evt_xsec_isLoaded;
	float	evt_kfactor_;
	TBranch *evt_kfactor_branch;
	bool evt_kfactor_isLoaded;
	float	evt_filter_;
	TBranch *evt_filter_branch;
	bool evt_filter_isLoaded;
	int	evt_nEvts_;
	TBranch *evt_nEvts_branch;
	bool evt_nEvts_isLoaded;
	int	evt_id_;
	TBranch *evt_id_branch;
	bool evt_id_isLoaded;
	float	puWeight_;
	TBranch *puWeight_branch;
	bool puWeight_isLoaded;
	int	nVert_;
	TBranch *nVert_branch;
	bool nVert_isLoaded;
	int	nTrueInt_;
	TBranch *nTrueInt_branch;
	bool nTrueInt_isLoaded;
	float	rho_;
	TBranch *rho_branch;
	bool rho_isLoaded;
	float	rho25_;
	TBranch *rho25_branch;
	bool rho25_isLoaded;
	int	njets_;
	TBranch *njets_branch;
	bool njets_isLoaded;
	int	njets40_;
	TBranch *njets40_branch;
	bool njets40_isLoaded;
	float	ht_;
	TBranch *ht_branch;
	bool ht_isLoaded;
	float	ht40_;
	TBranch *ht40_branch;
	bool ht40_isLoaded;
	float	mt2_;
	TBranch *mt2_branch;
	bool mt2_isLoaded;
	float	mt2j_;
	TBranch *mt2j_branch;
	bool mt2j_isLoaded;
	float	mt2j40_;
	TBranch *mt2j40_branch;
	bool mt2j40_isLoaded;
	int	nJet40_;
	TBranch *nJet40_branch;
	bool nJet40_isLoaded;
	int	nBJet40_;
	TBranch *nBJet40_branch;
	bool nBJet40_isLoaded;
	int	nMuons10_;
	TBranch *nMuons10_branch;
	bool nMuons10_isLoaded;
	int	nElectrons10_;
	TBranch *nElectrons10_branch;
	bool nElectrons10_isLoaded;
	int	nTaus20_;
	TBranch *nTaus20_branch;
	bool nTaus20_isLoaded;
	int	nGammas20_;
	TBranch *nGammas20_branch;
	bool nGammas20_isLoaded;
	float	met_pt_;
	TBranch *met_pt_branch;
	bool met_pt_isLoaded;
	float	met_phi_;
	TBranch *met_phi_branch;
	bool met_phi_isLoaded;
	float	met_rawPt_;
	TBranch *met_rawPt_branch;
	bool met_rawPt_isLoaded;
	float	met_rawPhi_;
	TBranch *met_rawPhi_branch;
	bool met_rawPhi_isLoaded;
	float	met_caloPt_;
	TBranch *met_caloPt_branch;
	bool met_caloPt_isLoaded;
	float	met_caloPhi_;
	TBranch *met_caloPhi_branch;
	bool met_caloPhi_isLoaded;
	float	met_genPt_;
	TBranch *met_genPt_branch;
	bool met_genPt_isLoaded;
	float	met_genPhi_;
	TBranch *met_genPhi_branch;
	bool met_genPhi_isLoaded;
	int	Flag_EcalDeadCellTriggerPrimitiveFilter_;
	TBranch *Flag_EcalDeadCellTriggerPrimitiveFilter_branch;
	bool Flag_EcalDeadCellTriggerPrimitiveFilter_isLoaded;
	int	Flag_trkPOG_manystripclus53X_;
	TBranch *Flag_trkPOG_manystripclus53X_branch;
	bool Flag_trkPOG_manystripclus53X_isLoaded;
	int	Flag_ecalLaserCorrFilter_;
	TBranch *Flag_ecalLaserCorrFilter_branch;
	bool Flag_ecalLaserCorrFilter_isLoaded;
	int	Flag_trkPOG_toomanystripclus53X_;
	TBranch *Flag_trkPOG_toomanystripclus53X_branch;
	bool Flag_trkPOG_toomanystripclus53X_isLoaded;
	int	Flag_hcalLaserEventFilter_;
	TBranch *Flag_hcalLaserEventFilter_branch;
	bool Flag_hcalLaserEventFilter_isLoaded;
	int	Flag_trkPOG_logErrorTooManyClusters_;
	TBranch *Flag_trkPOG_logErrorTooManyClusters_branch;
	bool Flag_trkPOG_logErrorTooManyClusters_isLoaded;
	int	Flag_trkPOGFilters_;
	TBranch *Flag_trkPOGFilters_branch;
	bool Flag_trkPOGFilters_isLoaded;
	int	Flag_trackingFailureFilter_;
	TBranch *Flag_trackingFailureFilter_branch;
	bool Flag_trackingFailureFilter_isLoaded;
	int	Flag_CSCTightHaloFilter_;
	TBranch *Flag_CSCTightHaloFilter_branch;
	bool Flag_CSCTightHaloFilter_isLoaded;
	int	Flag_HBHENoiseFilter_;
	TBranch *Flag_HBHENoiseFilter_branch;
	bool Flag_HBHENoiseFilter_isLoaded;
	int	Flag_goodVertices_;
	TBranch *Flag_goodVertices_branch;
	bool Flag_goodVertices_isLoaded;
	int	Flag_eeBadScFilter_;
	TBranch *Flag_eeBadScFilter_branch;
	bool Flag_eeBadScFilter_isLoaded;
	int	Flag_METFilters_;
	TBranch *Flag_METFilters_branch;
	bool Flag_METFilters_isLoaded;
	int	HLT_HT900_;
	TBranch *HLT_HT900_branch;
	bool HLT_HT900_isLoaded;
	int	HLT_MET170_;
	TBranch *HLT_MET170_branch;
	bool HLT_MET170_isLoaded;
	int	HLT_ht350met120_;
	TBranch *HLT_ht350met120_branch;
	bool HLT_ht350met120_isLoaded;
	int	HLT_SingleMu_;
	TBranch *HLT_SingleMu_branch;
	bool HLT_SingleMu_isLoaded;
	int	HLT_DoubleEl_;
	TBranch *HLT_DoubleEl_branch;
	bool HLT_DoubleEl_isLoaded;
	int	HLT_MuEG_;
	TBranch *HLT_MuEG_branch;
	bool HLT_MuEG_isLoaded;
	int	HLT_DoubleMu_;
	TBranch *HLT_DoubleMu_branch;
	bool HLT_DoubleMu_isLoaded;
	int	HLT_Photons_;
	TBranch *HLT_Photons_branch;
	bool HLT_Photons_isLoaded;
	float	dilmass_;
	TBranch *dilmass_branch;
	bool dilmass_isLoaded;
	float	dilpt_;
	TBranch *dilpt_branch;
	bool dilpt_isLoaded;
	int	diltype_;
	TBranch *diltype_branch;
	bool diltype_isLoaded;
	int	nlep_;
	TBranch *nlep_branch;
	bool nlep_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *lep_p4_;
	TBranch *lep_p4_branch;
	bool lep_p4_isLoaded;
	vector<float> *lep_pt_;
	TBranch *lep_pt_branch;
	bool lep_pt_isLoaded;
	vector<float> *lep_eta_;
	TBranch *lep_eta_branch;
	bool lep_eta_isLoaded;
	vector<float> *lep_phi_;
	TBranch *lep_phi_branch;
	bool lep_phi_isLoaded;
	vector<float> *lep_mass_;
	TBranch *lep_mass_branch;
	bool lep_mass_isLoaded;
	vector<int> *lep_charge_;
	TBranch *lep_charge_branch;
	bool lep_charge_isLoaded;
	vector<int> *lep_pdgId_;
	TBranch *lep_pdgId_branch;
	bool lep_pdgId_isLoaded;
	vector<float> *lep_dxy_;
	TBranch *lep_dxy_branch;
	bool lep_dxy_isLoaded;
	vector<float> *lep_dz_;
	TBranch *lep_dz_branch;
	bool lep_dz_isLoaded;
	vector<int> *lep_tightId_;
	TBranch *lep_tightId_branch;
	bool lep_tightId_isLoaded;
	vector<float> *lep_relIso03_;
	TBranch *lep_relIso03_branch;
	bool lep_relIso03_isLoaded;
	vector<float> *lep_relIso04_;
	TBranch *lep_relIso04_branch;
	bool lep_relIso04_isLoaded;
	vector<int> *lep_mcMatchId_;
	TBranch *lep_mcMatchId_branch;
	bool lep_mcMatchId_isLoaded;
	vector<int> *lep_lostHits_;
	TBranch *lep_lostHits_branch;
	bool lep_lostHits_isLoaded;
	vector<int> *lep_convVeto_;
	TBranch *lep_convVeto_branch;
	bool lep_convVeto_isLoaded;
	vector<int> *lep_tightCharge_;
	TBranch *lep_tightCharge_branch;
	bool lep_tightCharge_isLoaded;
	int	ntau_;
	TBranch *ntau_branch;
	bool ntau_isLoaded;
	vector<float> *tau_pt_;
	TBranch *tau_pt_branch;
	bool tau_pt_isLoaded;
	vector<float> *tau_eta_;
	TBranch *tau_eta_branch;
	bool tau_eta_isLoaded;
	vector<float> *tau_phi_;
	TBranch *tau_phi_branch;
	bool tau_phi_isLoaded;
	vector<float> *tau_mass_;
	TBranch *tau_mass_branch;
	bool tau_mass_isLoaded;
	vector<int> *tau_charge_;
	TBranch *tau_charge_branch;
	bool tau_charge_isLoaded;
	vector<float> *tau_dxy_;
	TBranch *tau_dxy_branch;
	bool tau_dxy_isLoaded;
	vector<float> *tau_dz_;
	TBranch *tau_dz_branch;
	bool tau_dz_isLoaded;
	vector<int> *tau_idCI3hit_;
	TBranch *tau_idCI3hit_branch;
	bool tau_idCI3hit_isLoaded;
	vector<float> *tau_isoCI3hit_;
	TBranch *tau_isoCI3hit_branch;
	bool tau_isoCI3hit_isLoaded;
	int	ngamma_;
	TBranch *ngamma_branch;
	bool ngamma_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *gamma_p4_;
	TBranch *gamma_p4_branch;
	bool gamma_p4_isLoaded;
	vector<float> *gamma_pt_;
	TBranch *gamma_pt_branch;
	bool gamma_pt_isLoaded;
	vector<float> *gamma_eta_;
	TBranch *gamma_eta_branch;
	bool gamma_eta_isLoaded;
	vector<float> *gamma_phi_;
	TBranch *gamma_phi_branch;
	bool gamma_phi_isLoaded;
	vector<float> *gamma_mass_;
	TBranch *gamma_mass_branch;
	bool gamma_mass_isLoaded;
	vector<int> *gamma_mcMatchId_;
	TBranch *gamma_mcMatchId_branch;
	bool gamma_mcMatchId_isLoaded;
	vector<float> *gamma_genIso_;
	TBranch *gamma_genIso_branch;
	bool gamma_genIso_isLoaded;
	vector<float> *gamma_chHadIso_;
	TBranch *gamma_chHadIso_branch;
	bool gamma_chHadIso_isLoaded;
	vector<float> *gamma_neuHadIso_;
	TBranch *gamma_neuHadIso_branch;
	bool gamma_neuHadIso_isLoaded;
	vector<float> *gamma_phIso_;
	TBranch *gamma_phIso_branch;
	bool gamma_phIso_isLoaded;
	vector<float> *gamma_sigmaIetaIeta_;
	TBranch *gamma_sigmaIetaIeta_branch;
	bool gamma_sigmaIetaIeta_isLoaded;
	vector<float> *gamma_r9_;
	TBranch *gamma_r9_branch;
	bool gamma_r9_isLoaded;
	vector<float> *gamma_hOverE_;
	TBranch *gamma_hOverE_branch;
	bool gamma_hOverE_isLoaded;
	vector<int> *gamma_idCutBased_;
	TBranch *gamma_idCutBased_branch;
	bool gamma_idCutBased_isLoaded;
	int	ngenPart_;
	TBranch *ngenPart_branch;
	bool ngenPart_isLoaded;
	vector<float> *genPart_pt_;
	TBranch *genPart_pt_branch;
	bool genPart_pt_isLoaded;
	vector<float> *genPart_eta_;
	TBranch *genPart_eta_branch;
	bool genPart_eta_isLoaded;
	vector<float> *genPart_phi_;
	TBranch *genPart_phi_branch;
	bool genPart_phi_isLoaded;
	vector<float> *genPart_mass_;
	TBranch *genPart_mass_branch;
	bool genPart_mass_isLoaded;
	vector<int> *genPart_pdgId_;
	TBranch *genPart_pdgId_branch;
	bool genPart_pdgId_isLoaded;
	vector<int> *genPart_status_;
	TBranch *genPart_status_branch;
	bool genPart_status_isLoaded;
	vector<float> *genPart_charge_;
	TBranch *genPart_charge_branch;
	bool genPart_charge_isLoaded;
	vector<int> *genPart_motherId_;
	TBranch *genPart_motherId_branch;
	bool genPart_motherId_isLoaded;
	vector<int> *genPart_grandmaId_;
	TBranch *genPart_grandmaId_branch;
	bool genPart_grandmaId_isLoaded;
	int	gamma_nJet40_;
	TBranch *gamma_nJet40_branch;
	bool gamma_nJet40_isLoaded;
	int	gamma_nBJet40_;
	TBranch *gamma_nBJet40_branch;
	bool gamma_nBJet40_isLoaded;
	int	ngenLep_;
	TBranch *ngenLep_branch;
	bool ngenLep_isLoaded;
	vector<float> *genLep_pt_;
	TBranch *genLep_pt_branch;
	bool genLep_pt_isLoaded;
	vector<float> *genLep_eta_;
	TBranch *genLep_eta_branch;
	bool genLep_eta_isLoaded;
	vector<float> *genLep_phi_;
	TBranch *genLep_phi_branch;
	bool genLep_phi_isLoaded;
	vector<float> *genLep_mass_;
	TBranch *genLep_mass_branch;
	bool genLep_mass_isLoaded;
	vector<int> *genLep_pdgId_;
	TBranch *genLep_pdgId_branch;
	bool genLep_pdgId_isLoaded;
	vector<int> *genLep_status_;
	TBranch *genLep_status_branch;
	bool genLep_status_isLoaded;
	vector<float> *genLep_charge_;
	TBranch *genLep_charge_branch;
	bool genLep_charge_isLoaded;
	vector<int> *genLep_sourceId_;
	TBranch *genLep_sourceId_branch;
	bool genLep_sourceId_isLoaded;
	int	ngenTau_;
	TBranch *ngenTau_branch;
	bool ngenTau_isLoaded;
	vector<float> *genTau_pt_;
	TBranch *genTau_pt_branch;
	bool genTau_pt_isLoaded;
	vector<float> *genTau_eta_;
	TBranch *genTau_eta_branch;
	bool genTau_eta_isLoaded;
	vector<float> *genTau_phi_;
	TBranch *genTau_phi_branch;
	bool genTau_phi_isLoaded;
	vector<float> *genTau_mass_;
	TBranch *genTau_mass_branch;
	bool genTau_mass_isLoaded;
	vector<int> *genTau_pdgId_;
	TBranch *genTau_pdgId_branch;
	bool genTau_pdgId_isLoaded;
	vector<int> *genTau_status_;
	TBranch *genTau_status_branch;
	bool genTau_status_isLoaded;
	vector<float> *genTau_charge_;
	TBranch *genTau_charge_branch;
	bool genTau_charge_isLoaded;
	vector<int> *genTau_sourceId_;
	TBranch *genTau_sourceId_branch;
	bool genTau_sourceId_isLoaded;
	int	ngenLepFromTau_;
	TBranch *ngenLepFromTau_branch;
	bool ngenLepFromTau_isLoaded;
	vector<float> *genLepFromTau_pt_;
	TBranch *genLepFromTau_pt_branch;
	bool genLepFromTau_pt_isLoaded;
	vector<float> *genLepFromTau_eta_;
	TBranch *genLepFromTau_eta_branch;
	bool genLepFromTau_eta_isLoaded;
	vector<float> *genLepFromTau_phi_;
	TBranch *genLepFromTau_phi_branch;
	bool genLepFromTau_phi_isLoaded;
	vector<float> *genLepFromTau_mass_;
	TBranch *genLepFromTau_mass_branch;
	bool genLepFromTau_mass_isLoaded;
	vector<int> *genLepFromTau_pdgId_;
	TBranch *genLepFromTau_pdgId_branch;
	bool genLepFromTau_pdgId_isLoaded;
	vector<int> *genLepFromTau_status_;
	TBranch *genLepFromTau_status_branch;
	bool genLepFromTau_status_isLoaded;
	vector<float> *genLepFromTau_charge_;
	TBranch *genLepFromTau_charge_branch;
	bool genLepFromTau_charge_isLoaded;
	vector<int> *genLepFromTau_sourceId_;
	TBranch *genLepFromTau_sourceId_branch;
	bool genLepFromTau_sourceId_isLoaded;
	int	njet_;
	TBranch *njet_branch;
	bool njet_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *jet_p4_;
	TBranch *jet_p4_branch;
	bool jet_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *jet30_p4_;
	TBranch *jet30_p4_branch;
	bool jet30_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *jet40_p4_;
	TBranch *jet40_p4_branch;
	bool jet40_p4_isLoaded;
	vector<float> *jet_pt_;
	TBranch *jet_pt_branch;
	bool jet_pt_isLoaded;
	vector<float> *jet_eta_;
	TBranch *jet_eta_branch;
	bool jet_eta_isLoaded;
	vector<float> *jet_phi_;
	TBranch *jet_phi_branch;
	bool jet_phi_isLoaded;
	vector<float> *jet_mass_;
	TBranch *jet_mass_branch;
	bool jet_mass_isLoaded;
	vector<float> *jet_btagCSV_;
	TBranch *jet_btagCSV_branch;
	bool jet_btagCSV_isLoaded;
	vector<float> *jet_rawPt_;
	TBranch *jet_rawPt_branch;
	bool jet_rawPt_isLoaded;
	vector<float> *jet_mcPt_;
	TBranch *jet_mcPt_branch;
	bool jet_mcPt_isLoaded;
	vector<int> *jet_mcFlavour_;
	TBranch *jet_mcFlavour_branch;
	bool jet_mcFlavour_isLoaded;
	vector<float> *jet_quarkGluonID_;
	TBranch *jet_quarkGluonID_branch;
	bool jet_quarkGluonID_isLoaded;
	vector<float> *jet_area_;
	TBranch *jet_area_branch;
	bool jet_area_isLoaded;
	vector<int> *jet_id_;
	TBranch *jet_id_branch;
	bool jet_id_isLoaded;
	vector<int> *jet_puId_;
	TBranch *jet_puId_branch;
	bool jet_puId_isLoaded;
public: 
void Init(TTree *tree) {
	lep_p4_branch = 0;
	if (tree->GetBranch("lep_p4") != 0) {
		lep_p4_branch = tree->GetBranch("lep_p4");
		if (lep_p4_branch) {lep_p4_branch->SetAddress(&lep_p4_);}
	}
	gamma_p4_branch = 0;
	if (tree->GetBranch("gamma_p4") != 0) {
		gamma_p4_branch = tree->GetBranch("gamma_p4");
		if (gamma_p4_branch) {gamma_p4_branch->SetAddress(&gamma_p4_);}
	}
	jet_p4_branch = 0;
	if (tree->GetBranch("jet_p4") != 0) {
		jet_p4_branch = tree->GetBranch("jet_p4");
		if (jet_p4_branch) {jet_p4_branch->SetAddress(&jet_p4_);}
	}
	jet30_p4_branch = 0;
	if (tree->GetBranch("jet30_p4") != 0) {
		jet30_p4_branch = tree->GetBranch("jet30_p4");
		if (jet30_p4_branch) {jet30_p4_branch->SetAddress(&jet30_p4_);}
	}
	jet40_p4_branch = 0;
	if (tree->GetBranch("jet40_p4") != 0) {
		jet40_p4_branch = tree->GetBranch("jet40_p4");
		if (jet40_p4_branch) {jet40_p4_branch->SetAddress(&jet40_p4_);}
	}
  tree->SetMakeClass(1);
	run_branch = 0;
	if (tree->GetBranch("run") != 0) {
		run_branch = tree->GetBranch("run");
		if (run_branch) {run_branch->SetAddress(&run_);}
	}
	lumi_branch = 0;
	if (tree->GetBranch("lumi") != 0) {
		lumi_branch = tree->GetBranch("lumi");
		if (lumi_branch) {lumi_branch->SetAddress(&lumi_);}
	}
	evt_branch = 0;
	if (tree->GetBranch("evt") != 0) {
		evt_branch = tree->GetBranch("evt");
		if (evt_branch) {evt_branch->SetAddress(&evt_);}
	}
	isData_branch = 0;
	if (tree->GetBranch("isData") != 0) {
		isData_branch = tree->GetBranch("isData");
		if (isData_branch) {isData_branch->SetAddress(&isData_);}
	}
	evt_scale1fb_branch = 0;
	if (tree->GetBranch("evt_scale1fb") != 0) {
		evt_scale1fb_branch = tree->GetBranch("evt_scale1fb");
		if (evt_scale1fb_branch) {evt_scale1fb_branch->SetAddress(&evt_scale1fb_);}
	}
	evt_xsec_branch = 0;
	if (tree->GetBranch("evt_xsec") != 0) {
		evt_xsec_branch = tree->GetBranch("evt_xsec");
		if (evt_xsec_branch) {evt_xsec_branch->SetAddress(&evt_xsec_);}
	}
	evt_kfactor_branch = 0;
	if (tree->GetBranch("evt_kfactor") != 0) {
		evt_kfactor_branch = tree->GetBranch("evt_kfactor");
		if (evt_kfactor_branch) {evt_kfactor_branch->SetAddress(&evt_kfactor_);}
	}
	evt_filter_branch = 0;
	if (tree->GetBranch("evt_filter") != 0) {
		evt_filter_branch = tree->GetBranch("evt_filter");
		if (evt_filter_branch) {evt_filter_branch->SetAddress(&evt_filter_);}
	}
	evt_nEvts_branch = 0;
	if (tree->GetBranch("evt_nEvts") != 0) {
		evt_nEvts_branch = tree->GetBranch("evt_nEvts");
		if (evt_nEvts_branch) {evt_nEvts_branch->SetAddress(&evt_nEvts_);}
	}
	evt_id_branch = 0;
	if (tree->GetBranch("evt_id") != 0) {
		evt_id_branch = tree->GetBranch("evt_id");
		if (evt_id_branch) {evt_id_branch->SetAddress(&evt_id_);}
	}
	puWeight_branch = 0;
	if (tree->GetBranch("puWeight") != 0) {
		puWeight_branch = tree->GetBranch("puWeight");
		if (puWeight_branch) {puWeight_branch->SetAddress(&puWeight_);}
	}
	nVert_branch = 0;
	if (tree->GetBranch("nVert") != 0) {
		nVert_branch = tree->GetBranch("nVert");
		if (nVert_branch) {nVert_branch->SetAddress(&nVert_);}
	}
	nTrueInt_branch = 0;
	if (tree->GetBranch("nTrueInt") != 0) {
		nTrueInt_branch = tree->GetBranch("nTrueInt");
		if (nTrueInt_branch) {nTrueInt_branch->SetAddress(&nTrueInt_);}
	}
	rho_branch = 0;
	if (tree->GetBranch("rho") != 0) {
		rho_branch = tree->GetBranch("rho");
		if (rho_branch) {rho_branch->SetAddress(&rho_);}
	}
	rho25_branch = 0;
	if (tree->GetBranch("rho25") != 0) {
		rho25_branch = tree->GetBranch("rho25");
		if (rho25_branch) {rho25_branch->SetAddress(&rho25_);}
	}
	njets_branch = 0;
	if (tree->GetBranch("njets") != 0) {
		njets_branch = tree->GetBranch("njets");
		if (njets_branch) {njets_branch->SetAddress(&njets_);}
	}
	njets40_branch = 0;
	if (tree->GetBranch("njets40") != 0) {
		njets40_branch = tree->GetBranch("njets40");
		if (njets40_branch) {njets40_branch->SetAddress(&njets40_);}
	}
	ht_branch = 0;
	if (tree->GetBranch("ht") != 0) {
		ht_branch = tree->GetBranch("ht");
		if (ht_branch) {ht_branch->SetAddress(&ht_);}
	}
	ht40_branch = 0;
	if (tree->GetBranch("ht40") != 0) {
		ht40_branch = tree->GetBranch("ht40");
		if (ht40_branch) {ht40_branch->SetAddress(&ht40_);}
	}
	mt2_branch = 0;
	if (tree->GetBranch("mt2") != 0) {
		mt2_branch = tree->GetBranch("mt2");
		if (mt2_branch) {mt2_branch->SetAddress(&mt2_);}
	}
	mt2j_branch = 0;
	if (tree->GetBranch("mt2j") != 0) {
		mt2j_branch = tree->GetBranch("mt2j");
		if (mt2j_branch) {mt2j_branch->SetAddress(&mt2j_);}
	}
	mt2j40_branch = 0;
	if (tree->GetBranch("mt2j40") != 0) {
		mt2j40_branch = tree->GetBranch("mt2j40");
		if (mt2j40_branch) {mt2j40_branch->SetAddress(&mt2j40_);}
	}
	nJet40_branch = 0;
	if (tree->GetBranch("nJet40") != 0) {
		nJet40_branch = tree->GetBranch("nJet40");
		if (nJet40_branch) {nJet40_branch->SetAddress(&nJet40_);}
	}
	nBJet40_branch = 0;
	if (tree->GetBranch("nBJet40") != 0) {
		nBJet40_branch = tree->GetBranch("nBJet40");
		if (nBJet40_branch) {nBJet40_branch->SetAddress(&nBJet40_);}
	}
	nMuons10_branch = 0;
	if (tree->GetBranch("nMuons10") != 0) {
		nMuons10_branch = tree->GetBranch("nMuons10");
		if (nMuons10_branch) {nMuons10_branch->SetAddress(&nMuons10_);}
	}
	nElectrons10_branch = 0;
	if (tree->GetBranch("nElectrons10") != 0) {
		nElectrons10_branch = tree->GetBranch("nElectrons10");
		if (nElectrons10_branch) {nElectrons10_branch->SetAddress(&nElectrons10_);}
	}
	nTaus20_branch = 0;
	if (tree->GetBranch("nTaus20") != 0) {
		nTaus20_branch = tree->GetBranch("nTaus20");
		if (nTaus20_branch) {nTaus20_branch->SetAddress(&nTaus20_);}
	}
	nGammas20_branch = 0;
	if (tree->GetBranch("nGammas20") != 0) {
		nGammas20_branch = tree->GetBranch("nGammas20");
		if (nGammas20_branch) {nGammas20_branch->SetAddress(&nGammas20_);}
	}
	met_pt_branch = 0;
	if (tree->GetBranch("met_pt") != 0) {
		met_pt_branch = tree->GetBranch("met_pt");
		if (met_pt_branch) {met_pt_branch->SetAddress(&met_pt_);}
	}
	met_phi_branch = 0;
	if (tree->GetBranch("met_phi") != 0) {
		met_phi_branch = tree->GetBranch("met_phi");
		if (met_phi_branch) {met_phi_branch->SetAddress(&met_phi_);}
	}
	met_rawPt_branch = 0;
	if (tree->GetBranch("met_rawPt") != 0) {
		met_rawPt_branch = tree->GetBranch("met_rawPt");
		if (met_rawPt_branch) {met_rawPt_branch->SetAddress(&met_rawPt_);}
	}
	met_rawPhi_branch = 0;
	if (tree->GetBranch("met_rawPhi") != 0) {
		met_rawPhi_branch = tree->GetBranch("met_rawPhi");
		if (met_rawPhi_branch) {met_rawPhi_branch->SetAddress(&met_rawPhi_);}
	}
	met_caloPt_branch = 0;
	if (tree->GetBranch("met_caloPt") != 0) {
		met_caloPt_branch = tree->GetBranch("met_caloPt");
		if (met_caloPt_branch) {met_caloPt_branch->SetAddress(&met_caloPt_);}
	}
	met_caloPhi_branch = 0;
	if (tree->GetBranch("met_caloPhi") != 0) {
		met_caloPhi_branch = tree->GetBranch("met_caloPhi");
		if (met_caloPhi_branch) {met_caloPhi_branch->SetAddress(&met_caloPhi_);}
	}
	met_genPt_branch = 0;
	if (tree->GetBranch("met_genPt") != 0) {
		met_genPt_branch = tree->GetBranch("met_genPt");
		if (met_genPt_branch) {met_genPt_branch->SetAddress(&met_genPt_);}
	}
	met_genPhi_branch = 0;
	if (tree->GetBranch("met_genPhi") != 0) {
		met_genPhi_branch = tree->GetBranch("met_genPhi");
		if (met_genPhi_branch) {met_genPhi_branch->SetAddress(&met_genPhi_);}
	}
	Flag_EcalDeadCellTriggerPrimitiveFilter_branch = 0;
	if (tree->GetBranch("Flag_EcalDeadCellTriggerPrimitiveFilter") != 0) {
		Flag_EcalDeadCellTriggerPrimitiveFilter_branch = tree->GetBranch("Flag_EcalDeadCellTriggerPrimitiveFilter");
		if (Flag_EcalDeadCellTriggerPrimitiveFilter_branch) {Flag_EcalDeadCellTriggerPrimitiveFilter_branch->SetAddress(&Flag_EcalDeadCellTriggerPrimitiveFilter_);}
	}
	Flag_trkPOG_manystripclus53X_branch = 0;
	if (tree->GetBranch("Flag_trkPOG_manystripclus53X") != 0) {
		Flag_trkPOG_manystripclus53X_branch = tree->GetBranch("Flag_trkPOG_manystripclus53X");
		if (Flag_trkPOG_manystripclus53X_branch) {Flag_trkPOG_manystripclus53X_branch->SetAddress(&Flag_trkPOG_manystripclus53X_);}
	}
	Flag_ecalLaserCorrFilter_branch = 0;
	if (tree->GetBranch("Flag_ecalLaserCorrFilter") != 0) {
		Flag_ecalLaserCorrFilter_branch = tree->GetBranch("Flag_ecalLaserCorrFilter");
		if (Flag_ecalLaserCorrFilter_branch) {Flag_ecalLaserCorrFilter_branch->SetAddress(&Flag_ecalLaserCorrFilter_);}
	}
	Flag_trkPOG_toomanystripclus53X_branch = 0;
	if (tree->GetBranch("Flag_trkPOG_toomanystripclus53X") != 0) {
		Flag_trkPOG_toomanystripclus53X_branch = tree->GetBranch("Flag_trkPOG_toomanystripclus53X");
		if (Flag_trkPOG_toomanystripclus53X_branch) {Flag_trkPOG_toomanystripclus53X_branch->SetAddress(&Flag_trkPOG_toomanystripclus53X_);}
	}
	Flag_hcalLaserEventFilter_branch = 0;
	if (tree->GetBranch("Flag_hcalLaserEventFilter") != 0) {
		Flag_hcalLaserEventFilter_branch = tree->GetBranch("Flag_hcalLaserEventFilter");
		if (Flag_hcalLaserEventFilter_branch) {Flag_hcalLaserEventFilter_branch->SetAddress(&Flag_hcalLaserEventFilter_);}
	}
	Flag_trkPOG_logErrorTooManyClusters_branch = 0;
	if (tree->GetBranch("Flag_trkPOG_logErrorTooManyClusters") != 0) {
		Flag_trkPOG_logErrorTooManyClusters_branch = tree->GetBranch("Flag_trkPOG_logErrorTooManyClusters");
		if (Flag_trkPOG_logErrorTooManyClusters_branch) {Flag_trkPOG_logErrorTooManyClusters_branch->SetAddress(&Flag_trkPOG_logErrorTooManyClusters_);}
	}
	Flag_trkPOGFilters_branch = 0;
	if (tree->GetBranch("Flag_trkPOGFilters") != 0) {
		Flag_trkPOGFilters_branch = tree->GetBranch("Flag_trkPOGFilters");
		if (Flag_trkPOGFilters_branch) {Flag_trkPOGFilters_branch->SetAddress(&Flag_trkPOGFilters_);}
	}
	Flag_trackingFailureFilter_branch = 0;
	if (tree->GetBranch("Flag_trackingFailureFilter") != 0) {
		Flag_trackingFailureFilter_branch = tree->GetBranch("Flag_trackingFailureFilter");
		if (Flag_trackingFailureFilter_branch) {Flag_trackingFailureFilter_branch->SetAddress(&Flag_trackingFailureFilter_);}
	}
	Flag_CSCTightHaloFilter_branch = 0;
	if (tree->GetBranch("Flag_CSCTightHaloFilter") != 0) {
		Flag_CSCTightHaloFilter_branch = tree->GetBranch("Flag_CSCTightHaloFilter");
		if (Flag_CSCTightHaloFilter_branch) {Flag_CSCTightHaloFilter_branch->SetAddress(&Flag_CSCTightHaloFilter_);}
	}
	Flag_HBHENoiseFilter_branch = 0;
	if (tree->GetBranch("Flag_HBHENoiseFilter") != 0) {
		Flag_HBHENoiseFilter_branch = tree->GetBranch("Flag_HBHENoiseFilter");
		if (Flag_HBHENoiseFilter_branch) {Flag_HBHENoiseFilter_branch->SetAddress(&Flag_HBHENoiseFilter_);}
	}
	Flag_goodVertices_branch = 0;
	if (tree->GetBranch("Flag_goodVertices") != 0) {
		Flag_goodVertices_branch = tree->GetBranch("Flag_goodVertices");
		if (Flag_goodVertices_branch) {Flag_goodVertices_branch->SetAddress(&Flag_goodVertices_);}
	}
	Flag_eeBadScFilter_branch = 0;
	if (tree->GetBranch("Flag_eeBadScFilter") != 0) {
		Flag_eeBadScFilter_branch = tree->GetBranch("Flag_eeBadScFilter");
		if (Flag_eeBadScFilter_branch) {Flag_eeBadScFilter_branch->SetAddress(&Flag_eeBadScFilter_);}
	}
	Flag_METFilters_branch = 0;
	if (tree->GetBranch("Flag_METFilters") != 0) {
		Flag_METFilters_branch = tree->GetBranch("Flag_METFilters");
		if (Flag_METFilters_branch) {Flag_METFilters_branch->SetAddress(&Flag_METFilters_);}
	}
	HLT_HT900_branch = 0;
	if (tree->GetBranch("HLT_HT900") != 0) {
		HLT_HT900_branch = tree->GetBranch("HLT_HT900");
		if (HLT_HT900_branch) {HLT_HT900_branch->SetAddress(&HLT_HT900_);}
	}
	HLT_MET170_branch = 0;
	if (tree->GetBranch("HLT_MET170") != 0) {
		HLT_MET170_branch = tree->GetBranch("HLT_MET170");
		if (HLT_MET170_branch) {HLT_MET170_branch->SetAddress(&HLT_MET170_);}
	}
	HLT_ht350met120_branch = 0;
	if (tree->GetBranch("HLT_ht350met120") != 0) {
		HLT_ht350met120_branch = tree->GetBranch("HLT_ht350met120");
		if (HLT_ht350met120_branch) {HLT_ht350met120_branch->SetAddress(&HLT_ht350met120_);}
	}
	HLT_SingleMu_branch = 0;
	if (tree->GetBranch("HLT_SingleMu") != 0) {
		HLT_SingleMu_branch = tree->GetBranch("HLT_SingleMu");
		if (HLT_SingleMu_branch) {HLT_SingleMu_branch->SetAddress(&HLT_SingleMu_);}
	}
	HLT_DoubleEl_branch = 0;
	if (tree->GetBranch("HLT_DoubleEl") != 0) {
		HLT_DoubleEl_branch = tree->GetBranch("HLT_DoubleEl");
		if (HLT_DoubleEl_branch) {HLT_DoubleEl_branch->SetAddress(&HLT_DoubleEl_);}
	}
	HLT_MuEG_branch = 0;
	if (tree->GetBranch("HLT_MuEG") != 0) {
		HLT_MuEG_branch = tree->GetBranch("HLT_MuEG");
		if (HLT_MuEG_branch) {HLT_MuEG_branch->SetAddress(&HLT_MuEG_);}
	}
	HLT_DoubleMu_branch = 0;
	if (tree->GetBranch("HLT_DoubleMu") != 0) {
		HLT_DoubleMu_branch = tree->GetBranch("HLT_DoubleMu");
		if (HLT_DoubleMu_branch) {HLT_DoubleMu_branch->SetAddress(&HLT_DoubleMu_);}
	}
	HLT_Photons_branch = 0;
	if (tree->GetBranch("HLT_Photons") != 0) {
		HLT_Photons_branch = tree->GetBranch("HLT_Photons");
		if (HLT_Photons_branch) {HLT_Photons_branch->SetAddress(&HLT_Photons_);}
	}
	dilmass_branch = 0;
	if (tree->GetBranch("dilmass") != 0) {
		dilmass_branch = tree->GetBranch("dilmass");
		if (dilmass_branch) {dilmass_branch->SetAddress(&dilmass_);}
	}
	dilpt_branch = 0;
	if (tree->GetBranch("dilpt") != 0) {
		dilpt_branch = tree->GetBranch("dilpt");
		if (dilpt_branch) {dilpt_branch->SetAddress(&dilpt_);}
	}
	diltype_branch = 0;
	if (tree->GetBranch("diltype") != 0) {
		diltype_branch = tree->GetBranch("diltype");
		if (diltype_branch) {diltype_branch->SetAddress(&diltype_);}
	}
	nlep_branch = 0;
	if (tree->GetBranch("nlep") != 0) {
		nlep_branch = tree->GetBranch("nlep");
		if (nlep_branch) {nlep_branch->SetAddress(&nlep_);}
	}
	lep_pt_branch = 0;
	if (tree->GetBranch("lep_pt") != 0) {
		lep_pt_branch = tree->GetBranch("lep_pt");
		if (lep_pt_branch) {lep_pt_branch->SetAddress(&lep_pt_);}
	}
	lep_eta_branch = 0;
	if (tree->GetBranch("lep_eta") != 0) {
		lep_eta_branch = tree->GetBranch("lep_eta");
		if (lep_eta_branch) {lep_eta_branch->SetAddress(&lep_eta_);}
	}
	lep_phi_branch = 0;
	if (tree->GetBranch("lep_phi") != 0) {
		lep_phi_branch = tree->GetBranch("lep_phi");
		if (lep_phi_branch) {lep_phi_branch->SetAddress(&lep_phi_);}
	}
	lep_mass_branch = 0;
	if (tree->GetBranch("lep_mass") != 0) {
		lep_mass_branch = tree->GetBranch("lep_mass");
		if (lep_mass_branch) {lep_mass_branch->SetAddress(&lep_mass_);}
	}
	lep_charge_branch = 0;
	if (tree->GetBranch("lep_charge") != 0) {
		lep_charge_branch = tree->GetBranch("lep_charge");
		if (lep_charge_branch) {lep_charge_branch->SetAddress(&lep_charge_);}
	}
	lep_pdgId_branch = 0;
	if (tree->GetBranch("lep_pdgId") != 0) {
		lep_pdgId_branch = tree->GetBranch("lep_pdgId");
		if (lep_pdgId_branch) {lep_pdgId_branch->SetAddress(&lep_pdgId_);}
	}
	lep_dxy_branch = 0;
	if (tree->GetBranch("lep_dxy") != 0) {
		lep_dxy_branch = tree->GetBranch("lep_dxy");
		if (lep_dxy_branch) {lep_dxy_branch->SetAddress(&lep_dxy_);}
	}
	lep_dz_branch = 0;
	if (tree->GetBranch("lep_dz") != 0) {
		lep_dz_branch = tree->GetBranch("lep_dz");
		if (lep_dz_branch) {lep_dz_branch->SetAddress(&lep_dz_);}
	}
	lep_tightId_branch = 0;
	if (tree->GetBranch("lep_tightId") != 0) {
		lep_tightId_branch = tree->GetBranch("lep_tightId");
		if (lep_tightId_branch) {lep_tightId_branch->SetAddress(&lep_tightId_);}
	}
	lep_relIso03_branch = 0;
	if (tree->GetBranch("lep_relIso03") != 0) {
		lep_relIso03_branch = tree->GetBranch("lep_relIso03");
		if (lep_relIso03_branch) {lep_relIso03_branch->SetAddress(&lep_relIso03_);}
	}
	lep_relIso04_branch = 0;
	if (tree->GetBranch("lep_relIso04") != 0) {
		lep_relIso04_branch = tree->GetBranch("lep_relIso04");
		if (lep_relIso04_branch) {lep_relIso04_branch->SetAddress(&lep_relIso04_);}
	}
	lep_mcMatchId_branch = 0;
	if (tree->GetBranch("lep_mcMatchId") != 0) {
		lep_mcMatchId_branch = tree->GetBranch("lep_mcMatchId");
		if (lep_mcMatchId_branch) {lep_mcMatchId_branch->SetAddress(&lep_mcMatchId_);}
	}
	lep_lostHits_branch = 0;
	if (tree->GetBranch("lep_lostHits") != 0) {
		lep_lostHits_branch = tree->GetBranch("lep_lostHits");
		if (lep_lostHits_branch) {lep_lostHits_branch->SetAddress(&lep_lostHits_);}
	}
	lep_convVeto_branch = 0;
	if (tree->GetBranch("lep_convVeto") != 0) {
		lep_convVeto_branch = tree->GetBranch("lep_convVeto");
		if (lep_convVeto_branch) {lep_convVeto_branch->SetAddress(&lep_convVeto_);}
	}
	lep_tightCharge_branch = 0;
	if (tree->GetBranch("lep_tightCharge") != 0) {
		lep_tightCharge_branch = tree->GetBranch("lep_tightCharge");
		if (lep_tightCharge_branch) {lep_tightCharge_branch->SetAddress(&lep_tightCharge_);}
	}
	ntau_branch = 0;
	if (tree->GetBranch("ntau") != 0) {
		ntau_branch = tree->GetBranch("ntau");
		if (ntau_branch) {ntau_branch->SetAddress(&ntau_);}
	}
	tau_pt_branch = 0;
	if (tree->GetBranch("tau_pt") != 0) {
		tau_pt_branch = tree->GetBranch("tau_pt");
		if (tau_pt_branch) {tau_pt_branch->SetAddress(&tau_pt_);}
	}
	tau_eta_branch = 0;
	if (tree->GetBranch("tau_eta") != 0) {
		tau_eta_branch = tree->GetBranch("tau_eta");
		if (tau_eta_branch) {tau_eta_branch->SetAddress(&tau_eta_);}
	}
	tau_phi_branch = 0;
	if (tree->GetBranch("tau_phi") != 0) {
		tau_phi_branch = tree->GetBranch("tau_phi");
		if (tau_phi_branch) {tau_phi_branch->SetAddress(&tau_phi_);}
	}
	tau_mass_branch = 0;
	if (tree->GetBranch("tau_mass") != 0) {
		tau_mass_branch = tree->GetBranch("tau_mass");
		if (tau_mass_branch) {tau_mass_branch->SetAddress(&tau_mass_);}
	}
	tau_charge_branch = 0;
	if (tree->GetBranch("tau_charge") != 0) {
		tau_charge_branch = tree->GetBranch("tau_charge");
		if (tau_charge_branch) {tau_charge_branch->SetAddress(&tau_charge_);}
	}
	tau_dxy_branch = 0;
	if (tree->GetBranch("tau_dxy") != 0) {
		tau_dxy_branch = tree->GetBranch("tau_dxy");
		if (tau_dxy_branch) {tau_dxy_branch->SetAddress(&tau_dxy_);}
	}
	tau_dz_branch = 0;
	if (tree->GetBranch("tau_dz") != 0) {
		tau_dz_branch = tree->GetBranch("tau_dz");
		if (tau_dz_branch) {tau_dz_branch->SetAddress(&tau_dz_);}
	}
	tau_idCI3hit_branch = 0;
	if (tree->GetBranch("tau_idCI3hit") != 0) {
		tau_idCI3hit_branch = tree->GetBranch("tau_idCI3hit");
		if (tau_idCI3hit_branch) {tau_idCI3hit_branch->SetAddress(&tau_idCI3hit_);}
	}
	tau_isoCI3hit_branch = 0;
	if (tree->GetBranch("tau_isoCI3hit") != 0) {
		tau_isoCI3hit_branch = tree->GetBranch("tau_isoCI3hit");
		if (tau_isoCI3hit_branch) {tau_isoCI3hit_branch->SetAddress(&tau_isoCI3hit_);}
	}
	ngamma_branch = 0;
	if (tree->GetBranch("ngamma") != 0) {
		ngamma_branch = tree->GetBranch("ngamma");
		if (ngamma_branch) {ngamma_branch->SetAddress(&ngamma_);}
	}
	gamma_pt_branch = 0;
	if (tree->GetBranch("gamma_pt") != 0) {
		gamma_pt_branch = tree->GetBranch("gamma_pt");
		if (gamma_pt_branch) {gamma_pt_branch->SetAddress(&gamma_pt_);}
	}
	gamma_eta_branch = 0;
	if (tree->GetBranch("gamma_eta") != 0) {
		gamma_eta_branch = tree->GetBranch("gamma_eta");
		if (gamma_eta_branch) {gamma_eta_branch->SetAddress(&gamma_eta_);}
	}
	gamma_phi_branch = 0;
	if (tree->GetBranch("gamma_phi") != 0) {
		gamma_phi_branch = tree->GetBranch("gamma_phi");
		if (gamma_phi_branch) {gamma_phi_branch->SetAddress(&gamma_phi_);}
	}
	gamma_mass_branch = 0;
	if (tree->GetBranch("gamma_mass") != 0) {
		gamma_mass_branch = tree->GetBranch("gamma_mass");
		if (gamma_mass_branch) {gamma_mass_branch->SetAddress(&gamma_mass_);}
	}
	gamma_mcMatchId_branch = 0;
	if (tree->GetBranch("gamma_mcMatchId") != 0) {
		gamma_mcMatchId_branch = tree->GetBranch("gamma_mcMatchId");
		if (gamma_mcMatchId_branch) {gamma_mcMatchId_branch->SetAddress(&gamma_mcMatchId_);}
	}
	gamma_genIso_branch = 0;
	if (tree->GetBranch("gamma_genIso") != 0) {
		gamma_genIso_branch = tree->GetBranch("gamma_genIso");
		if (gamma_genIso_branch) {gamma_genIso_branch->SetAddress(&gamma_genIso_);}
	}
	gamma_chHadIso_branch = 0;
	if (tree->GetBranch("gamma_chHadIso") != 0) {
		gamma_chHadIso_branch = tree->GetBranch("gamma_chHadIso");
		if (gamma_chHadIso_branch) {gamma_chHadIso_branch->SetAddress(&gamma_chHadIso_);}
	}
	gamma_neuHadIso_branch = 0;
	if (tree->GetBranch("gamma_neuHadIso") != 0) {
		gamma_neuHadIso_branch = tree->GetBranch("gamma_neuHadIso");
		if (gamma_neuHadIso_branch) {gamma_neuHadIso_branch->SetAddress(&gamma_neuHadIso_);}
	}
	gamma_phIso_branch = 0;
	if (tree->GetBranch("gamma_phIso") != 0) {
		gamma_phIso_branch = tree->GetBranch("gamma_phIso");
		if (gamma_phIso_branch) {gamma_phIso_branch->SetAddress(&gamma_phIso_);}
	}
	gamma_sigmaIetaIeta_branch = 0;
	if (tree->GetBranch("gamma_sigmaIetaIeta") != 0) {
		gamma_sigmaIetaIeta_branch = tree->GetBranch("gamma_sigmaIetaIeta");
		if (gamma_sigmaIetaIeta_branch) {gamma_sigmaIetaIeta_branch->SetAddress(&gamma_sigmaIetaIeta_);}
	}
	gamma_r9_branch = 0;
	if (tree->GetBranch("gamma_r9") != 0) {
		gamma_r9_branch = tree->GetBranch("gamma_r9");
		if (gamma_r9_branch) {gamma_r9_branch->SetAddress(&gamma_r9_);}
	}
	gamma_hOverE_branch = 0;
	if (tree->GetBranch("gamma_hOverE") != 0) {
		gamma_hOverE_branch = tree->GetBranch("gamma_hOverE");
		if (gamma_hOverE_branch) {gamma_hOverE_branch->SetAddress(&gamma_hOverE_);}
	}
	gamma_idCutBased_branch = 0;
	if (tree->GetBranch("gamma_idCutBased") != 0) {
		gamma_idCutBased_branch = tree->GetBranch("gamma_idCutBased");
		if (gamma_idCutBased_branch) {gamma_idCutBased_branch->SetAddress(&gamma_idCutBased_);}
	}
	ngenPart_branch = 0;
	if (tree->GetBranch("ngenPart") != 0) {
		ngenPart_branch = tree->GetBranch("ngenPart");
		if (ngenPart_branch) {ngenPart_branch->SetAddress(&ngenPart_);}
	}
	genPart_pt_branch = 0;
	if (tree->GetBranch("genPart_pt") != 0) {
		genPart_pt_branch = tree->GetBranch("genPart_pt");
		if (genPart_pt_branch) {genPart_pt_branch->SetAddress(&genPart_pt_);}
	}
	genPart_eta_branch = 0;
	if (tree->GetBranch("genPart_eta") != 0) {
		genPart_eta_branch = tree->GetBranch("genPart_eta");
		if (genPart_eta_branch) {genPart_eta_branch->SetAddress(&genPart_eta_);}
	}
	genPart_phi_branch = 0;
	if (tree->GetBranch("genPart_phi") != 0) {
		genPart_phi_branch = tree->GetBranch("genPart_phi");
		if (genPart_phi_branch) {genPart_phi_branch->SetAddress(&genPart_phi_);}
	}
	genPart_mass_branch = 0;
	if (tree->GetBranch("genPart_mass") != 0) {
		genPart_mass_branch = tree->GetBranch("genPart_mass");
		if (genPart_mass_branch) {genPart_mass_branch->SetAddress(&genPart_mass_);}
	}
	genPart_pdgId_branch = 0;
	if (tree->GetBranch("genPart_pdgId") != 0) {
		genPart_pdgId_branch = tree->GetBranch("genPart_pdgId");
		if (genPart_pdgId_branch) {genPart_pdgId_branch->SetAddress(&genPart_pdgId_);}
	}
	genPart_status_branch = 0;
	if (tree->GetBranch("genPart_status") != 0) {
		genPart_status_branch = tree->GetBranch("genPart_status");
		if (genPart_status_branch) {genPart_status_branch->SetAddress(&genPart_status_);}
	}
	genPart_charge_branch = 0;
	if (tree->GetBranch("genPart_charge") != 0) {
		genPart_charge_branch = tree->GetBranch("genPart_charge");
		if (genPart_charge_branch) {genPart_charge_branch->SetAddress(&genPart_charge_);}
	}
	genPart_motherId_branch = 0;
	if (tree->GetBranch("genPart_motherId") != 0) {
		genPart_motherId_branch = tree->GetBranch("genPart_motherId");
		if (genPart_motherId_branch) {genPart_motherId_branch->SetAddress(&genPart_motherId_);}
	}
	genPart_grandmaId_branch = 0;
	if (tree->GetBranch("genPart_grandmaId") != 0) {
		genPart_grandmaId_branch = tree->GetBranch("genPart_grandmaId");
		if (genPart_grandmaId_branch) {genPart_grandmaId_branch->SetAddress(&genPart_grandmaId_);}
	}
	gamma_nJet40_branch = 0;
	if (tree->GetBranch("gamma_nJet40") != 0) {
		gamma_nJet40_branch = tree->GetBranch("gamma_nJet40");
		if (gamma_nJet40_branch) {gamma_nJet40_branch->SetAddress(&gamma_nJet40_);}
	}
	gamma_nBJet40_branch = 0;
	if (tree->GetBranch("gamma_nBJet40") != 0) {
		gamma_nBJet40_branch = tree->GetBranch("gamma_nBJet40");
		if (gamma_nBJet40_branch) {gamma_nBJet40_branch->SetAddress(&gamma_nBJet40_);}
	}
	ngenLep_branch = 0;
	if (tree->GetBranch("ngenLep") != 0) {
		ngenLep_branch = tree->GetBranch("ngenLep");
		if (ngenLep_branch) {ngenLep_branch->SetAddress(&ngenLep_);}
	}
	genLep_pt_branch = 0;
	if (tree->GetBranch("genLep_pt") != 0) {
		genLep_pt_branch = tree->GetBranch("genLep_pt");
		if (genLep_pt_branch) {genLep_pt_branch->SetAddress(&genLep_pt_);}
	}
	genLep_eta_branch = 0;
	if (tree->GetBranch("genLep_eta") != 0) {
		genLep_eta_branch = tree->GetBranch("genLep_eta");
		if (genLep_eta_branch) {genLep_eta_branch->SetAddress(&genLep_eta_);}
	}
	genLep_phi_branch = 0;
	if (tree->GetBranch("genLep_phi") != 0) {
		genLep_phi_branch = tree->GetBranch("genLep_phi");
		if (genLep_phi_branch) {genLep_phi_branch->SetAddress(&genLep_phi_);}
	}
	genLep_mass_branch = 0;
	if (tree->GetBranch("genLep_mass") != 0) {
		genLep_mass_branch = tree->GetBranch("genLep_mass");
		if (genLep_mass_branch) {genLep_mass_branch->SetAddress(&genLep_mass_);}
	}
	genLep_pdgId_branch = 0;
	if (tree->GetBranch("genLep_pdgId") != 0) {
		genLep_pdgId_branch = tree->GetBranch("genLep_pdgId");
		if (genLep_pdgId_branch) {genLep_pdgId_branch->SetAddress(&genLep_pdgId_);}
	}
	genLep_status_branch = 0;
	if (tree->GetBranch("genLep_status") != 0) {
		genLep_status_branch = tree->GetBranch("genLep_status");
		if (genLep_status_branch) {genLep_status_branch->SetAddress(&genLep_status_);}
	}
	genLep_charge_branch = 0;
	if (tree->GetBranch("genLep_charge") != 0) {
		genLep_charge_branch = tree->GetBranch("genLep_charge");
		if (genLep_charge_branch) {genLep_charge_branch->SetAddress(&genLep_charge_);}
	}
	genLep_sourceId_branch = 0;
	if (tree->GetBranch("genLep_sourceId") != 0) {
		genLep_sourceId_branch = tree->GetBranch("genLep_sourceId");
		if (genLep_sourceId_branch) {genLep_sourceId_branch->SetAddress(&genLep_sourceId_);}
	}
	ngenTau_branch = 0;
	if (tree->GetBranch("ngenTau") != 0) {
		ngenTau_branch = tree->GetBranch("ngenTau");
		if (ngenTau_branch) {ngenTau_branch->SetAddress(&ngenTau_);}
	}
	genTau_pt_branch = 0;
	if (tree->GetBranch("genTau_pt") != 0) {
		genTau_pt_branch = tree->GetBranch("genTau_pt");
		if (genTau_pt_branch) {genTau_pt_branch->SetAddress(&genTau_pt_);}
	}
	genTau_eta_branch = 0;
	if (tree->GetBranch("genTau_eta") != 0) {
		genTau_eta_branch = tree->GetBranch("genTau_eta");
		if (genTau_eta_branch) {genTau_eta_branch->SetAddress(&genTau_eta_);}
	}
	genTau_phi_branch = 0;
	if (tree->GetBranch("genTau_phi") != 0) {
		genTau_phi_branch = tree->GetBranch("genTau_phi");
		if (genTau_phi_branch) {genTau_phi_branch->SetAddress(&genTau_phi_);}
	}
	genTau_mass_branch = 0;
	if (tree->GetBranch("genTau_mass") != 0) {
		genTau_mass_branch = tree->GetBranch("genTau_mass");
		if (genTau_mass_branch) {genTau_mass_branch->SetAddress(&genTau_mass_);}
	}
	genTau_pdgId_branch = 0;
	if (tree->GetBranch("genTau_pdgId") != 0) {
		genTau_pdgId_branch = tree->GetBranch("genTau_pdgId");
		if (genTau_pdgId_branch) {genTau_pdgId_branch->SetAddress(&genTau_pdgId_);}
	}
	genTau_status_branch = 0;
	if (tree->GetBranch("genTau_status") != 0) {
		genTau_status_branch = tree->GetBranch("genTau_status");
		if (genTau_status_branch) {genTau_status_branch->SetAddress(&genTau_status_);}
	}
	genTau_charge_branch = 0;
	if (tree->GetBranch("genTau_charge") != 0) {
		genTau_charge_branch = tree->GetBranch("genTau_charge");
		if (genTau_charge_branch) {genTau_charge_branch->SetAddress(&genTau_charge_);}
	}
	genTau_sourceId_branch = 0;
	if (tree->GetBranch("genTau_sourceId") != 0) {
		genTau_sourceId_branch = tree->GetBranch("genTau_sourceId");
		if (genTau_sourceId_branch) {genTau_sourceId_branch->SetAddress(&genTau_sourceId_);}
	}
	ngenLepFromTau_branch = 0;
	if (tree->GetBranch("ngenLepFromTau") != 0) {
		ngenLepFromTau_branch = tree->GetBranch("ngenLepFromTau");
		if (ngenLepFromTau_branch) {ngenLepFromTau_branch->SetAddress(&ngenLepFromTau_);}
	}
	genLepFromTau_pt_branch = 0;
	if (tree->GetBranch("genLepFromTau_pt") != 0) {
		genLepFromTau_pt_branch = tree->GetBranch("genLepFromTau_pt");
		if (genLepFromTau_pt_branch) {genLepFromTau_pt_branch->SetAddress(&genLepFromTau_pt_);}
	}
	genLepFromTau_eta_branch = 0;
	if (tree->GetBranch("genLepFromTau_eta") != 0) {
		genLepFromTau_eta_branch = tree->GetBranch("genLepFromTau_eta");
		if (genLepFromTau_eta_branch) {genLepFromTau_eta_branch->SetAddress(&genLepFromTau_eta_);}
	}
	genLepFromTau_phi_branch = 0;
	if (tree->GetBranch("genLepFromTau_phi") != 0) {
		genLepFromTau_phi_branch = tree->GetBranch("genLepFromTau_phi");
		if (genLepFromTau_phi_branch) {genLepFromTau_phi_branch->SetAddress(&genLepFromTau_phi_);}
	}
	genLepFromTau_mass_branch = 0;
	if (tree->GetBranch("genLepFromTau_mass") != 0) {
		genLepFromTau_mass_branch = tree->GetBranch("genLepFromTau_mass");
		if (genLepFromTau_mass_branch) {genLepFromTau_mass_branch->SetAddress(&genLepFromTau_mass_);}
	}
	genLepFromTau_pdgId_branch = 0;
	if (tree->GetBranch("genLepFromTau_pdgId") != 0) {
		genLepFromTau_pdgId_branch = tree->GetBranch("genLepFromTau_pdgId");
		if (genLepFromTau_pdgId_branch) {genLepFromTau_pdgId_branch->SetAddress(&genLepFromTau_pdgId_);}
	}
	genLepFromTau_status_branch = 0;
	if (tree->GetBranch("genLepFromTau_status") != 0) {
		genLepFromTau_status_branch = tree->GetBranch("genLepFromTau_status");
		if (genLepFromTau_status_branch) {genLepFromTau_status_branch->SetAddress(&genLepFromTau_status_);}
	}
	genLepFromTau_charge_branch = 0;
	if (tree->GetBranch("genLepFromTau_charge") != 0) {
		genLepFromTau_charge_branch = tree->GetBranch("genLepFromTau_charge");
		if (genLepFromTau_charge_branch) {genLepFromTau_charge_branch->SetAddress(&genLepFromTau_charge_);}
	}
	genLepFromTau_sourceId_branch = 0;
	if (tree->GetBranch("genLepFromTau_sourceId") != 0) {
		genLepFromTau_sourceId_branch = tree->GetBranch("genLepFromTau_sourceId");
		if (genLepFromTau_sourceId_branch) {genLepFromTau_sourceId_branch->SetAddress(&genLepFromTau_sourceId_);}
	}
	njet_branch = 0;
	if (tree->GetBranch("njet") != 0) {
		njet_branch = tree->GetBranch("njet");
		if (njet_branch) {njet_branch->SetAddress(&njet_);}
	}
	jet_pt_branch = 0;
	if (tree->GetBranch("jet_pt") != 0) {
		jet_pt_branch = tree->GetBranch("jet_pt");
		if (jet_pt_branch) {jet_pt_branch->SetAddress(&jet_pt_);}
	}
	jet_eta_branch = 0;
	if (tree->GetBranch("jet_eta") != 0) {
		jet_eta_branch = tree->GetBranch("jet_eta");
		if (jet_eta_branch) {jet_eta_branch->SetAddress(&jet_eta_);}
	}
	jet_phi_branch = 0;
	if (tree->GetBranch("jet_phi") != 0) {
		jet_phi_branch = tree->GetBranch("jet_phi");
		if (jet_phi_branch) {jet_phi_branch->SetAddress(&jet_phi_);}
	}
	jet_mass_branch = 0;
	if (tree->GetBranch("jet_mass") != 0) {
		jet_mass_branch = tree->GetBranch("jet_mass");
		if (jet_mass_branch) {jet_mass_branch->SetAddress(&jet_mass_);}
	}
	jet_btagCSV_branch = 0;
	if (tree->GetBranch("jet_btagCSV") != 0) {
		jet_btagCSV_branch = tree->GetBranch("jet_btagCSV");
		if (jet_btagCSV_branch) {jet_btagCSV_branch->SetAddress(&jet_btagCSV_);}
	}
	jet_rawPt_branch = 0;
	if (tree->GetBranch("jet_rawPt") != 0) {
		jet_rawPt_branch = tree->GetBranch("jet_rawPt");
		if (jet_rawPt_branch) {jet_rawPt_branch->SetAddress(&jet_rawPt_);}
	}
	jet_mcPt_branch = 0;
	if (tree->GetBranch("jet_mcPt") != 0) {
		jet_mcPt_branch = tree->GetBranch("jet_mcPt");
		if (jet_mcPt_branch) {jet_mcPt_branch->SetAddress(&jet_mcPt_);}
	}
	jet_mcFlavour_branch = 0;
	if (tree->GetBranch("jet_mcFlavour") != 0) {
		jet_mcFlavour_branch = tree->GetBranch("jet_mcFlavour");
		if (jet_mcFlavour_branch) {jet_mcFlavour_branch->SetAddress(&jet_mcFlavour_);}
	}
	jet_quarkGluonID_branch = 0;
	if (tree->GetBranch("jet_quarkGluonID") != 0) {
		jet_quarkGluonID_branch = tree->GetBranch("jet_quarkGluonID");
		if (jet_quarkGluonID_branch) {jet_quarkGluonID_branch->SetAddress(&jet_quarkGluonID_);}
	}
	jet_area_branch = 0;
	if (tree->GetBranch("jet_area") != 0) {
		jet_area_branch = tree->GetBranch("jet_area");
		if (jet_area_branch) {jet_area_branch->SetAddress(&jet_area_);}
	}
	jet_id_branch = 0;
	if (tree->GetBranch("jet_id") != 0) {
		jet_id_branch = tree->GetBranch("jet_id");
		if (jet_id_branch) {jet_id_branch->SetAddress(&jet_id_);}
	}
	jet_puId_branch = 0;
	if (tree->GetBranch("jet_puId") != 0) {
		jet_puId_branch = tree->GetBranch("jet_puId");
		if (jet_puId_branch) {jet_puId_branch->SetAddress(&jet_puId_);}
	}
  tree->SetMakeClass(0);
}
void GetEntry(unsigned int idx) 
	// this only marks branches as not loaded, saving a lot of time
	{
		index = idx;
		run_isLoaded = false;
		lumi_isLoaded = false;
		evt_isLoaded = false;
		isData_isLoaded = false;
		evt_scale1fb_isLoaded = false;
		evt_xsec_isLoaded = false;
		evt_kfactor_isLoaded = false;
		evt_filter_isLoaded = false;
		evt_nEvts_isLoaded = false;
		evt_id_isLoaded = false;
		puWeight_isLoaded = false;
		nVert_isLoaded = false;
		nTrueInt_isLoaded = false;
		rho_isLoaded = false;
		rho25_isLoaded = false;
		njets_isLoaded = false;
		njets40_isLoaded = false;
		ht_isLoaded = false;
		ht40_isLoaded = false;
		mt2_isLoaded = false;
		mt2j_isLoaded = false;
		mt2j40_isLoaded = false;
		nJet40_isLoaded = false;
		nBJet40_isLoaded = false;
		nMuons10_isLoaded = false;
		nElectrons10_isLoaded = false;
		nTaus20_isLoaded = false;
		nGammas20_isLoaded = false;
		met_pt_isLoaded = false;
		met_phi_isLoaded = false;
		met_rawPt_isLoaded = false;
		met_rawPhi_isLoaded = false;
		met_caloPt_isLoaded = false;
		met_caloPhi_isLoaded = false;
		met_genPt_isLoaded = false;
		met_genPhi_isLoaded = false;
		Flag_EcalDeadCellTriggerPrimitiveFilter_isLoaded = false;
		Flag_trkPOG_manystripclus53X_isLoaded = false;
		Flag_ecalLaserCorrFilter_isLoaded = false;
		Flag_trkPOG_toomanystripclus53X_isLoaded = false;
		Flag_hcalLaserEventFilter_isLoaded = false;
		Flag_trkPOG_logErrorTooManyClusters_isLoaded = false;
		Flag_trkPOGFilters_isLoaded = false;
		Flag_trackingFailureFilter_isLoaded = false;
		Flag_CSCTightHaloFilter_isLoaded = false;
		Flag_HBHENoiseFilter_isLoaded = false;
		Flag_goodVertices_isLoaded = false;
		Flag_eeBadScFilter_isLoaded = false;
		Flag_METFilters_isLoaded = false;
		HLT_HT900_isLoaded = false;
		HLT_MET170_isLoaded = false;
		HLT_ht350met120_isLoaded = false;
		HLT_SingleMu_isLoaded = false;
		HLT_DoubleEl_isLoaded = false;
		HLT_MuEG_isLoaded = false;
		HLT_DoubleMu_isLoaded = false;
		HLT_Photons_isLoaded = false;
		dilmass_isLoaded = false;
		dilpt_isLoaded = false;
		diltype_isLoaded = false;
		nlep_isLoaded = false;
		lep_p4_isLoaded = false;
		lep_pt_isLoaded = false;
		lep_eta_isLoaded = false;
		lep_phi_isLoaded = false;
		lep_mass_isLoaded = false;
		lep_charge_isLoaded = false;
		lep_pdgId_isLoaded = false;
		lep_dxy_isLoaded = false;
		lep_dz_isLoaded = false;
		lep_tightId_isLoaded = false;
		lep_relIso03_isLoaded = false;
		lep_relIso04_isLoaded = false;
		lep_mcMatchId_isLoaded = false;
		lep_lostHits_isLoaded = false;
		lep_convVeto_isLoaded = false;
		lep_tightCharge_isLoaded = false;
		ntau_isLoaded = false;
		tau_pt_isLoaded = false;
		tau_eta_isLoaded = false;
		tau_phi_isLoaded = false;
		tau_mass_isLoaded = false;
		tau_charge_isLoaded = false;
		tau_dxy_isLoaded = false;
		tau_dz_isLoaded = false;
		tau_idCI3hit_isLoaded = false;
		tau_isoCI3hit_isLoaded = false;
		ngamma_isLoaded = false;
		gamma_p4_isLoaded = false;
		gamma_pt_isLoaded = false;
		gamma_eta_isLoaded = false;
		gamma_phi_isLoaded = false;
		gamma_mass_isLoaded = false;
		gamma_mcMatchId_isLoaded = false;
		gamma_genIso_isLoaded = false;
		gamma_chHadIso_isLoaded = false;
		gamma_neuHadIso_isLoaded = false;
		gamma_phIso_isLoaded = false;
		gamma_sigmaIetaIeta_isLoaded = false;
		gamma_r9_isLoaded = false;
		gamma_hOverE_isLoaded = false;
		gamma_idCutBased_isLoaded = false;
		ngenPart_isLoaded = false;
		genPart_pt_isLoaded = false;
		genPart_eta_isLoaded = false;
		genPart_phi_isLoaded = false;
		genPart_mass_isLoaded = false;
		genPart_pdgId_isLoaded = false;
		genPart_status_isLoaded = false;
		genPart_charge_isLoaded = false;
		genPart_motherId_isLoaded = false;
		genPart_grandmaId_isLoaded = false;
		gamma_nJet40_isLoaded = false;
		gamma_nBJet40_isLoaded = false;
		ngenLep_isLoaded = false;
		genLep_pt_isLoaded = false;
		genLep_eta_isLoaded = false;
		genLep_phi_isLoaded = false;
		genLep_mass_isLoaded = false;
		genLep_pdgId_isLoaded = false;
		genLep_status_isLoaded = false;
		genLep_charge_isLoaded = false;
		genLep_sourceId_isLoaded = false;
		ngenTau_isLoaded = false;
		genTau_pt_isLoaded = false;
		genTau_eta_isLoaded = false;
		genTau_phi_isLoaded = false;
		genTau_mass_isLoaded = false;
		genTau_pdgId_isLoaded = false;
		genTau_status_isLoaded = false;
		genTau_charge_isLoaded = false;
		genTau_sourceId_isLoaded = false;
		ngenLepFromTau_isLoaded = false;
		genLepFromTau_pt_isLoaded = false;
		genLepFromTau_eta_isLoaded = false;
		genLepFromTau_phi_isLoaded = false;
		genLepFromTau_mass_isLoaded = false;
		genLepFromTau_pdgId_isLoaded = false;
		genLepFromTau_status_isLoaded = false;
		genLepFromTau_charge_isLoaded = false;
		genLepFromTau_sourceId_isLoaded = false;
		njet_isLoaded = false;
		jet_p4_isLoaded = false;
		jet30_p4_isLoaded = false;
		jet40_p4_isLoaded = false;
		jet_pt_isLoaded = false;
		jet_eta_isLoaded = false;
		jet_phi_isLoaded = false;
		jet_mass_isLoaded = false;
		jet_btagCSV_isLoaded = false;
		jet_rawPt_isLoaded = false;
		jet_mcPt_isLoaded = false;
		jet_mcFlavour_isLoaded = false;
		jet_quarkGluonID_isLoaded = false;
		jet_area_isLoaded = false;
		jet_id_isLoaded = false;
		jet_puId_isLoaded = false;
	}

void LoadAllBranches() 
	// load all branches
{
	if (run_branch != 0) run();
	if (lumi_branch != 0) lumi();
	if (evt_branch != 0) evt();
	if (isData_branch != 0) isData();
	if (evt_scale1fb_branch != 0) evt_scale1fb();
	if (evt_xsec_branch != 0) evt_xsec();
	if (evt_kfactor_branch != 0) evt_kfactor();
	if (evt_filter_branch != 0) evt_filter();
	if (evt_nEvts_branch != 0) evt_nEvts();
	if (evt_id_branch != 0) evt_id();
	if (puWeight_branch != 0) puWeight();
	if (nVert_branch != 0) nVert();
	if (nTrueInt_branch != 0) nTrueInt();
	if (rho_branch != 0) rho();
	if (rho25_branch != 0) rho25();
	if (njets_branch != 0) njets();
	if (njets40_branch != 0) njets40();
	if (ht_branch != 0) ht();
	if (ht40_branch != 0) ht40();
	if (mt2_branch != 0) mt2();
	if (mt2j_branch != 0) mt2j();
	if (mt2j40_branch != 0) mt2j40();
	if (nJet40_branch != 0) nJet40();
	if (nBJet40_branch != 0) nBJet40();
	if (nMuons10_branch != 0) nMuons10();
	if (nElectrons10_branch != 0) nElectrons10();
	if (nTaus20_branch != 0) nTaus20();
	if (nGammas20_branch != 0) nGammas20();
	if (met_pt_branch != 0) met_pt();
	if (met_phi_branch != 0) met_phi();
	if (met_rawPt_branch != 0) met_rawPt();
	if (met_rawPhi_branch != 0) met_rawPhi();
	if (met_caloPt_branch != 0) met_caloPt();
	if (met_caloPhi_branch != 0) met_caloPhi();
	if (met_genPt_branch != 0) met_genPt();
	if (met_genPhi_branch != 0) met_genPhi();
	if (Flag_EcalDeadCellTriggerPrimitiveFilter_branch != 0) Flag_EcalDeadCellTriggerPrimitiveFilter();
	if (Flag_trkPOG_manystripclus53X_branch != 0) Flag_trkPOG_manystripclus53X();
	if (Flag_ecalLaserCorrFilter_branch != 0) Flag_ecalLaserCorrFilter();
	if (Flag_trkPOG_toomanystripclus53X_branch != 0) Flag_trkPOG_toomanystripclus53X();
	if (Flag_hcalLaserEventFilter_branch != 0) Flag_hcalLaserEventFilter();
	if (Flag_trkPOG_logErrorTooManyClusters_branch != 0) Flag_trkPOG_logErrorTooManyClusters();
	if (Flag_trkPOGFilters_branch != 0) Flag_trkPOGFilters();
	if (Flag_trackingFailureFilter_branch != 0) Flag_trackingFailureFilter();
	if (Flag_CSCTightHaloFilter_branch != 0) Flag_CSCTightHaloFilter();
	if (Flag_HBHENoiseFilter_branch != 0) Flag_HBHENoiseFilter();
	if (Flag_goodVertices_branch != 0) Flag_goodVertices();
	if (Flag_eeBadScFilter_branch != 0) Flag_eeBadScFilter();
	if (Flag_METFilters_branch != 0) Flag_METFilters();
	if (HLT_HT900_branch != 0) HLT_HT900();
	if (HLT_MET170_branch != 0) HLT_MET170();
	if (HLT_ht350met120_branch != 0) HLT_ht350met120();
	if (HLT_SingleMu_branch != 0) HLT_SingleMu();
	if (HLT_DoubleEl_branch != 0) HLT_DoubleEl();
	if (HLT_MuEG_branch != 0) HLT_MuEG();
	if (HLT_DoubleMu_branch != 0) HLT_DoubleMu();
	if (HLT_Photons_branch != 0) HLT_Photons();
	if (dilmass_branch != 0) dilmass();
	if (dilpt_branch != 0) dilpt();
	if (diltype_branch != 0) diltype();
	if (nlep_branch != 0) nlep();
	if (lep_p4_branch != 0) lep_p4();
	if (lep_pt_branch != 0) lep_pt();
	if (lep_eta_branch != 0) lep_eta();
	if (lep_phi_branch != 0) lep_phi();
	if (lep_mass_branch != 0) lep_mass();
	if (lep_charge_branch != 0) lep_charge();
	if (lep_pdgId_branch != 0) lep_pdgId();
	if (lep_dxy_branch != 0) lep_dxy();
	if (lep_dz_branch != 0) lep_dz();
	if (lep_tightId_branch != 0) lep_tightId();
	if (lep_relIso03_branch != 0) lep_relIso03();
	if (lep_relIso04_branch != 0) lep_relIso04();
	if (lep_mcMatchId_branch != 0) lep_mcMatchId();
	if (lep_lostHits_branch != 0) lep_lostHits();
	if (lep_convVeto_branch != 0) lep_convVeto();
	if (lep_tightCharge_branch != 0) lep_tightCharge();
	if (ntau_branch != 0) ntau();
	if (tau_pt_branch != 0) tau_pt();
	if (tau_eta_branch != 0) tau_eta();
	if (tau_phi_branch != 0) tau_phi();
	if (tau_mass_branch != 0) tau_mass();
	if (tau_charge_branch != 0) tau_charge();
	if (tau_dxy_branch != 0) tau_dxy();
	if (tau_dz_branch != 0) tau_dz();
	if (tau_idCI3hit_branch != 0) tau_idCI3hit();
	if (tau_isoCI3hit_branch != 0) tau_isoCI3hit();
	if (ngamma_branch != 0) ngamma();
	if (gamma_p4_branch != 0) gamma_p4();
	if (gamma_pt_branch != 0) gamma_pt();
	if (gamma_eta_branch != 0) gamma_eta();
	if (gamma_phi_branch != 0) gamma_phi();
	if (gamma_mass_branch != 0) gamma_mass();
	if (gamma_mcMatchId_branch != 0) gamma_mcMatchId();
	if (gamma_genIso_branch != 0) gamma_genIso();
	if (gamma_chHadIso_branch != 0) gamma_chHadIso();
	if (gamma_neuHadIso_branch != 0) gamma_neuHadIso();
	if (gamma_phIso_branch != 0) gamma_phIso();
	if (gamma_sigmaIetaIeta_branch != 0) gamma_sigmaIetaIeta();
	if (gamma_r9_branch != 0) gamma_r9();
	if (gamma_hOverE_branch != 0) gamma_hOverE();
	if (gamma_idCutBased_branch != 0) gamma_idCutBased();
	if (ngenPart_branch != 0) ngenPart();
	if (genPart_pt_branch != 0) genPart_pt();
	if (genPart_eta_branch != 0) genPart_eta();
	if (genPart_phi_branch != 0) genPart_phi();
	if (genPart_mass_branch != 0) genPart_mass();
	if (genPart_pdgId_branch != 0) genPart_pdgId();
	if (genPart_status_branch != 0) genPart_status();
	if (genPart_charge_branch != 0) genPart_charge();
	if (genPart_motherId_branch != 0) genPart_motherId();
	if (genPart_grandmaId_branch != 0) genPart_grandmaId();
	if (gamma_nJet40_branch != 0) gamma_nJet40();
	if (gamma_nBJet40_branch != 0) gamma_nBJet40();
	if (ngenLep_branch != 0) ngenLep();
	if (genLep_pt_branch != 0) genLep_pt();
	if (genLep_eta_branch != 0) genLep_eta();
	if (genLep_phi_branch != 0) genLep_phi();
	if (genLep_mass_branch != 0) genLep_mass();
	if (genLep_pdgId_branch != 0) genLep_pdgId();
	if (genLep_status_branch != 0) genLep_status();
	if (genLep_charge_branch != 0) genLep_charge();
	if (genLep_sourceId_branch != 0) genLep_sourceId();
	if (ngenTau_branch != 0) ngenTau();
	if (genTau_pt_branch != 0) genTau_pt();
	if (genTau_eta_branch != 0) genTau_eta();
	if (genTau_phi_branch != 0) genTau_phi();
	if (genTau_mass_branch != 0) genTau_mass();
	if (genTau_pdgId_branch != 0) genTau_pdgId();
	if (genTau_status_branch != 0) genTau_status();
	if (genTau_charge_branch != 0) genTau_charge();
	if (genTau_sourceId_branch != 0) genTau_sourceId();
	if (ngenLepFromTau_branch != 0) ngenLepFromTau();
	if (genLepFromTau_pt_branch != 0) genLepFromTau_pt();
	if (genLepFromTau_eta_branch != 0) genLepFromTau_eta();
	if (genLepFromTau_phi_branch != 0) genLepFromTau_phi();
	if (genLepFromTau_mass_branch != 0) genLepFromTau_mass();
	if (genLepFromTau_pdgId_branch != 0) genLepFromTau_pdgId();
	if (genLepFromTau_status_branch != 0) genLepFromTau_status();
	if (genLepFromTau_charge_branch != 0) genLepFromTau_charge();
	if (genLepFromTau_sourceId_branch != 0) genLepFromTau_sourceId();
	if (njet_branch != 0) njet();
	if (jet_p4_branch != 0) jet_p4();
	if (jet30_p4_branch != 0) jet30_p4();
	if (jet40_p4_branch != 0) jet40_p4();
	if (jet_pt_branch != 0) jet_pt();
	if (jet_eta_branch != 0) jet_eta();
	if (jet_phi_branch != 0) jet_phi();
	if (jet_mass_branch != 0) jet_mass();
	if (jet_btagCSV_branch != 0) jet_btagCSV();
	if (jet_rawPt_branch != 0) jet_rawPt();
	if (jet_mcPt_branch != 0) jet_mcPt();
	if (jet_mcFlavour_branch != 0) jet_mcFlavour();
	if (jet_quarkGluonID_branch != 0) jet_quarkGluonID();
	if (jet_area_branch != 0) jet_area();
	if (jet_id_branch != 0) jet_id();
	if (jet_puId_branch != 0) jet_puId();
}

	int &run()
	{
		if (not run_isLoaded) {
			if (run_branch != 0) {
				run_branch->GetEntry(index);
			} else { 
				printf("branch run_branch does not exist!\n");
				exit(1);
			}
			run_isLoaded = true;
		}
		return run_;
	}
	int &lumi()
	{
		if (not lumi_isLoaded) {
			if (lumi_branch != 0) {
				lumi_branch->GetEntry(index);
			} else { 
				printf("branch lumi_branch does not exist!\n");
				exit(1);
			}
			lumi_isLoaded = true;
		}
		return lumi_;
	}
	int &evt()
	{
		if (not evt_isLoaded) {
			if (evt_branch != 0) {
				evt_branch->GetEntry(index);
			} else { 
				printf("branch evt_branch does not exist!\n");
				exit(1);
			}
			evt_isLoaded = true;
		}
		return evt_;
	}
	int &isData()
	{
		if (not isData_isLoaded) {
			if (isData_branch != 0) {
				isData_branch->GetEntry(index);
			} else { 
				printf("branch isData_branch does not exist!\n");
				exit(1);
			}
			isData_isLoaded = true;
		}
		return isData_;
	}
	float &evt_scale1fb()
	{
		if (not evt_scale1fb_isLoaded) {
			if (evt_scale1fb_branch != 0) {
				evt_scale1fb_branch->GetEntry(index);
			} else { 
				printf("branch evt_scale1fb_branch does not exist!\n");
				exit(1);
			}
			evt_scale1fb_isLoaded = true;
		}
		return evt_scale1fb_;
	}
	float &evt_xsec()
	{
		if (not evt_xsec_isLoaded) {
			if (evt_xsec_branch != 0) {
				evt_xsec_branch->GetEntry(index);
			} else { 
				printf("branch evt_xsec_branch does not exist!\n");
				exit(1);
			}
			evt_xsec_isLoaded = true;
		}
		return evt_xsec_;
	}
	float &evt_kfactor()
	{
		if (not evt_kfactor_isLoaded) {
			if (evt_kfactor_branch != 0) {
				evt_kfactor_branch->GetEntry(index);
			} else { 
				printf("branch evt_kfactor_branch does not exist!\n");
				exit(1);
			}
			evt_kfactor_isLoaded = true;
		}
		return evt_kfactor_;
	}
	float &evt_filter()
	{
		if (not evt_filter_isLoaded) {
			if (evt_filter_branch != 0) {
				evt_filter_branch->GetEntry(index);
			} else { 
				printf("branch evt_filter_branch does not exist!\n");
				exit(1);
			}
			evt_filter_isLoaded = true;
		}
		return evt_filter_;
	}
	int &evt_nEvts()
	{
		if (not evt_nEvts_isLoaded) {
			if (evt_nEvts_branch != 0) {
				evt_nEvts_branch->GetEntry(index);
			} else { 
				printf("branch evt_nEvts_branch does not exist!\n");
				exit(1);
			}
			evt_nEvts_isLoaded = true;
		}
		return evt_nEvts_;
	}
	int &evt_id()
	{
		if (not evt_id_isLoaded) {
			if (evt_id_branch != 0) {
				evt_id_branch->GetEntry(index);
			} else { 
				printf("branch evt_id_branch does not exist!\n");
				exit(1);
			}
			evt_id_isLoaded = true;
		}
		return evt_id_;
	}
	float &puWeight()
	{
		if (not puWeight_isLoaded) {
			if (puWeight_branch != 0) {
				puWeight_branch->GetEntry(index);
			} else { 
				printf("branch puWeight_branch does not exist!\n");
				exit(1);
			}
			puWeight_isLoaded = true;
		}
		return puWeight_;
	}
	int &nVert()
	{
		if (not nVert_isLoaded) {
			if (nVert_branch != 0) {
				nVert_branch->GetEntry(index);
			} else { 
				printf("branch nVert_branch does not exist!\n");
				exit(1);
			}
			nVert_isLoaded = true;
		}
		return nVert_;
	}
	int &nTrueInt()
	{
		if (not nTrueInt_isLoaded) {
			if (nTrueInt_branch != 0) {
				nTrueInt_branch->GetEntry(index);
			} else { 
				printf("branch nTrueInt_branch does not exist!\n");
				exit(1);
			}
			nTrueInt_isLoaded = true;
		}
		return nTrueInt_;
	}
	float &rho()
	{
		if (not rho_isLoaded) {
			if (rho_branch != 0) {
				rho_branch->GetEntry(index);
			} else { 
				printf("branch rho_branch does not exist!\n");
				exit(1);
			}
			rho_isLoaded = true;
		}
		return rho_;
	}
	float &rho25()
	{
		if (not rho25_isLoaded) {
			if (rho25_branch != 0) {
				rho25_branch->GetEntry(index);
			} else { 
				printf("branch rho25_branch does not exist!\n");
				exit(1);
			}
			rho25_isLoaded = true;
		}
		return rho25_;
	}
	int &njets()
	{
		if (not njets_isLoaded) {
			if (njets_branch != 0) {
				njets_branch->GetEntry(index);
			} else { 
				printf("branch njets_branch does not exist!\n");
				exit(1);
			}
			njets_isLoaded = true;
		}
		return njets_;
	}
	int &njets40()
	{
		if (not njets40_isLoaded) {
			if (njets40_branch != 0) {
				njets40_branch->GetEntry(index);
			} else { 
				printf("branch njets40_branch does not exist!\n");
				exit(1);
			}
			njets40_isLoaded = true;
		}
		return njets40_;
	}
	float &ht()
	{
		if (not ht_isLoaded) {
			if (ht_branch != 0) {
				ht_branch->GetEntry(index);
			} else { 
				printf("branch ht_branch does not exist!\n");
				exit(1);
			}
			ht_isLoaded = true;
		}
		return ht_;
	}
	float &ht40()
	{
		if (not ht40_isLoaded) {
			if (ht40_branch != 0) {
				ht40_branch->GetEntry(index);
			} else { 
				printf("branch ht40_branch does not exist!\n");
				exit(1);
			}
			ht40_isLoaded = true;
		}
		return ht40_;
	}
	float &mt2()
	{
		if (not mt2_isLoaded) {
			if (mt2_branch != 0) {
				mt2_branch->GetEntry(index);
			} else { 
				printf("branch mt2_branch does not exist!\n");
				exit(1);
			}
			mt2_isLoaded = true;
		}
		return mt2_;
	}
	float &mt2j()
	{
		if (not mt2j_isLoaded) {
			if (mt2j_branch != 0) {
				mt2j_branch->GetEntry(index);
			} else { 
				printf("branch mt2j_branch does not exist!\n");
				exit(1);
			}
			mt2j_isLoaded = true;
		}
		return mt2j_;
	}
	float &mt2j40()
	{
		if (not mt2j40_isLoaded) {
			if (mt2j40_branch != 0) {
				mt2j40_branch->GetEntry(index);
			} else { 
				printf("branch mt2j40_branch does not exist!\n");
				exit(1);
			}
			mt2j40_isLoaded = true;
		}
		return mt2j40_;
	}
	int &nJet40()
	{
		if (not nJet40_isLoaded) {
			if (nJet40_branch != 0) {
				nJet40_branch->GetEntry(index);
			} else { 
				printf("branch nJet40_branch does not exist!\n");
				exit(1);
			}
			nJet40_isLoaded = true;
		}
		return nJet40_;
	}
	int &nBJet40()
	{
		if (not nBJet40_isLoaded) {
			if (nBJet40_branch != 0) {
				nBJet40_branch->GetEntry(index);
			} else { 
				printf("branch nBJet40_branch does not exist!\n");
				exit(1);
			}
			nBJet40_isLoaded = true;
		}
		return nBJet40_;
	}
	int &nMuons10()
	{
		if (not nMuons10_isLoaded) {
			if (nMuons10_branch != 0) {
				nMuons10_branch->GetEntry(index);
			} else { 
				printf("branch nMuons10_branch does not exist!\n");
				exit(1);
			}
			nMuons10_isLoaded = true;
		}
		return nMuons10_;
	}
	int &nElectrons10()
	{
		if (not nElectrons10_isLoaded) {
			if (nElectrons10_branch != 0) {
				nElectrons10_branch->GetEntry(index);
			} else { 
				printf("branch nElectrons10_branch does not exist!\n");
				exit(1);
			}
			nElectrons10_isLoaded = true;
		}
		return nElectrons10_;
	}
	int &nTaus20()
	{
		if (not nTaus20_isLoaded) {
			if (nTaus20_branch != 0) {
				nTaus20_branch->GetEntry(index);
			} else { 
				printf("branch nTaus20_branch does not exist!\n");
				exit(1);
			}
			nTaus20_isLoaded = true;
		}
		return nTaus20_;
	}
	int &nGammas20()
	{
		if (not nGammas20_isLoaded) {
			if (nGammas20_branch != 0) {
				nGammas20_branch->GetEntry(index);
			} else { 
				printf("branch nGammas20_branch does not exist!\n");
				exit(1);
			}
			nGammas20_isLoaded = true;
		}
		return nGammas20_;
	}
	float &met_pt()
	{
		if (not met_pt_isLoaded) {
			if (met_pt_branch != 0) {
				met_pt_branch->GetEntry(index);
			} else { 
				printf("branch met_pt_branch does not exist!\n");
				exit(1);
			}
			met_pt_isLoaded = true;
		}
		return met_pt_;
	}
	float &met_phi()
	{
		if (not met_phi_isLoaded) {
			if (met_phi_branch != 0) {
				met_phi_branch->GetEntry(index);
			} else { 
				printf("branch met_phi_branch does not exist!\n");
				exit(1);
			}
			met_phi_isLoaded = true;
		}
		return met_phi_;
	}
	float &met_rawPt()
	{
		if (not met_rawPt_isLoaded) {
			if (met_rawPt_branch != 0) {
				met_rawPt_branch->GetEntry(index);
			} else { 
				printf("branch met_rawPt_branch does not exist!\n");
				exit(1);
			}
			met_rawPt_isLoaded = true;
		}
		return met_rawPt_;
	}
	float &met_rawPhi()
	{
		if (not met_rawPhi_isLoaded) {
			if (met_rawPhi_branch != 0) {
				met_rawPhi_branch->GetEntry(index);
			} else { 
				printf("branch met_rawPhi_branch does not exist!\n");
				exit(1);
			}
			met_rawPhi_isLoaded = true;
		}
		return met_rawPhi_;
	}
	float &met_caloPt()
	{
		if (not met_caloPt_isLoaded) {
			if (met_caloPt_branch != 0) {
				met_caloPt_branch->GetEntry(index);
			} else { 
				printf("branch met_caloPt_branch does not exist!\n");
				exit(1);
			}
			met_caloPt_isLoaded = true;
		}
		return met_caloPt_;
	}
	float &met_caloPhi()
	{
		if (not met_caloPhi_isLoaded) {
			if (met_caloPhi_branch != 0) {
				met_caloPhi_branch->GetEntry(index);
			} else { 
				printf("branch met_caloPhi_branch does not exist!\n");
				exit(1);
			}
			met_caloPhi_isLoaded = true;
		}
		return met_caloPhi_;
	}
	float &met_genPt()
	{
		if (not met_genPt_isLoaded) {
			if (met_genPt_branch != 0) {
				met_genPt_branch->GetEntry(index);
			} else { 
				printf("branch met_genPt_branch does not exist!\n");
				exit(1);
			}
			met_genPt_isLoaded = true;
		}
		return met_genPt_;
	}
	float &met_genPhi()
	{
		if (not met_genPhi_isLoaded) {
			if (met_genPhi_branch != 0) {
				met_genPhi_branch->GetEntry(index);
			} else { 
				printf("branch met_genPhi_branch does not exist!\n");
				exit(1);
			}
			met_genPhi_isLoaded = true;
		}
		return met_genPhi_;
	}
	int &Flag_EcalDeadCellTriggerPrimitiveFilter()
	{
		if (not Flag_EcalDeadCellTriggerPrimitiveFilter_isLoaded) {
			if (Flag_EcalDeadCellTriggerPrimitiveFilter_branch != 0) {
				Flag_EcalDeadCellTriggerPrimitiveFilter_branch->GetEntry(index);
			} else { 
				printf("branch Flag_EcalDeadCellTriggerPrimitiveFilter_branch does not exist!\n");
				exit(1);
			}
			Flag_EcalDeadCellTriggerPrimitiveFilter_isLoaded = true;
		}
		return Flag_EcalDeadCellTriggerPrimitiveFilter_;
	}
	int &Flag_trkPOG_manystripclus53X()
	{
		if (not Flag_trkPOG_manystripclus53X_isLoaded) {
			if (Flag_trkPOG_manystripclus53X_branch != 0) {
				Flag_trkPOG_manystripclus53X_branch->GetEntry(index);
			} else { 
				printf("branch Flag_trkPOG_manystripclus53X_branch does not exist!\n");
				exit(1);
			}
			Flag_trkPOG_manystripclus53X_isLoaded = true;
		}
		return Flag_trkPOG_manystripclus53X_;
	}
	int &Flag_ecalLaserCorrFilter()
	{
		if (not Flag_ecalLaserCorrFilter_isLoaded) {
			if (Flag_ecalLaserCorrFilter_branch != 0) {
				Flag_ecalLaserCorrFilter_branch->GetEntry(index);
			} else { 
				printf("branch Flag_ecalLaserCorrFilter_branch does not exist!\n");
				exit(1);
			}
			Flag_ecalLaserCorrFilter_isLoaded = true;
		}
		return Flag_ecalLaserCorrFilter_;
	}
	int &Flag_trkPOG_toomanystripclus53X()
	{
		if (not Flag_trkPOG_toomanystripclus53X_isLoaded) {
			if (Flag_trkPOG_toomanystripclus53X_branch != 0) {
				Flag_trkPOG_toomanystripclus53X_branch->GetEntry(index);
			} else { 
				printf("branch Flag_trkPOG_toomanystripclus53X_branch does not exist!\n");
				exit(1);
			}
			Flag_trkPOG_toomanystripclus53X_isLoaded = true;
		}
		return Flag_trkPOG_toomanystripclus53X_;
	}
	int &Flag_hcalLaserEventFilter()
	{
		if (not Flag_hcalLaserEventFilter_isLoaded) {
			if (Flag_hcalLaserEventFilter_branch != 0) {
				Flag_hcalLaserEventFilter_branch->GetEntry(index);
			} else { 
				printf("branch Flag_hcalLaserEventFilter_branch does not exist!\n");
				exit(1);
			}
			Flag_hcalLaserEventFilter_isLoaded = true;
		}
		return Flag_hcalLaserEventFilter_;
	}
	int &Flag_trkPOG_logErrorTooManyClusters()
	{
		if (not Flag_trkPOG_logErrorTooManyClusters_isLoaded) {
			if (Flag_trkPOG_logErrorTooManyClusters_branch != 0) {
				Flag_trkPOG_logErrorTooManyClusters_branch->GetEntry(index);
			} else { 
				printf("branch Flag_trkPOG_logErrorTooManyClusters_branch does not exist!\n");
				exit(1);
			}
			Flag_trkPOG_logErrorTooManyClusters_isLoaded = true;
		}
		return Flag_trkPOG_logErrorTooManyClusters_;
	}
	int &Flag_trkPOGFilters()
	{
		if (not Flag_trkPOGFilters_isLoaded) {
			if (Flag_trkPOGFilters_branch != 0) {
				Flag_trkPOGFilters_branch->GetEntry(index);
			} else { 
				printf("branch Flag_trkPOGFilters_branch does not exist!\n");
				exit(1);
			}
			Flag_trkPOGFilters_isLoaded = true;
		}
		return Flag_trkPOGFilters_;
	}
	int &Flag_trackingFailureFilter()
	{
		if (not Flag_trackingFailureFilter_isLoaded) {
			if (Flag_trackingFailureFilter_branch != 0) {
				Flag_trackingFailureFilter_branch->GetEntry(index);
			} else { 
				printf("branch Flag_trackingFailureFilter_branch does not exist!\n");
				exit(1);
			}
			Flag_trackingFailureFilter_isLoaded = true;
		}
		return Flag_trackingFailureFilter_;
	}
	int &Flag_CSCTightHaloFilter()
	{
		if (not Flag_CSCTightHaloFilter_isLoaded) {
			if (Flag_CSCTightHaloFilter_branch != 0) {
				Flag_CSCTightHaloFilter_branch->GetEntry(index);
			} else { 
				printf("branch Flag_CSCTightHaloFilter_branch does not exist!\n");
				exit(1);
			}
			Flag_CSCTightHaloFilter_isLoaded = true;
		}
		return Flag_CSCTightHaloFilter_;
	}
	int &Flag_HBHENoiseFilter()
	{
		if (not Flag_HBHENoiseFilter_isLoaded) {
			if (Flag_HBHENoiseFilter_branch != 0) {
				Flag_HBHENoiseFilter_branch->GetEntry(index);
			} else { 
				printf("branch Flag_HBHENoiseFilter_branch does not exist!\n");
				exit(1);
			}
			Flag_HBHENoiseFilter_isLoaded = true;
		}
		return Flag_HBHENoiseFilter_;
	}
	int &Flag_goodVertices()
	{
		if (not Flag_goodVertices_isLoaded) {
			if (Flag_goodVertices_branch != 0) {
				Flag_goodVertices_branch->GetEntry(index);
			} else { 
				printf("branch Flag_goodVertices_branch does not exist!\n");
				exit(1);
			}
			Flag_goodVertices_isLoaded = true;
		}
		return Flag_goodVertices_;
	}
	int &Flag_eeBadScFilter()
	{
		if (not Flag_eeBadScFilter_isLoaded) {
			if (Flag_eeBadScFilter_branch != 0) {
				Flag_eeBadScFilter_branch->GetEntry(index);
			} else { 
				printf("branch Flag_eeBadScFilter_branch does not exist!\n");
				exit(1);
			}
			Flag_eeBadScFilter_isLoaded = true;
		}
		return Flag_eeBadScFilter_;
	}
	int &Flag_METFilters()
	{
		if (not Flag_METFilters_isLoaded) {
			if (Flag_METFilters_branch != 0) {
				Flag_METFilters_branch->GetEntry(index);
			} else { 
				printf("branch Flag_METFilters_branch does not exist!\n");
				exit(1);
			}
			Flag_METFilters_isLoaded = true;
		}
		return Flag_METFilters_;
	}
	int &HLT_HT900()
	{
		if (not HLT_HT900_isLoaded) {
			if (HLT_HT900_branch != 0) {
				HLT_HT900_branch->GetEntry(index);
			} else { 
				printf("branch HLT_HT900_branch does not exist!\n");
				exit(1);
			}
			HLT_HT900_isLoaded = true;
		}
		return HLT_HT900_;
	}
	int &HLT_MET170()
	{
		if (not HLT_MET170_isLoaded) {
			if (HLT_MET170_branch != 0) {
				HLT_MET170_branch->GetEntry(index);
			} else { 
				printf("branch HLT_MET170_branch does not exist!\n");
				exit(1);
			}
			HLT_MET170_isLoaded = true;
		}
		return HLT_MET170_;
	}
	int &HLT_ht350met120()
	{
		if (not HLT_ht350met120_isLoaded) {
			if (HLT_ht350met120_branch != 0) {
				HLT_ht350met120_branch->GetEntry(index);
			} else { 
				printf("branch HLT_ht350met120_branch does not exist!\n");
				exit(1);
			}
			HLT_ht350met120_isLoaded = true;
		}
		return HLT_ht350met120_;
	}
	int &HLT_SingleMu()
	{
		if (not HLT_SingleMu_isLoaded) {
			if (HLT_SingleMu_branch != 0) {
				HLT_SingleMu_branch->GetEntry(index);
			} else { 
				printf("branch HLT_SingleMu_branch does not exist!\n");
				exit(1);
			}
			HLT_SingleMu_isLoaded = true;
		}
		return HLT_SingleMu_;
	}
	int &HLT_DoubleEl()
	{
		if (not HLT_DoubleEl_isLoaded) {
			if (HLT_DoubleEl_branch != 0) {
				HLT_DoubleEl_branch->GetEntry(index);
			} else { 
				printf("branch HLT_DoubleEl_branch does not exist!\n");
				exit(1);
			}
			HLT_DoubleEl_isLoaded = true;
		}
		return HLT_DoubleEl_;
	}
	int &HLT_MuEG()
	{
		if (not HLT_MuEG_isLoaded) {
			if (HLT_MuEG_branch != 0) {
				HLT_MuEG_branch->GetEntry(index);
			} else { 
				printf("branch HLT_MuEG_branch does not exist!\n");
				exit(1);
			}
			HLT_MuEG_isLoaded = true;
		}
		return HLT_MuEG_;
	}
	int &HLT_DoubleMu()
	{
		if (not HLT_DoubleMu_isLoaded) {
			if (HLT_DoubleMu_branch != 0) {
				HLT_DoubleMu_branch->GetEntry(index);
			} else { 
				printf("branch HLT_DoubleMu_branch does not exist!\n");
				exit(1);
			}
			HLT_DoubleMu_isLoaded = true;
		}
		return HLT_DoubleMu_;
	}
	int &HLT_Photons()
	{
		if (not HLT_Photons_isLoaded) {
			if (HLT_Photons_branch != 0) {
				HLT_Photons_branch->GetEntry(index);
			} else { 
				printf("branch HLT_Photons_branch does not exist!\n");
				exit(1);
			}
			HLT_Photons_isLoaded = true;
		}
		return HLT_Photons_;
	}
	float &dilmass()
	{
		if (not dilmass_isLoaded) {
			if (dilmass_branch != 0) {
				dilmass_branch->GetEntry(index);
			} else { 
				printf("branch dilmass_branch does not exist!\n");
				exit(1);
			}
			dilmass_isLoaded = true;
		}
		return dilmass_;
	}
	float &dilpt()
	{
		if (not dilpt_isLoaded) {
			if (dilpt_branch != 0) {
				dilpt_branch->GetEntry(index);
			} else { 
				printf("branch dilpt_branch does not exist!\n");
				exit(1);
			}
			dilpt_isLoaded = true;
		}
		return dilpt_;
	}
	int &diltype()
	{
		if (not diltype_isLoaded) {
			if (diltype_branch != 0) {
				diltype_branch->GetEntry(index);
			} else { 
				printf("branch diltype_branch does not exist!\n");
				exit(1);
			}
			diltype_isLoaded = true;
		}
		return diltype_;
	}
	int &nlep()
	{
		if (not nlep_isLoaded) {
			if (nlep_branch != 0) {
				nlep_branch->GetEntry(index);
			} else { 
				printf("branch nlep_branch does not exist!\n");
				exit(1);
			}
			nlep_isLoaded = true;
		}
		return nlep_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &lep_p4()
	{
		if (not lep_p4_isLoaded) {
			if (lep_p4_branch != 0) {
				lep_p4_branch->GetEntry(index);
			} else { 
				printf("branch lep_p4_branch does not exist!\n");
				exit(1);
			}
			lep_p4_isLoaded = true;
		}
		return *lep_p4_;
	}
	vector<float> &lep_pt()
	{
		if (not lep_pt_isLoaded) {
			if (lep_pt_branch != 0) {
				lep_pt_branch->GetEntry(index);
			} else { 
				printf("branch lep_pt_branch does not exist!\n");
				exit(1);
			}
			lep_pt_isLoaded = true;
		}
		return *lep_pt_;
	}
	vector<float> &lep_eta()
	{
		if (not lep_eta_isLoaded) {
			if (lep_eta_branch != 0) {
				lep_eta_branch->GetEntry(index);
			} else { 
				printf("branch lep_eta_branch does not exist!\n");
				exit(1);
			}
			lep_eta_isLoaded = true;
		}
		return *lep_eta_;
	}
	vector<float> &lep_phi()
	{
		if (not lep_phi_isLoaded) {
			if (lep_phi_branch != 0) {
				lep_phi_branch->GetEntry(index);
			} else { 
				printf("branch lep_phi_branch does not exist!\n");
				exit(1);
			}
			lep_phi_isLoaded = true;
		}
		return *lep_phi_;
	}
	vector<float> &lep_mass()
	{
		if (not lep_mass_isLoaded) {
			if (lep_mass_branch != 0) {
				lep_mass_branch->GetEntry(index);
			} else { 
				printf("branch lep_mass_branch does not exist!\n");
				exit(1);
			}
			lep_mass_isLoaded = true;
		}
		return *lep_mass_;
	}
	vector<int> &lep_charge()
	{
		if (not lep_charge_isLoaded) {
			if (lep_charge_branch != 0) {
				lep_charge_branch->GetEntry(index);
			} else { 
				printf("branch lep_charge_branch does not exist!\n");
				exit(1);
			}
			lep_charge_isLoaded = true;
		}
		return *lep_charge_;
	}
	vector<int> &lep_pdgId()
	{
		if (not lep_pdgId_isLoaded) {
			if (lep_pdgId_branch != 0) {
				lep_pdgId_branch->GetEntry(index);
			} else { 
				printf("branch lep_pdgId_branch does not exist!\n");
				exit(1);
			}
			lep_pdgId_isLoaded = true;
		}
		return *lep_pdgId_;
	}
	vector<float> &lep_dxy()
	{
		if (not lep_dxy_isLoaded) {
			if (lep_dxy_branch != 0) {
				lep_dxy_branch->GetEntry(index);
			} else { 
				printf("branch lep_dxy_branch does not exist!\n");
				exit(1);
			}
			lep_dxy_isLoaded = true;
		}
		return *lep_dxy_;
	}
	vector<float> &lep_dz()
	{
		if (not lep_dz_isLoaded) {
			if (lep_dz_branch != 0) {
				lep_dz_branch->GetEntry(index);
			} else { 
				printf("branch lep_dz_branch does not exist!\n");
				exit(1);
			}
			lep_dz_isLoaded = true;
		}
		return *lep_dz_;
	}
	vector<int> &lep_tightId()
	{
		if (not lep_tightId_isLoaded) {
			if (lep_tightId_branch != 0) {
				lep_tightId_branch->GetEntry(index);
			} else { 
				printf("branch lep_tightId_branch does not exist!\n");
				exit(1);
			}
			lep_tightId_isLoaded = true;
		}
		return *lep_tightId_;
	}
	vector<float> &lep_relIso03()
	{
		if (not lep_relIso03_isLoaded) {
			if (lep_relIso03_branch != 0) {
				lep_relIso03_branch->GetEntry(index);
			} else { 
				printf("branch lep_relIso03_branch does not exist!\n");
				exit(1);
			}
			lep_relIso03_isLoaded = true;
		}
		return *lep_relIso03_;
	}
	vector<float> &lep_relIso04()
	{
		if (not lep_relIso04_isLoaded) {
			if (lep_relIso04_branch != 0) {
				lep_relIso04_branch->GetEntry(index);
			} else { 
				printf("branch lep_relIso04_branch does not exist!\n");
				exit(1);
			}
			lep_relIso04_isLoaded = true;
		}
		return *lep_relIso04_;
	}
	vector<int> &lep_mcMatchId()
	{
		if (not lep_mcMatchId_isLoaded) {
			if (lep_mcMatchId_branch != 0) {
				lep_mcMatchId_branch->GetEntry(index);
			} else { 
				printf("branch lep_mcMatchId_branch does not exist!\n");
				exit(1);
			}
			lep_mcMatchId_isLoaded = true;
		}
		return *lep_mcMatchId_;
	}
	vector<int> &lep_lostHits()
	{
		if (not lep_lostHits_isLoaded) {
			if (lep_lostHits_branch != 0) {
				lep_lostHits_branch->GetEntry(index);
			} else { 
				printf("branch lep_lostHits_branch does not exist!\n");
				exit(1);
			}
			lep_lostHits_isLoaded = true;
		}
		return *lep_lostHits_;
	}
	vector<int> &lep_convVeto()
	{
		if (not lep_convVeto_isLoaded) {
			if (lep_convVeto_branch != 0) {
				lep_convVeto_branch->GetEntry(index);
			} else { 
				printf("branch lep_convVeto_branch does not exist!\n");
				exit(1);
			}
			lep_convVeto_isLoaded = true;
		}
		return *lep_convVeto_;
	}
	vector<int> &lep_tightCharge()
	{
		if (not lep_tightCharge_isLoaded) {
			if (lep_tightCharge_branch != 0) {
				lep_tightCharge_branch->GetEntry(index);
			} else { 
				printf("branch lep_tightCharge_branch does not exist!\n");
				exit(1);
			}
			lep_tightCharge_isLoaded = true;
		}
		return *lep_tightCharge_;
	}
	int &ntau()
	{
		if (not ntau_isLoaded) {
			if (ntau_branch != 0) {
				ntau_branch->GetEntry(index);
			} else { 
				printf("branch ntau_branch does not exist!\n");
				exit(1);
			}
			ntau_isLoaded = true;
		}
		return ntau_;
	}
	vector<float> &tau_pt()
	{
		if (not tau_pt_isLoaded) {
			if (tau_pt_branch != 0) {
				tau_pt_branch->GetEntry(index);
			} else { 
				printf("branch tau_pt_branch does not exist!\n");
				exit(1);
			}
			tau_pt_isLoaded = true;
		}
		return *tau_pt_;
	}
	vector<float> &tau_eta()
	{
		if (not tau_eta_isLoaded) {
			if (tau_eta_branch != 0) {
				tau_eta_branch->GetEntry(index);
			} else { 
				printf("branch tau_eta_branch does not exist!\n");
				exit(1);
			}
			tau_eta_isLoaded = true;
		}
		return *tau_eta_;
	}
	vector<float> &tau_phi()
	{
		if (not tau_phi_isLoaded) {
			if (tau_phi_branch != 0) {
				tau_phi_branch->GetEntry(index);
			} else { 
				printf("branch tau_phi_branch does not exist!\n");
				exit(1);
			}
			tau_phi_isLoaded = true;
		}
		return *tau_phi_;
	}
	vector<float> &tau_mass()
	{
		if (not tau_mass_isLoaded) {
			if (tau_mass_branch != 0) {
				tau_mass_branch->GetEntry(index);
			} else { 
				printf("branch tau_mass_branch does not exist!\n");
				exit(1);
			}
			tau_mass_isLoaded = true;
		}
		return *tau_mass_;
	}
	vector<int> &tau_charge()
	{
		if (not tau_charge_isLoaded) {
			if (tau_charge_branch != 0) {
				tau_charge_branch->GetEntry(index);
			} else { 
				printf("branch tau_charge_branch does not exist!\n");
				exit(1);
			}
			tau_charge_isLoaded = true;
		}
		return *tau_charge_;
	}
	vector<float> &tau_dxy()
	{
		if (not tau_dxy_isLoaded) {
			if (tau_dxy_branch != 0) {
				tau_dxy_branch->GetEntry(index);
			} else { 
				printf("branch tau_dxy_branch does not exist!\n");
				exit(1);
			}
			tau_dxy_isLoaded = true;
		}
		return *tau_dxy_;
	}
	vector<float> &tau_dz()
	{
		if (not tau_dz_isLoaded) {
			if (tau_dz_branch != 0) {
				tau_dz_branch->GetEntry(index);
			} else { 
				printf("branch tau_dz_branch does not exist!\n");
				exit(1);
			}
			tau_dz_isLoaded = true;
		}
		return *tau_dz_;
	}
	vector<int> &tau_idCI3hit()
	{
		if (not tau_idCI3hit_isLoaded) {
			if (tau_idCI3hit_branch != 0) {
				tau_idCI3hit_branch->GetEntry(index);
			} else { 
				printf("branch tau_idCI3hit_branch does not exist!\n");
				exit(1);
			}
			tau_idCI3hit_isLoaded = true;
		}
		return *tau_idCI3hit_;
	}
	vector<float> &tau_isoCI3hit()
	{
		if (not tau_isoCI3hit_isLoaded) {
			if (tau_isoCI3hit_branch != 0) {
				tau_isoCI3hit_branch->GetEntry(index);
			} else { 
				printf("branch tau_isoCI3hit_branch does not exist!\n");
				exit(1);
			}
			tau_isoCI3hit_isLoaded = true;
		}
		return *tau_isoCI3hit_;
	}
	int &ngamma()
	{
		if (not ngamma_isLoaded) {
			if (ngamma_branch != 0) {
				ngamma_branch->GetEntry(index);
			} else { 
				printf("branch ngamma_branch does not exist!\n");
				exit(1);
			}
			ngamma_isLoaded = true;
		}
		return ngamma_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gamma_p4()
	{
		if (not gamma_p4_isLoaded) {
			if (gamma_p4_branch != 0) {
				gamma_p4_branch->GetEntry(index);
			} else { 
				printf("branch gamma_p4_branch does not exist!\n");
				exit(1);
			}
			gamma_p4_isLoaded = true;
		}
		return *gamma_p4_;
	}
	vector<float> &gamma_pt()
	{
		if (not gamma_pt_isLoaded) {
			if (gamma_pt_branch != 0) {
				gamma_pt_branch->GetEntry(index);
			} else { 
				printf("branch gamma_pt_branch does not exist!\n");
				exit(1);
			}
			gamma_pt_isLoaded = true;
		}
		return *gamma_pt_;
	}
	vector<float> &gamma_eta()
	{
		if (not gamma_eta_isLoaded) {
			if (gamma_eta_branch != 0) {
				gamma_eta_branch->GetEntry(index);
			} else { 
				printf("branch gamma_eta_branch does not exist!\n");
				exit(1);
			}
			gamma_eta_isLoaded = true;
		}
		return *gamma_eta_;
	}
	vector<float> &gamma_phi()
	{
		if (not gamma_phi_isLoaded) {
			if (gamma_phi_branch != 0) {
				gamma_phi_branch->GetEntry(index);
			} else { 
				printf("branch gamma_phi_branch does not exist!\n");
				exit(1);
			}
			gamma_phi_isLoaded = true;
		}
		return *gamma_phi_;
	}
	vector<float> &gamma_mass()
	{
		if (not gamma_mass_isLoaded) {
			if (gamma_mass_branch != 0) {
				gamma_mass_branch->GetEntry(index);
			} else { 
				printf("branch gamma_mass_branch does not exist!\n");
				exit(1);
			}
			gamma_mass_isLoaded = true;
		}
		return *gamma_mass_;
	}
	vector<int> &gamma_mcMatchId()
	{
		if (not gamma_mcMatchId_isLoaded) {
			if (gamma_mcMatchId_branch != 0) {
				gamma_mcMatchId_branch->GetEntry(index);
			} else { 
				printf("branch gamma_mcMatchId_branch does not exist!\n");
				exit(1);
			}
			gamma_mcMatchId_isLoaded = true;
		}
		return *gamma_mcMatchId_;
	}
	vector<float> &gamma_genIso()
	{
		if (not gamma_genIso_isLoaded) {
			if (gamma_genIso_branch != 0) {
				gamma_genIso_branch->GetEntry(index);
			} else { 
				printf("branch gamma_genIso_branch does not exist!\n");
				exit(1);
			}
			gamma_genIso_isLoaded = true;
		}
		return *gamma_genIso_;
	}
	vector<float> &gamma_chHadIso()
	{
		if (not gamma_chHadIso_isLoaded) {
			if (gamma_chHadIso_branch != 0) {
				gamma_chHadIso_branch->GetEntry(index);
			} else { 
				printf("branch gamma_chHadIso_branch does not exist!\n");
				exit(1);
			}
			gamma_chHadIso_isLoaded = true;
		}
		return *gamma_chHadIso_;
	}
	vector<float> &gamma_neuHadIso()
	{
		if (not gamma_neuHadIso_isLoaded) {
			if (gamma_neuHadIso_branch != 0) {
				gamma_neuHadIso_branch->GetEntry(index);
			} else { 
				printf("branch gamma_neuHadIso_branch does not exist!\n");
				exit(1);
			}
			gamma_neuHadIso_isLoaded = true;
		}
		return *gamma_neuHadIso_;
	}
	vector<float> &gamma_phIso()
	{
		if (not gamma_phIso_isLoaded) {
			if (gamma_phIso_branch != 0) {
				gamma_phIso_branch->GetEntry(index);
			} else { 
				printf("branch gamma_phIso_branch does not exist!\n");
				exit(1);
			}
			gamma_phIso_isLoaded = true;
		}
		return *gamma_phIso_;
	}
	vector<float> &gamma_sigmaIetaIeta()
	{
		if (not gamma_sigmaIetaIeta_isLoaded) {
			if (gamma_sigmaIetaIeta_branch != 0) {
				gamma_sigmaIetaIeta_branch->GetEntry(index);
			} else { 
				printf("branch gamma_sigmaIetaIeta_branch does not exist!\n");
				exit(1);
			}
			gamma_sigmaIetaIeta_isLoaded = true;
		}
		return *gamma_sigmaIetaIeta_;
	}
	vector<float> &gamma_r9()
	{
		if (not gamma_r9_isLoaded) {
			if (gamma_r9_branch != 0) {
				gamma_r9_branch->GetEntry(index);
			} else { 
				printf("branch gamma_r9_branch does not exist!\n");
				exit(1);
			}
			gamma_r9_isLoaded = true;
		}
		return *gamma_r9_;
	}
	vector<float> &gamma_hOverE()
	{
		if (not gamma_hOverE_isLoaded) {
			if (gamma_hOverE_branch != 0) {
				gamma_hOverE_branch->GetEntry(index);
			} else { 
				printf("branch gamma_hOverE_branch does not exist!\n");
				exit(1);
			}
			gamma_hOverE_isLoaded = true;
		}
		return *gamma_hOverE_;
	}
	vector<int> &gamma_idCutBased()
	{
		if (not gamma_idCutBased_isLoaded) {
			if (gamma_idCutBased_branch != 0) {
				gamma_idCutBased_branch->GetEntry(index);
			} else { 
				printf("branch gamma_idCutBased_branch does not exist!\n");
				exit(1);
			}
			gamma_idCutBased_isLoaded = true;
		}
		return *gamma_idCutBased_;
	}
	int &ngenPart()
	{
		if (not ngenPart_isLoaded) {
			if (ngenPart_branch != 0) {
				ngenPart_branch->GetEntry(index);
			} else { 
				printf("branch ngenPart_branch does not exist!\n");
				exit(1);
			}
			ngenPart_isLoaded = true;
		}
		return ngenPart_;
	}
	vector<float> &genPart_pt()
	{
		if (not genPart_pt_isLoaded) {
			if (genPart_pt_branch != 0) {
				genPart_pt_branch->GetEntry(index);
			} else { 
				printf("branch genPart_pt_branch does not exist!\n");
				exit(1);
			}
			genPart_pt_isLoaded = true;
		}
		return *genPart_pt_;
	}
	vector<float> &genPart_eta()
	{
		if (not genPart_eta_isLoaded) {
			if (genPart_eta_branch != 0) {
				genPart_eta_branch->GetEntry(index);
			} else { 
				printf("branch genPart_eta_branch does not exist!\n");
				exit(1);
			}
			genPart_eta_isLoaded = true;
		}
		return *genPart_eta_;
	}
	vector<float> &genPart_phi()
	{
		if (not genPart_phi_isLoaded) {
			if (genPart_phi_branch != 0) {
				genPart_phi_branch->GetEntry(index);
			} else { 
				printf("branch genPart_phi_branch does not exist!\n");
				exit(1);
			}
			genPart_phi_isLoaded = true;
		}
		return *genPart_phi_;
	}
	vector<float> &genPart_mass()
	{
		if (not genPart_mass_isLoaded) {
			if (genPart_mass_branch != 0) {
				genPart_mass_branch->GetEntry(index);
			} else { 
				printf("branch genPart_mass_branch does not exist!\n");
				exit(1);
			}
			genPart_mass_isLoaded = true;
		}
		return *genPart_mass_;
	}
	vector<int> &genPart_pdgId()
	{
		if (not genPart_pdgId_isLoaded) {
			if (genPart_pdgId_branch != 0) {
				genPart_pdgId_branch->GetEntry(index);
			} else { 
				printf("branch genPart_pdgId_branch does not exist!\n");
				exit(1);
			}
			genPart_pdgId_isLoaded = true;
		}
		return *genPart_pdgId_;
	}
	vector<int> &genPart_status()
	{
		if (not genPart_status_isLoaded) {
			if (genPart_status_branch != 0) {
				genPart_status_branch->GetEntry(index);
			} else { 
				printf("branch genPart_status_branch does not exist!\n");
				exit(1);
			}
			genPart_status_isLoaded = true;
		}
		return *genPart_status_;
	}
	vector<float> &genPart_charge()
	{
		if (not genPart_charge_isLoaded) {
			if (genPart_charge_branch != 0) {
				genPart_charge_branch->GetEntry(index);
			} else { 
				printf("branch genPart_charge_branch does not exist!\n");
				exit(1);
			}
			genPart_charge_isLoaded = true;
		}
		return *genPart_charge_;
	}
	vector<int> &genPart_motherId()
	{
		if (not genPart_motherId_isLoaded) {
			if (genPart_motherId_branch != 0) {
				genPart_motherId_branch->GetEntry(index);
			} else { 
				printf("branch genPart_motherId_branch does not exist!\n");
				exit(1);
			}
			genPart_motherId_isLoaded = true;
		}
		return *genPart_motherId_;
	}
	vector<int> &genPart_grandmaId()
	{
		if (not genPart_grandmaId_isLoaded) {
			if (genPart_grandmaId_branch != 0) {
				genPart_grandmaId_branch->GetEntry(index);
			} else { 
				printf("branch genPart_grandmaId_branch does not exist!\n");
				exit(1);
			}
			genPart_grandmaId_isLoaded = true;
		}
		return *genPart_grandmaId_;
	}
	int &gamma_nJet40()
	{
		if (not gamma_nJet40_isLoaded) {
			if (gamma_nJet40_branch != 0) {
				gamma_nJet40_branch->GetEntry(index);
			} else { 
				printf("branch gamma_nJet40_branch does not exist!\n");
				exit(1);
			}
			gamma_nJet40_isLoaded = true;
		}
		return gamma_nJet40_;
	}
	int &gamma_nBJet40()
	{
		if (not gamma_nBJet40_isLoaded) {
			if (gamma_nBJet40_branch != 0) {
				gamma_nBJet40_branch->GetEntry(index);
			} else { 
				printf("branch gamma_nBJet40_branch does not exist!\n");
				exit(1);
			}
			gamma_nBJet40_isLoaded = true;
		}
		return gamma_nBJet40_;
	}
	int &ngenLep()
	{
		if (not ngenLep_isLoaded) {
			if (ngenLep_branch != 0) {
				ngenLep_branch->GetEntry(index);
			} else { 
				printf("branch ngenLep_branch does not exist!\n");
				exit(1);
			}
			ngenLep_isLoaded = true;
		}
		return ngenLep_;
	}
	vector<float> &genLep_pt()
	{
		if (not genLep_pt_isLoaded) {
			if (genLep_pt_branch != 0) {
				genLep_pt_branch->GetEntry(index);
			} else { 
				printf("branch genLep_pt_branch does not exist!\n");
				exit(1);
			}
			genLep_pt_isLoaded = true;
		}
		return *genLep_pt_;
	}
	vector<float> &genLep_eta()
	{
		if (not genLep_eta_isLoaded) {
			if (genLep_eta_branch != 0) {
				genLep_eta_branch->GetEntry(index);
			} else { 
				printf("branch genLep_eta_branch does not exist!\n");
				exit(1);
			}
			genLep_eta_isLoaded = true;
		}
		return *genLep_eta_;
	}
	vector<float> &genLep_phi()
	{
		if (not genLep_phi_isLoaded) {
			if (genLep_phi_branch != 0) {
				genLep_phi_branch->GetEntry(index);
			} else { 
				printf("branch genLep_phi_branch does not exist!\n");
				exit(1);
			}
			genLep_phi_isLoaded = true;
		}
		return *genLep_phi_;
	}
	vector<float> &genLep_mass()
	{
		if (not genLep_mass_isLoaded) {
			if (genLep_mass_branch != 0) {
				genLep_mass_branch->GetEntry(index);
			} else { 
				printf("branch genLep_mass_branch does not exist!\n");
				exit(1);
			}
			genLep_mass_isLoaded = true;
		}
		return *genLep_mass_;
	}
	vector<int> &genLep_pdgId()
	{
		if (not genLep_pdgId_isLoaded) {
			if (genLep_pdgId_branch != 0) {
				genLep_pdgId_branch->GetEntry(index);
			} else { 
				printf("branch genLep_pdgId_branch does not exist!\n");
				exit(1);
			}
			genLep_pdgId_isLoaded = true;
		}
		return *genLep_pdgId_;
	}
	vector<int> &genLep_status()
	{
		if (not genLep_status_isLoaded) {
			if (genLep_status_branch != 0) {
				genLep_status_branch->GetEntry(index);
			} else { 
				printf("branch genLep_status_branch does not exist!\n");
				exit(1);
			}
			genLep_status_isLoaded = true;
		}
		return *genLep_status_;
	}
	vector<float> &genLep_charge()
	{
		if (not genLep_charge_isLoaded) {
			if (genLep_charge_branch != 0) {
				genLep_charge_branch->GetEntry(index);
			} else { 
				printf("branch genLep_charge_branch does not exist!\n");
				exit(1);
			}
			genLep_charge_isLoaded = true;
		}
		return *genLep_charge_;
	}
	vector<int> &genLep_sourceId()
	{
		if (not genLep_sourceId_isLoaded) {
			if (genLep_sourceId_branch != 0) {
				genLep_sourceId_branch->GetEntry(index);
			} else { 
				printf("branch genLep_sourceId_branch does not exist!\n");
				exit(1);
			}
			genLep_sourceId_isLoaded = true;
		}
		return *genLep_sourceId_;
	}
	int &ngenTau()
	{
		if (not ngenTau_isLoaded) {
			if (ngenTau_branch != 0) {
				ngenTau_branch->GetEntry(index);
			} else { 
				printf("branch ngenTau_branch does not exist!\n");
				exit(1);
			}
			ngenTau_isLoaded = true;
		}
		return ngenTau_;
	}
	vector<float> &genTau_pt()
	{
		if (not genTau_pt_isLoaded) {
			if (genTau_pt_branch != 0) {
				genTau_pt_branch->GetEntry(index);
			} else { 
				printf("branch genTau_pt_branch does not exist!\n");
				exit(1);
			}
			genTau_pt_isLoaded = true;
		}
		return *genTau_pt_;
	}
	vector<float> &genTau_eta()
	{
		if (not genTau_eta_isLoaded) {
			if (genTau_eta_branch != 0) {
				genTau_eta_branch->GetEntry(index);
			} else { 
				printf("branch genTau_eta_branch does not exist!\n");
				exit(1);
			}
			genTau_eta_isLoaded = true;
		}
		return *genTau_eta_;
	}
	vector<float> &genTau_phi()
	{
		if (not genTau_phi_isLoaded) {
			if (genTau_phi_branch != 0) {
				genTau_phi_branch->GetEntry(index);
			} else { 
				printf("branch genTau_phi_branch does not exist!\n");
				exit(1);
			}
			genTau_phi_isLoaded = true;
		}
		return *genTau_phi_;
	}
	vector<float> &genTau_mass()
	{
		if (not genTau_mass_isLoaded) {
			if (genTau_mass_branch != 0) {
				genTau_mass_branch->GetEntry(index);
			} else { 
				printf("branch genTau_mass_branch does not exist!\n");
				exit(1);
			}
			genTau_mass_isLoaded = true;
		}
		return *genTau_mass_;
	}
	vector<int> &genTau_pdgId()
	{
		if (not genTau_pdgId_isLoaded) {
			if (genTau_pdgId_branch != 0) {
				genTau_pdgId_branch->GetEntry(index);
			} else { 
				printf("branch genTau_pdgId_branch does not exist!\n");
				exit(1);
			}
			genTau_pdgId_isLoaded = true;
		}
		return *genTau_pdgId_;
	}
	vector<int> &genTau_status()
	{
		if (not genTau_status_isLoaded) {
			if (genTau_status_branch != 0) {
				genTau_status_branch->GetEntry(index);
			} else { 
				printf("branch genTau_status_branch does not exist!\n");
				exit(1);
			}
			genTau_status_isLoaded = true;
		}
		return *genTau_status_;
	}
	vector<float> &genTau_charge()
	{
		if (not genTau_charge_isLoaded) {
			if (genTau_charge_branch != 0) {
				genTau_charge_branch->GetEntry(index);
			} else { 
				printf("branch genTau_charge_branch does not exist!\n");
				exit(1);
			}
			genTau_charge_isLoaded = true;
		}
		return *genTau_charge_;
	}
	vector<int> &genTau_sourceId()
	{
		if (not genTau_sourceId_isLoaded) {
			if (genTau_sourceId_branch != 0) {
				genTau_sourceId_branch->GetEntry(index);
			} else { 
				printf("branch genTau_sourceId_branch does not exist!\n");
				exit(1);
			}
			genTau_sourceId_isLoaded = true;
		}
		return *genTau_sourceId_;
	}
	int &ngenLepFromTau()
	{
		if (not ngenLepFromTau_isLoaded) {
			if (ngenLepFromTau_branch != 0) {
				ngenLepFromTau_branch->GetEntry(index);
			} else { 
				printf("branch ngenLepFromTau_branch does not exist!\n");
				exit(1);
			}
			ngenLepFromTau_isLoaded = true;
		}
		return ngenLepFromTau_;
	}
	vector<float> &genLepFromTau_pt()
	{
		if (not genLepFromTau_pt_isLoaded) {
			if (genLepFromTau_pt_branch != 0) {
				genLepFromTau_pt_branch->GetEntry(index);
			} else { 
				printf("branch genLepFromTau_pt_branch does not exist!\n");
				exit(1);
			}
			genLepFromTau_pt_isLoaded = true;
		}
		return *genLepFromTau_pt_;
	}
	vector<float> &genLepFromTau_eta()
	{
		if (not genLepFromTau_eta_isLoaded) {
			if (genLepFromTau_eta_branch != 0) {
				genLepFromTau_eta_branch->GetEntry(index);
			} else { 
				printf("branch genLepFromTau_eta_branch does not exist!\n");
				exit(1);
			}
			genLepFromTau_eta_isLoaded = true;
		}
		return *genLepFromTau_eta_;
	}
	vector<float> &genLepFromTau_phi()
	{
		if (not genLepFromTau_phi_isLoaded) {
			if (genLepFromTau_phi_branch != 0) {
				genLepFromTau_phi_branch->GetEntry(index);
			} else { 
				printf("branch genLepFromTau_phi_branch does not exist!\n");
				exit(1);
			}
			genLepFromTau_phi_isLoaded = true;
		}
		return *genLepFromTau_phi_;
	}
	vector<float> &genLepFromTau_mass()
	{
		if (not genLepFromTau_mass_isLoaded) {
			if (genLepFromTau_mass_branch != 0) {
				genLepFromTau_mass_branch->GetEntry(index);
			} else { 
				printf("branch genLepFromTau_mass_branch does not exist!\n");
				exit(1);
			}
			genLepFromTau_mass_isLoaded = true;
		}
		return *genLepFromTau_mass_;
	}
	vector<int> &genLepFromTau_pdgId()
	{
		if (not genLepFromTau_pdgId_isLoaded) {
			if (genLepFromTau_pdgId_branch != 0) {
				genLepFromTau_pdgId_branch->GetEntry(index);
			} else { 
				printf("branch genLepFromTau_pdgId_branch does not exist!\n");
				exit(1);
			}
			genLepFromTau_pdgId_isLoaded = true;
		}
		return *genLepFromTau_pdgId_;
	}
	vector<int> &genLepFromTau_status()
	{
		if (not genLepFromTau_status_isLoaded) {
			if (genLepFromTau_status_branch != 0) {
				genLepFromTau_status_branch->GetEntry(index);
			} else { 
				printf("branch genLepFromTau_status_branch does not exist!\n");
				exit(1);
			}
			genLepFromTau_status_isLoaded = true;
		}
		return *genLepFromTau_status_;
	}
	vector<float> &genLepFromTau_charge()
	{
		if (not genLepFromTau_charge_isLoaded) {
			if (genLepFromTau_charge_branch != 0) {
				genLepFromTau_charge_branch->GetEntry(index);
			} else { 
				printf("branch genLepFromTau_charge_branch does not exist!\n");
				exit(1);
			}
			genLepFromTau_charge_isLoaded = true;
		}
		return *genLepFromTau_charge_;
	}
	vector<int> &genLepFromTau_sourceId()
	{
		if (not genLepFromTau_sourceId_isLoaded) {
			if (genLepFromTau_sourceId_branch != 0) {
				genLepFromTau_sourceId_branch->GetEntry(index);
			} else { 
				printf("branch genLepFromTau_sourceId_branch does not exist!\n");
				exit(1);
			}
			genLepFromTau_sourceId_isLoaded = true;
		}
		return *genLepFromTau_sourceId_;
	}
	int &njet()
	{
		if (not njet_isLoaded) {
			if (njet_branch != 0) {
				njet_branch->GetEntry(index);
			} else { 
				printf("branch njet_branch does not exist!\n");
				exit(1);
			}
			njet_isLoaded = true;
		}
		return njet_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet_p4()
	{
		if (not jet_p4_isLoaded) {
			if (jet_p4_branch != 0) {
				jet_p4_branch->GetEntry(index);
			} else { 
				printf("branch jet_p4_branch does not exist!\n");
				exit(1);
			}
			jet_p4_isLoaded = true;
		}
		return *jet_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet30_p4()
	{
		if (not jet30_p4_isLoaded) {
			if (jet30_p4_branch != 0) {
				jet30_p4_branch->GetEntry(index);
			} else { 
				printf("branch jet30_p4_branch does not exist!\n");
				exit(1);
			}
			jet30_p4_isLoaded = true;
		}
		return *jet30_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet40_p4()
	{
		if (not jet40_p4_isLoaded) {
			if (jet40_p4_branch != 0) {
				jet40_p4_branch->GetEntry(index);
			} else { 
				printf("branch jet40_p4_branch does not exist!\n");
				exit(1);
			}
			jet40_p4_isLoaded = true;
		}
		return *jet40_p4_;
	}
	vector<float> &jet_pt()
	{
		if (not jet_pt_isLoaded) {
			if (jet_pt_branch != 0) {
				jet_pt_branch->GetEntry(index);
			} else { 
				printf("branch jet_pt_branch does not exist!\n");
				exit(1);
			}
			jet_pt_isLoaded = true;
		}
		return *jet_pt_;
	}
	vector<float> &jet_eta()
	{
		if (not jet_eta_isLoaded) {
			if (jet_eta_branch != 0) {
				jet_eta_branch->GetEntry(index);
			} else { 
				printf("branch jet_eta_branch does not exist!\n");
				exit(1);
			}
			jet_eta_isLoaded = true;
		}
		return *jet_eta_;
	}
	vector<float> &jet_phi()
	{
		if (not jet_phi_isLoaded) {
			if (jet_phi_branch != 0) {
				jet_phi_branch->GetEntry(index);
			} else { 
				printf("branch jet_phi_branch does not exist!\n");
				exit(1);
			}
			jet_phi_isLoaded = true;
		}
		return *jet_phi_;
	}
	vector<float> &jet_mass()
	{
		if (not jet_mass_isLoaded) {
			if (jet_mass_branch != 0) {
				jet_mass_branch->GetEntry(index);
			} else { 
				printf("branch jet_mass_branch does not exist!\n");
				exit(1);
			}
			jet_mass_isLoaded = true;
		}
		return *jet_mass_;
	}
	vector<float> &jet_btagCSV()
	{
		if (not jet_btagCSV_isLoaded) {
			if (jet_btagCSV_branch != 0) {
				jet_btagCSV_branch->GetEntry(index);
			} else { 
				printf("branch jet_btagCSV_branch does not exist!\n");
				exit(1);
			}
			jet_btagCSV_isLoaded = true;
		}
		return *jet_btagCSV_;
	}
	vector<float> &jet_rawPt()
	{
		if (not jet_rawPt_isLoaded) {
			if (jet_rawPt_branch != 0) {
				jet_rawPt_branch->GetEntry(index);
			} else { 
				printf("branch jet_rawPt_branch does not exist!\n");
				exit(1);
			}
			jet_rawPt_isLoaded = true;
		}
		return *jet_rawPt_;
	}
	vector<float> &jet_mcPt()
	{
		if (not jet_mcPt_isLoaded) {
			if (jet_mcPt_branch != 0) {
				jet_mcPt_branch->GetEntry(index);
			} else { 
				printf("branch jet_mcPt_branch does not exist!\n");
				exit(1);
			}
			jet_mcPt_isLoaded = true;
		}
		return *jet_mcPt_;
	}
	vector<int> &jet_mcFlavour()
	{
		if (not jet_mcFlavour_isLoaded) {
			if (jet_mcFlavour_branch != 0) {
				jet_mcFlavour_branch->GetEntry(index);
			} else { 
				printf("branch jet_mcFlavour_branch does not exist!\n");
				exit(1);
			}
			jet_mcFlavour_isLoaded = true;
		}
		return *jet_mcFlavour_;
	}
	vector<float> &jet_quarkGluonID()
	{
		if (not jet_quarkGluonID_isLoaded) {
			if (jet_quarkGluonID_branch != 0) {
				jet_quarkGluonID_branch->GetEntry(index);
			} else { 
				printf("branch jet_quarkGluonID_branch does not exist!\n");
				exit(1);
			}
			jet_quarkGluonID_isLoaded = true;
		}
		return *jet_quarkGluonID_;
	}
	vector<float> &jet_area()
	{
		if (not jet_area_isLoaded) {
			if (jet_area_branch != 0) {
				jet_area_branch->GetEntry(index);
			} else { 
				printf("branch jet_area_branch does not exist!\n");
				exit(1);
			}
			jet_area_isLoaded = true;
		}
		return *jet_area_;
	}
	vector<int> &jet_id()
	{
		if (not jet_id_isLoaded) {
			if (jet_id_branch != 0) {
				jet_id_branch->GetEntry(index);
			} else { 
				printf("branch jet_id_branch does not exist!\n");
				exit(1);
			}
			jet_id_isLoaded = true;
		}
		return *jet_id_;
	}
	vector<int> &jet_puId()
	{
		if (not jet_puId_isLoaded) {
			if (jet_puId_branch != 0) {
				jet_puId_branch->GetEntry(index);
			} else { 
				printf("branch jet_puId_branch does not exist!\n");
				exit(1);
			}
			jet_puId_isLoaded = true;
		}
		return *jet_puId_;
	}

  static void progress( int nEventsTotal, int nEventsChain ){
    int period = 1000;
    if(nEventsTotal%1000 == 0) {
      // xterm magic from L. Vacavant and A. Cerri
      if (isatty(1)) {
        if( ( nEventsChain - nEventsTotal ) > period ){
          float frac = (float)nEventsTotal/(nEventsChain*0.01);
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", frac);
          fflush(stdout);
        }
        else {
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
                 "\033[0m\033[32m <---\033[0m\015", 100.);
          cout << endl;
        }
      }
    }
  }
  
};

#ifndef __CINT__
extern ZMET zmet;
#endif

namespace ZMet {
	int &run();
	int &lumi();
	int &evt();
	int &isData();
	float &evt_scale1fb();
	float &evt_xsec();
	float &evt_kfactor();
	float &evt_filter();
	int &evt_nEvts();
	int &evt_id();
	float &puWeight();
	int &nVert();
	int &nTrueInt();
	float &rho();
	float &rho25();
	int &njets();
	int &njets40();
	float &ht();
	float &ht40();
	float &mt2();
	float &mt2j();
	float &mt2j40();
	int &nJet40();
	int &nBJet40();
	int &nMuons10();
	int &nElectrons10();
	int &nTaus20();
	int &nGammas20();
	float &met_pt();
	float &met_phi();
	float &met_rawPt();
	float &met_rawPhi();
	float &met_caloPt();
	float &met_caloPhi();
	float &met_genPt();
	float &met_genPhi();
	int &Flag_EcalDeadCellTriggerPrimitiveFilter();
	int &Flag_trkPOG_manystripclus53X();
	int &Flag_ecalLaserCorrFilter();
	int &Flag_trkPOG_toomanystripclus53X();
	int &Flag_hcalLaserEventFilter();
	int &Flag_trkPOG_logErrorTooManyClusters();
	int &Flag_trkPOGFilters();
	int &Flag_trackingFailureFilter();
	int &Flag_CSCTightHaloFilter();
	int &Flag_HBHENoiseFilter();
	int &Flag_goodVertices();
	int &Flag_eeBadScFilter();
	int &Flag_METFilters();
	int &HLT_HT900();
	int &HLT_MET170();
	int &HLT_ht350met120();
	int &HLT_SingleMu();
	int &HLT_DoubleEl();
	int &HLT_MuEG();
	int &HLT_DoubleMu();
	int &HLT_Photons();
	float &dilmass();
	float &dilpt();
	int &diltype();
	int &nlep();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &lep_p4();
	vector<float> &lep_pt();
	vector<float> &lep_eta();
	vector<float> &lep_phi();
	vector<float> &lep_mass();
	vector<int> &lep_charge();
	vector<int> &lep_pdgId();
	vector<float> &lep_dxy();
	vector<float> &lep_dz();
	vector<int> &lep_tightId();
	vector<float> &lep_relIso03();
	vector<float> &lep_relIso04();
	vector<int> &lep_mcMatchId();
	vector<int> &lep_lostHits();
	vector<int> &lep_convVeto();
	vector<int> &lep_tightCharge();
	int &ntau();
	vector<float> &tau_pt();
	vector<float> &tau_eta();
	vector<float> &tau_phi();
	vector<float> &tau_mass();
	vector<int> &tau_charge();
	vector<float> &tau_dxy();
	vector<float> &tau_dz();
	vector<int> &tau_idCI3hit();
	vector<float> &tau_isoCI3hit();
	int &ngamma();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gamma_p4();
	vector<float> &gamma_pt();
	vector<float> &gamma_eta();
	vector<float> &gamma_phi();
	vector<float> &gamma_mass();
	vector<int> &gamma_mcMatchId();
	vector<float> &gamma_genIso();
	vector<float> &gamma_chHadIso();
	vector<float> &gamma_neuHadIso();
	vector<float> &gamma_phIso();
	vector<float> &gamma_sigmaIetaIeta();
	vector<float> &gamma_r9();
	vector<float> &gamma_hOverE();
	vector<int> &gamma_idCutBased();
	int &ngenPart();
	vector<float> &genPart_pt();
	vector<float> &genPart_eta();
	vector<float> &genPart_phi();
	vector<float> &genPart_mass();
	vector<int> &genPart_pdgId();
	vector<int> &genPart_status();
	vector<float> &genPart_charge();
	vector<int> &genPart_motherId();
	vector<int> &genPart_grandmaId();
	int &gamma_nJet40();
	int &gamma_nBJet40();
	int &ngenLep();
	vector<float> &genLep_pt();
	vector<float> &genLep_eta();
	vector<float> &genLep_phi();
	vector<float> &genLep_mass();
	vector<int> &genLep_pdgId();
	vector<int> &genLep_status();
	vector<float> &genLep_charge();
	vector<int> &genLep_sourceId();
	int &ngenTau();
	vector<float> &genTau_pt();
	vector<float> &genTau_eta();
	vector<float> &genTau_phi();
	vector<float> &genTau_mass();
	vector<int> &genTau_pdgId();
	vector<int> &genTau_status();
	vector<float> &genTau_charge();
	vector<int> &genTau_sourceId();
	int &ngenLepFromTau();
	vector<float> &genLepFromTau_pt();
	vector<float> &genLepFromTau_eta();
	vector<float> &genLepFromTau_phi();
	vector<float> &genLepFromTau_mass();
	vector<int> &genLepFromTau_pdgId();
	vector<int> &genLepFromTau_status();
	vector<float> &genLepFromTau_charge();
	vector<int> &genLepFromTau_sourceId();
	int &njet();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet30_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet40_p4();
	vector<float> &jet_pt();
	vector<float> &jet_eta();
	vector<float> &jet_phi();
	vector<float> &jet_mass();
	vector<float> &jet_btagCSV();
	vector<float> &jet_rawPt();
	vector<float> &jet_mcPt();
	vector<int> &jet_mcFlavour();
	vector<float> &jet_quarkGluonID();
	vector<float> &jet_area();
	vector<int> &jet_id();
	vector<int> &jet_puId();
}
#endif
