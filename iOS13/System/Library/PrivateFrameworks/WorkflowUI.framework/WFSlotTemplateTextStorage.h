/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class UIFont, UIColor, NSParagraphStyle, NSArray, NSTextStorage, NSMutableSet, NSSet;

@interface WFSlotTemplateTextStorage : NSTextStorage {

	BOOL _enabled;
	UIFont* _font;
	UIFont* _unpopulatedFont;
	UIColor* _textColor;
	UIColor* _tintColor;
	NSParagraphStyle* _paragraphStyle;
	UIColor* _disabledSlotTitleColor;
	UIColor* _disabledSlotBackgroundColor;
	NSArray* _contents;
	long long _contentsTextAlignment;
	NSTextStorage* _textStorage;
	NSMutableSet* _mutableHighlightedSlots;
	NSMutableSet* _mutableSelectedSlots;
	NSMutableSet* _mutableTypingSlots;
	unsigned long long _editingLevel;

}

@property (nonatomic,readonly) NSTextStorage * textStorage;                                      //@synthesize textStorage=_textStorage - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutableHighlightedSlots;                           //@synthesize mutableHighlightedSlots=_mutableHighlightedSlots - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutableSelectedSlots;                              //@synthesize mutableSelectedSlots=_mutableSelectedSlots - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutableTypingSlots;                                //@synthesize mutableTypingSlots=_mutableTypingSlots - In the implementation block
@property (assign,nonatomic) unsigned long long editingLevel;                                    //@synthesize editingLevel=_editingLevel - In the implementation block
@property (assign,nonatomic,__weak) id<WFSlotTemplateTextStorageDelegate> delegate; 
@property (nonatomic,retain) UIFont * font;                                                      //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * unpopulatedFont;                                           //@synthesize unpopulatedFont=_unpopulatedFont - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSParagraphStyle * paragraphStyle;                                    //@synthesize paragraphStyle=_paragraphStyle - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UIColor * disabledSlotTitleColor;                                 //@synthesize disabledSlotTitleColor=_disabledSlotTitleColor - In the implementation block
@property (nonatomic,readonly) UIColor * disabledSlotBackgroundColor;                            //@synthesize disabledSlotBackgroundColor=_disabledSlotBackgroundColor - In the implementation block
@property (nonatomic,copy) NSArray * contents;                                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) long long contentsTextAlignment;                                  //@synthesize contentsTextAlignment=_contentsTextAlignment - In the implementation block
@property (nonatomic,readonly) NSSet * highlightedSlots; 
@property (nonatomic,readonly) NSSet * selectedSlots; 
@property (nonatomic,readonly) NSSet * typingSlots; 
-(id)init;
-(id)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)beginEditing;
-(void)endEditing;
-(void)setEnabled:(BOOL)arg1 ;
-(NSArray *)contents;
-(BOOL)isEnabled;
-(NSTextStorage *)textStorage;
-(void)setParagraphStyle:(NSParagraphStyle *)arg1 ;
-(void)setContents:(NSArray *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(NSParagraphStyle *)paragraphStyle;
-(UIFont *)unpopulatedFont;
-(void)setUnpopulatedFont:(UIFont *)arg1 ;
-(UIColor *)disabledSlotTitleColor;
-(UIColor *)disabledSlotBackgroundColor;
-(void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2 ;
-(NSSet *)highlightedSlots;
-(void)didHighlightSlot:(id)arg1 ;
-(void)didUnhighlightSlot:(id)arg1 ;
-(NSSet *)selectedSlots;
-(void)didSelectSlot:(id)arg1 ;
-(void)didDeselectSlot:(id)arg1 ;
-(NSSet *)typingSlots;
-(void)didBeginTypingInSlot:(id)arg1 ;
-(void)didEndTypingInSlot:(id)arg1 ;
-(void)regenerateEntireAttributedString;
-(void)replaceAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceAttributeInInanimateText:(id)arg1 value:(id)arg2 ;
-(id)attributedStringForSlot:(id)arg1 ;
-(void)getColorsForSlot:(id)arg1 titleColor:(out id*)arg2 backgroundColor:(out id*)arg3 ;
-(void)updateColorsForSlot:(id)arg1 ;
-(void)updateColorsForAllSlots;
-(void)_updateColorsForSlot:(id)arg1 inRange:(NSRange)arg2 ;
-(id)stringForSlotSpacingOpportunity:(unsigned long long)arg1 ;
-(unsigned long long)slotSpacingOpportunityAtCharacterIndex:(unsigned long long)arg1 ;
-(NSRange)characterRangeForSlot:(id)arg1 includingInsideSpacingOpportunities:(BOOL)arg2 ;
-(id)slotAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 effectiveContentRange:(NSRange*)arg3 ;
-(void)enumerateContentInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)contentsTextAlignment;
-(NSMutableSet *)mutableHighlightedSlots;
-(NSMutableSet *)mutableSelectedSlots;
-(NSMutableSet *)mutableTypingSlots;
-(unsigned long long)editingLevel;
-(void)setEditingLevel:(unsigned long long)arg1 ;
@end

