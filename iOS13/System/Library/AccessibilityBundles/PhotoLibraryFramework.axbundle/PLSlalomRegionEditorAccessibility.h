/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
*/

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <PhotoLibraryFramework/__PLSlalomRegionEditorAccessibility_super.h>

@interface PLSlalomRegionEditorAccessibility : __PLSlalomRegionEditorAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)layoutSubviews;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setStartValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setEndValue:(double)arg1 notify:(BOOL)arg2 ;
-(double)_accessibilitySliderDeltaForFrame:(CGRect)arg1 ;
-(void)_accessibilityIncrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(void)_accessibilityDecrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
@end

