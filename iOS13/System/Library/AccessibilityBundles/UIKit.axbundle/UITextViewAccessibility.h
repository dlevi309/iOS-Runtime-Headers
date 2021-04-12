/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextViewAccessibility_super.h>

@interface UITextViewAccessibility : __UITextViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(id)accessibilityElements;
-(long long)accessibilityContainerType;
-(id)accessibilityCustomRotors;
-(BOOL)canBecomeFocused;
-(BOOL)resignFirstResponder;
-(void)setAttributedText:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setAttributedPlaceholder:(id)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)accessibilityPlaceholderValue;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityInternalTextLinks;
-(BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1 ;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(double)_accessibilityFontSize;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityTextViewShouldBreakUpParagraphs;
-(id)_accessibilityAttributedTextRetrieval;
-(id)_accessibilityTextSelectionRectWithLargestVisualRangeFromCandidates:(id)arg1 ;
-(id)_accessibilityGetValue;
-(BOOL)_axDidRegisterForDDNotification;
-(void)_axDidFinishDataDetectorURLification:(id)arg1 ;
-(void)_axSetDidRegisterForDDNotification:(BOOL)arg1 ;
-(void)_axRegisterForDDNotificationIfNeeded;
-(void)_axClearCachedLinkData;
-(id)_accessibilityGetValue:(BOOL)arg1 ;
-(BOOL)_axIsOnlyOneLinkElement;
-(BOOL)_accessibilityActivateLink:(id)arg1 ;
-(id)_accessibilityParagraphElements;
-(id)_accessibilityParagraphLinksCustomRotor;
-(id)_accessibilityParagraphElementsWithLinks;
-(id)_accessibilityLinksForRange:(NSRange)arg1 ;
@end

