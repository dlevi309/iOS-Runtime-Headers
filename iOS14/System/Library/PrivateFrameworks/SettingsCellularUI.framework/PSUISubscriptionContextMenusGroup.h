/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSSpecifier, PSListController, PSUICallingSubgroup, PSUICarrierSpaceGroup, PSUINetworkSelectionSubgroup, PSUIMyNumberSubgroup, PSUINetworkSettingsSubgroup, PSUISIMSubgroup, PSUIDataModeSubgroup, PSUICoreTelephonyCallCache, PSSimStatusCache, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyDataCache, PSUICellularPlanManagerCache, CTCellularPlanManager, PSUICellularDataOptionsController, NSString;

@interface PSUISubscriptionContextMenusGroup : NSObject <PSSpecifierGroup> {

	BOOL _popViewControllerOnPlanDeletion;
	PSSpecifier* _parentSpecifier;
	PSSpecifier* _groupSpecifier;
	PSListController* _listController;
	PSUICallingSubgroup* _callingSubgroup;
	PSUICarrierSpaceGroup* _carrierSpaceSubgroup;
	PSUINetworkSelectionSubgroup* _networkSelectionSubgroup;
	PSUIMyNumberSubgroup* _myNumberSubgroup;
	PSUINetworkSettingsSubgroup* _networkSettingsSubgroup;
	PSUISIMSubgroup* _simSubgroup;
	PSUIDataModeSubgroup* _dataModeSubgroup;
	PSUICoreTelephonyCallCache* _callCache;
	PSSimStatusCache* _simStatusCache;
	PSUICoreTelephonyCarrierBundleCache* _carrierBundleCache;
	PSUICoreTelephonyDataCache* _dataCache;
	PSUICellularPlanManagerCache* _planManagerCache;
	CTCellularPlanManager* _cellularPlanManager;
	PSUICellularDataOptionsController* _roamingSpecifiersSubgroup;

}

@property (assign,nonatomic,__weak) PSListController * listController;                                   //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic) BOOL popViewControllerOnPlanDeletion;                                       //@synthesize popViewControllerOnPlanDeletion=_popViewControllerOnPlanDeletion - In the implementation block
@property (nonatomic,retain) PSUICallingSubgroup * callingSubgroup;                                      //@synthesize callingSubgroup=_callingSubgroup - In the implementation block
@property (nonatomic,retain) PSUICarrierSpaceGroup * carrierSpaceSubgroup;                               //@synthesize carrierSpaceSubgroup=_carrierSpaceSubgroup - In the implementation block
@property (nonatomic,retain) PSUINetworkSelectionSubgroup * networkSelectionSubgroup;                    //@synthesize networkSelectionSubgroup=_networkSelectionSubgroup - In the implementation block
@property (nonatomic,retain) PSUIMyNumberSubgroup * myNumberSubgroup;                                    //@synthesize myNumberSubgroup=_myNumberSubgroup - In the implementation block
@property (nonatomic,retain) PSUINetworkSettingsSubgroup * networkSettingsSubgroup;                      //@synthesize networkSettingsSubgroup=_networkSettingsSubgroup - In the implementation block
@property (nonatomic,retain) PSUISIMSubgroup * simSubgroup;                                              //@synthesize simSubgroup=_simSubgroup - In the implementation block
@property (nonatomic,retain) PSUIDataModeSubgroup * dataModeSubgroup;                                    //@synthesize dataModeSubgroup=_dataModeSubgroup - In the implementation block
@property (nonatomic,retain) PSUICoreTelephonyCallCache * callCache;                                     //@synthesize callCache=_callCache - In the implementation block
@property (nonatomic,retain) PSSimStatusCache * simStatusCache;                                          //@synthesize simStatusCache=_simStatusCache - In the implementation block
@property (nonatomic,retain) PSUICoreTelephonyCarrierBundleCache * carrierBundleCache;                   //@synthesize carrierBundleCache=_carrierBundleCache - In the implementation block
@property (nonatomic,retain) PSUICoreTelephonyDataCache * dataCache;                                     //@synthesize dataCache=_dataCache - In the implementation block
@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;                            //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * cellularPlanManager;                                //@synthesize cellularPlanManager=_cellularPlanManager - In the implementation block
@property (nonatomic,retain) PSUICellularDataOptionsController * roamingSpecifiersSubgroup;              //@synthesize roamingSpecifiersSubgroup=_roamingSpecifiersSubgroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * parentSpecifier;                                              //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                                        //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataCache:(PSUICoreTelephonyDataCache *)arg1 ;
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(CTCellularPlanManager *)cellularPlanManager;
-(void)setListController:(PSListController *)arg1 ;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(BOOL)popViewControllerOnPlanDeletion;
-(id)initWithFactory:(id)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(void)setPopViewControllerOnPlanDeletion:(BOOL)arg1 ;
-(PSUICoreTelephonyDataCache *)dataCache;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(PSSimStatusCache *)simStatusCache;
-(void)setSimStatusCache:(PSSimStatusCache *)arg1 ;
-(void)viewWillAppear;
-(BOOL)planManagerCacheHasMoreThanOnePlanItem;
-(PSUICallingSubgroup *)callingSubgroup;
-(void)setCallingSubgroup:(PSUICallingSubgroup *)arg1 ;
-(PSUICarrierSpaceGroup *)carrierSpaceSubgroup;
-(void)setCarrierSpaceSubgroup:(PSUICarrierSpaceGroup *)arg1 ;
-(PSUINetworkSelectionSubgroup *)networkSelectionSubgroup;
-(void)setNetworkSelectionSubgroup:(PSUINetworkSelectionSubgroup *)arg1 ;
-(PSUIMyNumberSubgroup *)myNumberSubgroup;
-(void)setMyNumberSubgroup:(PSUIMyNumberSubgroup *)arg1 ;
-(PSUINetworkSettingsSubgroup *)networkSettingsSubgroup;
-(void)setNetworkSettingsSubgroup:(PSUINetworkSettingsSubgroup *)arg1 ;
-(PSUISIMSubgroup *)simSubgroup;
-(void)setSimSubgroup:(PSUISIMSubgroup *)arg1 ;
-(PSUIDataModeSubgroup *)dataModeSubgroup;
-(void)setDataModeSubgroup:(PSUIDataModeSubgroup *)arg1 ;
-(PSUICoreTelephonyCallCache *)callCache;
-(void)setCallCache:(PSUICoreTelephonyCallCache *)arg1 ;
-(PSUICoreTelephonyCarrierBundleCache *)carrierBundleCache;
-(void)setCarrierBundleCache:(PSUICoreTelephonyCarrierBundleCache *)arg1 ;
-(PSUICellularDataOptionsController *)roamingSpecifiersSubgroup;
-(void)setRoamingSpecifiersSubgroup:(PSUICellularDataOptionsController *)arg1 ;
@end

