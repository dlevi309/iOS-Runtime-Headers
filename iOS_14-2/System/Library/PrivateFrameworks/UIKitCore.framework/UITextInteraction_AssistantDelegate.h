/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIKeyboardTextSelectionController, UITextCursorAssertionController;


@protocol UITextInteraction_AssistantDelegate <UITextAutoscrolling,NSObject>
@property (assign,nonatomic) BOOL autoscrolled; 
@property (assign,nonatomic) CGPoint loupeGestureEndPoint; 
@property (assign,nonatomic) BOOL needsGestureUpdate; 
@property (nonatomic,readonly) BOOL willHandoffLoupeMagnifier; 
@property (assign,nonatomic) BOOL expectingCommit; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * activeSelectionController; 
@property (nonatomic,readonly) UITextCursorAssertionController * _assertionController; 
@property (nonatomic,retain) id grabberSuppressionAssertion; 
@property (nonatomic,retain) id keyboardSuppressionAssertion; 
@optional
-(BOOL)overrideGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
-(BOOL)overrideGestureRecognizerShouldBegin:(id)arg1;

@required
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1;
-(void)canBeginDragCursor:(id)arg1;
-(void)setGestureRecognizers;
-(void)resetWillHandoffLoupeMagnifier;
-(void)clearStashedSelection;
-(void)didEndSelectionInteraction;
-(void)scrollSelectionToVisible;
-(UITextCursorAssertionController *)_assertionController;
-(id)view;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
-(id)selectionView;
-(BOOL)containerAllowsSelectionTintOnly;
-(void)checkEditabilityAndSetFirstResponderIfNecessary;
-(void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
-(void)endFloatingCursor;
-(BOOL)willHandoffLoupeMagnifier;
-(BOOL)usesAsynchronousSelectionController;
-(void)showSelectionCommandsForSecondaryClickAtPoint:(CGPoint)arg1;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(void)setSuppressSystemUI:(BOOL)arg1;
-(BOOL)autoscrolled;
-(BOOL)supportsIndirectInteractions;
-(void)setAutomaticSelectionCommandsSuppressedForPointerTouchType:(BOOL)arg1;
-(void)lollipopGestureWithState:(long long)arg1 location:(CGPoint)arg2 locationOfFirstTouch:(CGPoint)arg3 forTouchType:(long long)arg4;
-(BOOL)viewCouldBecomeEditable:(id)arg1;
-(void)notifyKeyboardSelectionChanged;
-(void)setFirstResponderIfNecessaryActivatingSelection:(BOOL)arg1;
-(BOOL)useGesturesForEditableContent;
-(id)rangeForTextReplacement:(id)arg1;
-(void)setExpectingCommit:(BOOL)arg1;
-(BOOL)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
-(id)grabberSuppressionAssertion;
-(BOOL)didPerformLoupeSelectionHandoff;
-(void)willBeginFloatingCursor:(BOOL)arg1;
-(void)extendSelectionToPoint:(CGPoint)arg1;
-(BOOL)containerIsTextField;
-(BOOL)hasActiveSelectionInteraction;
-(id)keyboardSuppressionAssertion;
-(void)stashCurrentSelection;
-(CGPoint)loupeGestureEndPoint;
-(BOOL)expectingCommit;
-(void)extendSelectionToLoupeOrSetToPoint:(CGPoint)arg1;
-(void)selectWordWithoutShowingCommands;
-(BOOL)didUseStashedSelection;
-(void)setAutoscrolled:(BOOL)arg1;
-(void)setGrabberSuppressionAssertion:(id)arg1;
-(void)setKeyboardSuppressionAssertion:(id)arg1;
-(BOOL)needsGestureUpdate;
-(void)setLoupeGestureEndPoint:(CGPoint)arg1;
-(void)setSelectionWithPoint:(CGPoint)arg1;
-(void)setNeedsGestureUpdate:(BOOL)arg1;
-(void)setFirstResponderIfNecessary;
-(_UIKeyboardTextSelectionController *)activeSelectionController;
-(void)willBeginSelectionInteraction;

@end

