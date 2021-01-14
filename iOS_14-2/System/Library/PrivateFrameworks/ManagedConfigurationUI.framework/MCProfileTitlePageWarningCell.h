/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(UILabel *)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(void)_updateConstraintsWithLabel:(id)arg1 ;
@end

