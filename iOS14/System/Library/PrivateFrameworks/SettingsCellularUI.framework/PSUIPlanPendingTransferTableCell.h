/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setView:(UIImageView *)arg1 ;
-(UIImageView *)view;
-(void)_setView;
-(CTCellularPlanPendingTransfer *)planPendingTransfer;
-(void)setPlanPendingTransfer:(CTCellularPlanPendingTransfer *)arg1 ;
@end

