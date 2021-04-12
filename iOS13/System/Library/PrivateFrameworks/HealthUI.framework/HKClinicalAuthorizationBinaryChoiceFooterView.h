/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSLayoutConstraint;

@interface HKClinicalAuthorizationBinaryChoiceFooterView : UIView {

	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	NSLayoutConstraint* _secondaryFirstBaselineToPrimaryBottomConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * secondaryFirstBaselineToPrimaryBottomConstraint;              //@synthesize secondaryFirstBaselineToPrimaryBottomConstraint=_secondaryFirstBaselineToPrimaryBottomConstraint - In the implementation block
@property (nonatomic,readonly) UIButton * primaryButton;                                                          //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * secondaryButton;                                                        //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateForCurrentContentSizeCategory;
-(void)_setUpConstraints;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(void)_setUpSubviews;
-(NSLayoutConstraint *)secondaryFirstBaselineToPrimaryBottomConstraint;
@end

