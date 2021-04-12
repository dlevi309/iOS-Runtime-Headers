/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateForCurrentSizeCategory;
-(UIButton *)continueButton;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 bottomInset:(double)arg3 width:(double)arg4 ;
-(void)setContinueButton:(UIButton *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

