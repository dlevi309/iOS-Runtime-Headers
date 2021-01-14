/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTitle:(UILabel *)arg1 ;
-(void)setIcon:(BOOL)arg1 ;
-(UILabel *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)planInfo;
-(void)setDisable;
-(void)setPlanInfo:(UILabel *)arg1 ;
@end

