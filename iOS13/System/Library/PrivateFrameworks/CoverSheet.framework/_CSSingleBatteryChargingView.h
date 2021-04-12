/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSBatteryChargingView.h>

@class UIView, _UIBackdropView, CSBatteryFillView, SBUILegibilityLabel, NSArray, NSLayoutConstraint, UIImage;

@interface _CSSingleBatteryChargingView : CSBatteryChargingView {

	UIView* _batteryContainerView;
	_UIBackdropView* _batteryBlurView;
	CSBatteryFillView* _batteryFillView;
	SBUILegibilityLabel* _chargePercentLabel;
	NSArray* _batteryConstraints;
	NSLayoutConstraint* _batteryTopOffset;
	UIImage* _batteryImage;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(id)arg1 ;
-(id)_chargePercentFont;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(BOOL)batteryVisible;
-(long long)batteryCount;
-(double)desiredVisibilityDuration;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(void)_layoutBattery;
-(void)_layoutChargePercentLabel;
-(double)_batteryNoseOffset;
@end

