/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setUpConstraints;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(void)_updateForCurrentContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setUpSubviews;
-(NSLayoutConstraint *)secondaryFirstBaselineToPrimaryBottomConstraint;
@end

