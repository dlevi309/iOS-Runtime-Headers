/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInputPrivate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIResponder, UITextRange, DOMRange;

@interface UITextSelection : NSObject {

	UIResponder*<UITextInputPrivate> _document;
	long long _granularity;
	UITextRange* _selectedRange;
	UITextRange* _base;
	UITextRange* _initialExtent;
	BOOL _isCommitting;

}

@property (nonatomic,__weak,readonly) UIResponder*<UITextInputPrivate> document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) UITextRange * selectedRange;                                     //@synthesize selectedRange=_selectedRange - In the implementation block
@property (assign,nonatomic) long long granularity;                                           //@synthesize granularity=_granularity - In the implementation block
@property (nonatomic,readonly) BOOL isCommitting;                                             //@synthesize isCommitting=_isCommitting - In the implementation block
@property (nonatomic,readonly) BOOL willSelectionChange; 
@property (nonatomic,retain) UITextRange * base;                                              //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) UITextRange * initialExtent;                                     //@synthesize initialExtent=_initialExtent - In the implementation block
@property (getter=_domRange,nonatomic,readonly) DOMRange * domRange; 
-(id)selectedText;
-(void)selectAll;
-(void)commit;
-(UITextRange *)base;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(void)alterSelectionGranularity:(long long)arg1 ;
-(void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
-(id)_domRange;
-(UITextRange *)initialExtent;
-(void)setRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(void)setSelectedRange:(UITextRange *)arg1 ;
-(void)setBase:(UITextRange *)arg1 ;
-(unsigned long long)offsetInMarkedText;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(CGRect)caretRectAtEndOfDocument;
-(CGRect)caretRect;
-(void)clearRangedSelectionInitialExtent;
-(UITextRange *)selectedRange;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 ;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)alterSelection:(CGPoint)arg1 granularity:(long long)arg2 ;
-(id)initWithDocument:(id)arg1 ;
-(void)setGranularRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(CGRect)closestCaretRectForPoint:(CGPoint)arg1 inSelection:(BOOL)arg2 ;
-(BOOL)hasEditableSelection;
-(void)setRangedSelectionBaseToCurrentSelection;
-(BOOL)isCommitting;
-(void)setGranularity:(long long)arg1 ;
-(BOOL)isRangedSelectionSpanningDocument;
-(BOOL)willSelectionChange;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(void)moveCaretToBoundaryOfWhitespaceOrLine;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)clearSelection;
-(void)invalidate;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3 ;
-(void)smartExtendRangedSelection:(int)arg1 downstream:(BOOL)arg2 ;
-(BOOL)pointAtStartOfLine:(CGPoint)arg1 ;
-(BOOL)pointAtEndOfLine:(CGPoint)arg1 ;
-(UIResponder*<UITextInputPrivate>)document;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(void)increaseSelectionGranularity;
-(id)selectionRects;
-(id)wordContainingCaretSelection;
-(void)extendSelectionToPoint:(CGPoint)arg1 ;
-(void)setInitialExtent:(UITextRange *)arg1 ;
-(void)collapseSelection;
-(void)setSelectionWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(long long)granularity;
-(CGRect)caretRectAtBeginOfDocument;
-(void)selectionChanged;
-(void)dealloc;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
@end

