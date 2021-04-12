/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface TSCellularPlanTransferItemCell : UITableViewCell {

	UILabel* _title;
	UILabel* _planInfo;

}

@property (retain) UILabel * title;                 //@synthesize title=_title - In the implementation block
@property (retain) UILabel * planInfo;              //@synthesize planInfo=_planInfo - In the implementation block
-(UILabel *)title;
-(void)setTitle:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)planInfo;
-(void)setPlanInfo:(UILabel *)arg1 ;
@end

