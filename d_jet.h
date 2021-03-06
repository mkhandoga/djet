//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May 11 15:01:28 2017 by ROOT version 6.02/13
// from TTree djt/photon jet track tree
// found on file: /data_CMS/cms/khandoga/DjetMC/DjetFiles_20170506_pp_5TeV_TuneCUETP8M1_Dfinder_MC_20170404_pthatweight.root
//////////////////////////////////////////////////////////

#ifndef d_jet_h
#define d_jet_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

class d_jet {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           isPP;
   UInt_t          run;
   ULong64_t       evt;
   UInt_t          lumi;
   Int_t           hiBin;
   Float_t         vz;
   Float_t         weight;
   Float_t         pthat;
   Float_t         hiEvtPlanes[29];
   Int_t           njet_akpu3pf;
   vector<float>   *jetptCorr_akpu3pf;
   vector<float>   *jetpt_akpu3pf;
   vector<float>   *jeteta_akpu3pf;
   vector<float>   *jetphi_akpu3pf;
   vector<float>   *gjetpt_akpu3pf;
   vector<float>   *gjeteta_akpu3pf;
   vector<float>   *gjetphi_akpu3pf;
   vector<int>     *gjetflavor_akpu3pf;
   vector<float>   *chargedSum_akpu3pf;
   vector<int>     *subid_akpu3pf;
   Int_t           ngen_akpu3pf;
   vector<float>   *genpt_akpu3pf;
   vector<float>   *geneta_akpu3pf;
   vector<float>   *genphi_akpu3pf;
   vector<int>     *gensubid_akpu3pf;
   Int_t           njet_akpu4pf;
   vector<float>   *jetptCorr_akpu4pf;
   vector<float>   *jetpt_akpu4pf;
   vector<float>   *jeteta_akpu4pf;
   vector<float>   *jetphi_akpu4pf;
   vector<float>   *gjetpt_akpu4pf;
   vector<float>   *gjeteta_akpu4pf;
   vector<float>   *gjetphi_akpu4pf;
   vector<int>     *gjetflavor_akpu4pf;
   vector<float>   *chargedSum_akpu4pf;
   vector<int>     *subid_akpu4pf;
   Int_t           ngen_akpu4pf;
   vector<float>   *genpt_akpu4pf;
   vector<float>   *geneta_akpu4pf;
   vector<float>   *genphi_akpu4pf;
   vector<int>     *gensubid_akpu4pf;
   Int_t           RunNo;
   Int_t           EvtNo;
   Int_t           LumiNo;
   Int_t           Dsize;
   Float_t         PVx;
   Float_t         PVy;
   Float_t         PVz;
   Float_t         PVnchi2;
   Float_t         BSx;
   Float_t         BSy;
   Float_t         BSz;
   Float_t         PVxE;
   Float_t         PVyE;
   Float_t         PVzE;
   Float_t         BSxErr;
   Float_t         BSyErr;
   Float_t         BSzErr;
   Float_t         BSdxdz;
   Float_t         BSdydz;
   Float_t         BSdxdzErr;
   Float_t         BSdydzErr;
   Float_t         BSWidthX;
   Float_t         BSWidthXErr;
   Float_t         BSWidthY;
   Float_t         BSWidthYErr;
   vector<int>     *Dindex;
   vector<int>     *Dtype;
   vector<float>   *Dmass;
   vector<float>   *Dpt;
   vector<float>   *Deta;
   vector<float>   *Dphi;
   vector<float>   *Dy;
   vector<float>   *DvtxX;
   vector<float>   *DvtxY;
   vector<float>   *Dd0;
   vector<float>   *Dd0Err;
   vector<float>   *Ddxyz;
   vector<float>   *DdxyzErr;
   vector<float>   *Dchi2ndf;
   vector<float>   *Dchi2cl;
   vector<float>   *Ddtheta;
   vector<float>   *Dlxy;
   vector<float>   *Dalpha;
   vector<float>   *DsvpvDistance;
   vector<float>   *DsvpvDisErr;
   vector<float>   *DsvpvDistance_2D;
   vector<float>   *DsvpvDisErr_2D;
   vector<float>   *DtktkRes_chi2ndf;
   vector<float>   *DtktkRes_chi2cl;
   vector<float>   *DtktkRes_alpha;
   vector<float>   *DtktkRes_svpvDistance;
   vector<float>   *DtktkRes_svpvDisErr;
   vector<float>   *DlxyBS;
   vector<float>   *DlxyBSErr;
   vector<float>   *DMaxDoca;
   vector<float>   *Dtrk1Pt;
   vector<float>   *Dtrk2Pt;
   vector<float>   *Dtrk1Eta;
   vector<float>   *Dtrk2Eta;
   vector<float>   *Dtrk1Phi;
   vector<float>   *Dtrk2Phi;
   vector<float>   *Dtrk1PtErr;
   vector<float>   *Dtrk2PtErr;
   vector<float>   *Dtrk1Dxy;
   vector<float>   *Dtrk2Dxy;
   vector<float>   *Dtrk1PixelHit;
   vector<float>   *Dtrk2PixelHit;
   vector<float>   *Dtrk1StripHit;
   vector<float>   *Dtrk2StripHit;
   vector<float>   *Dtrk1nStripLayer;
   vector<float>   *Dtrk2nStripLayer;
   vector<float>   *Dtrk1nPixelLayer;
   vector<float>   *Dtrk2nPixelLayer;
   vector<float>   *Dtrk1Chi2ndf;
   vector<float>   *Dtrk2Chi2ndf;
   vector<float>   *Dtrk1MassHypo;
   vector<float>   *Dtrk2MassHypo;
   vector<int>     *Dtrk1Algo;
   vector<int>     *Dtrk2Algo;
   vector<int>     *Dtrk1originalAlgo;
   vector<int>     *Dtrk2originalAlgo;
   vector<bool>    *Dtrk1highPurity;
   vector<bool>    *Dtrk2highPurity;
   vector<float>   *Dtrk3Pt;
   vector<float>   *Dtrk4Pt;
   vector<float>   *Dtrk3Eta;
   vector<float>   *Dtrk4Eta;
   vector<float>   *Dtrk3Phi;
   vector<float>   *Dtrk4Phi;
   vector<float>   *Dtrk3PtErr;
   vector<float>   *Dtrk4PtErr;
   vector<float>   *Dtrk3Dxy;
   vector<float>   *Dtrk4Dxy;
   vector<float>   *Dtrk3PixelHit;
   vector<float>   *Dtrk4PixelHit;
   vector<float>   *Dtrk3StripHit;
   vector<float>   *Dtrk4StripHit;
   vector<float>   *Dtrk3nStripLayer;
   vector<float>   *Dtrk4nStripLayer;
   vector<float>   *Dtrk3nPixelLayer;
   vector<float>   *Dtrk4nPixelLayer;
   vector<float>   *Dtrk3Chi2ndf;
   vector<float>   *Dtrk4Chi2ndf;
   vector<float>   *Dtrk3MassHypo;
   vector<float>   *Dtrk4MassHypo;
   vector<int>     *Dtrk3Algo;
   vector<int>     *Dtrk4Algo;
   vector<int>     *Dtrk3originalAlgo;
   vector<int>     *Dtrk4originalAlgo;
   vector<bool>    *Dtrk3highPurity;
   vector<bool>    *Dtrk4highPurity;
   vector<int>     *Dtrk1Idx;
   vector<int>     *Dtrk2Idx;
   vector<float>   *Dtrk1EtaErr;
   vector<float>   *Dtrk2EtaErr;
   vector<float>   *Dtrk1PhiErr;
   vector<float>   *Dtrk2PhiErr;
   vector<float>   *Dtrk1Y;
   vector<float>   *Dtrk2Y;
   vector<float>   *Dtrk1D0Err;
   vector<float>   *Dtrk2D0Err;
   vector<float>   *Dtrk1MVAVal;
   vector<float>   *Dtrk2MVAVal;
   vector<int>     *Dtrk1Quality;
   vector<int>     *Dtrk2Quality;
   vector<int>     *Dtrk3Idx;
   vector<int>     *Dtrk4Idx;
   vector<float>   *Dtrk3EtaErr;
   vector<float>   *Dtrk4EtaErr;
   vector<float>   *Dtrk3PhiErr;
   vector<float>   *Dtrk4PhiErr;
   vector<float>   *Dtrk3Y;
   vector<float>   *Dtrk4Y;
   vector<float>   *Dtrk3D0Err;
   vector<float>   *Dtrk4D0Err;
   vector<float>   *Dtrk3MVAVal;
   vector<float>   *Dtrk4MVAVal;
   vector<int>     *Dtrk3Quality;
   vector<int>     *Dtrk4Quality;
   vector<float>   *DtktkResmass;
   vector<float>   *DtktkRespt;
   vector<float>   *DtktkReseta;
   vector<float>   *DtktkResphi;
   vector<float>   *DRestrk1Pt;
   vector<float>   *DRestrk1Eta;
   vector<float>   *DRestrk1Phi;
   vector<float>   *DRestrk1Y;
   vector<float>   *DRestrk1Dxy;
   vector<float>   *DRestrk1D0Err;
   vector<int>     *DRestrk1originalAlgo;
   vector<float>   *DRestrk2Pt;
   vector<float>   *DRestrk2Eta;
   vector<float>   *DRestrk2Phi;
   vector<float>   *DRestrk2Y;
   vector<float>   *DRestrk2Dxy;
   vector<float>   *DRestrk2D0Err;
   vector<int>     *DRestrk2originalAlgo;
   vector<float>   *DRestrk3Pt;
   vector<float>   *DRestrk3Eta;
   vector<float>   *DRestrk3Phi;
   vector<float>   *DRestrk3Y;
   vector<float>   *DRestrk3Dxy;
   vector<float>   *DRestrk3D0Err;
   vector<int>     *DRestrk3originalAlgo;
   vector<float>   *DRestrk4Pt;
   vector<float>   *DRestrk4Eta;
   vector<float>   *DRestrk4Phi;
   vector<float>   *DRestrk4Y;
   vector<float>   *DRestrk4Dxy;
   vector<float>   *DRestrk4D0Err;
   vector<int>     *DRestrk4originalAlgo;
   vector<float>   *Dgen;
   vector<int>     *DgenIndex;
   vector<int>     *DgennDa;
   vector<float>   *Dgenpt;
   vector<float>   *Dgeneta;
   vector<float>   *Dgenphi;
   vector<float>   *Dgeny;
   vector<int>     *DgencollisionId;
   vector<float>   *DgenBAncestorpt;
   vector<int>     *DgenBAncestorpdgId;
   Int_t           Gsize;
   vector<float>   *Gy;
   vector<float>   *Geta;
   vector<float>   *Gphi;
   vector<float>   *Gpt;
   vector<int>     *GpdgId;
   vector<int>     *GcollisionId;
   vector<int>     *GisSignal;
   vector<float>   *GBAncestorpt;
   vector<int>     *GBAncestorpdgId;
   vector<float>   *Gtk1pt;
   vector<float>   *Gtk1eta;
   vector<float>   *Gtk1y;
   vector<float>   *Gtk1phi;
   vector<float>   *Gtk2pt;
   vector<float>   *Gtk2eta;
   vector<float>   *Gtk2y;
   vector<float>   *Gtk2phi;
   Float_t         pthatweight;
   Float_t         maxDgenpt;

   // List of branches
   TBranch        *b_isPP;   //!
   TBranch        *b_run;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_hiBin;   //!
   TBranch        *b_vz;   //!
   TBranch        *b_weight;   //!
   TBranch        *b_pthat;   //!
   TBranch        *b_hiEvtPlanes;   //!
   TBranch        *b_njet_akpu3pf;   //!
   TBranch        *b_jetptCorr_akpu3pf;   //!
   TBranch        *b_jetpt_akpu3pf;   //!
   TBranch        *b_jeteta_akpu3pf;   //!
   TBranch        *b_jetphi_akpu3pf;   //!
   TBranch        *b_gjetpt_akpu3pf;   //!
   TBranch        *b_gjeteta_akpu3pf;   //!
   TBranch        *b_gjetphi_akpu3pf;   //!
   TBranch        *b_gjetflavor_akpu3pf;   //!
   TBranch        *b_chargedSum_akpu3pf;   //!
   TBranch        *b_subid_akpu3pf;   //!
   TBranch        *b_ngen_akpu3pf;   //!
   TBranch        *b_genpt_akpu3pf;   //!
   TBranch        *b_geneta_akpu3pf;   //!
   TBranch        *b_genphi_akpu3pf;   //!
   TBranch        *b_gensubid_akpu3pf;   //!
   TBranch        *b_njet_akpu4pf;   //!
   TBranch        *b_jetptCorr_akpu4pf;   //!
   TBranch        *b_jetpt_akpu4pf;   //!
   TBranch        *b_jeteta_akpu4pf;   //!
   TBranch        *b_jetphi_akpu4pf;   //!
   TBranch        *b_gjetpt_akpu4pf;   //!
   TBranch        *b_gjeteta_akpu4pf;   //!
   TBranch        *b_gjetphi_akpu4pf;   //!
   TBranch        *b_gjetflavor_akpu4pf;   //!
   TBranch        *b_chargedSum_akpu4pf;   //!
   TBranch        *b_subid_akpu4pf;   //!
   TBranch        *b_ngen_akpu4pf;   //!
   TBranch        *b_genpt_akpu4pf;   //!
   TBranch        *b_geneta_akpu4pf;   //!
   TBranch        *b_genphi_akpu4pf;   //!
   TBranch        *b_gensubid_akpu4pf;   //!
   TBranch        *b_RunNo;   //!
   TBranch        *b_EvtNo;   //!
   TBranch        *b_LumiNo;   //!
   TBranch        *b_Dsize;   //!
   TBranch        *b_PVx;   //!
   TBranch        *b_PVy;   //!
   TBranch        *b_PVz;   //!
   TBranch        *b_PVnchi2;   //!
   TBranch        *b_BSx;   //!
   TBranch        *b_BSy;   //!
   TBranch        *b_BSz;   //!
   TBranch        *b_PVxE;   //!
   TBranch        *b_PVyE;   //!
   TBranch        *b_PVzE;   //!
   TBranch        *b_BSxErr;   //!
   TBranch        *b_BSyErr;   //!
   TBranch        *b_BSzErr;   //!
   TBranch        *b_BSdxdz;   //!
   TBranch        *b_BSdydz;   //!
   TBranch        *b_BSdxdzErr;   //!
   TBranch        *b_BSdydzErr;   //!
   TBranch        *b_BSWidthX;   //!
   TBranch        *b_BSWidthXErr;   //!
   TBranch        *b_BSWidthY;   //!
   TBranch        *b_BSWidthYErr;   //!
   TBranch        *b_Dindex;   //!
   TBranch        *b_Dtype;   //!
   TBranch        *b_Dmass;   //!
   TBranch        *b_Dpt;   //!
   TBranch        *b_Deta;   //!
   TBranch        *b_Dphi;   //!
   TBranch        *b_Dy;   //!
   TBranch        *b_DvtxX;   //!
   TBranch        *b_DvtxY;   //!
   TBranch        *b_Dd0;   //!
   TBranch        *b_Dd0Err;   //!
   TBranch        *b_Ddxyz;   //!
   TBranch        *b_DdxyzErr;   //!
   TBranch        *b_Dchi2ndf;   //!
   TBranch        *b_Dchi2cl;   //!
   TBranch        *b_Ddtheta;   //!
   TBranch        *b_Dlxy;   //!
   TBranch        *b_Dalpha;   //!
   TBranch        *b_DsvpvDistance;   //!
   TBranch        *b_DsvpvDisErr;   //!
   TBranch        *b_DsvpvDistance_2D;   //!
   TBranch        *b_DsvpvDisErr_2D;   //!
   TBranch        *b_DtktkRes_chi2ndf;   //!
   TBranch        *b_DtktkRes_chi2cl;   //!
   TBranch        *b_DtktkRes_alpha;   //!
   TBranch        *b_DtktkRes_svpvDistance;   //!
   TBranch        *b_DtktkRes_svpvDisErr;   //!
   TBranch        *b_DlxyBS;   //!
   TBranch        *b_DlxyBSErr;   //!
   TBranch        *b_DMaxDoca;   //!
   TBranch        *b_Dtrk1Pt;   //!
   TBranch        *b_Dtrk2Pt;   //!
   TBranch        *b_Dtrk1Eta;   //!
   TBranch        *b_Dtrk2Eta;   //!
   TBranch        *b_Dtrk1Phi;   //!
   TBranch        *b_Dtrk2Phi;   //!
   TBranch        *b_Dtrk1PtErr;   //!
   TBranch        *b_Dtrk2PtErr;   //!
   TBranch        *b_Dtrk1Dxy;   //!
   TBranch        *b_Dtrk2Dxy;   //!
   TBranch        *b_Dtrk1PixelHit;   //!
   TBranch        *b_Dtrk2PixelHit;   //!
   TBranch        *b_Dtrk1StripHit;   //!
   TBranch        *b_Dtrk2StripHit;   //!
   TBranch        *b_Dtrk1nStripLayer;   //!
   TBranch        *b_Dtrk2nStripLayer;   //!
   TBranch        *b_Dtrk1nPixelLayer;   //!
   TBranch        *b_Dtrk2nPixelLayer;   //!
   TBranch        *b_Dtrk1Chi2ndf;   //!
   TBranch        *b_Dtrk2Chi2ndf;   //!
   TBranch        *b_Dtrk1MassHypo;   //!
   TBranch        *b_Dtrk2MassHypo;   //!
   TBranch        *b_Dtrk1Algo;   //!
   TBranch        *b_Dtrk2Algo;   //!
   TBranch        *b_Dtrk1originalAlgo;   //!
   TBranch        *b_Dtrk2originalAlgo;   //!
   TBranch        *b_Dtrk1highPurity;   //!
   TBranch        *b_Dtrk2highPurity;   //!
   TBranch        *b_Dtrk3Pt;   //!
   TBranch        *b_Dtrk4Pt;   //!
   TBranch        *b_Dtrk3Eta;   //!
   TBranch        *b_Dtrk4Eta;   //!
   TBranch        *b_Dtrk3Phi;   //!
   TBranch        *b_Dtrk4Phi;   //!
   TBranch        *b_Dtrk3PtErr;   //!
   TBranch        *b_Dtrk4PtErr;   //!
   TBranch        *b_Dtrk3Dxy;   //!
   TBranch        *b_Dtrk4Dxy;   //!
   TBranch        *b_Dtrk3PixelHit;   //!
   TBranch        *b_Dtrk4PixelHit;   //!
   TBranch        *b_Dtrk3StripHit;   //!
   TBranch        *b_Dtrk4StripHit;   //!
   TBranch        *b_Dtrk3nStripLayer;   //!
   TBranch        *b_Dtrk4nStripLayer;   //!
   TBranch        *b_Dtrk3nPixelLayer;   //!
   TBranch        *b_Dtrk4nPixelLayer;   //!
   TBranch        *b_Dtrk3Chi2ndf;   //!
   TBranch        *b_Dtrk4Chi2ndf;   //!
   TBranch        *b_Dtrk3MassHypo;   //!
   TBranch        *b_Dtrk4MassHypo;   //!
   TBranch        *b_Dtrk3Algo;   //!
   TBranch        *b_Dtrk4Algo;   //!
   TBranch        *b_Dtrk3originalAlgo;   //!
   TBranch        *b_Dtrk4originalAlgo;   //!
   TBranch        *b_Dtrk3highPurity;   //!
   TBranch        *b_Dtrk4highPurity;   //!
   TBranch        *b_Dtrk1Idx;   //!
   TBranch        *b_Dtrk2Idx;   //!
   TBranch        *b_Dtrk1EtaErr;   //!
   TBranch        *b_Dtrk2EtaErr;   //!
   TBranch        *b_Dtrk1PhiErr;   //!
   TBranch        *b_Dtrk2PhiErr;   //!
   TBranch        *b_Dtrk1Y;   //!
   TBranch        *b_Dtrk2Y;   //!
   TBranch        *b_Dtrk1D0Err;   //!
   TBranch        *b_Dtrk2D0Err;   //!
   TBranch        *b_Dtrk1MVAVal;   //!
   TBranch        *b_Dtrk2MVAVal;   //!
   TBranch        *b_Dtrk1Quality;   //!
   TBranch        *b_Dtrk2Quality;   //!
   TBranch        *b_Dtrk3Idx;   //!
   TBranch        *b_Dtrk4Idx;   //!
   TBranch        *b_Dtrk3EtaErr;   //!
   TBranch        *b_Dtrk4EtaErr;   //!
   TBranch        *b_Dtrk3PhiErr;   //!
   TBranch        *b_Dtrk4PhiErr;   //!
   TBranch        *b_Dtrk3Y;   //!
   TBranch        *b_Dtrk4Y;   //!
   TBranch        *b_Dtrk3D0Err;   //!
   TBranch        *b_Dtrk4D0Err;   //!
   TBranch        *b_Dtrk3MVAVal;   //!
   TBranch        *b_Dtrk4MVAVal;   //!
   TBranch        *b_Dtrk3Quality;   //!
   TBranch        *b_Dtrk4Quality;   //!
   TBranch        *b_DtktkResmass;   //!
   TBranch        *b_DtktkRespt;   //!
   TBranch        *b_DtktkReseta;   //!
   TBranch        *b_DtktkResphi;   //!
   TBranch        *b_DRestrk1Pt;   //!
   TBranch        *b_DRestrk1Eta;   //!
   TBranch        *b_DRestrk1Phi;   //!
   TBranch        *b_DRestrk1Y;   //!
   TBranch        *b_DRestrk1Dxy;   //!
   TBranch        *b_DRestrk1D0Err;   //!
   TBranch        *b_DRestrk1originalAlgo;   //!
   TBranch        *b_DRestrk2Pt;   //!
   TBranch        *b_DRestrk2Eta;   //!
   TBranch        *b_DRestrk2Phi;   //!
   TBranch        *b_DRestrk2Y;   //!
   TBranch        *b_DRestrk2Dxy;   //!
   TBranch        *b_DRestrk2D0Err;   //!
   TBranch        *b_DRestrk2originalAlgo;   //!
   TBranch        *b_DRestrk3Pt;   //!
   TBranch        *b_DRestrk3Eta;   //!
   TBranch        *b_DRestrk3Phi;   //!
   TBranch        *b_DRestrk3Y;   //!
   TBranch        *b_DRestrk3Dxy;   //!
   TBranch        *b_DRestrk3D0Err;   //!
   TBranch        *b_DRestrk3originalAlgo;   //!
   TBranch        *b_DRestrk4Pt;   //!
   TBranch        *b_DRestrk4Eta;   //!
   TBranch        *b_DRestrk4Phi;   //!
   TBranch        *b_DRestrk4Y;   //!
   TBranch        *b_DRestrk4Dxy;   //!
   TBranch        *b_DRestrk4D0Err;   //!
   TBranch        *b_DRestrk4originalAlgo;   //!
   TBranch        *b_Dgen;   //!
   TBranch        *b_DgenIndex;   //!
   TBranch        *b_DgennDa;   //!
   TBranch        *b_Dgenpt;   //!
   TBranch        *b_Dgeneta;   //!
   TBranch        *b_Dgenphi;   //!
   TBranch        *b_Dgeny;   //!
   TBranch        *b_DgencollisionId;   //!
   TBranch        *b_DgenBAncestorpt;   //!
   TBranch        *b_DgenBAncestorpdgId;   //!
   TBranch        *b_Gsize;   //!
   TBranch        *b_Gy;   //!
   TBranch        *b_Geta;   //!
   TBranch        *b_Gphi;   //!
   TBranch        *b_Gpt;   //!
   TBranch        *b_GpdgId;   //!
   TBranch        *b_GcollisionId;   //!
   TBranch        *b_GisSignal;   //!
   TBranch        *b_GBAncestorpt;   //!
   TBranch        *b_GBAncestorpdgId;   //!
   TBranch        *b_Gtk1pt;   //!
   TBranch        *b_Gtk1eta;   //!
   TBranch        *b_Gtk1y;   //!
   TBranch        *b_Gtk1phi;   //!
   TBranch        *b_Gtk2pt;   //!
   TBranch        *b_Gtk2eta;   //!
   TBranch        *b_Gtk2y;   //!
   TBranch        *b_Gtk2phi;   //!
   TBranch        *b_pthatweight;   //!
   TBranch        *b_maxDgenpt;   //!

   d_jet(TTree *tree=0);
   virtual ~d_jet();
   //   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual Bool_t   DPassTopoCuts(Float_t alpha, Float_t vertexP, Float_t d02sigma);
   virtual Bool_t   DPassCuts(Float_t dpt, Float_t deta);
   virtual Bool_t   JetPassCuts(Float_t jpt, Float_t jeta, Float_t refjpt);
   virtual Float_t  dR(Float_t deta, Float_t dphi, Float_t jeta, Float_t jphi);
};

#endif

#ifdef d_jet_cxx
d_jet::d_jet(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data_CMS/cms/khandoga/DjetMC/DjetFiles_20170506_pp_5TeV_TuneCUETP8M1_Dfinder_MC_20170404_pthatweight.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/data_CMS/cms/khandoga/DjetMC/DjetFiles_20170506_pp_5TeV_TuneCUETP8M1_Dfinder_MC_20170404_pthatweight.root");
      }
      f->GetObject("djt",tree);

   }
   Init(tree);
}

d_jet::~d_jet()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t d_jet::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t d_jet::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void d_jet::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   jetptCorr_akpu3pf = 0;
   jetpt_akpu3pf = 0;
   jeteta_akpu3pf = 0;
   jetphi_akpu3pf = 0;
   gjetpt_akpu3pf = 0;
   gjeteta_akpu3pf = 0;
   gjetphi_akpu3pf = 0;
   gjetflavor_akpu3pf = 0;
   chargedSum_akpu3pf = 0;
   subid_akpu3pf = 0;
   genpt_akpu3pf = 0;
   geneta_akpu3pf = 0;
   genphi_akpu3pf = 0;
   gensubid_akpu3pf = 0;
   jetptCorr_akpu4pf = 0;
   jetpt_akpu4pf = 0;
   jeteta_akpu4pf = 0;
   jetphi_akpu4pf = 0;
   gjetpt_akpu4pf = 0;
   gjeteta_akpu4pf = 0;
   gjetphi_akpu4pf = 0;
   gjetflavor_akpu4pf = 0;
   chargedSum_akpu4pf = 0;
   subid_akpu4pf = 0;
   genpt_akpu4pf = 0;
   geneta_akpu4pf = 0;
   genphi_akpu4pf = 0;
   gensubid_akpu4pf = 0;
   Dindex = 0;
   Dtype = 0;
   Dmass = 0;
   Dpt = 0;
   Deta = 0;
   Dphi = 0;
   Dy = 0;
   DvtxX = 0;
   DvtxY = 0;
   Dd0 = 0;
   Dd0Err = 0;
   Ddxyz = 0;
   DdxyzErr = 0;
   Dchi2ndf = 0;
   Dchi2cl = 0;
   Ddtheta = 0;
   Dlxy = 0;
   Dalpha = 0;
   DsvpvDistance = 0;
   DsvpvDisErr = 0;
   DsvpvDistance_2D = 0;
   DsvpvDisErr_2D = 0;
   DtktkRes_chi2ndf = 0;
   DtktkRes_chi2cl = 0;
   DtktkRes_alpha = 0;
   DtktkRes_svpvDistance = 0;
   DtktkRes_svpvDisErr = 0;
   DlxyBS = 0;
   DlxyBSErr = 0;
   DMaxDoca = 0;
   Dtrk1Pt = 0;
   Dtrk2Pt = 0;
   Dtrk1Eta = 0;
   Dtrk2Eta = 0;
   Dtrk1Phi = 0;
   Dtrk2Phi = 0;
   Dtrk1PtErr = 0;
   Dtrk2PtErr = 0;
   Dtrk1Dxy = 0;
   Dtrk2Dxy = 0;
   Dtrk1PixelHit = 0;
   Dtrk2PixelHit = 0;
   Dtrk1StripHit = 0;
   Dtrk2StripHit = 0;
   Dtrk1nStripLayer = 0;
   Dtrk2nStripLayer = 0;
   Dtrk1nPixelLayer = 0;
   Dtrk2nPixelLayer = 0;
   Dtrk1Chi2ndf = 0;
   Dtrk2Chi2ndf = 0;
   Dtrk1MassHypo = 0;
   Dtrk2MassHypo = 0;
   Dtrk1Algo = 0;
   Dtrk2Algo = 0;
   Dtrk1originalAlgo = 0;
   Dtrk2originalAlgo = 0;
   Dtrk1highPurity = 0;
   Dtrk2highPurity = 0;
   Dtrk3Pt = 0;
   Dtrk4Pt = 0;
   Dtrk3Eta = 0;
   Dtrk4Eta = 0;
   Dtrk3Phi = 0;
   Dtrk4Phi = 0;
   Dtrk3PtErr = 0;
   Dtrk4PtErr = 0;
   Dtrk3Dxy = 0;
   Dtrk4Dxy = 0;
   Dtrk3PixelHit = 0;
   Dtrk4PixelHit = 0;
   Dtrk3StripHit = 0;
   Dtrk4StripHit = 0;
   Dtrk3nStripLayer = 0;
   Dtrk4nStripLayer = 0;
   Dtrk3nPixelLayer = 0;
   Dtrk4nPixelLayer = 0;
   Dtrk3Chi2ndf = 0;
   Dtrk4Chi2ndf = 0;
   Dtrk3MassHypo = 0;
   Dtrk4MassHypo = 0;
   Dtrk3Algo = 0;
   Dtrk4Algo = 0;
   Dtrk3originalAlgo = 0;
   Dtrk4originalAlgo = 0;
   Dtrk3highPurity = 0;
   Dtrk4highPurity = 0;
   Dtrk1Idx = 0;
   Dtrk2Idx = 0;
   Dtrk1EtaErr = 0;
   Dtrk2EtaErr = 0;
   Dtrk1PhiErr = 0;
   Dtrk2PhiErr = 0;
   Dtrk1Y = 0;
   Dtrk2Y = 0;
   Dtrk1D0Err = 0;
   Dtrk2D0Err = 0;
   Dtrk1MVAVal = 0;
   Dtrk2MVAVal = 0;
   Dtrk1Quality = 0;
   Dtrk2Quality = 0;
   Dtrk3Idx = 0;
   Dtrk4Idx = 0;
   Dtrk3EtaErr = 0;
   Dtrk4EtaErr = 0;
   Dtrk3PhiErr = 0;
   Dtrk4PhiErr = 0;
   Dtrk3Y = 0;
   Dtrk4Y = 0;
   Dtrk3D0Err = 0;
   Dtrk4D0Err = 0;
   Dtrk3MVAVal = 0;
   Dtrk4MVAVal = 0;
   Dtrk3Quality = 0;
   Dtrk4Quality = 0;
   DtktkResmass = 0;
   DtktkRespt = 0;
   DtktkReseta = 0;
   DtktkResphi = 0;
   DRestrk1Pt = 0;
   DRestrk1Eta = 0;
   DRestrk1Phi = 0;
   DRestrk1Y = 0;
   DRestrk1Dxy = 0;
   DRestrk1D0Err = 0;
   DRestrk1originalAlgo = 0;
   DRestrk2Pt = 0;
   DRestrk2Eta = 0;
   DRestrk2Phi = 0;
   DRestrk2Y = 0;
   DRestrk2Dxy = 0;
   DRestrk2D0Err = 0;
   DRestrk2originalAlgo = 0;
   DRestrk3Pt = 0;
   DRestrk3Eta = 0;
   DRestrk3Phi = 0;
   DRestrk3Y = 0;
   DRestrk3Dxy = 0;
   DRestrk3D0Err = 0;
   DRestrk3originalAlgo = 0;
   DRestrk4Pt = 0;
   DRestrk4Eta = 0;
   DRestrk4Phi = 0;
   DRestrk4Y = 0;
   DRestrk4Dxy = 0;
   DRestrk4D0Err = 0;
   DRestrk4originalAlgo = 0;
   Dgen = 0;
   DgenIndex = 0;
   DgennDa = 0;
   Dgenpt = 0;
   Dgeneta = 0;
   Dgenphi = 0;
   Dgeny = 0;
   DgencollisionId = 0;
   DgenBAncestorpt = 0;
   DgenBAncestorpdgId = 0;
   Gy = 0;
   Geta = 0;
   Gphi = 0;
   Gpt = 0;
   GpdgId = 0;
   GcollisionId = 0;
   GisSignal = 0;
   GBAncestorpt = 0;
   GBAncestorpdgId = 0;
   Gtk1pt = 0;
   Gtk1eta = 0;
   Gtk1y = 0;
   Gtk1phi = 0;
   Gtk2pt = 0;
   Gtk2eta = 0;
   Gtk2y = 0;
   Gtk2phi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("isPP", &isPP, &b_isPP);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("hiBin", &hiBin, &b_hiBin);
   fChain->SetBranchAddress("vz", &vz, &b_vz);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("pthat", &pthat, &b_pthat);
   fChain->SetBranchAddress("hiEvtPlanes", hiEvtPlanes, &b_hiEvtPlanes);
   fChain->SetBranchAddress("njet_akpu3pf", &njet_akpu3pf, &b_njet_akpu3pf);
   fChain->SetBranchAddress("jetptCorr_akpu3pf", &jetptCorr_akpu3pf, &b_jetptCorr_akpu3pf);
   fChain->SetBranchAddress("jetpt_akpu3pf", &jetpt_akpu3pf, &b_jetpt_akpu3pf);
   fChain->SetBranchAddress("jeteta_akpu3pf", &jeteta_akpu3pf, &b_jeteta_akpu3pf);
   fChain->SetBranchAddress("jetphi_akpu3pf", &jetphi_akpu3pf, &b_jetphi_akpu3pf);
   fChain->SetBranchAddress("gjetpt_akpu3pf", &gjetpt_akpu3pf, &b_gjetpt_akpu3pf);
   fChain->SetBranchAddress("gjeteta_akpu3pf", &gjeteta_akpu3pf, &b_gjeteta_akpu3pf);
   fChain->SetBranchAddress("gjetphi_akpu3pf", &gjetphi_akpu3pf, &b_gjetphi_akpu3pf);
   fChain->SetBranchAddress("gjetflavor_akpu3pf", &gjetflavor_akpu3pf, &b_gjetflavor_akpu3pf);
   fChain->SetBranchAddress("chargedSum_akpu3pf", &chargedSum_akpu3pf, &b_chargedSum_akpu3pf);
   fChain->SetBranchAddress("subid_akpu3pf", &subid_akpu3pf, &b_subid_akpu3pf);
   fChain->SetBranchAddress("ngen_akpu3pf", &ngen_akpu3pf, &b_ngen_akpu3pf);
   fChain->SetBranchAddress("genpt_akpu3pf", &genpt_akpu3pf, &b_genpt_akpu3pf);
   fChain->SetBranchAddress("geneta_akpu3pf", &geneta_akpu3pf, &b_geneta_akpu3pf);
   fChain->SetBranchAddress("genphi_akpu3pf", &genphi_akpu3pf, &b_genphi_akpu3pf);
   fChain->SetBranchAddress("gensubid_akpu3pf", &gensubid_akpu3pf, &b_gensubid_akpu3pf);
   fChain->SetBranchAddress("njet_akpu4pf", &njet_akpu4pf, &b_njet_akpu4pf);
   fChain->SetBranchAddress("jetptCorr_akpu4pf", &jetptCorr_akpu4pf, &b_jetptCorr_akpu4pf);
   fChain->SetBranchAddress("jetpt_akpu4pf", &jetpt_akpu4pf, &b_jetpt_akpu4pf);
   fChain->SetBranchAddress("jeteta_akpu4pf", &jeteta_akpu4pf, &b_jeteta_akpu4pf);
   fChain->SetBranchAddress("jetphi_akpu4pf", &jetphi_akpu4pf, &b_jetphi_akpu4pf);
   fChain->SetBranchAddress("gjetpt_akpu4pf", &gjetpt_akpu4pf, &b_gjetpt_akpu4pf);
   fChain->SetBranchAddress("gjeteta_akpu4pf", &gjeteta_akpu4pf, &b_gjeteta_akpu4pf);
   fChain->SetBranchAddress("gjetphi_akpu4pf", &gjetphi_akpu4pf, &b_gjetphi_akpu4pf);
   fChain->SetBranchAddress("gjetflavor_akpu4pf", &gjetflavor_akpu4pf, &b_gjetflavor_akpu4pf);
   fChain->SetBranchAddress("chargedSum_akpu4pf", &chargedSum_akpu4pf, &b_chargedSum_akpu4pf);
   fChain->SetBranchAddress("subid_akpu4pf", &subid_akpu4pf, &b_subid_akpu4pf);
   fChain->SetBranchAddress("ngen_akpu4pf", &ngen_akpu4pf, &b_ngen_akpu4pf);
   fChain->SetBranchAddress("genpt_akpu4pf", &genpt_akpu4pf, &b_genpt_akpu4pf);
   fChain->SetBranchAddress("geneta_akpu4pf", &geneta_akpu4pf, &b_geneta_akpu4pf);
   fChain->SetBranchAddress("genphi_akpu4pf", &genphi_akpu4pf, &b_genphi_akpu4pf);
   fChain->SetBranchAddress("gensubid_akpu4pf", &gensubid_akpu4pf, &b_gensubid_akpu4pf);
   fChain->SetBranchAddress("RunNo", &RunNo, &b_RunNo);
   fChain->SetBranchAddress("EvtNo", &EvtNo, &b_EvtNo);
   fChain->SetBranchAddress("LumiNo", &LumiNo, &b_LumiNo);
   fChain->SetBranchAddress("Dsize", &Dsize, &b_Dsize);
   fChain->SetBranchAddress("PVx", &PVx, &b_PVx);
   fChain->SetBranchAddress("PVy", &PVy, &b_PVy);
   fChain->SetBranchAddress("PVz", &PVz, &b_PVz);
   fChain->SetBranchAddress("PVnchi2", &PVnchi2, &b_PVnchi2);
   fChain->SetBranchAddress("BSx", &BSx, &b_BSx);
   fChain->SetBranchAddress("BSy", &BSy, &b_BSy);
   fChain->SetBranchAddress("BSz", &BSz, &b_BSz);
   fChain->SetBranchAddress("PVxE", &PVxE, &b_PVxE);
   fChain->SetBranchAddress("PVyE", &PVyE, &b_PVyE);
   fChain->SetBranchAddress("PVzE", &PVzE, &b_PVzE);
   fChain->SetBranchAddress("BSxErr", &BSxErr, &b_BSxErr);
   fChain->SetBranchAddress("BSyErr", &BSyErr, &b_BSyErr);
   fChain->SetBranchAddress("BSzErr", &BSzErr, &b_BSzErr);
   fChain->SetBranchAddress("BSdxdz", &BSdxdz, &b_BSdxdz);
   fChain->SetBranchAddress("BSdydz", &BSdydz, &b_BSdydz);
   fChain->SetBranchAddress("BSdxdzErr", &BSdxdzErr, &b_BSdxdzErr);
   fChain->SetBranchAddress("BSdydzErr", &BSdydzErr, &b_BSdydzErr);
   fChain->SetBranchAddress("BSWidthX", &BSWidthX, &b_BSWidthX);
   fChain->SetBranchAddress("BSWidthXErr", &BSWidthXErr, &b_BSWidthXErr);
   fChain->SetBranchAddress("BSWidthY", &BSWidthY, &b_BSWidthY);
   fChain->SetBranchAddress("BSWidthYErr", &BSWidthYErr, &b_BSWidthYErr);
   fChain->SetBranchAddress("Dindex", &Dindex, &b_Dindex);
   fChain->SetBranchAddress("Dtype", &Dtype, &b_Dtype);
   fChain->SetBranchAddress("Dmass", &Dmass, &b_Dmass);
   fChain->SetBranchAddress("Dpt", &Dpt, &b_Dpt);
   fChain->SetBranchAddress("Deta", &Deta, &b_Deta);
   fChain->SetBranchAddress("Dphi", &Dphi, &b_Dphi);
   fChain->SetBranchAddress("Dy", &Dy, &b_Dy);
   fChain->SetBranchAddress("DvtxX", &DvtxX, &b_DvtxX);
   fChain->SetBranchAddress("DvtxY", &DvtxY, &b_DvtxY);
   fChain->SetBranchAddress("Dd0", &Dd0, &b_Dd0);
   fChain->SetBranchAddress("Dd0Err", &Dd0Err, &b_Dd0Err);
   fChain->SetBranchAddress("Ddxyz", &Ddxyz, &b_Ddxyz);
   fChain->SetBranchAddress("DdxyzErr", &DdxyzErr, &b_DdxyzErr);
   fChain->SetBranchAddress("Dchi2ndf", &Dchi2ndf, &b_Dchi2ndf);
   fChain->SetBranchAddress("Dchi2cl", &Dchi2cl, &b_Dchi2cl);
   fChain->SetBranchAddress("Ddtheta", &Ddtheta, &b_Ddtheta);
   fChain->SetBranchAddress("Dlxy", &Dlxy, &b_Dlxy);
   fChain->SetBranchAddress("Dalpha", &Dalpha, &b_Dalpha);
   fChain->SetBranchAddress("DsvpvDistance", &DsvpvDistance, &b_DsvpvDistance);
   fChain->SetBranchAddress("DsvpvDisErr", &DsvpvDisErr, &b_DsvpvDisErr);
   fChain->SetBranchAddress("DsvpvDistance_2D", &DsvpvDistance_2D, &b_DsvpvDistance_2D);
   fChain->SetBranchAddress("DsvpvDisErr_2D", &DsvpvDisErr_2D, &b_DsvpvDisErr_2D);
   fChain->SetBranchAddress("DtktkRes_chi2ndf", &DtktkRes_chi2ndf, &b_DtktkRes_chi2ndf);
   fChain->SetBranchAddress("DtktkRes_chi2cl", &DtktkRes_chi2cl, &b_DtktkRes_chi2cl);
   fChain->SetBranchAddress("DtktkRes_alpha", &DtktkRes_alpha, &b_DtktkRes_alpha);
   fChain->SetBranchAddress("DtktkRes_svpvDistance", &DtktkRes_svpvDistance, &b_DtktkRes_svpvDistance);
   fChain->SetBranchAddress("DtktkRes_svpvDisErr", &DtktkRes_svpvDisErr, &b_DtktkRes_svpvDisErr);
   fChain->SetBranchAddress("DlxyBS", &DlxyBS, &b_DlxyBS);
   fChain->SetBranchAddress("DlxyBSErr", &DlxyBSErr, &b_DlxyBSErr);
   fChain->SetBranchAddress("DMaxDoca", &DMaxDoca, &b_DMaxDoca);
   fChain->SetBranchAddress("Dtrk1Pt", &Dtrk1Pt, &b_Dtrk1Pt);
   fChain->SetBranchAddress("Dtrk2Pt", &Dtrk2Pt, &b_Dtrk2Pt);
   fChain->SetBranchAddress("Dtrk1Eta", &Dtrk1Eta, &b_Dtrk1Eta);
   fChain->SetBranchAddress("Dtrk2Eta", &Dtrk2Eta, &b_Dtrk2Eta);
   fChain->SetBranchAddress("Dtrk1Phi", &Dtrk1Phi, &b_Dtrk1Phi);
   fChain->SetBranchAddress("Dtrk2Phi", &Dtrk2Phi, &b_Dtrk2Phi);
   fChain->SetBranchAddress("Dtrk1PtErr", &Dtrk1PtErr, &b_Dtrk1PtErr);
   fChain->SetBranchAddress("Dtrk2PtErr", &Dtrk2PtErr, &b_Dtrk2PtErr);
   fChain->SetBranchAddress("Dtrk1Dxy", &Dtrk1Dxy, &b_Dtrk1Dxy);
   fChain->SetBranchAddress("Dtrk2Dxy", &Dtrk2Dxy, &b_Dtrk2Dxy);
   fChain->SetBranchAddress("Dtrk1PixelHit", &Dtrk1PixelHit, &b_Dtrk1PixelHit);
   fChain->SetBranchAddress("Dtrk2PixelHit", &Dtrk2PixelHit, &b_Dtrk2PixelHit);
   fChain->SetBranchAddress("Dtrk1StripHit", &Dtrk1StripHit, &b_Dtrk1StripHit);
   fChain->SetBranchAddress("Dtrk2StripHit", &Dtrk2StripHit, &b_Dtrk2StripHit);
   fChain->SetBranchAddress("Dtrk1nStripLayer", &Dtrk1nStripLayer, &b_Dtrk1nStripLayer);
   fChain->SetBranchAddress("Dtrk2nStripLayer", &Dtrk2nStripLayer, &b_Dtrk2nStripLayer);
   fChain->SetBranchAddress("Dtrk1nPixelLayer", &Dtrk1nPixelLayer, &b_Dtrk1nPixelLayer);
   fChain->SetBranchAddress("Dtrk2nPixelLayer", &Dtrk2nPixelLayer, &b_Dtrk2nPixelLayer);
   fChain->SetBranchAddress("Dtrk1Chi2ndf", &Dtrk1Chi2ndf, &b_Dtrk1Chi2ndf);
   fChain->SetBranchAddress("Dtrk2Chi2ndf", &Dtrk2Chi2ndf, &b_Dtrk2Chi2ndf);
   fChain->SetBranchAddress("Dtrk1MassHypo", &Dtrk1MassHypo, &b_Dtrk1MassHypo);
   fChain->SetBranchAddress("Dtrk2MassHypo", &Dtrk2MassHypo, &b_Dtrk2MassHypo);
   fChain->SetBranchAddress("Dtrk1Algo", &Dtrk1Algo, &b_Dtrk1Algo);
   fChain->SetBranchAddress("Dtrk2Algo", &Dtrk2Algo, &b_Dtrk2Algo);
   fChain->SetBranchAddress("Dtrk1originalAlgo", &Dtrk1originalAlgo, &b_Dtrk1originalAlgo);
   fChain->SetBranchAddress("Dtrk2originalAlgo", &Dtrk2originalAlgo, &b_Dtrk2originalAlgo);
   fChain->SetBranchAddress("Dtrk1highPurity", &Dtrk1highPurity, &b_Dtrk1highPurity);
   fChain->SetBranchAddress("Dtrk2highPurity", &Dtrk2highPurity, &b_Dtrk2highPurity);
   fChain->SetBranchAddress("Dtrk3Pt", &Dtrk3Pt, &b_Dtrk3Pt);
   fChain->SetBranchAddress("Dtrk4Pt", &Dtrk4Pt, &b_Dtrk4Pt);
   fChain->SetBranchAddress("Dtrk3Eta", &Dtrk3Eta, &b_Dtrk3Eta);
   fChain->SetBranchAddress("Dtrk4Eta", &Dtrk4Eta, &b_Dtrk4Eta);
   fChain->SetBranchAddress("Dtrk3Phi", &Dtrk3Phi, &b_Dtrk3Phi);
   fChain->SetBranchAddress("Dtrk4Phi", &Dtrk4Phi, &b_Dtrk4Phi);
   fChain->SetBranchAddress("Dtrk3PtErr", &Dtrk3PtErr, &b_Dtrk3PtErr);
   fChain->SetBranchAddress("Dtrk4PtErr", &Dtrk4PtErr, &b_Dtrk4PtErr);
   fChain->SetBranchAddress("Dtrk3Dxy", &Dtrk3Dxy, &b_Dtrk3Dxy);
   fChain->SetBranchAddress("Dtrk4Dxy", &Dtrk4Dxy, &b_Dtrk4Dxy);
   fChain->SetBranchAddress("Dtrk3PixelHit", &Dtrk3PixelHit, &b_Dtrk3PixelHit);
   fChain->SetBranchAddress("Dtrk4PixelHit", &Dtrk4PixelHit, &b_Dtrk4PixelHit);
   fChain->SetBranchAddress("Dtrk3StripHit", &Dtrk3StripHit, &b_Dtrk3StripHit);
   fChain->SetBranchAddress("Dtrk4StripHit", &Dtrk4StripHit, &b_Dtrk4StripHit);
   fChain->SetBranchAddress("Dtrk3nStripLayer", &Dtrk3nStripLayer, &b_Dtrk3nStripLayer);
   fChain->SetBranchAddress("Dtrk4nStripLayer", &Dtrk4nStripLayer, &b_Dtrk4nStripLayer);
   fChain->SetBranchAddress("Dtrk3nPixelLayer", &Dtrk3nPixelLayer, &b_Dtrk3nPixelLayer);
   fChain->SetBranchAddress("Dtrk4nPixelLayer", &Dtrk4nPixelLayer, &b_Dtrk4nPixelLayer);
   fChain->SetBranchAddress("Dtrk3Chi2ndf", &Dtrk3Chi2ndf, &b_Dtrk3Chi2ndf);
   fChain->SetBranchAddress("Dtrk4Chi2ndf", &Dtrk4Chi2ndf, &b_Dtrk4Chi2ndf);
   fChain->SetBranchAddress("Dtrk3MassHypo", &Dtrk3MassHypo, &b_Dtrk3MassHypo);
   fChain->SetBranchAddress("Dtrk4MassHypo", &Dtrk4MassHypo, &b_Dtrk4MassHypo);
   fChain->SetBranchAddress("Dtrk3Algo", &Dtrk3Algo, &b_Dtrk3Algo);
   fChain->SetBranchAddress("Dtrk4Algo", &Dtrk4Algo, &b_Dtrk4Algo);
   fChain->SetBranchAddress("Dtrk3originalAlgo", &Dtrk3originalAlgo, &b_Dtrk3originalAlgo);
   fChain->SetBranchAddress("Dtrk4originalAlgo", &Dtrk4originalAlgo, &b_Dtrk4originalAlgo);
   fChain->SetBranchAddress("Dtrk3highPurity", &Dtrk3highPurity, &b_Dtrk3highPurity);
   fChain->SetBranchAddress("Dtrk4highPurity", &Dtrk4highPurity, &b_Dtrk4highPurity);
   fChain->SetBranchAddress("Dtrk1Idx", &Dtrk1Idx, &b_Dtrk1Idx);
   fChain->SetBranchAddress("Dtrk2Idx", &Dtrk2Idx, &b_Dtrk2Idx);
   fChain->SetBranchAddress("Dtrk1EtaErr", &Dtrk1EtaErr, &b_Dtrk1EtaErr);
   fChain->SetBranchAddress("Dtrk2EtaErr", &Dtrk2EtaErr, &b_Dtrk2EtaErr);
   fChain->SetBranchAddress("Dtrk1PhiErr", &Dtrk1PhiErr, &b_Dtrk1PhiErr);
   fChain->SetBranchAddress("Dtrk2PhiErr", &Dtrk2PhiErr, &b_Dtrk2PhiErr);
   fChain->SetBranchAddress("Dtrk1Y", &Dtrk1Y, &b_Dtrk1Y);
   fChain->SetBranchAddress("Dtrk2Y", &Dtrk2Y, &b_Dtrk2Y);
   fChain->SetBranchAddress("Dtrk1D0Err", &Dtrk1D0Err, &b_Dtrk1D0Err);
   fChain->SetBranchAddress("Dtrk2D0Err", &Dtrk2D0Err, &b_Dtrk2D0Err);
   fChain->SetBranchAddress("Dtrk1MVAVal", &Dtrk1MVAVal, &b_Dtrk1MVAVal);
   fChain->SetBranchAddress("Dtrk2MVAVal", &Dtrk2MVAVal, &b_Dtrk2MVAVal);
   fChain->SetBranchAddress("Dtrk1Quality", &Dtrk1Quality, &b_Dtrk1Quality);
   fChain->SetBranchAddress("Dtrk2Quality", &Dtrk2Quality, &b_Dtrk2Quality);
   fChain->SetBranchAddress("Dtrk3Idx", &Dtrk3Idx, &b_Dtrk3Idx);
   fChain->SetBranchAddress("Dtrk4Idx", &Dtrk4Idx, &b_Dtrk4Idx);
   fChain->SetBranchAddress("Dtrk3EtaErr", &Dtrk3EtaErr, &b_Dtrk3EtaErr);
   fChain->SetBranchAddress("Dtrk4EtaErr", &Dtrk4EtaErr, &b_Dtrk4EtaErr);
   fChain->SetBranchAddress("Dtrk3PhiErr", &Dtrk3PhiErr, &b_Dtrk3PhiErr);
   fChain->SetBranchAddress("Dtrk4PhiErr", &Dtrk4PhiErr, &b_Dtrk4PhiErr);
   fChain->SetBranchAddress("Dtrk3Y", &Dtrk3Y, &b_Dtrk3Y);
   fChain->SetBranchAddress("Dtrk4Y", &Dtrk4Y, &b_Dtrk4Y);
   fChain->SetBranchAddress("Dtrk3D0Err", &Dtrk3D0Err, &b_Dtrk3D0Err);
   fChain->SetBranchAddress("Dtrk4D0Err", &Dtrk4D0Err, &b_Dtrk4D0Err);
   fChain->SetBranchAddress("Dtrk3MVAVal", &Dtrk3MVAVal, &b_Dtrk3MVAVal);
   fChain->SetBranchAddress("Dtrk4MVAVal", &Dtrk4MVAVal, &b_Dtrk4MVAVal);
   fChain->SetBranchAddress("Dtrk3Quality", &Dtrk3Quality, &b_Dtrk3Quality);
   fChain->SetBranchAddress("Dtrk4Quality", &Dtrk4Quality, &b_Dtrk4Quality);
   fChain->SetBranchAddress("DtktkResmass", &DtktkResmass, &b_DtktkResmass);
   fChain->SetBranchAddress("DtktkRespt", &DtktkRespt, &b_DtktkRespt);
   fChain->SetBranchAddress("DtktkReseta", &DtktkReseta, &b_DtktkReseta);
   fChain->SetBranchAddress("DtktkResphi", &DtktkResphi, &b_DtktkResphi);
   fChain->SetBranchAddress("DRestrk1Pt", &DRestrk1Pt, &b_DRestrk1Pt);
   fChain->SetBranchAddress("DRestrk1Eta", &DRestrk1Eta, &b_DRestrk1Eta);
   fChain->SetBranchAddress("DRestrk1Phi", &DRestrk1Phi, &b_DRestrk1Phi);
   fChain->SetBranchAddress("DRestrk1Y", &DRestrk1Y, &b_DRestrk1Y);
   fChain->SetBranchAddress("DRestrk1Dxy", &DRestrk1Dxy, &b_DRestrk1Dxy);
   fChain->SetBranchAddress("DRestrk1D0Err", &DRestrk1D0Err, &b_DRestrk1D0Err);
   fChain->SetBranchAddress("DRestrk1originalAlgo", &DRestrk1originalAlgo, &b_DRestrk1originalAlgo);
   fChain->SetBranchAddress("DRestrk2Pt", &DRestrk2Pt, &b_DRestrk2Pt);
   fChain->SetBranchAddress("DRestrk2Eta", &DRestrk2Eta, &b_DRestrk2Eta);
   fChain->SetBranchAddress("DRestrk2Phi", &DRestrk2Phi, &b_DRestrk2Phi);
   fChain->SetBranchAddress("DRestrk2Y", &DRestrk2Y, &b_DRestrk2Y);
   fChain->SetBranchAddress("DRestrk2Dxy", &DRestrk2Dxy, &b_DRestrk2Dxy);
   fChain->SetBranchAddress("DRestrk2D0Err", &DRestrk2D0Err, &b_DRestrk2D0Err);
   fChain->SetBranchAddress("DRestrk2originalAlgo", &DRestrk2originalAlgo, &b_DRestrk2originalAlgo);
   fChain->SetBranchAddress("DRestrk3Pt", &DRestrk3Pt, &b_DRestrk3Pt);
   fChain->SetBranchAddress("DRestrk3Eta", &DRestrk3Eta, &b_DRestrk3Eta);
   fChain->SetBranchAddress("DRestrk3Phi", &DRestrk3Phi, &b_DRestrk3Phi);
   fChain->SetBranchAddress("DRestrk3Y", &DRestrk3Y, &b_DRestrk3Y);
   fChain->SetBranchAddress("DRestrk3Dxy", &DRestrk3Dxy, &b_DRestrk3Dxy);
   fChain->SetBranchAddress("DRestrk3D0Err", &DRestrk3D0Err, &b_DRestrk3D0Err);
   fChain->SetBranchAddress("DRestrk3originalAlgo", &DRestrk3originalAlgo, &b_DRestrk3originalAlgo);
   fChain->SetBranchAddress("DRestrk4Pt", &DRestrk4Pt, &b_DRestrk4Pt);
   fChain->SetBranchAddress("DRestrk4Eta", &DRestrk4Eta, &b_DRestrk4Eta);
   fChain->SetBranchAddress("DRestrk4Phi", &DRestrk4Phi, &b_DRestrk4Phi);
   fChain->SetBranchAddress("DRestrk4Y", &DRestrk4Y, &b_DRestrk4Y);
   fChain->SetBranchAddress("DRestrk4Dxy", &DRestrk4Dxy, &b_DRestrk4Dxy);
   fChain->SetBranchAddress("DRestrk4D0Err", &DRestrk4D0Err, &b_DRestrk4D0Err);
   fChain->SetBranchAddress("DRestrk4originalAlgo", &DRestrk4originalAlgo, &b_DRestrk4originalAlgo);
   fChain->SetBranchAddress("Dgen", &Dgen, &b_Dgen);
   fChain->SetBranchAddress("DgenIndex", &DgenIndex, &b_DgenIndex);
   fChain->SetBranchAddress("DgennDa", &DgennDa, &b_DgennDa);
   fChain->SetBranchAddress("Dgenpt", &Dgenpt, &b_Dgenpt);
   fChain->SetBranchAddress("Dgeneta", &Dgeneta, &b_Dgeneta);
   fChain->SetBranchAddress("Dgenphi", &Dgenphi, &b_Dgenphi);
   fChain->SetBranchAddress("Dgeny", &Dgeny, &b_Dgeny);
   fChain->SetBranchAddress("DgencollisionId", &DgencollisionId, &b_DgencollisionId);
   fChain->SetBranchAddress("DgenBAncestorpt", &DgenBAncestorpt, &b_DgenBAncestorpt);
   fChain->SetBranchAddress("DgenBAncestorpdgId", &DgenBAncestorpdgId, &b_DgenBAncestorpdgId);
   fChain->SetBranchAddress("Gsize", &Gsize, &b_Gsize);
   fChain->SetBranchAddress("Gy", &Gy, &b_Gy);
   fChain->SetBranchAddress("Geta", &Geta, &b_Geta);
   fChain->SetBranchAddress("Gphi", &Gphi, &b_Gphi);
   fChain->SetBranchAddress("Gpt", &Gpt, &b_Gpt);
   fChain->SetBranchAddress("GpdgId", &GpdgId, &b_GpdgId);
   fChain->SetBranchAddress("GcollisionId", &GcollisionId, &b_GcollisionId);
   fChain->SetBranchAddress("GisSignal", &GisSignal, &b_GisSignal);
   fChain->SetBranchAddress("GBAncestorpt", &GBAncestorpt, &b_GBAncestorpt);
   fChain->SetBranchAddress("GBAncestorpdgId", &GBAncestorpdgId, &b_GBAncestorpdgId);
   fChain->SetBranchAddress("Gtk1pt", &Gtk1pt, &b_Gtk1pt);
   fChain->SetBranchAddress("Gtk1eta", &Gtk1eta, &b_Gtk1eta);
   fChain->SetBranchAddress("Gtk1y", &Gtk1y, &b_Gtk1y);
   fChain->SetBranchAddress("Gtk1phi", &Gtk1phi, &b_Gtk1phi);
   fChain->SetBranchAddress("Gtk2pt", &Gtk2pt, &b_Gtk2pt);
   fChain->SetBranchAddress("Gtk2eta", &Gtk2eta, &b_Gtk2eta);
   fChain->SetBranchAddress("Gtk2y", &Gtk2y, &b_Gtk2y);
   fChain->SetBranchAddress("Gtk2phi", &Gtk2phi, &b_Gtk2phi);
   fChain->SetBranchAddress("pthatweight", &pthatweight, &b_pthatweight);
   fChain->SetBranchAddress("maxDgenpt", &maxDgenpt, &b_maxDgenpt);
   Notify();
}

Bool_t d_jet::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void d_jet::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

Bool_t d_jet::DPassTopoCuts (Float_t alpha, Float_t vertexP, Float_t d02sigma) {

  if (alpha < 0.12 && vertexP > 0.1 && d02sigma > 4.06) return 1;
  else return 0;

}


Bool_t d_jet::DPassCuts(Float_t dpt, Float_t deta)
{

  Float_t dptMax = 500, dptMin = 10, detaMax = 2., detaMin = -2.;
  if (dpt < dptMax && dpt>dptMin && deta<detaMax && deta>detaMin)  return 1;
  else return 0;
}

Bool_t d_jet::JetPassCuts(Float_t jpt, Float_t jeta, Float_t refjpt)
{
  Float_t jptMax = 1000, jptMin = 80, jetaMax = 1.6, jetaMin = -1.6;
  
  if (jpt < jptMax && jpt>jptMin && jeta<jetaMax && jeta>jetaMin && refjpt > 0)  return 1;
  else return 0;

  
}

Float_t d_jet::dR(Float_t deta, Float_t dphi, Float_t jeta, Float_t jphi) {

  Float_t deltaphi = acos(cos(dphi-jphi));
  Float_t deltaeta = fabs (deta - jeta);
  Float_t dR = sqrt(deltaphi*deltaphi + deltaeta*deltaeta);
  return dR;
}


#endif // #ifdef d_jet_cxx
