/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextInputUIResponderAccessibility_super.h>

@interface UITextInputUIResponderAccessibility : __UITextInputUIResponderAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(NSRange)_accessibilityRawRangeForUITextRange:(id)arg1 ;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(id)_accessibilityTextRangeFromNSRange:(NSRange)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1 ;
-(NSRange)_accessibilityCharacterRangeForPosition:(unsigned long long)arg1 ;
-(unsigned long long)_accessibilityPositionInDirection:(long long)arg1 offset:(unsigned long long)arg2 forPosition:(unsigned long long)arg3 ;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 string:(id)arg2 wantsSentences:(BOOL)arg3 ;
-(id)_accessibilityAlternativesForTextAtPosition:(unsigned long long)arg1 ;
-(NSRange)_accessibilityVisibleTextRange;
-(id)_accessibilityTextViewTextOperationResponder;
-(long long)_accessibilityLineStartPosition;
-(long long)_accessibilityLineEndPosition;
-(BOOL)_accessibilityHandlesTabKey;
-(id)_accessibilitySpeakThisString;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(BOOL)_accessibilityInsertTextWithAlternatives:(id)arg1 ;
-(void)_axDrawFocusRingAroundFirstResponderAndMoveFocus:(BOOL)arg1 ;
-(void)_axResetFKAFocusToFirstResponder;
-(void)_accessibilityCheckBorderHit:(BOOL)arg1 left:(BOOL)arg2 ;
-(id)_accessibilityBeginningOfDocument;
-(long long)_accessibilityOffsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)_accessibilityTextInputLinePosition:(BOOL)arg1 ;
-(id)_accessibilityPositionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)_accessibilityEndOfDocument;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 wantsSentences:(BOOL)arg2 ;
-(BOOL)_axShouldDrawFocusAroundFirstResponder;
@end

