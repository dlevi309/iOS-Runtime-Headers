/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSBatteryChargingView.h>

@class CSAccessoryConfiguration, CABackdropLayer, CALayer, CSRingLayer, SBUILegibilityLabel, UIView;

@interface CSBatteryChargingRingView : CSBatteryChargingView {

	BOOL _isBatterySaverModeActive;
	CSAccessoryConfiguration* _configuration;
	CABackdropLayer* _ringBlurBackdropLayer;
	CALayer* _chargingBoltGlyph;
	CABackdropLayer* _backgroundRadiusBackdropLayer;
	CABackdropLayer* _backgroundBackdropLayer;
	CABackdropLayer* _averageColorBackdropLayer;
	CALayer* _ringTempOverlayLayer;
	CALayer* _splashRing;
	CSRingLayer* _batteryLevelRing;
	CSRingLayer* _trackFillRingLayer;
	CSRingLayer* _ringBlurLayer;
	SBUILegibilityLabel* _chargePercentLabel;
	UIView* _chargingContainerView;

}

@property (nonatomic,retain) CSAccessoryConfiguration * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) CABackdropLayer * ringBlurBackdropLayer;                      //@synthesize ringBlurBackdropLayer=_ringBlurBackdropLayer - In the implementation block
@property (nonatomic,retain) CALayer * chargingBoltGlyph;                                  //@synthesize chargingBoltGlyph=_chargingBoltGlyph - In the implementation block
@property (nonatomic,retain) CABackdropLayer * backgroundRadiusBackdropLayer;              //@synthesize backgroundRadiusBackdropLayer=_backgroundRadiusBackdropLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * backgroundBackdropLayer;                    //@synthesize backgroundBackdropLayer=_backgroundBackdropLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * averageColorBackdropLayer;                  //@synthesize averageColorBackdropLayer=_averageColorBackdropLayer - In the implementation block
@property (nonatomic,retain) CALayer * ringTempOverlayLayer;                               //@synthesize ringTempOverlayLayer=_ringTempOverlayLayer - In the implementation block
@property (nonatomic,retain) CALayer * splashRing;                                         //@synthesize splashRing=_splashRing - In the implementation block
@property (nonatomic,retain) CSRingLayer * batteryLevelRing;                               //@synthesize batteryLevelRing=_batteryLevelRing - In the implementation block
@property (nonatomic,retain) CSRingLayer * trackFillRingLayer;                             //@synthesize trackFillRingLayer=_trackFillRingLayer - In the implementation block
@property (nonatomic,retain) CSRingLayer * ringBlurLayer;                                  //@synthesize ringBlurLayer=_ringBlurLayer - In the implementation block
@property (assign,nonatomic) BOOL isBatterySaverModeActive;                                //@synthesize isBatterySaverModeActive=_isBatterySaverModeActive - In the implementation block
@property (nonatomic,retain) SBUILegibilityLabel * chargePercentLabel;                     //@synthesize chargePercentLabel=_chargePercentLabel - In the implementation block
@property (nonatomic,retain) UIView * chargingContainerView;                               //@synthesize chargingContainerView=_chargingContainerView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isBatterySaverModeActive;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(CSAccessoryConfiguration *)configuration;
-(void)setConfiguration:(CSAccessoryConfiguration *)arg1 ;
-(BOOL)_isReduceMotionEnabled;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)_runAnimationWithType:(unsigned long long)arg1 ;
-(void)performAnimation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CABackdropLayer *)averageColorBackdropLayer;
-(void)setAverageColorBackdropLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)backgroundRadiusBackdropLayer;
-(void)setBackgroundRadiusBackdropLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)backgroundBackdropLayer;
-(void)setBackgroundBackdropLayer:(CABackdropLayer *)arg1 ;
-(BOOL)_isReduceTransparencyEnabled;
-(BOOL)_isDarkerSystemColorsEnabled;
-(void)_layoutChargePercentLabel;
-(id)_updateChargeString:(id)arg1 oldLabel:(id)arg2 ;
-(id)colorForBatteryLevel:(double)arg1 ;
-(void)_runDimAnimation;
-(void)_runSplashRingAnimation;
-(void)_runRingBlurAnimation;
-(void)_runChargingBoltAnimationVisible:(BOOL)arg1 ;
-(void)_runChargingLabelPresentAnimation;
-(void)_runBatteryLevelRingAnimation;
-(void)_runBatteryLevelDismissAnimation;
-(void)_chargingBoltPresentAnimationWithDuration;
-(void)_chargingBoltDismissAnimationWithDuration;
-(id)_chargePercentFont;
-(double)batteryChargingLevel;
-(long long)batteryCount;
-(CABackdropLayer *)ringBlurBackdropLayer;
-(void)setRingBlurBackdropLayer:(CABackdropLayer *)arg1 ;
-(CALayer *)chargingBoltGlyph;
-(void)setChargingBoltGlyph:(CALayer *)arg1 ;
-(CALayer *)ringTempOverlayLayer;
-(void)setRingTempOverlayLayer:(CALayer *)arg1 ;
-(CALayer *)splashRing;
-(void)setSplashRing:(CALayer *)arg1 ;
-(CSRingLayer *)batteryLevelRing;
-(void)setBatteryLevelRing:(CSRingLayer *)arg1 ;
-(CSRingLayer *)trackFillRingLayer;
-(void)setTrackFillRingLayer:(CSRingLayer *)arg1 ;
-(CSRingLayer *)ringBlurLayer;
-(void)setRingBlurLayer:(CSRingLayer *)arg1 ;
-(void)setIsBatterySaverModeActive:(BOOL)arg1 ;
-(SBUILegibilityLabel *)chargePercentLabel;
-(void)setChargePercentLabel:(SBUILegibilityLabel *)arg1 ;
-(UIView *)chargingContainerView;
-(void)setChargingContainerView:(UIView *)arg1 ;
@end

