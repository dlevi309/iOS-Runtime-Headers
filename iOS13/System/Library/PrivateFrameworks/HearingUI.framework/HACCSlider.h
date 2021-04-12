/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UIVisualEffectView, NSNumberFormatter, UILabel, AXHAStepSlider, NSString;

@interface HACCSlider : UIControl <HACCContentModule> {

	UIVisualEffectView* _titleContainer;
	UIVisualEffectView* _subtitleContainer;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	unsigned long long _numberOfSteps;
	double _value;
	NSNumberFormatter* _numberFormatter;
	long long _style;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _statusLabel;
	AXHAStepSlider* _slider;

}

@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                        //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                      //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) AXHAStepSlider * slider;                                    //@synthesize slider=_slider - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSteps;                           //@synthesize numberOfSteps=_numberOfSteps - In the implementation block
@property (assign,nonatomic) double value;                                               //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
-(BOOL)enabled;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(double)value;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setValue:(double)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UILabel *)titleLabel;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(AXHAStepSlider *)slider;
-(void)setSlider:(AXHAStepSlider *)arg1 ;
-(unsigned long long)module;
-(unsigned long long)numberOfSteps;
-(void)setModule:(unsigned long long)arg1 ;
-(void)setNumberOfSteps:(unsigned long long)arg1 ;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(id)initWithFrame:(CGRect)arg1 andStyle:(long long)arg2 ;
-(void)updateValue;
-(id)contentValue;
-(void)sliderDidChange:(id)arg1 ;
-(void)updateValueString;
@end

