/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIMovieScrubberAccessibility_super.h>

@interface UIMovieScrubberAccessibility : __UIMovieScrubberAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityLabel;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6 ;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(void)setThumbIsVisible:(BOOL)arg1 ;
-(void)_updateThumbLocation;
-(void)setTrimStartValue:(double)arg1 ;
-(void)_trimAnimationDidStop:(BOOL)arg1 glassView:(id)arg2 ;
-(void)_setValue:(double)arg1 andSendAction:(BOOL)arg2 ;
-(void)_sliderAnimationDidStop:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)accessibilityContainerType;
-(void)_initSubviews;
-(void)setTrimEndValue:(double)arg1 ;
-(void)dealloc;
-(void)_accessibilityDecrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(void)_accessibilityIncrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(void)_accessibilityClearChildren;
-(double)_accessibilitySliderDeltaForFrame:(CGRect)arg1 ;
-(void)_accessibilityNotifyDelegateWillBeginEditing;
-(void)_accessibilityNotifyDelegateScrubberDidBeginScrubbingWithHandle:(int)arg1 ;
-(void)_accessibilityNotifyDelegateEditingStartValueDidChange:(double)arg1 ;
-(void)_accessibilityNotifyDelegateScrubberDidEndScrubbingWithHandle:(int)arg1 ;
-(void)_accessibilityNotifyDelegateEditingEndValueDidChange:(double)arg1 ;
@end

