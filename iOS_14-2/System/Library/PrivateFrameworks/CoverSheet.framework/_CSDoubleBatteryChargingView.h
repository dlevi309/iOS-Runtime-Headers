/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSBatteryChargingView.h>

@class UIView, _UIBackdropView, CSBatteryFillView, SBUILegibilityLabel, UIImageView;

@interface _CSDoubleBatteryChargingView : CSBatteryChargingView {

	UIView* _batteryContainerView;
	UIView* _internalBatteryContainerView;
	UIView* _externalBatteryContainerView;
	_UIBackdropView* _internalBatteryBlurView;
	_UIBackdropView* _externalBatteryBlurView;
	CSBatteryFillView* _internalBatteryFillView;
	CSBatteryFillView* _externalBatteryFillView;
	SBUILegibilityLabel* _internalChargePercentLabel;
	SBUILegibilityLabel* _externalChargePercentLabel;
	SBUILegibilityLabel* _internalChargingNameLabel;
	SBUILegibilityLabel* _externalChargingNameLabel;
	UIImageView* _internalChargingIndicator;
	UIImageView* _externalChargingIndicator;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)performAnimation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_chargePercentFont;
-(long long)batteryCount;
-(double)_spaceBetweenBatteryImages;
-(double)_batteryTopPadding;
-(double)_chargingBoltTopOffset;
-(double)_deviceNameBaselineOffset;
-(double)_deviceChargeBaselineOffset;
@end

