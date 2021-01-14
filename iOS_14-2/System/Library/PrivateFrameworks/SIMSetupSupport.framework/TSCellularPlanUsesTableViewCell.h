/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, CNGeminiBadge;

@interface TSCellularPlanUsesTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	CNGeminiBadge* _badge;

}

@property (retain) CNGeminiBadge * badge;                   //@synthesize badge=_badge - In the implementation block
@property (retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setBadge:(CNGeminiBadge *)arg1 ;
-(CNGeminiBadge *)badge;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLabel:(id)arg1 description:(id)arg2 badge:(id)arg3 ;
@end

