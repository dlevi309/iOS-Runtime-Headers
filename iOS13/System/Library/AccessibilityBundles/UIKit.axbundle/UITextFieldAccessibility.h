/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextFieldAccessibility_super.h>

@interface UITextFieldAccessibility : __UITextFieldAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementIsFocused;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(id)accessibilityElements;
-(BOOL)areChildrenFocused;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)_clearButtonClicked:(id)arg1 ;
-(BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(id)accessibilityPlaceholderValue;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityResponderElement;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1 ;
-(id)_accessibilityCapturedImages;
-(BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
-(id)_accessibilityTextFieldText;
-(void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1 ;
-(id)_accessibilityNativeFocusPreferredElement;
-(id)_accessibilityRightButtons;
-(id)_accessibilityTextSelectionRectWithLargestVisualRangeFromCandidates:(id)arg1 ;
-(id)_accessibilityInternalFakeTextField:(BOOL)arg1 ;
-(id)_accessibilityInternalFakeTextField;
-(BOOL)_axTextFieldIsHidden;
-(id)_accessibilityLeftButtons;
-(id)_accessibilityPlaceholderValue:(BOOL)arg1 ;
-(id)_accessibilityGetValue;
-(long long)_accessibilityCountAccessibleChildren:(id)arg1 ;
@end

