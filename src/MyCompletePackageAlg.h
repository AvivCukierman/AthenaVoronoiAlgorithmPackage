#ifndef MYCOMPLETEPACKAGE_MYCOMPLETEPACKAGEALG_H
#define MYCOMPLETEPACKAGE_MYCOMPLETEPACKAGEALG_H 1

#include "AthAnalysisBaseComps/AthAnalysisAlgorithm.h"
#include "JetRecTools/JetRecTools/VoronoiWeightTool.h"
#include "JetRecTools/JetRecTools/JetConstituentModSequence.h"



class MyCompletePackageAlg: public ::AthAnalysisAlgorithm { 
 public: 
  MyCompletePackageAlg( const std::string& name, ISvcLocator* pSvcLocator );
  virtual ~MyCompletePackageAlg(); 

  virtual StatusCode  initialize();
  virtual StatusCode  execute();
  virtual StatusCode  finalize();
  
  virtual StatusCode beginInputFile();

 private: 
  ToolHandle<IJetExecuteTool> m_JetConstituentModSequence;

}; 

#endif //> !MYCOMPLETEPACKAGE_MYCOMPLETEPACKAGEALG_H
