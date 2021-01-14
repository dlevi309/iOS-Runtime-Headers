/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setUpConstraints;
-(UIButton *)primaryButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setUpSubviews;
-(void)_updateMetricsWithTraitCollection:(id)arg1 ;
-(double)_bottomMarginForTraitCollection:(id)arg1 ;
@end

