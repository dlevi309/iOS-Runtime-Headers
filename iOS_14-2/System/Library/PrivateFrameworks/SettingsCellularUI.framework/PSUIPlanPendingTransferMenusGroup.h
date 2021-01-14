/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSSpecifier, CTCellularPlanPendingTransfer, PSListController, CTCellularPlanManager, PSUICellularPlanManagerCache, NSString;

@interface PSUIPlanPendingTransferMenusGroup : NSObject <PSSpecifierGroup> {

	PSSpecifier* _parentSpecifier;
	CTCellularPlanPendingTransfer* _planPendingTransfer;
	PSSpecifier* _groupSpecifier;
	PSListController* _listController;
	CTCellularPlanManager* _cellularPlanManager;
	PSUICellularPlanManagerCache* _planManagerCache;

}

@property (nonatomic,retain) PSSpecifier * parentSpecifier;                                    //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (nonatomic,retain) CTCellularPlanPendingTransfer * planPendingTransfer;              //@synthesize planPendingTransfer=_planPendingTransfer - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                              //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (assign,nonatomic,__weak) PSListController * listController;                         //@synthesize listController=_listController - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * cellularPlanManager;                      //@synthesize cellularPlanManager=_cellularPlanManager - In the implementation block
@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;                  //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(CTCellularPlanManager *)cellularPlanManager;
-(void)setListController:(PSListController *)arg1 ;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(void)addSpecifierForHeaderString:(id)arg1 ;
-(id)activatePlanSpecifier;
-(id)planPendingTransferLabel:(id)arg1 ;
-(id)planPendingTransferNumber:(id)arg1 ;
-(void)removePlanPendingTransfer:(id)arg1 ;
-(id)cancelConsentRequestSpecifier;
-(id)planActivationInfo;
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(CTCellularPlanPendingTransfer *)planPendingTransfer;
-(void)setPlanPendingTransfer:(CTCellularPlanPendingTransfer *)arg1 ;
@end

