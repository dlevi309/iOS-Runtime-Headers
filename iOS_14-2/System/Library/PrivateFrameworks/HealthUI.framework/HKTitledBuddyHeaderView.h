/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>

@protocol HKTitledBuddyHeaderViewDelegate;
@class UITextView, UIButton, NSString, NSLayoutConstraint, UILabel;

@interface HKTitledBuddyHeaderView : UIView {

	UITextView* _bodyTextView;
	UIButton* _optionalLinkButton;
	NSString* _bodyText;
	long long _bodyTextAlignment;
	NSLayoutConstraint* _logoTitleGapConstraint;
	NSLayoutConstraint* _bodyZeroHeightConstraint;
	NSLayoutConstraint* _bodyBottomConstraint;
	NSLayoutConstraint* _titleBottomConstraint;
	NSLayoutConstraint* _bodyFirstBaselineConstraint;
	NSLayoutConstraint* _bodyLastBaselineToLinkConstraint;
	NSLayoutConstraint* _linkButtonLastBaselineToBottomConstraint;
	NSLayoutConstraint* _titleLabelBaselineConstraint;
	id<HKTitledBuddyHeaderViewDelegate> _delegate;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) id<HKTitledBuddyHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * bodyText; 
@property (assign,nonatomic) long long bodyTextAlignment; 
@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
-(UILabel *)titleLabel;
-(double)bottomPadding;
-(NSString *)bodyText;
-(id<HKTitledBuddyHeaderViewDelegate>)delegate;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDelegate:(id<HKTitledBuddyHeaderViewDelegate>)arg1 ;
-(id)bodyTextView;
-(void)setBodyText:(NSString *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(long long)bodyTextAlignment;
-(void)setBodyTextAlignment:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2 ;
-(void)deactivateDefaultTitleLabelBaselineConstraint;
-(void)_linkButtonTapped:(id)arg1 ;
-(id)_attributedBodyTextWithString:(id)arg1 alignment:(long long)arg2 ;
-(void)_updateBodyTextViewConstraints;
-(void)setBodyText:(id)arg1 alignment:(long long)arg2 ;
@end

