/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/__CAMZoomControlAccessibility_super.h>

@interface CAMZoomControlAccessibility : __CAMZoomControlAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityLabel;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(BOOL)accessibilityActivate;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(CGPoint)accessibilityActivationPoint;
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

