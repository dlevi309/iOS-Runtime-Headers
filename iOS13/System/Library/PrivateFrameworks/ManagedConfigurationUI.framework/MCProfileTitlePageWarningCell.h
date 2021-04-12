/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIView;

@interface MCProfileTitlePageWarningCell : UITableViewCell {

	UILabel* _label;
	UIView* _separatorLine;

}

@property (nonatomic,retain) UIView * separatorLine;              //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,readonly) UILabel * label;                   //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(void)_updateConstraintsWithLabel:(id)arg1 ;
@end

