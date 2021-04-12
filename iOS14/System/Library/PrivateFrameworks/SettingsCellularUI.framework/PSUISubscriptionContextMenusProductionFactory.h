/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSUISubscriptionContextMenusFactory.h>

@class PSListController, PSSpecifier;

@interface PSUISubscriptionContextMenusProductionFactory : NSObject <PSUISubscriptionContextMenusFactory> {

	BOOL _popViewControllerOnPlanRemoval;
	PSListController* _hostController;
	PSSpecifier* _parentSpecifier;
	PSSpecifier* _groupSpecifier;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * parentSpecifier;                  //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (assign,nonatomic) BOOL popViewControllerOnPlanRemoval;                   //@synthesize popViewControllerOnPlanRemoval=_popViewControllerOnPlanRemoval - In the implementation block
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)shouldPopViewControllerOnPlanRemoval;
-(id)createCallingSubgroup;
-(id)createCarrierSpaceSubgroup;
-(id)createNetworkSelectionSubgroup;
-(id)createMyNumberSubgroup;
-(id)createNetworkSettingsSubgroup;
-(id)createSimSubgroup;
-(id)createCallCache;
-(id)createSimStatusCache;
-(id)createCarrierBundleCache;
-(id)createDataCache;
-(id)createCellularPlanManagerCache;
-(id)createCellularPlanManager;
-(id)createDataModeSubgroup;
-(id)createRoamingSpecifiersSubgroup;
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 groupSpecifier:(id)arg3 popViewControllerOnPlanRemoval:(BOOL)arg4 ;
-(BOOL)popViewControllerOnPlanRemoval;
-(void)setPopViewControllerOnPlanRemoval:(BOOL)arg1 ;
@end

