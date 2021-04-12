/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIKeyboardTextSelectionController;


@protocol UITextInteraction_AssistantDelegate <UITextAutoscrolling,NSObject>
@property (assign,nonatomic) BOOL autoscrolled; 
@property (assign,nonatomic) CGPoint loupeGestureEndPoint; 
@property (assign,nonatomic) BOOL needsGestureUpdate; 
@property (nonatomic,readonly) BOOL willHandoffLoupeMagnifier; 
@property (assign,nonatomic) BOOL expectingCommit; 
@property (nonatomic,retain) id grabberSuppressionAssertion; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * activeSelectionController; 
@optional
-(BOOL)overrideGestureRecognizerShouldBegin:(id)arg1;
-(BOOL)overrideGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@required
-(id)view;
-(id)selectionView;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1;
-(void)endFloatingCursor;
-(void)stashCurrentSelection;
-(void)setAutoscrolled:(BOOL)arg1;
-(void)setGrabberSuppressionAssertion:(id)arg1;
-(void)setLoupeGestureEndPoint:(CGPoint)arg1;
-(void)setNeedsGestureUpdate:(BOOL)arg1;
-(void)setFirstResponderIfNecessary;
-(_UIKeyboardTextSelectionController *)activeSelectionController;
-(void)willBeginSelectionInteraction;
-(void)resetWillHandoffLoupeMagnifier;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(BOOL)autoscrolled;
-(void)didEndSelectionInteraction;
-(BOOL)needsGestureUpdate;
-(BOOL)willHandoffLoupeMagnifier;
-(void)setGestureRecognizers;
-(void)clearStashedSelection;
-(void)setSelectionWithPoint:(CGPoint)arg1;
-(void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
-(void)scrollSelectionToVisible;
-(void)willBeginFloatingCursor:(BOOL)arg1;
-(BOOL)containerIsPlainStyleAtom;
-(void)notifyKeyboardSelectionChanged;
-(id)rangeForTextReplacement:(id)arg1;
-(void)selectWordWithoutShowingCommands;
-(BOOL)containerIsTextField;
-(void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
-(BOOL)useGesturesForEditableContent;
-(BOOL)viewCouldBecomeEditable:(id)arg1;
-(void)canBeginDragCursor:(id)arg1;
-(BOOL)containerAllowsSelectionTintOnly;
-(void)checkEditabilityAndSetFirstResponderIfNecessary;
-(void)showSelectionCommandsForSecondaryClickAtPoint:(CGPoint)arg1;
-(void)setSuppressSystemUI:(BOOL)arg1;
-(void)setAutomaticSelectionCommandsSuppressedForPointerTouchType:(BOOL)arg1;
-(BOOL)supportsIndirectInteractions;
-(void)lollipopGestureWithState:(long long)arg1 location:(CGPoint)arg2 locationOfFirstTouch:(CGPoint)arg3 forTouchType:(long long)arg4;
-(void)setFirstResponderIfNecessaryActivatingSelection:(BOOL)arg1;
-(id)grabberSuppressionAssertion;
-(void)setExpectingCommit:(BOOL)arg1;
-(BOOL)hasActiveSelectionInteraction;
-(BOOL)usesAsynchronousSelectionController;
-(void)extendSelectionToPoint:(CGPoint)arg1;
-(CGPoint)loupeGestureEndPoint;
-(BOOL)expectingCommit;
-(void)extendSelectionToLoupeOrSetToPoint:(CGPoint)arg1;
-(BOOL)didUseStashedSelection;

@end

