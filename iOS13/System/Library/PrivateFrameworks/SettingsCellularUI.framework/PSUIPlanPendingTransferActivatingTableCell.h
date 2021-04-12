/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class CTCellularPlanPendingTransfer;

@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell {

	CTCellularPlanPendingTransfer* _planPendingTransfer;

}

@property (nonatomic,retain) CTCellularPlanPendingTransfer * planPendingTransfer;              //@synthesize planPendingTransfer=_planPendingTransfer - In the implementation block
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(CTCellularPlanPendingTransfer *)planPendingTransfer;
-(void)setPlanPendingTransfer:(CTCellularPlanPendingTransfer *)arg1 ;
-(id)_setStatusLabelText;
@end

