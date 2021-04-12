/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class NSNumberFormatter, UIVisualEffectView, UILabel, HUITitleValueSlider, UIView, NSString;

@interface HACCPSESettings : UIView <HACCContentModule> {

	BOOL _didSetVibrancy;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	NSNumberFormatter* _numberFormatter;
	UIVisualEffectView* _titleContainer;
	UILabel* _titleLabel;
	HUITitleValueSlider* _amplificationSlider;
	UIView* _balanceContainer;
	UILabel* _balanceLabel;
	HUITitleValueSlider* _balanceSlider;
	UIVisualEffectView* _toneContainer;
	UILabel* _toneLabel;
	HUITitleValueSlider* _toneSlider;

}

@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                        //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * titleContainer;                        //@synthesize titleContainer=_titleContainer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HUITitleValueSlider * amplificationSlider;                  //@synthesize amplificationSlider=_amplificationSlider - In the implementation block
@property (nonatomic,retain) UIView * balanceContainer;                                  //@synthesize balanceContainer=_balanceContainer - In the implementation block
@property (nonatomic,retain) UILabel * balanceLabel;                                     //@synthesize balanceLabel=_balanceLabel - In the implementation block
@property (nonatomic,retain) HUITitleValueSlider * balanceSlider;                        //@synthesize balanceSlider=_balanceSlider - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * toneContainer;                         //@synthesize toneContainer=_toneContainer - In the implementation block
@property (nonatomic,retain) UILabel * toneLabel;                                        //@synthesize toneLabel=_toneLabel - In the implementation block
@property (nonatomic,retain) HUITitleValueSlider * toneSlider;                           //@synthesize toneSlider=_toneSlider - In the implementation block
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
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setModule:(unsigned long long)arg1 ;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)updateValue;
-(unsigned long long)module;
-(UIVisualEffectView *)titleContainer;
-(void)setTitleContainer:(UIVisualEffectView *)arg1 ;
-(id)contentValue;
-(void)amplificationSliderDidChange:(id)arg1 ;
-(void)balanceSliderDidChange:(id)arg1 ;
-(void)toneSliderDidChange:(id)arg1 ;
-(void)updateAccessibilityBalanceValue;
-(void)updateAccessibilityToneValue;
-(HUITitleValueSlider *)amplificationSlider;
-(void)setAmplificationSlider:(HUITitleValueSlider *)arg1 ;
-(UIView *)balanceContainer;
-(void)setBalanceContainer:(UIView *)arg1 ;
-(UILabel *)balanceLabel;
-(void)setBalanceLabel:(UILabel *)arg1 ;
-(HUITitleValueSlider *)balanceSlider;
-(void)setBalanceSlider:(HUITitleValueSlider *)arg1 ;
-(UIVisualEffectView *)toneContainer;
-(void)setToneContainer:(UIVisualEffectView *)arg1 ;
-(UILabel *)toneLabel;
-(void)setToneLabel:(UILabel *)arg1 ;
-(HUITitleValueSlider *)toneSlider;
-(void)setToneSlider:(HUITitleValueSlider *)arg1 ;
@end

