/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/___UIScrollViewScrollIndicatorAccessibility_super.h>

@interface _UIScrollViewScrollIndicatorAccessibility : ___UIScrollViewScrollIndicatorAccessibility_super

@property (assign,nonatomic,__weak) id<AXScrollIndicatorDelegate> accessibilityScrollIndicatorDelegate; 
@property (assign,nonatomic) long long accessibilityScrollDirection; 
@property (assign,nonatomic) BOOL accessibilityScrollIndicatorIsFocused; 
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityUserInputLabels;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)_accessibilityOverridesInvisibility;
-(long long)_accessibilitySortPriority;
-(BOOL)_accessibilityCanShowContextMenuForInteraction:(id)arg1 atLocation:(CGPoint)arg2 ;
-(BOOL)_accessibilityCanAppearInContextMenuPreview;
-(id<AXScrollIndicatorDelegate>)accessibilityScrollIndicatorDelegate;
-(long long)accessibilityScrollDirection;
-(id)_axBasicDescription;
-(void)setAccessibilityScrollIndicatorIsFocused:(BOOL)arg1 ;
-(void)setAccessibilityScrollIndicatorDelegate:(id<AXScrollIndicatorDelegate>)arg1 ;
-(void)setAccessibilityScrollDirection:(long long)arg1 ;
-(BOOL)accessibilityScrollIndicatorIsFocused;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
@end

