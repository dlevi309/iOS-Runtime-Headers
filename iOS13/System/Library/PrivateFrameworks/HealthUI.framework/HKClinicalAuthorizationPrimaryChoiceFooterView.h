/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface HKClinicalAuthorizationPrimaryChoiceFooterView : UIView {

	UIButton* _primaryButton;

}

@property (nonatomic,readonly) UIButton * primaryButton;              //@synthesize primaryButton=_primaryButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setUpConstraints;
-(UIButton *)primaryButton;
-(void)_setUpSubviews;
-(void)_updateMetricsWithTraitCollection:(id)arg1 ;
-(double)_bottomMarginForTraitCollection:(id)arg1 ;
@end

