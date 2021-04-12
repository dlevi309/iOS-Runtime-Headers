/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UIVisualEffectView, UIView, NSNumberFormatter, UILabel, HUIStepSlider, NSString;

@interface HACCSlider : UIControl <HACCContentModule> {

	UIVisualEffectView* _titleContainer;
	UIView* _subtitleContainer;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	unsigned long long _numberOfSteps;
	double _value;
	NSNumberFormatter* _numberFormatter;
	long long _style;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _statusLabel;
	HUIStepSlider* _slider;

}

@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                        //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                      //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) HUIStepSlider * slider;                                     //@synthesize slider=_slider - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSteps;                           //@synthesize numberOfSteps=_numberOfSteps - In the implementation block
@property (assign,nonatomic) double value;                                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(BOOL)enabled;
-(NSNumberFormatter *)numberFormatter;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)accessibilityLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(unsigned long long)numberOfSteps;
-(HUIStepSlider *)slider;
-(BOOL)isAccessibilityElement;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setModule:(unsigned long long)arg1 ;
-(unsigned long long)accessibilityTraits;
-(void)setValue:(double)arg1 ;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(void)setNumberOfSteps:(unsigned long long)arg1 ;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(id)accessibilityValue;
-(void)setSlider:(HUIStepSlider *)arg1 ;
-(void)updateValue;
-(unsigned long long)module;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(UILabel *)statusLabel;
-(void)setStyle:(long long)arg1 ;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(long long)style;
-(double)value;
-(id)initWithFrame:(CGRect)arg1 andStyle:(long long)arg2 ;
-(id)contentValue;
-(void)sliderDidChange:(id)arg1 ;
-(void)updateValueString;
@end

