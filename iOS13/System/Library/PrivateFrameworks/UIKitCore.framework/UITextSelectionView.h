/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITextInteractionAssistant, UITextSelection, NSTimer, UIView, UITextRangeView, NSArray;

@interface UITextSelectionView : UIView {

	UITextInteractionAssistant* m_interactionAssistant;
	UITextSelection* m_selection;
	NSTimer* m_caretTimer;
	UIView* m_caretView;
	UIView* m_floatingCaretView;
	UITextRangeView* m_rangeView;
	BOOL m_caretBlinks;
	BOOL m_caretShowingNow;
	BOOL m_caretAnimating;
	BOOL m_visible;
	BOOL m_activated;
	BOOL m_wasShowingCommands;
	BOOL m_delayShowingCommands;
	BOOL m_dictationReplacementsMode;
	BOOL m_shouldEmphasizeNextSelectionRects;
	int m_showingCommandsCounter;
	NSArray* m_replacements;
	BOOL m_deferSelectionCommands;
	CFRunLoopObserverRef m_observer;
	BOOL m_activeCaret;
	BOOL m_isSuspended;
	int m_showingCommandsCounterForRotate;
	unsigned long long _activeGrabberSuppressionAssertions;
	BOOL m_forceRangeView;
	BOOL m_isInstalledInSelectionContainerView;
	BOOL _isIndirectFloatingCaret;
	CGRect _stashedCaretRect;
	CGRect _previousGhostCaretRect;

}

@property (nonatomic,readonly) UIView * caretView; 
@property (nonatomic,readonly) UIView * floatingCaretView; 
@property (nonatomic,readonly) UITextRangeView * rangeView; 
@property (assign,nonatomic) CGRect stashedCaretRect;                                                 //@synthesize stashedCaretRect=_stashedCaretRect - In the implementation block
@property (assign,nonatomic) BOOL isIndirectFloatingCaret;                                            //@synthesize isIndirectFloatingCaret=_isIndirectFloatingCaret - In the implementation block
@property (assign,nonatomic) CGRect previousGhostCaretRect;                                           //@synthesize previousGhostCaretRect=_previousGhostCaretRect - In the implementation block
@property (nonatomic,__weak,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (nonatomic,readonly) UITextSelection * selection; 
@property (assign,nonatomic) BOOL caretBlinks; 
@property (assign,nonatomic) BOOL visible; 
@property (assign,nonatomic) BOOL forceRangeView; 
@property (nonatomic,readonly) BOOL selectionCommandsShowing; 
@property (nonatomic,retain) NSArray * replacements; 
@property (nonatomic,readonly) BOOL isInstalledInSelectionContainerView; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)removeFromSuperview;
-(NSArray *)replacements;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)selectionChanged;
-(void)tintColorDidChange;
-(void)activate;
-(void)showSelectionCommands;
-(void)deactivate;
-(id)scrollView;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(UITextSelection *)selection;
-(void)setEmphasisOnNextSelectionRects;
-(void)hideSelectionCommands;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)configureForSelectionMode;
-(void)updateSelectionRects;
-(void)showSelectionCommandsAfterDelay:(double)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(void)setReplacements:(NSArray *)arg1 ;
-(void)didSuspend:(id)arg1 ;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(void)inputModeDidChange:(id)arg1 ;
-(UITextInteractionAssistant *)interactionAssistant;
-(void)configureForHighlightMode;
-(BOOL)caretBlinks;
-(void)detach;
-(id)dynamicCaretList;
-(void)showCaret:(int)arg1 ;
-(void)cancelDelayedCommandRequests;
-(void)updateDocumentHasContent:(BOOL)arg1 ;
-(void)startCaretBlinkIfNeeded;
-(void)deferredUpdateSelectionRects;
-(void)setForceRangeView:(BOOL)arg1 ;
-(void)willBeginFloatingCursor:(BOOL)arg1 ;
-(CGPoint)floatingCursorPositionForPoint:(CGPoint)arg1 ;
-(UITextRangeView *)rangeView;
-(BOOL)selectionCommandsShowing;
-(void)updateBaseIsStartWithDocumentPoint:(CGPoint)arg1 ;
-(void)updateSelectionDots;
-(id)_actingParentViewForGestureRecognizers;
-(id)obtainGrabberSuppressionAssertion;
-(id)initWithInteractionAssistant:(id)arg1 ;
-(void)installIfNecessary;
-(void)validateWithInteractionAssistant:(id)arg1 ;
-(void)updateSelectionWithDocumentPoint:(CGPoint)arg1 ;
-(void)showReplacementsWithGenerator:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3 ;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(CGRect)selectionBoundingBox;
-(BOOL)shouldSuppressSelectionHandles;
-(void)prepareForMagnification;
-(void)doneMagnifying;
-(void)inputViewWillChange;
-(void)inputViewDidChange;
-(void)clearRangeAnimated:(BOOL)arg1 ;
-(void)releaseGrabberHandleSuppressionAssertion:(id)arg1 ;
-(void)wilLResume:(id)arg1 ;
-(void)textSelectionViewActivated:(id)arg1 ;
-(void)selectionWillScroll:(id)arg1 ;
-(void)selectionDidScroll:(id)arg1 ;
-(void)scaleWillChange:(id)arg1 ;
-(void)scaleDidChange:(id)arg1 ;
-(void)inputViewWillAnimate;
-(void)inputViewDidAnimate;
-(void)selectionWillTranslateForReachability:(id)arg1 ;
-(void)selectionDidTranslateForReachability:(id)arg1 ;
-(void)windowDidResignOrBecomeKey;
-(void)inputViewWillMove:(id)arg1 ;
-(void)inputViewDidMove;
-(void)viewAnimate:(id)arg1 ;
-(void)appearOrFadeIfNecessary;
-(void)deactivateAndCollapseSelection:(BOOL)arg1 ;
-(void)deferredUpdateSelectionCommands;
-(BOOL)affectedByScrollerNotification:(id)arg1 ;
-(void)showCalloutBarAfterDelay:(double)arg1 ;
-(void)hideSelectionCommandsAfterDelay:(double)arg1 ;
-(BOOL)shouldBeVisible;
-(void)clearCaret;
-(void)clearCaretBlinkTimer;
-(id)_customSelectionContainerView;
-(void)updateRangeViewForSelectionMode;
-(BOOL)forceRangeView;
-(UIView *)caretView;
-(id)dynamicCaret;
-(void)showInitialCaret;
-(void)touchCaretBlinkTimer;
-(id)caretViewColor;
-(void)updateSelectionRectsIfNeeded;
-(void)showCommandsWithReplacements:(id)arg1 ;
-(CGRect)clippedTargetRect:(CGRect)arg1 ;
-(void)_showCommandsWithReplacements:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3 ;
-(void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(BOOL)arg2 forDictation:(BOOL)arg3 rectsToEvade:(id)arg4 ;
-(BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2 rectsToEvade:(id)arg3 ;
-(void)_showSelectionCommandsForContextMenu:(BOOL)arg1 ;
-(void)calculateReplacementsWithGenerator:(id)arg1 andShowAfterDelay:(double)arg2 ;
-(void)hideCaret:(int)arg1 ;
-(void)_hideCaret:(int)arg1 ;
-(void)caretBlinkTimerFired:(id)arg1 ;
-(void)_showCaret:(int)arg1 ;
-(UIView *)floatingCaretView;
-(id)floatingCaretViewColor;
-(void)setStashedCaretRect:(CGRect)arg1 ;
-(void)setPreviousGhostCaretRect:(CGRect)arg1 ;
-(void)setIsIndirectFloatingCaret:(BOOL)arg1 ;
-(void)beginFloatingCaretView;
-(BOOL)isIndirectFloatingCaret;
-(BOOL)_shouldUseIndirectFloatingCaret;
-(void)animatePulsingIndirectCaret:(id)arg1 ;
-(void)animatePulsingDirectCaret:(id)arg1 ;
-(BOOL)point:(CGPoint)arg1 isNearCursorRect:(CGRect)arg2 ;
-(CGRect)previousGhostCaretRect;
-(void)animateCaret:(id)arg1 toPosition:(CGPoint)arg2 withSize:(CGSize)arg3 ;
-(void)endFloatingCaretView;
-(void)updateSelectionCommands;
-(void)configureForReplacementMode;
-(void)animateBoxShrinkOn:(id)arg1 ;
-(void)animateExpanderOn:(id)arg1 ;
-(BOOL)isInstalledInSelectionContainerView;
-(CGRect)stashedCaretRect;
@end

