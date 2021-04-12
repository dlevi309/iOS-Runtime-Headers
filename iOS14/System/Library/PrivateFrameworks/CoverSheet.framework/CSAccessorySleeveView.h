/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSAccessoryView.h>

@class SBFLockScreenDateView, CALayer, CSBatteryChargingView, UIImageView, BCBatteryDevice;

@interface CSAccessorySleeveView : CSAccessoryView {

	BOOL _charging;
	SBFLockScreenDateView* _dateView;
	SBFLockScreenDateView* _secondaryDateView;
	CALayer* _backgroundColorLayer;
	CALayer* _backgroundColorLayerWithBlendLabelColor1;
	CALayer* _backgroundColorLayerWithBlendLabelColor2;
	CSBatteryChargingView* _batteryChargingView;
	UIImageView* _chargingBoltImageView;
	BCBatteryDevice* _batteryDevice;
	CGRect _visibleWindowFrame;

}

@property (nonatomic,retain) CALayer * backgroundColorLayer;                                  //@synthesize backgroundColorLayer=_backgroundColorLayer - In the implementation block
@property (nonatomic,retain) CALayer * backgroundColorLayerWithBlendLabelColor1;              //@synthesize backgroundColorLayerWithBlendLabelColor1=_backgroundColorLayerWithBlendLabelColor1 - In the implementation block
@property (nonatomic,retain) CALayer * backgroundColorLayerWithBlendLabelColor2;              //@synthesize backgroundColorLayerWithBlendLabelColor2=_backgroundColorLayerWithBlendLabelColor2 - In the implementation block
@property (nonatomic,retain) CSBatteryChargingView * batteryChargingView;                     //@synthesize batteryChargingView=_batteryChargingView - In the implementation block
@property (nonatomic,retain) UIImageView * chargingBoltImageView;                             //@synthesize chargingBoltImageView=_chargingBoltImageView - In the implementation block
@property (nonatomic,retain) BCBatteryDevice * batteryDevice;                                 //@synthesize batteryDevice=_batteryDevice - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateView * dateView;                                //@synthesize dateView=_dateView - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateView * secondaryDateView;                       //@synthesize secondaryDateView=_secondaryDateView - In the implementation block
@property (assign,nonatomic) CGRect visibleWindowFrame;                                       //@synthesize visibleWindowFrame=_visibleWindowFrame - In the implementation block
@property (assign,nonatomic) BOOL charging;                                                   //@synthesize charging=_charging - In the implementation block
-(SBFLockScreenDateView *)dateView;
-(void)setDateView:(SBFLockScreenDateView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)charging;
-(void)setCharging:(BOOL)arg1 ;
-(void)setBatteryChargingView:(CSBatteryChargingView *)arg1 ;
-(CSBatteryChargingView *)batteryChargingView;
-(void)_presentAnimation;
-(void)_dismissAnimation;
-(void)_runAnimationWithType:(unsigned long long)arg1 ;
-(void)performAnimation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)animationDurationBeforeDismissal;
-(void)setBatteryDevice:(BCBatteryDevice *)arg1 ;
-(void)transitionChargingViewVisible:(BOOL)arg1 chargingInfo:(id)arg2 ;
-(void)updateDateViews;
-(double)_batteryChargingLevel;
-(id)_colorForBatteryLevel:(double)arg1 ;
-(BCBatteryDevice *)batteryDevice;
-(id)batteryChargingViewWithChargingInfo:(id)arg1 ;
-(CGRect)_chargingViewFrame;
-(void)setVisibleWindowFrame:(CGRect)arg1 ;
-(void)setSecondaryDateView:(SBFLockScreenDateView *)arg1 ;
-(SBFLockScreenDateView *)secondaryDateView;
-(CGRect)visibleWindowFrame;
-(CALayer *)backgroundColorLayer;
-(void)setBackgroundColorLayer:(CALayer *)arg1 ;
-(CALayer *)backgroundColorLayerWithBlendLabelColor1;
-(void)setBackgroundColorLayerWithBlendLabelColor1:(CALayer *)arg1 ;
-(CALayer *)backgroundColorLayerWithBlendLabelColor2;
-(void)setBackgroundColorLayerWithBlendLabelColor2:(CALayer *)arg1 ;
-(UIImageView *)chargingBoltImageView;
-(void)setChargingBoltImageView:(UIImageView *)arg1 ;
@end

