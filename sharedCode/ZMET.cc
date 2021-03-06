#include "ZMET.h"
ZMET zmet;
namespace ZMet {
	int &run() { return zmet.run(); }
	int &lumi() { return zmet.lumi(); }
	int &evt() { return zmet.evt(); }
	int &isData() { return zmet.isData(); }
	float &evt_scale1fb() { return zmet.evt_scale1fb(); }
	float &evt_xsec() { return zmet.evt_xsec(); }
	float &evt_kfactor() { return zmet.evt_kfactor(); }
	float &evt_filter() { return zmet.evt_filter(); }
	int &evt_nEvts() { return zmet.evt_nEvts(); }
	int &evt_id() { return zmet.evt_id(); }
	float &puWeight() { return zmet.puWeight(); }
	int &nVert() { return zmet.nVert(); }
	int &nTrueInt() { return zmet.nTrueInt(); }
	float &rho() { return zmet.rho(); }
	float &rho25() { return zmet.rho25(); }
	int &njets() { return zmet.njets(); }
	int &njets40() { return zmet.njets40(); }
	float &ht() { return zmet.ht(); }
	float &ht40() { return zmet.ht40(); }
	float &mt2() { return zmet.mt2(); }
	float &mt2j() { return zmet.mt2j(); }
	float &mt2j40() { return zmet.mt2j40(); }
	int &nJet40() { return zmet.nJet40(); }
	int &nBJet40() { return zmet.nBJet40(); }
	int &nMuons10() { return zmet.nMuons10(); }
	int &nElectrons10() { return zmet.nElectrons10(); }
	int &nTaus20() { return zmet.nTaus20(); }
	int &nGammas20() { return zmet.nGammas20(); }
	float &met_pt() { return zmet.met_pt(); }
	float &met_phi() { return zmet.met_phi(); }
	float &met_rawPt() { return zmet.met_rawPt(); }
	float &met_rawPhi() { return zmet.met_rawPhi(); }
	float &met_caloPt() { return zmet.met_caloPt(); }
	float &met_caloPhi() { return zmet.met_caloPhi(); }
	float &met_genPt() { return zmet.met_genPt(); }
	float &met_genPhi() { return zmet.met_genPhi(); }
	int &Flag_EcalDeadCellTriggerPrimitiveFilter() { return zmet.Flag_EcalDeadCellTriggerPrimitiveFilter(); }
	int &Flag_trkPOG_manystripclus53X() { return zmet.Flag_trkPOG_manystripclus53X(); }
	int &Flag_ecalLaserCorrFilter() { return zmet.Flag_ecalLaserCorrFilter(); }
	int &Flag_trkPOG_toomanystripclus53X() { return zmet.Flag_trkPOG_toomanystripclus53X(); }
	int &Flag_hcalLaserEventFilter() { return zmet.Flag_hcalLaserEventFilter(); }
	int &Flag_trkPOG_logErrorTooManyClusters() { return zmet.Flag_trkPOG_logErrorTooManyClusters(); }
	int &Flag_trkPOGFilters() { return zmet.Flag_trkPOGFilters(); }
	int &Flag_trackingFailureFilter() { return zmet.Flag_trackingFailureFilter(); }
	int &Flag_CSCTightHaloFilter() { return zmet.Flag_CSCTightHaloFilter(); }
	int &Flag_HBHENoiseFilter() { return zmet.Flag_HBHENoiseFilter(); }
	int &Flag_goodVertices() { return zmet.Flag_goodVertices(); }
	int &Flag_eeBadScFilter() { return zmet.Flag_eeBadScFilter(); }
	int &Flag_METFilters() { return zmet.Flag_METFilters(); }
	int &HLT_HT900() { return zmet.HLT_HT900(); }
	int &HLT_MET170() { return zmet.HLT_MET170(); }
	int &HLT_ht350met120() { return zmet.HLT_ht350met120(); }
	int &HLT_SingleMu() { return zmet.HLT_SingleMu(); }
	int &HLT_DoubleEl() { return zmet.HLT_DoubleEl(); }
	int &HLT_MuEG() { return zmet.HLT_MuEG(); }
	int &HLT_DoubleMu() { return zmet.HLT_DoubleMu(); }
	int &HLT_Photons() { return zmet.HLT_Photons(); }
	float &dilmass() { return zmet.dilmass(); }
	float &dilpt() { return zmet.dilpt(); }
	int &diltype() { return zmet.diltype(); }
	int &nlep() { return zmet.nlep(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &lep_p4() { return zmet.lep_p4(); }
	vector<float> &lep_pt() { return zmet.lep_pt(); }
	vector<float> &lep_eta() { return zmet.lep_eta(); }
	vector<float> &lep_phi() { return zmet.lep_phi(); }
	vector<float> &lep_mass() { return zmet.lep_mass(); }
	vector<int> &lep_charge() { return zmet.lep_charge(); }
	vector<int> &lep_pdgId() { return zmet.lep_pdgId(); }
	vector<float> &lep_dxy() { return zmet.lep_dxy(); }
	vector<float> &lep_dz() { return zmet.lep_dz(); }
	vector<int> &lep_tightId() { return zmet.lep_tightId(); }
	vector<float> &lep_relIso03() { return zmet.lep_relIso03(); }
	vector<float> &lep_relIso04() { return zmet.lep_relIso04(); }
	vector<int> &lep_mcMatchId() { return zmet.lep_mcMatchId(); }
	vector<int> &lep_lostHits() { return zmet.lep_lostHits(); }
	vector<int> &lep_convVeto() { return zmet.lep_convVeto(); }
	vector<int> &lep_tightCharge() { return zmet.lep_tightCharge(); }
	int &ntau() { return zmet.ntau(); }
	vector<float> &tau_pt() { return zmet.tau_pt(); }
	vector<float> &tau_eta() { return zmet.tau_eta(); }
	vector<float> &tau_phi() { return zmet.tau_phi(); }
	vector<float> &tau_mass() { return zmet.tau_mass(); }
	vector<int> &tau_charge() { return zmet.tau_charge(); }
	vector<float> &tau_dxy() { return zmet.tau_dxy(); }
	vector<float> &tau_dz() { return zmet.tau_dz(); }
	vector<int> &tau_idCI3hit() { return zmet.tau_idCI3hit(); }
	vector<float> &tau_isoCI3hit() { return zmet.tau_isoCI3hit(); }
	int &ngamma() { return zmet.ngamma(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gamma_p4() { return zmet.gamma_p4(); }
	vector<float> &gamma_pt() { return zmet.gamma_pt(); }
	vector<float> &gamma_eta() { return zmet.gamma_eta(); }
	vector<float> &gamma_phi() { return zmet.gamma_phi(); }
	vector<float> &gamma_mass() { return zmet.gamma_mass(); }
	vector<int> &gamma_mcMatchId() { return zmet.gamma_mcMatchId(); }
	vector<float> &gamma_genIso() { return zmet.gamma_genIso(); }
	vector<float> &gamma_chHadIso() { return zmet.gamma_chHadIso(); }
	vector<float> &gamma_neuHadIso() { return zmet.gamma_neuHadIso(); }
	vector<float> &gamma_phIso() { return zmet.gamma_phIso(); }
	vector<float> &gamma_sigmaIetaIeta() { return zmet.gamma_sigmaIetaIeta(); }
	vector<float> &gamma_r9() { return zmet.gamma_r9(); }
	vector<float> &gamma_hOverE() { return zmet.gamma_hOverE(); }
	vector<int> &gamma_idCutBased() { return zmet.gamma_idCutBased(); }
	int &ngenPart() { return zmet.ngenPart(); }
	vector<float> &genPart_pt() { return zmet.genPart_pt(); }
	vector<float> &genPart_eta() { return zmet.genPart_eta(); }
	vector<float> &genPart_phi() { return zmet.genPart_phi(); }
	vector<float> &genPart_mass() { return zmet.genPart_mass(); }
	vector<int> &genPart_pdgId() { return zmet.genPart_pdgId(); }
	vector<int> &genPart_status() { return zmet.genPart_status(); }
	vector<float> &genPart_charge() { return zmet.genPart_charge(); }
	vector<int> &genPart_motherId() { return zmet.genPart_motherId(); }
	vector<int> &genPart_grandmaId() { return zmet.genPart_grandmaId(); }
	int &gamma_nJet40() { return zmet.gamma_nJet40(); }
	int &gamma_nBJet40() { return zmet.gamma_nBJet40(); }
	int &ngenLep() { return zmet.ngenLep(); }
	vector<float> &genLep_pt() { return zmet.genLep_pt(); }
	vector<float> &genLep_eta() { return zmet.genLep_eta(); }
	vector<float> &genLep_phi() { return zmet.genLep_phi(); }
	vector<float> &genLep_mass() { return zmet.genLep_mass(); }
	vector<int> &genLep_pdgId() { return zmet.genLep_pdgId(); }
	vector<int> &genLep_status() { return zmet.genLep_status(); }
	vector<float> &genLep_charge() { return zmet.genLep_charge(); }
	vector<int> &genLep_sourceId() { return zmet.genLep_sourceId(); }
	int &ngenTau() { return zmet.ngenTau(); }
	vector<float> &genTau_pt() { return zmet.genTau_pt(); }
	vector<float> &genTau_eta() { return zmet.genTau_eta(); }
	vector<float> &genTau_phi() { return zmet.genTau_phi(); }
	vector<float> &genTau_mass() { return zmet.genTau_mass(); }
	vector<int> &genTau_pdgId() { return zmet.genTau_pdgId(); }
	vector<int> &genTau_status() { return zmet.genTau_status(); }
	vector<float> &genTau_charge() { return zmet.genTau_charge(); }
	vector<int> &genTau_sourceId() { return zmet.genTau_sourceId(); }
	int &ngenLepFromTau() { return zmet.ngenLepFromTau(); }
	vector<float> &genLepFromTau_pt() { return zmet.genLepFromTau_pt(); }
	vector<float> &genLepFromTau_eta() { return zmet.genLepFromTau_eta(); }
	vector<float> &genLepFromTau_phi() { return zmet.genLepFromTau_phi(); }
	vector<float> &genLepFromTau_mass() { return zmet.genLepFromTau_mass(); }
	vector<int> &genLepFromTau_pdgId() { return zmet.genLepFromTau_pdgId(); }
	vector<int> &genLepFromTau_status() { return zmet.genLepFromTau_status(); }
	vector<float> &genLepFromTau_charge() { return zmet.genLepFromTau_charge(); }
	vector<int> &genLepFromTau_sourceId() { return zmet.genLepFromTau_sourceId(); }
	int &njet() { return zmet.njet(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet_p4() { return zmet.jet_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet30_p4() { return zmet.jet30_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet40_p4() { return zmet.jet40_p4(); }
	vector<float> &jet_pt() { return zmet.jet_pt(); }
	vector<float> &jet_eta() { return zmet.jet_eta(); }
	vector<float> &jet_phi() { return zmet.jet_phi(); }
	vector<float> &jet_mass() { return zmet.jet_mass(); }
	vector<float> &jet_btagCSV() { return zmet.jet_btagCSV(); }
	vector<float> &jet_rawPt() { return zmet.jet_rawPt(); }
	vector<float> &jet_mcPt() { return zmet.jet_mcPt(); }
	vector<int> &jet_mcFlavour() { return zmet.jet_mcFlavour(); }
	vector<float> &jet_quarkGluonID() { return zmet.jet_quarkGluonID(); }
	vector<float> &jet_area() { return zmet.jet_area(); }
	vector<int> &jet_id() { return zmet.jet_id(); }
	vector<int> &jet_puId() { return zmet.jet_puId(); }
}
