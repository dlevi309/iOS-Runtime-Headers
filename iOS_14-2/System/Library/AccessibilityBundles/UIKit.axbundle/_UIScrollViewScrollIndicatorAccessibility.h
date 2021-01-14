/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(BOOL)isAccessibilityElement;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(BOOL)_accessibilityOverridesInvisibility;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(CGRect)accessibilityFrame;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(CGPoint)accessibilityActivationPoint;
-(long long)_accessibilitySortPriority;
-(BOOL)_accessibilityCanAppearInContextMenuPreview;
-(void)setAccessibilityScrollDirection:(long long)arg1 ;
-(void)setAccessibilityScrollIndicatorDelegate:(id<AXScrollIndicatorDelegate>)arg1 ;
-(BOOL)accessibilityScrollIndicatorIsFocused;
-(long long)accessibilityScrollDirection;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
-(id<AXScrollIndicatorDelegate>)accessibilityScrollIndicatorDelegate;
-(id)_axBasicDescription;
-(void)setAccessibilityScrollIndicatorIsFocused:(BOOL)arg1 ;
@end

