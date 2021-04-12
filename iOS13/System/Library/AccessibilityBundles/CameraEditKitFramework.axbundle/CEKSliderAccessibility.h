/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/CameraEditKitFramework.axbundle/CameraEditKitFramework
*/

#import <CameraEditKitFramework/CameraEditKitFramework-Structs.h>
#import <CameraEditKitFramework/__CEKSliderAccessibility_super.h>

@interface CEKSliderAccessibility : __CEKSliderAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_axAdjustValue:(BOOL)arg1 ;
-(double)_axGetDeltaForCurrentValue:(double)arg1 toIncrement:(BOOL)arg2 ;
-(double)_axNumberOfTickSegments;
@end

