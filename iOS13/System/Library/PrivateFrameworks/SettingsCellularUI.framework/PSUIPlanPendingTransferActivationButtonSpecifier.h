/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanPendingTransfer, CTCellularPlanManager;

@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier {

	CTCellularPlanPendingTransfer* _plan;
	CTCellularPlanManager* _cellularPlanManager;

}

@property (nonatomic,retain) CTCellularPlanPendingTransfer * plan;                     //@synthesize plan=_plan - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * cellularPlanManager;              //@synthesize cellularPlanManager=_cellularPlanManager - In the implementation block
-(CTCellularPlanPendingTransfer *)plan;
-(void)setPlan:(CTCellularPlanPendingTransfer *)arg1 ;
-(CTCellularPlanManager *)cellularPlanManager;
-(id)initWithListController:(id)arg1 planPendingTransfer:(id)arg2 ;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(void)setSpecifierProperties;
-(void)activatePlanPendingTransfer:(id)arg1 ;
@end

