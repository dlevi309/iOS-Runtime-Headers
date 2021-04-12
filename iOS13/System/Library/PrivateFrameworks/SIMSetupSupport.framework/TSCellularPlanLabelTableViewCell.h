/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UITableViewCell.h>

@class CNGeminiBadge, UILabel;

@interface TSCellularPlanLabelTableViewCell : UITableViewCell {

	CNGeminiBadge* _badge;
	UILabel* _label;

}

@property (retain) CNGeminiBadge * badge;              //@synthesize badge=_badge - In the implementation block
@property (retain) UILabel * label;                    //@synthesize label=_label - In the implementation block
-(void)setBadge:(CNGeminiBadge *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CNGeminiBadge *)badge;
-(void)setLabel:(id)arg1 badge:(id)arg2 ;
-(void)setLabelWithNoBadge:(id)arg1 ;
@end

