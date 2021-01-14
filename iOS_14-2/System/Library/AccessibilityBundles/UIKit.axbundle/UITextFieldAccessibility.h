/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextFieldAccessibility_super.h>

@interface UITextFieldAccessibility : __UITextFieldAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityLabel;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(id)_accessibilityNativeFocusPreferredElement;
-(BOOL)isAccessibilityElement;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityAttributedTextRetrieval;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilitySupplementaryFooterViews;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityCustomRotors;
-(BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(void)_clearButtonClicked:(id)arg1 ;
-(id)accessibilityDropPointDescriptors;
-(unsigned long long)accessibilityTraits;
-(BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(id)_accessibilityCapturedImages;
-(CGPoint)accessibilityActivationPoint;
-(BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
-(BOOL)areChildrenFocused;
-(id)_accessibilityTextFieldText;
-(id)accessibilityPlaceholderValue;
-(id)_accessibilityPlaceholderValue:(BOOL)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityRightButtons;
-(BOOL)_accessibilityAvoidsMockViewContainers;
-(id)_accessibilityTextSelectionRectWithLargestVisualRangeFromCandidates:(id)arg1 ;
-(BOOL)_axShowsLeadingView;
-(BOOL)_axShowsTrailingView;
-(BOOL)_axTextFieldIsHidden;
-(id)_accessibilityLeftButtons;
-(id)_accessibilityGetValue;
@end

