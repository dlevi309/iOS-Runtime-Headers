/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol UIWKInteractionViewProtocol
@optional
-(id)attributedMarkedText;
-(BOOL)shouldSuppressUpdateCandidateView;
-(void)changeSelectionWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(BOOL)arg3 withFlags:(long long)arg4;
-(void)clearSelection;
-(void)replaceDictatedText:(id)arg1 withText:(id)arg2;
-(void)requestDictationContext:(/*^block*/id)arg1;
-(BOOL)pointIsNearMarkedText:(CGPoint)arg1;
-(void)replaceText:(id)arg1 withText:(id)arg2;
-(BOOL)isReplaceAllowed;
-(void)selectWordBackward;
-(id)unscaledView;
-(double)inverseScale;
-(CGRect*)unobscuredContentRect;
-(void)moveByOffset:(long long)arg1;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4;
-(void)moveSelectionAtBoundary:(id)arg1 inDirection:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)requestRectsToEvadeForSelectionCommandsWithCompletionHandler:(/*^block*/id)arg1;
-(void)adjustSelectionWithDelta:(NSRange)arg1 completionHandler:(/*^block*/id)arg2;
-(void)requestDocumentContext:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)selectPositionAtPoint:(CGPoint)arg1 withContextRequest:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)insertTextPlaceholderWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeTextPlaceholder:(id)arg1 willInsertText:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)replaceSelectionOffset:(long long)arg1 length:(unsigned long long)arg2 withAnnotatedString:(id)arg3 relativeReplacementRange:(NSRange)arg4;
-(void)removeAnnotation:(id)arg1 forSelectionOffset:(long long)arg2 length:(unsigned long long)arg3;
-(void)pasteWithCompletionHandler:(/*^block*/id)arg1;
-(void)willFinishIgnoringCalloutBarFadeAfterPerformingAction;
-(BOOL)shouldAllowHidingSelectionCommands;
-(BOOL)supportsTextSelectionWithCharacterGranularity;

@required
-(BOOL)hasMarkedText;
-(void)changeSelectionWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
-(void)changeSelectionWithTouchesFrom:(CGPoint)arg1 to:(CGPoint)arg2 withGesture:(long long)arg3 withState:(long long)arg4;
-(CGRect*)textFirstRect;
-(CGRect*)textLastRect;
-(void)requestAutocorrectionContextWithCompletionHandler:(/*^block*/id)arg1;
-(void)requestAutocorrectionRectsForString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(id)markedText;
-(BOOL)hasSelectablePositionAtPoint:(CGPoint)arg1;
-(BOOL)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(CGPoint)arg2;
-(id)webSelectionRects;
-(void)_cancelLongPressGestureRecognizer;
-(void)selectPositionAtPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(void)beginSelectionInDirection:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(id)selectedText;
-(void)selectWordForReplacement;

@end

