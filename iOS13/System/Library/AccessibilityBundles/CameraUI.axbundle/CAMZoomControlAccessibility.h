/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI
*/

#import <CameraUI/__CAMZoomControlAccessibility_super.h>

@interface CAMZoomControlAccessibility : __CAMZoomControlAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_configureForControlMode:(long long)arg1 zoomFactor:(double)arg2 zoomFactors:(id)arg3 displayZoomFactors:(id)arg4 zoomButtonContentType:(long long)arg5 animated:(BOOL)arg6 ;
-(double)_axRoundedZoomFactor:(double)arg1 ;
-(long long)_axZoomControlMode;
-(double)_axDisplayZoomValue;
-(double)_axMaximumZoomFactor;
-(void)_axSetZoomFactorForDisplayValue:(double)arg1 ;
-(double)_axMinimumZoomFactor;
-(BOOL)_axHandleZoomControlActivate;
-(double)_axZoomFactor;
-(void)_setAXZoomFactor:(double)arg1 ;
-(BOOL)_axIsZoomToggleOnly;
@end

