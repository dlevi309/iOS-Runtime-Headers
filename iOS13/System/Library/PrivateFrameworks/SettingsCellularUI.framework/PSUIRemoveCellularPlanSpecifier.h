/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSConfirmationSpecifier.h>

@class PSUICellularPlanUniversalReference, CTCellularPlanManager, PSUICellularPlanManagerCache, PSListController;

@interface PSUIRemoveCellularPlanSpecifier : PSConfirmationSpecifier {

	BOOL _popViewControllerOnPlanDeletion;
	PSUICellularPlanUniversalReference* _planReference;
	CTCellularPlanManager* _cellularPlanManager;
	PSUICellularPlanManagerCache* _planManagerCache;
	PSListController* _hostController;

}

@property (nonatomic,retain) PSUICellularPlanUniversalReference * planReference;              //@synthesize planReference=_planReference - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * cellularPlanManager;                     //@synthesize cellularPlanManager=_cellularPlanManager - In the implementation block
@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;                 //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (assign,nonatomic,__weak) PSListController * hostController;                        //@synthesize hostController=_hostController - In the implementation block
@property (assign,nonatomic) BOOL popViewControllerOnPlanDeletion;                            //@synthesize popViewControllerOnPlanDeletion=_popViewControllerOnPlanDeletion - In the implementation block
-(CTCellularPlanManager *)cellularPlanManager;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(PSUICellularPlanUniversalReference *)planReference;
-(void)setPlanReference:(PSUICellularPlanUniversalReference *)arg1 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(id)initWithPlanUniversalReference:(id)arg1 cellularPlanManager:(id)arg2 planManagerCache:(id)arg3 hostController:(id)arg4 popViewControllerOnPlanDeletion:(BOOL)arg5 ;
-(void)alignLeft;
-(BOOL)popViewControllerOnPlanDeletion;
-(void)setPopViewControllerOnPlanDeletion:(BOOL)arg1 ;
-(void)removeCellularPlan:(id)arg1 ;
-(void)removeCellularPlanConfirmed:(id)arg1 ;
@end

