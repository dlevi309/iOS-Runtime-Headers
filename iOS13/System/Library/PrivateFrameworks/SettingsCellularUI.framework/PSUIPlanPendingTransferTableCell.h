/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class UIImageView, CTCellularPlanPendingTransfer;

@interface PSUIPlanPendingTransferTableCell : PSUIDanglingPlanTableCell {

	UIImageView* _view;
	CTCellularPlanPendingTransfer* _planPendingTransfer;

}

@property (nonatomic,retain) UIImageView * view;                                               //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) CTCellularPlanPendingTransfer * planPendingTransfer;              //@synthesize planPendingTransfer=_planPendingTransfer - In the implementation block
-(UIImageView *)view;
-(void)setView:(UIImageView *)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)_setView;
-(CTCellularPlanPendingTransfer *)planPendingTransfer;
-(void)setPlanPendingTransfer:(CTCellularPlanPendingTransfer *)arg1 ;
@end

