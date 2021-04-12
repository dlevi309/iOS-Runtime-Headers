/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/__UIPasteboard_QSExtras_super.h>

@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)pasteboardWithUniqueName;
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(BOOL)_accessibilityUseQuickSpeakPasteBoard;
+(id)_accessibilityQuickSpeakPasteboard;
+(void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)arg1 ;
-(id)string;
-(id)URLs;
-(long long)changeCount;
-(id)URL;
-(id)color;
-(id)image;
-(id)images;
-(id)items;
-(void)setItems:(id)arg1 ;
-(long long)numberOfItems;
-(id)pasteboardTypes;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(void)addItems:(id)arg1 ;
-(id)strings;
-(void)setStrings:(id)arg1 ;
-(id)colors;
-(BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
@end

