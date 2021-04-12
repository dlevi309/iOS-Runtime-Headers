/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <AppleAccountUI/AAUIBuddyView.h>

@class UIStackView, UILabel;

@interface AAUIHeaderView : AAUIBuddyView {

	UIStackView* _stackView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_updateLabelFonts;
-(UILabel *)messageLabel;
-(void)_updateStackViewSpacing;
@end

