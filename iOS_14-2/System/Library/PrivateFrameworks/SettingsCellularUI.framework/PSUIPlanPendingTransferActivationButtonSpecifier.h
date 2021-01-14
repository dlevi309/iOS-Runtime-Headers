/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CTCellularPlanManager *)cellularPlanManager;
-(void)setPlan:(CTCellularPlanPendingTransfer *)arg1 ;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(id)initWithListController:(id)arg1 planPendingTransfer:(id)arg2 ;
-(void)setSpecifierProperties;
-(void)activatePlanPendingTransfer:(id)arg1 ;
@end

