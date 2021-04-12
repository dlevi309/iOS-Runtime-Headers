/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextViewAccessibility_super.h>

@interface UITextViewAccessibility : __UITextViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)canBecomeFocused;
-(BOOL)resignFirstResponder;
-(id)accessibilityLabel;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setSelectedRange:(NSRange)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityAttributedTextRetrieval;
-(id)accessibilityElements;
-(id)_accessibilitySupplementaryHeaderViews;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityCustomRotors;
-(id)accessibilityDropPointDescriptors;
-(unsigned long long)accessibilityTraits;
-(id)_accessibilityInternalTextLinks;
-(BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1 ;
-(id)accessibilityValue;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(double)_accessibilityFontSize;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(id)accessibilityAttributedValue;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(CGRect)accessibilityFrame;
-(BOOL)accessibilityActivate;
-(CGPoint)accessibilityActivationPoint;
-(long long)accessibilityContainerType;
-(void)setAttributedPlaceholder:(id)arg1 ;
-(id)accessibilityPlaceholderValue;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityTextViewShouldBreakUpParagraphs;
-(unsigned long long)_accessibilityAutomationType;
-(void)dealloc;
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

