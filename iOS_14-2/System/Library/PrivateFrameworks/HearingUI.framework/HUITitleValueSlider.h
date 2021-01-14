/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HUIStepSlider, UILabel, UIVisualEffectView;

@interface HUITitleValueSlider : UIView {

	HUIStepSlider* _slider;
	UILabel* _titleLabel;
	UILabel* _valueLabel;
	UIVisualEffectView* _effectView;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) HUIStepSlider * slider;                       //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                         //@synthesize valueLabel=_valueLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)effectView;
-(HUIStepSlider *)slider;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(void)setSlider:(HUIStepSlider *)arg1 ;
-(id)accessibilityHint;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(CGPoint)accessibilityActivationPoint;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
@end

