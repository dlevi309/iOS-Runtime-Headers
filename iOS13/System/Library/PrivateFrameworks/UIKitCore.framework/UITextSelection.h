/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(void)commit;
-(UITextRange *)selectedRange;
-(id)_domRange;
-(long long)granularity;
-(void)selectionChanged;
-(id)selectedText;
-(void)clearSelection;
-(CGRect)caretRect;
-(id)initWithDocument:(id)arg1 ;
-(void)setSelectedRange:(UITextRange *)arg1 ;
-(void)selectAll;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)isCommitting;
-(void)collapseSelection;
-(BOOL)pointAtEndOfLine:(CGPoint)arg1 ;
-(void)alterSelection:(CGPoint)arg1 granularity:(long long)arg2 ;
-(id)selectionRects;
-(id)wordContainingCaretSelection;
-(void)moveCaretToBoundaryOfWhitespaceOrLine;
-(void)alterSelectionGranularity:(long long)arg1 ;
-(void)setRangedSelectionBaseToCurrentSelection;
-(void)clearRangedSelectionInitialExtent;
-(void)setRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(void)setGranularity:(long long)arg1 ;
-(void)setSelectionWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(BOOL)hasEditableSelection;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(UIResponder*<UITextInputPrivate>)document;
-(void)extendSelectionToPoint:(CGPoint)arg1 ;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 ;
-(BOOL)willSelectionChange;
-(void)smartExtendRangedSelection:(int)arg1 downstream:(BOOL)arg2 ;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(void)setBase:(UITextRange *)arg1 ;
-(void)setInitialExtent:(UITextRange *)arg1 ;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
-(UITextRange *)base;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3 ;
-(UITextRange *)initialExtent;
-(CGRect)caretRectAtEndOfDocument;
-(CGRect)caretRectAtBeginOfDocument;
-(CGRect)closestCaretRectForPoint:(CGPoint)arg1 inSelection:(BOOL)arg2 ;
-(unsigned long long)offsetInMarkedText;
-(void)increaseSelectionGranularity;
-(BOOL)pointAtStartOfLine:(CGPoint)arg1 ;
-(BOOL)isRangedSelectionSpanningDocument;
-(void)setGranularRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
@end

