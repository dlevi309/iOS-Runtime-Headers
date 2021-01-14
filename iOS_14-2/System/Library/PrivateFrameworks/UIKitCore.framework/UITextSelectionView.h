/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITextInteractionAssistant, UITextSelection, UIView, UITextRangeView, NSArray, CAKeyframeAnimation;

@interface UITextSelectionView : UIView {

	UITextInteractionAssistant* m_interactionAssistant;
	UITextSelection* m_selection;
	UIView* m_caretView;
	UIView* m_floatingCaretView;
	UITextRangeView* m_rangeView;
	BOOL m_caretBlinks;
	BOOL m_caretShowingNow;
	BOOL m_caretAnimating;
	BOOL m_ghostApperarance;
	BOOL m_caretVisible;
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
	CAKeyframeAnimation* _caretBlinkAnimation;
	id _floatingCaretBlinkAssertion;
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
@property (assign,nonatomic) BOOL caretVisible; 
@property (assign,nonatomic) BOOL ghostAppearance; 
-(void)setCaretBlinks:(BOOL)arg1 ;
-(UIView *)caretView;
-(BOOL)caretVisible;
-(UITextInteractionAssistant *)interactionAssistant;
-(void)didSuspend:(id)arg1 ;
-(void)setForceRangeView:(BOOL)arg1 ;
-(BOOL)forceRangeView;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(id)_customSelectionContainerView;
-(void)detach;
-(void)showCalloutBarAfterDelay:(double)arg1 ;
-(void)tintColorDidChange;
-(void)hideSelectionCommandsAfterDelay:(double)arg1 ;
-(void)scaleWillChange:(id)arg1 ;
-(void)_setCaretBlinkAnimationEnabled:(BOOL)arg1 ;
-(void)didRotate:(id)arg1 ;
-(CGRect)stashedCaretRect;
-(id)ghostCaretViewColor;
-(void)configureForPencilHighlightMode;
-(void)removeFromSuperview;
-(void)updateSelectionCommands;
-(void)deactivateAndCollapseSelection:(BOOL)arg1 ;
-(void)viewAnimate:(id)arg1 ;
-(void)endFloatingCaretView;
-(void)showSelectionCommands;
-(void)animatePulsingDirectCaret:(id)arg1 ;
-(BOOL)selectionCommandsShowing;
-(void)showCommandsWithReplacements:(id)arg1 ;
-(void)updateDocumentHasContent:(BOOL)arg1 ;
-(id)obtainGrabberSuppressionAssertion;
-(void)appearOrFadeIfNecessary;
-(void)clearCaret;
-(void)configureForPencilDeletionPreviewMode;
-(void)configureForSelectionMode;
-(void)setReplacements:(NSArray *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)visible;
-(id)caretViewColor;
-(void)inputViewWillMove:(id)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)doneMagnifying;
-(UITextRangeView *)rangeView;
-(NSArray *)replacements;
-(void)wilLResume:(id)arg1 ;
-(BOOL)_shouldUseIndirectFloatingCaret;
-(void)setIsIndirectFloatingCaret:(BOOL)arg1 ;
-(void)scaleDidChange:(id)arg1 ;
-(void)deactivate;
-(void)inputModeDidChange:(id)arg1 ;
-(BOOL)isInstalledInSelectionContainerView;
-(BOOL)shouldBeVisible;
-(void)_hideCaret:(int)arg1 ;
-(void)setCaretVisible:(BOOL)arg1 ;
-(void)showInitialCaret;
-(void)activate;
-(BOOL)shouldSuppressSelectionHandles;
-(void)animateBoxShrinkOn:(id)arg1 ;
-(BOOL)isIndirectFloatingCaret;
-(void)clearRangeAnimated:(BOOL)arg1 ;
-(void)updateSelectionDots;
-(void)windowDidResignOrBecomeKey;
-(void)deferredUpdateSelectionCommands;
-(void)hideCaret:(int)arg1 ;
-(BOOL)isValid;
-(void)selectionWillTranslateForReachability:(id)arg1 ;
-(void)prepareForMagnification;
-(void)_showCaret:(int)arg1 ;
-(void)_showCommandsWithReplacements:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3 ;
-(CGPoint)floatingCursorPositionForPoint:(CGPoint)arg1 ;
-(void)validateWithInteractionAssistant:(id)arg1 ;
-(CGRect)selectionBoundingBox;
-(UITextSelection *)selection;
-(UIView *)floatingCaretView;
-(id)initWithInteractionAssistant:(id)arg1 ;
-(void)installIfNecessary;
-(void)updateSelectionRectsIfNeeded;
-(void)inputViewDidChange;
-(id)dynamicCaret;
-(BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2 rectsToEvade:(id)arg3 ;
-(void)selectionWillScroll:(id)arg1 ;
-(void)selectionDidTranslateForReachability:(id)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)animateCaret:(id)arg1 toPosition:(CGPoint)arg2 withSize:(CGSize)arg3 ;
-(void)animateExpanderOn:(id)arg1 ;
-(void)beginFloatingCaretView;
-(void)hideSelectionCommands;
-(id)_actingParentViewForGestureRecognizers;
-(BOOL)point:(CGPoint)arg1 isNearCursorRect:(CGRect)arg2 ;
-(void)endFloatingCursor;
-(void)textSelectionViewActivated:(id)arg1 ;
-(void)inputViewDidAnimate;
-(BOOL)caretBlinks;
-(void)invalidate;
-(void)setStashedCaretRect:(CGRect)arg1 ;
-(void)configureForReplacementMode;
-(id)dynamicCaretList;
-(void)showSelectionCommandsAfterDelay:(double)arg1 ;
-(void)inputViewWillChange;
-(void)showCaret:(int)arg1 ;
-(void)inputViewWillAnimate;
-(void)releaseGrabberHandleSuppressionAssertion:(id)arg1 ;
-(void)updateSelectionWithDocumentPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(CGRect)previousGhostCaretRect;
-(CGRect)clippedTargetRect:(CGRect)arg1 ;
-(void)setGhostAppearance:(BOOL)arg1 ;
-(void)calculateReplacementsWithGenerator:(id)arg1 andShowAfterDelay:(double)arg2 ;
-(void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(BOOL)arg2 forDictation:(BOOL)arg3 rectsToEvade:(id)arg4 ;
-(void)showReplacementsWithGenerator:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3 ;
-(BOOL)activeCaret;
-(void)configureForHighlightMode;
-(void)inputViewDidMove;
-(void)willBeginFloatingCursor:(BOOL)arg1 ;
-(void)animatePulsingIndirectCaret:(id)arg1 ;
-(id)scrollView;
-(void)setPreviousGhostCaretRect:(CGRect)arg1 ;
-(void)cancelDelayedCommandRequests;
-(void)updateSelectionRects;
-(BOOL)affectedByScrollerNotification:(id)arg1 ;
-(void)_showSelectionCommandsForContextMenu:(BOOL)arg1 ;
-(id)floatingCaretViewColor;
-(void)updateRangeViewForSelectionMode;
-(void)selectionDidScroll:(id)arg1 ;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(void)selectionChanged;
-(void)dealloc;
-(void)setEmphasisOnNextSelectionRects;
-(void)deferredUpdateSelectionRects;
-(void)updateBaseIsStartWithDocumentPoint:(CGPoint)arg1 ;
-(BOOL)ghostAppearance;
@end

