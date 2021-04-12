/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIButton;

@interface WDBuddyFlowContinueFooterView : UIView {

	double _width;
	double _bottomInset;
	NSLayoutConstraint* _continueButtonBaselineConstraint;
	NSLayoutConstraint* _continueButtonBaselineToBottomConstraint;
	UIButton* _continueButton;

}

@property (nonatomic,retain) UIButton * continueButton;              //@synthesize continueButton=_continueButton - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContinueButton:(UIButton *)arg1 ;
-(UIButton *)continueButton;
-(void)_updateForCurrentSizeCategory;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 bottomInset:(double)arg3 width:(double)arg4 ;
@end

