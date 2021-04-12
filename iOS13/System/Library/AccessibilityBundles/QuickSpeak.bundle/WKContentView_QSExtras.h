/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
*/

#import <QuickSpeak/__WKContentView_QSExtras_super.h>

@interface WKContentView_QSExtras : __WKContentView_QSExtras_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_selectionChanged;
-(void)accessibilitySpeakSelectionSetContent:(id)arg1 ;
-(void)_accessibilityDidGetSelectionRects:(id)arg1 withGranularity:(long long)arg2 atOffset:(long long)arg3 ;
-(id)_accessibilityQuickSpeakContent;
-(id)_accessibilitySpeakSelectionTextInputResponder;
-(id)_accessibilityRetrieveRectsForGuanularity:(long long)arg1 atSelectionOffset:(long long)arg2 wordText:(id)arg3 ;
-(BOOL)_accessibilityShouldUpdateQuickSpeakContent;
-(BOOL)_accessibilitySystemShouldShowSpeakBubble;
-(BOOL)_accessibilityShouldShowSpeakBubble;
-(BOOL)_accessibilityShouldShowSpeakSpellOut;
-(BOOL)_accessibilityShouldShowSpeakLanguageBubble;
-(void)_axWaitForSpeakSelectionContentResults;
-(unsigned long long)_axSelectedTextLength;
-(void)_axWaitForSpeakSelectionRectResultsForGuanularity:(long long)arg1 atSelectionOffset:(long long)arg2 wordText:(id)arg3 ;
-(id)accessibilityQSSentenceRects;
-(id)accessibilityQSWordRects;
-(void)accessibilitySetQSWordRects:(id)arg1 ;
-(id)_webTextRectsFromWKTextRects:(id)arg1 ;
-(void)accessibilitySetQSSentenceRects:(id)arg1 ;
@end

