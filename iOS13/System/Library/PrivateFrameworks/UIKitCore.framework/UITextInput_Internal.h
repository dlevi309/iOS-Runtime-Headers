/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInput_Internal
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@optional
-(BOOL)_shouldSuppressSelectionHandles;
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(CGRect*)_lastRectForRange:(id)arg1;
-(void)_setInternalGestureRecognizers;
-(BOOL)_isInteractiveTextSelectionDisabled;

@required
-(NSRange*)_selectedNSRange;
-(id)_textRangeFromNSRange:(NSRange)arg1;
-(NSRange*)_nsrangeForTextRange:(id)arg1;
-(BOOL)_range:(id)arg1 containsRange:(id)arg2;
-(id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
-(BOOL)_range:(id)arg1 intersectsRange:(id)arg2;
-(BOOL)_hasMarkedText;
-(BOOL)_usesAsynchronousProtocol;
-(CGRect*)_selectionClipRect;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(void)_unmarkText;
-(id)_proxyTextInput;
-(NSRange*)_selectedRangeWithinMarkedText;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterAfterCaretSelection;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1;
-(id)_rangeFromCurrentRangeWithDelta:(NSRange)arg1;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfParagraph;
-(void)_transpose;
-(void)_deleteByWord;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
-(void)_extendCurrentSelection:(int)arg1;
-(void)_setCaretSelectionAtEndOfSelection;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)_setGestureRecognizers;
-(void)_replaceDocumentWithText:(id)arg1;
-(void)_moveCurrentSelection:(int)arg1;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(BOOL)arg1;
-(void)_deleteForwardAndNotify:(BOOL)arg1;
-(id)_wordContainingCaretSelection;
-(id)_normalizedStringForRangeComparison:(id)arg1;
-(id)_rangeOfEnclosingWord:(id)arg1;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
-(id)_fullText;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
-(void)_replaceCurrentWordWithText:(id)arg1;
-(void)_selectAll;
-(BOOL)_selectionAtDocumentStart;
-(id)_rangeOfSmartSelectionIncludingRange:(id)arg1;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
-(unsigned)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2;
-(BOOL)_isEmptySelection;
-(long long)_selectionAffinity;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
-(void)_setSelectionToPosition:(id)arg1;
-(BOOL)_selectionAtWordStart;
-(BOOL)_selectionAtDocumentEnd;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(void)_deleteToEndOfLine;
-(id)_rangeOfLineEnclosingPosition:(id)arg1;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;

@end

