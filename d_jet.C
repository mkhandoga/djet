#define d_jet_cxx
#include "d_jet.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>

void d_jet::Loop()
{
  
   if (fChain == 0) return;
   
   // TCanvas *c1 = new TCanvas("c1","Pt",1200,600);
  
   
   TH1F *DgenJetgenDR = new TH1F("DgenJetgenDR","DgenJetgenDR", 10, 0, 0.5 ); 
   DgenJetgenDR->Sumw2();
   TH1F *DgenJetrecDR = new TH1F("DgenJetrecDR","DgenJetrecDR",10, 0, 0.5 ); 
   DgenJetrecDR->Sumw2();
   TH1F *Ratio_b = new TH1F("Ratio_b","Ratio_b", 10, 0, 0.5 ); 
   Ratio_b->Sumw2();
   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if (Gsize == 0) continue;
      if (jentry % 1000 == 0) cout << "event number " << jentry << endl;
         for (int indexD = 0; indexD < Dsize; indexD++) {
	         if ((*Dgen)[indexD]!=23333) continue;

		if ((DPassCuts((*Dgenpt)[indexD], (*Dgeneta)[indexD])&&DPassTopoCuts((*Dalpha)[indexD], (*Dchi2cl)[indexD], ((*DsvpvDistance)[indexD]/(*DsvpvDisErr)[indexD])))==0) continue;
	
		for (int indexJet = 0; indexJet <  njet_akpu3pf; indexJet++) {
		 
	  	  if (JetPassCuts((*jetptCorr_akpu3pf)[indexJet],(*jeteta_akpu3pf)[indexJet],(*gjetpt_akpu3pf)[indexJet] ) == 0) continue;
	    
	    Float_t dRDgenJetrec = dR((*Dgeneta)[indexD], (*Dgenphi)[indexD], (*jeteta_akpu3pf)[indexJet], (*jetphi_akpu3pf)[indexJet]);
	  	  if (dRDgenJetrec > 0.5) continue;

		  
	    Float_t dRDgenJetgen = dR((*Dgeneta)[indexD], (*Dgenphi)[indexD], (*gjeteta_akpu3pf)[indexJet], (*gjetphi_akpu3pf)[indexJet]);
	  	   

	    cout << "event number" << jentry << " genDpt: " << (*Dgenpt)[indexD] << " recoJpt: " <<  (*jetptCorr_akpu3pf)[indexJet] << " dRgen: "<< dRDgenJetgen<<" dRrec " << dRDgenJetrec <<endl;
	    //	    if ((*Dgenpt)[indexD]>(*jetpt_akpu3pf)[indexJet] ) cout << "alarm!!! " << endl; 
	   
	    DgenJetgenDR->Fill(dRDgenJetgen, pthatweight);
	    DgenJetrecDR->Fill(dRDgenJetrec, pthatweight);
	   
	   
		}
	
         } 


   }
   
     TH1F *Ratio = (TH1F*) DgenJetrecDR->Clone("Ratio");
      Ratio->Divide(DgenJetgenDR);
   Ratio_b->Divide(DgenJetrecDR, DgenJetgenDR, 1,1, "B");
   Ratio_b->GetXaxis()->SetTitle("#Delta R");
   Ratio_b->GetYaxis()->SetTitle("D_{gen} #frac{Jet_{rec}}{Jet_{gen}}");
   TFile *fout = new TFile("DJetDR.root","recreate");

   DgenJetgenDR->Write();
   DgenJetrecDR->Write();
   Ratio->Write();
   Ratio_b->Write();
   fout->Close();
   
}
