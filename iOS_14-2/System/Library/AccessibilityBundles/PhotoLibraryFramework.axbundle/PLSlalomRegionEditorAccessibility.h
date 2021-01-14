/*
* Generated on Thursday, January 14, 2021 at 2:29:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
*/

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <PhotoLibraryFramework/__PLSlalomRegionEditorAccessibility_super.h>

@interface PLSlalomRegionEditorAccessibility : __PLSlalomRegionEditorAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)layoutSubviews;
-(void)setStartValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setEndValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)dealloc;
-(void)_accessibilityDecrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(void)_accessibilityIncrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(double)_accessibilitySliderDeltaForFrame:(CGRect)arg1 ;
@end

