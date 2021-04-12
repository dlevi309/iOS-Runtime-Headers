/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol UIWKInteractionViewProtocol
@optional
-(void)requestDocumentContext:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)unscaledView;
-(void)moveByOffset:(long long)arg1;
-(void)replaceText:(id)arg1 withText:(id)arg2;
-(double)inverseScale;
-(void)selectWordBackward;
-(id)attributedMarkedText;
-(void)replaceSelectionOffset:(long long)arg1 length:(unsigned long long)arg2 withAnnotatedString:(id)arg3 relativeReplacementRange:(NSRange)arg4;
-(void)adjustSelectionWithDelta:(NSRange)arg1 completionHandler:(/*^block*/id)arg2;
-(void)pasteWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)shouldAllowHidingSelectionCommands;
-(void)removeTextPlaceholder:(id)arg1 willInsertText:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)requestRectsToEvadeForSelectionCommandsWithCompletionHandler:(/*^block*/id)arg1;
-(void)replaceDictatedText:(id)arg1 withText:(id)arg2;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4;
-(void)moveSelectionAtBoundary:(id)arg1 inDirection:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)selectPositionAtPoint:(CGPoint)arg1 withContextRequest:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)willFinishIgnoringCalloutBarFadeAfterPerformingAction;
-(BOOL)isReplaceAllowed;
-(BOOL)shouldSuppressUpdateCandidateView;
-(void)changeSelectionWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(BOOL)arg3 withFlags:(long long)arg4;
-(void)insertTextPlaceholderWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2;
-(CGRect*)unobscuredContentRect;
-(void)clearSelection;
-(void)requestDictationContext:(/*^block*/id)arg1;
-(id)alternativesForSelectedText;
-(BOOL)pointIsNearMarkedText:(CGPoint)arg1;
-(void)removeAnnotation:(id)arg1 forSelectionOffset:(long long)arg2 length:(unsigned long long)arg3;
-(BOOL)supportsTextSelectionWithCharacterGranularity;

@required
-(id)selectedText;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(void)beginSelectionInDirection:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3;
-(CGRect*)textLastRect;
-(BOOL)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(CGPoint)arg2;
-(void)changeSelectionWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
-(void)changeSelectionWithTouchesFrom:(CGPoint)arg1 to:(CGPoint)arg2 withGesture:(long long)arg3 withState:(long long)arg4;
-(void)selectWordForReplacement;
-(BOOL)hasMarkedText;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)selectPositionAtPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(id)webSelectionRects;
-(void)requestAutocorrectionContextWithCompletionHandler:(/*^block*/id)arg1;
-(void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(id)markedText;
-(CGRect*)textFirstRect;
-(BOOL)hasSelectablePositionAtPoint:(CGPoint)arg1;
-(void)requestAutocorrectionRectsForString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)_cancelLongPressGestureRecognizer;

@end

