/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(void)setLegibilitySettings:(id)arg1 ;
-(id)_chargePercentFont;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(BOOL)batteryVisible;
-(long long)batteryCount;
-(double)desiredVisibilityDuration;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)_spaceBetweenBatteryImages;
-(double)_batteryTopPadding;
-(double)_chargingBoltTopOffset;
-(double)_deviceNameBaselineOffset;
-(double)_deviceChargeBaselineOffset;
@end

