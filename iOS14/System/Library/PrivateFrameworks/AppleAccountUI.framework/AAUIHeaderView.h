/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)_updateStackViewSpacing;
-(UILabel *)messageLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateLabelFonts;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

