/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInput_Internal
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@optional
-(BOOL)_shouldSuppressSelectionHandles;
-(CGRect*)_lastRectForRange:(id)arg1;
-(BOOL)_isInteractiveTextSelectionDisabled;
-(BOOL)_shouldShowEditMenu;
-(id)_pointerInteractionDelegate;
-(void)_setInternalGestureRecognizers;
-(UIView*<UITextInputPrivate>)_textSelectingContainer;

@required
-(id)_fullRange;
-(void)_deleteToEndOfLine;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(BOOL)_selectionAtDocumentStart;
-(id)_fullText;
-(void)_deleteForwardAndNotify:(BOOL)arg1;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_rangeOfEnclosingWord:(id)arg1;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2;
-(id)_rangeFromCurrentRangeWithDelta:(NSRange)arg1;
-(int)_indexForTextPosition:(id)arg1;
-(void)_transpose;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
-(void)_selectAll;
-(BOOL)_selectionAtDocumentEnd;
-(id)_textRangeFromNSRange:(NSRange)arg1;
-(void)_deleteByWord;
-(id)_rangeOfSmartSelectionIncludingRange:(id)arg1;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
-(void)_setSelectionToPosition:(id)arg1;
-(void)_deleteToEndOfParagraph;
-(id)_proxyTextInput;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(id)_wordContainingCaretSelection;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)_replaceDocumentWithText:(id)arg1;
-(void)_deleteBackwardAndNotify:(BOOL)arg1;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1;
-(BOOL)_usesAsynchronousProtocol;
-(unsigned)_characterAfterCaretSelection;
-(void)_unmarkText;
-(NSRange*)_selectedRangeWithinMarkedText;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1;
-(id)_rangeOfLineEnclosingPosition:(id)arg1;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
-(unsigned)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
-(void)_setGestureRecognizers;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1;
-(BOOL)_isEmptySelection;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
-(long long)_selectionAffinity;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
-(void)_setCaretSelectionAtEndOfSelection;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1;
-(void)_deleteForwardByWord;
-(void)_moveCurrentSelection:(int)arg1;
-(id)_textColorForCaretSelection;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(id)_normalizedStringForRangeComparison:(id)arg1;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
-(BOOL)_range:(id)arg1 intersectsRange:(id)arg2;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
-(NSRange*)_selectedNSRange;
-(BOOL)_selectionAtWordStart;
-(NSRange*)_nsrangeForTextRange:(id)arg1;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
-(void)_replaceCurrentWordWithText:(id)arg1;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(BOOL)_range:(id)arg1 containsRange:(id)arg2;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
-(void)_extendCurrentSelection:(int)arg1;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;
-(id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
-(id)_fontForCaretSelection;
-(BOOL)_hasMarkedText;
-(unsigned)_characterBeforeCaretSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteToStartOfLine;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;

@end

