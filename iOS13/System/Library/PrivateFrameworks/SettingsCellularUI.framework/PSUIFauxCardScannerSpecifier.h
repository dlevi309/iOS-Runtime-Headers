/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>
#import <libobjc.A.dylib/TSSIMSetupDelegate.h>

@class CTCellularPlanManager, PSListController, TSSIMSetupFlow, NSString;

@interface PSUIFauxCardScannerSpecifier : PSSpecifier <TSSIMSetupDelegate> {

	CTCellularPlanManager* _planManager;
	PSListController* _hostController;
	TSSIMSetupFlow* _flow;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (retain) TSSIMSetupFlow * flow;                                           //@synthesize flow=_flow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSSIMSetupFlow *)flow;
-(void)setFlow:(TSSIMSetupFlow *)arg1 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 ;
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 planManager:(id)arg3 ;
-(void)fauxCardScannerCellPressed:(id)arg1 ;
-(void)simSetupFlowCompleted;
-(long long)userConsentResponse;
@end

