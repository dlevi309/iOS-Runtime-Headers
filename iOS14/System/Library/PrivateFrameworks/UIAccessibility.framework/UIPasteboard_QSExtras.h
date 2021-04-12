/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/__UIPasteboard_QSExtras_super.h>

@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super
+(id)generalPasteboard;
+(BOOL)_accessibilityUseQuickSpeakPasteBoard;
+(id)_accessibilityQuickSpeakPasteboard;
+(void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)arg1 ;
+(id)pasteboardWithUniqueName;
+(id)safeCategoryTargetClassName;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(Class)safeCategoryBaseClass;
-(long long)changeCount;
-(id)colors;
-(id)strings;
-(void)setItems:(id)arg1 ;
-(long long)numberOfItems;
-(id)color;
-(BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
-(void)addItems:(id)arg1 ;
-(id)image;
-(id)pasteboardTypes;
-(id)items;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)URLs;
-(id)URL;
-(void)setStrings:(id)arg1 ;
-(id)string;
-(id)images;
@end

