/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPreviewPresentationController.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKitCore/_UIPreviewActionSheetViewDelegate.h>
#import <UIKitCore/_UIPlatterMenuDynamicsControllerDelegate.h>
#import <UIKit/UIForcePresentationController.h>

@protocol _UIForcePresentationControllerDelegate, UIViewControllerPreviewing;
@class UIGestureRecognizer, _UIStatesFeedbackGenerator, UIView, UIScrollView, _UIPreviewActionSheetView, UIPreviewForceInteractionProgress, _UIPreviewPresentationContainerView, _UIPreviewPresentationEffectView, UIWindow, _UIPreviewPresentationAnimator, NSArray, UIPreviewAction, _UIPreviewQuickActionView, NSLayoutConstraint, UIImageView, UITapGestureRecognizer, _UIPlatterMenuDynamicsController, _UIVelocityIntegrator, UIPreviewInteractionController, UIInteractionProgress, NSString;

@interface _UIPreviewPresentationController : UIPreviewPresentationController <UIInteractionProgressObserver, _UIPreviewActionSheetViewDelegate, _UIPlatterMenuDynamicsControllerDelegate, UIForcePresentationController> {

	BOOL _sourceViewSnapshotAndScaleTransformSuppressed;
	BOOL _didSendBeginEvent;
	BOOL _leadingQuickActionViewSelected;
	BOOL _trailingQuickActionViewSelected;
	BOOL _isAnimatingActionSheet;
	BOOL _hasAskedForDismissalInternally;
	BOOL _hasAskedForCommitInternally;
	BOOL _preDismissAnimationsInflight;
	BOOL _panningGestureRecognizerInProgress;
	BOOL _breathing;
	UIGestureRecognizer* _panningGestureRecognizer;
	/*^block*/id _presentationPhaseCompletionBlock;
	id<_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
	_UIStatesFeedbackGenerator* _feedbackGenerator;
	UIView* _actionSheetContainerView;
	UIScrollView* _containerScrollView;
	_UIPreviewActionSheetView* _previewActionSheet;
	UIPreviewForceInteractionProgress* _interactionProgressForCommit;
	UIPreviewForceInteractionProgress* _interactionProgressForBreathing;
	_UIPreviewPresentationContainerView* _presentationContainerView;
	_UIPreviewPresentationEffectView* _revealContainerView;
	UIWindow* _initialSourceViewSnapshotWindow;
	UIView* _initialSourceViewSnapshot;
	_UIPreviewPresentationAnimator* _unhighlightPreviewCellSnapshotViewAnimator;
	NSArray* _previewActionItems;
	UIPreviewAction* _leadingPreviewAction;
	UIPreviewAction* _trailingPreviewAction;
	_UIPreviewQuickActionView* _leadingQuickActionView;
	_UIPreviewQuickActionView* _trailingQuickActionView;
	NSLayoutConstraint* _leadingQuickActionViewEdgeConstraint;
	NSLayoutConstraint* _trailingQuickActionViewEdgeConstraint;
	UIImageView* _actionSheetAvailableImageView;
	NSLayoutConstraint* _containerScrollViewXConstraint;
	UITapGestureRecognizer* _tapToDismissGestureRecognizer;
	UIGestureRecognizer* _modalPreviewActionsPanningGestureRecognizer;
	_UIPlatterMenuDynamicsController* _platterMenuController;
	_UIVelocityIntegrator* _revealPanningVelocityIntegrator;
	unsigned long long _currentPresentationPhase;
	UIPreviewInteractionController* _previewInteractionController;
	id<UIViewControllerPreviewing> _previewingContext;
	UIInteractionProgress* _interactionProgressForPresentation;

}

@property (assign,nonatomic) BOOL didSendBeginEvent;                                                                             //@synthesize didSendBeginEvent=_didSendBeginEvent - In the implementation block
@property (nonatomic,retain) UIView * actionSheetContainerView;                                                                  //@synthesize actionSheetContainerView=_actionSheetContainerView - In the implementation block
@property (nonatomic,retain) UIScrollView * containerScrollView;                                                                 //@synthesize containerScrollView=_containerScrollView - In the implementation block
@property (nonatomic,retain) _UIPreviewActionSheetView * previewActionSheet;                                                     //@synthesize previewActionSheet=_previewActionSheet - In the implementation block
@property (nonatomic,retain) UIPreviewForceInteractionProgress * interactionProgressForCommit;                                   //@synthesize interactionProgressForCommit=_interactionProgressForCommit - In the implementation block
@property (nonatomic,retain) UIPreviewForceInteractionProgress * interactionProgressForBreathing;                                //@synthesize interactionProgressForBreathing=_interactionProgressForBreathing - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationContainerView * presentationContainerView;                                    //@synthesize presentationContainerView=_presentationContainerView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * revealContainerView;                                             //@synthesize revealContainerView=_revealContainerView - In the implementation block
@property (nonatomic,retain) UIWindow * initialSourceViewSnapshotWindow;                                                         //@synthesize initialSourceViewSnapshotWindow=_initialSourceViewSnapshotWindow - In the implementation block
@property (nonatomic,retain) UIView * initialSourceViewSnapshot;                                                                 //@synthesize initialSourceViewSnapshot=_initialSourceViewSnapshot - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationAnimator * unhighlightPreviewCellSnapshotViewAnimator;                        //@synthesize unhighlightPreviewCellSnapshotViewAnimator=_unhighlightPreviewCellSnapshotViewAnimator - In the implementation block
@property (nonatomic,copy) NSArray * previewActionItems;                                                                         //@synthesize previewActionItems=_previewActionItems - In the implementation block
@property (nonatomic,copy) UIPreviewAction * leadingPreviewAction;                                                               //@synthesize leadingPreviewAction=_leadingPreviewAction - In the implementation block
@property (nonatomic,copy) UIPreviewAction * trailingPreviewAction;                                                              //@synthesize trailingPreviewAction=_trailingPreviewAction - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * leadingQuickActionView;                                                 //@synthesize leadingQuickActionView=_leadingQuickActionView - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * trailingQuickActionView;                                                //@synthesize trailingQuickActionView=_trailingQuickActionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingQuickActionViewEdgeConstraint;                                          //@synthesize leadingQuickActionViewEdgeConstraint=_leadingQuickActionViewEdgeConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingQuickActionViewEdgeConstraint;                                         //@synthesize trailingQuickActionViewEdgeConstraint=_trailingQuickActionViewEdgeConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * actionSheetAvailableImageView;                                                        //@synthesize actionSheetAvailableImageView=_actionSheetAvailableImageView - In the implementation block
@property (assign,nonatomic) BOOL leadingQuickActionViewSelected;                                                                //@synthesize leadingQuickActionViewSelected=_leadingQuickActionViewSelected - In the implementation block
@property (assign,nonatomic) BOOL trailingQuickActionViewSelected;                                                               //@synthesize trailingQuickActionViewSelected=_trailingQuickActionViewSelected - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerScrollViewXConstraint;                                                //@synthesize containerScrollViewXConstraint=_containerScrollViewXConstraint - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapToDismissGestureRecognizer;                                             //@synthesize tapToDismissGestureRecognizer=_tapToDismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * modalPreviewActionsPanningGestureRecognizer;                                  //@synthesize modalPreviewActionsPanningGestureRecognizer=_modalPreviewActionsPanningGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingActionSheet;                                                                        //@synthesize isAnimatingActionSheet=_isAnimatingActionSheet - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuDynamicsController * platterMenuController;                                           //@synthesize platterMenuController=_platterMenuController - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * revealPanningVelocityIntegrator;                                            //@synthesize revealPanningVelocityIntegrator=_revealPanningVelocityIntegrator - In the implementation block
@property (assign,nonatomic) BOOL hasAskedForDismissalInternally;                                                                //@synthesize hasAskedForDismissalInternally=_hasAskedForDismissalInternally - In the implementation block
@property (assign,nonatomic) BOOL hasAskedForCommitInternally;                                                                   //@synthesize hasAskedForCommitInternally=_hasAskedForCommitInternally - In the implementation block
@property (assign,nonatomic) BOOL preDismissAnimationsInflight;                                                                  //@synthesize preDismissAnimationsInflight=_preDismissAnimationsInflight - In the implementation block
@property (assign,nonatomic) BOOL panningGestureRecognizerInProgress;                                                            //@synthesize panningGestureRecognizerInProgress=_panningGestureRecognizerInProgress - In the implementation block
@property (getter=isBreathing,nonatomic,readonly) BOOL breathing;                                                                //@synthesize breathing=_breathing - In the implementation block
@property (assign,nonatomic) unsigned long long currentPresentationPhase;                                                        //@synthesize currentPresentationPhase=_currentPresentationPhase - In the implementation block
@property (assign,nonatomic,__weak) UIPreviewInteractionController * previewInteractionController;                               //@synthesize previewInteractionController=_previewInteractionController - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewing> previewingContext;                                            //@synthesize previewingContext=_previewingContext - In the implementation block
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation;                                         //@synthesize interactionProgressForPresentation=_interactionProgressForPresentation - In the implementation block
@property (assign,nonatomic) double presentationViewCornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id presentationPhaseCompletionBlock;                                                                  //@synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer;                                                     //@synthesize panningGestureRecognizer=_panningGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed;                                                //@synthesize sourceViewSnapshotAndScaleTransformSuppressed=_sourceViewSnapshotAndScaleTransformSuppressed - In the implementation block
@property (nonatomic,readonly) UIView * _revealContainerView; 
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;                                                     //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;              //@synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate - In the implementation block
+(BOOL)_shouldApplyVisualEffectsToPresentingView;
+(id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(BOOL)arg2 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(id)platterView;
-(BOOL)isBreathing;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setCurrentPresentationPhase:(unsigned long long)arg1 ;
-(void)setRevealPanningVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(_UIPreviewPresentationContainerView *)presentationContainerView;
-(CGRect)_preferredSourceViewRect;
-(void)_beginBreathing;
-(void)_updateRevealContainerViewForSourceRect:(CGRect)arg1 ;
-(_UIPreviewPresentationEffectView *)revealContainerView;
-(void)setContainerScrollView:(UIScrollView *)arg1 ;
-(void)setPresentationContainerView:(_UIPreviewPresentationContainerView *)arg1 ;
-(void)_endBreathing;
-(void)setActionSheetContainerView:(UIView *)arg1 ;
-(void)setContainerScrollViewXConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerScrollViewXConstraint;
-(void)_triggerQuickActionHandlerIfNeeded;
-(void)_unhighlightPreviewCellSnapshotViewsIfNeeded;
-(void)_hideQuickActions;
-(void)_stopUnhighlightPreviewCellSnapshotViewAnimationIfNeeded;
-(void)_layoutForDismissTransition;
-(BOOL)hasAskedForCommitInternally;
-(void)_invokeCommitHandlerFromInteractionProgress;
-(_UIPlatterMenuDynamicsController *)platterMenuController;
-(UIPreviewForceInteractionProgress *)interactionProgressForBreathing;
-(void)setPreviewActionSheet:(_UIPreviewActionSheetView *)arg1 ;
-(void)_updateBreathingTransformWithProgress:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasPreviewActions;
-(void)_layoutForPreviewInteractionProgress:(double)arg1 ;
-(UIImageView *)actionSheetAvailableImageView;
-(_UIPreviewActionSheetView *)previewActionSheet;
-(CGPoint)_dismissedActionSheetCenterForActionSheet:(id)arg1 ;
-(_UIPreviewQuickActionView *)leadingQuickActionView;
-(UIView *)initialSourceViewSnapshot;
-(void)_configureActionSheetChromeViews;
-(void)_preparePresentationContainerViewForPreviewTransition;
-(CGRect)platterBounds;
-(void)_preparePresentationContainerViewForPreviewInteraction;
-(void)_updateVisibiltyOfPreviewActionChromeForCurrentState;
-(void)_setupInteractionProgressForBreathing;
-(void)_configureDynamicsController;
-(void)dismissalTransitionWillBegin;
-(void)_configureInitialActionSheetViewIfNeeded;
-(_UIPreviewQuickActionView *)trailingQuickActionView;
-(unsigned long long)currentPresentationPhase;
-(_UIVelocityIntegrator *)revealPanningVelocityIntegrator;
-(BOOL)hasAskedForDismissalInternally;
-(BOOL)preDismissAnimationsInflight;
-(BOOL)leadingQuickActionViewSelected;
-(BOOL)trailingQuickActionViewSelected;
-(void)setInitialSourceViewSnapshot:(UIView *)arg1 ;
-(void)setInitialSourceViewSnapshotWindow:(UIWindow *)arg1 ;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1 ;
-(void)setRevealContainerView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)_layoutForRevealUnhighlightTransition:(double)arg1 ;
-(void)setUnhighlightPreviewCellSnapshotViewAnimator:(_UIPreviewPresentationAnimator *)arg1 ;
-(void)_dismissPresentation;
-(_UIPreviewPresentationAnimator *)unhighlightPreviewCellSnapshotViewAnimator;
-(double)platterContainerCenterX;
-(CGPoint)centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg1 ;
-(double)platterContainerCenterY;
-(CGPoint)centerForMenuPresentedForActionSheet:(id)arg1 ;
-(CGPoint)centerForMenuDismissedForActionSheet:(id)arg1 ;
-(CGRect)platterContainerBounds;
-(double)_leadingQuickActionOffsetForCenterPosition:(CGPoint)arg1 swipeView:(id)arg2 ;
-(NSLayoutConstraint *)leadingQuickActionViewEdgeConstraint;
-(void)setPlatterMenuController:(_UIPlatterMenuDynamicsController *)arg1 ;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(double)_trailingQuickActionOffsetForCenterPosition:(CGPoint)arg1 swipeView:(id)arg2 ;
-(NSLayoutConstraint *)trailingQuickActionViewEdgeConstraint;
-(BOOL)_hasPreviewQuickActions;
-(BOOL)panningGestureRecognizerInProgress;
-(void)setHasAskedForCommitInternally:(BOOL)arg1 ;
-(void)_dismissPresentationWithCompletion:(/*^block*/id)arg1 ;
-(UIView *)actionSheetContainerView;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(void)_dismissForHandledActionWithCompletion:(/*^block*/id)arg1 ;
-(void)setPreviewActionItems:(NSArray *)arg1 ;
-(void)_presentSubActionSheetForPreviewActionGroup:(id)arg1 ;
-(UIScrollView *)containerScrollView;
-(void)setPreDismissAnimationsInflight:(BOOL)arg1 ;
-(void)setHasAskedForDismissalInternally:(BOOL)arg1 ;
-(BOOL)_platterIsSelectingPreviewActions;
-(BOOL)_hasSelectedQuickAction;
-(void)_dismissForSelectionQuickActionAnimated;
-(BOOL)_platterIsInInitialPosition;
-(void)_restorePlatterToInitialStatePositionAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(void)setLeadingQuickActionViewEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLeadingQuickActionView:(_UIPreviewQuickActionView *)arg1 ;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(void)setTrailingQuickActionViewEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDidSendBeginEvent:(BOOL)arg1 ;
-(void)setTrailingQuickActionView:(_UIPreviewQuickActionView *)arg1 ;
-(void)setActionSheetAvailableImageView:(UIImageView *)arg1 ;
-(void)_panningGestureRecognizerDidFire:(id)arg1 ;
-(void)updateSwipeActionsIfApplicable;
-(void)setPanningGestureRecognizerInProgress:(BOOL)arg1 ;
-(BOOL)didSendBeginEvent;
-(void)setupAdditionalModalGestureRecognizers;
-(double)presentationViewCornerRadius;
-(void)setLeadingQuickActionViewSelected:(BOOL)arg1 ;
-(void)setPresentationViewCornerRadius:(double)arg1 ;
-(void)setTrailingQuickActionViewSelected:(BOOL)arg1 ;
-(UITapGestureRecognizer *)tapToDismissGestureRecognizer;
-(void)setInteractionProgressForBreathing:(UIPreviewForceInteractionProgress *)arg1 ;
-(void)_revealTransitionDidComplete:(BOOL)arg1 ;
-(UIGestureRecognizer *)modalPreviewActionsPanningGestureRecognizer;
-(BOOL)isAnimatingActionSheet;
-(void)setModalPreviewActionsPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)_tapToDismissPreviewWithActionsDidFire:(id)arg1 ;
-(void)_layoutForRevealTransition;
-(void)setTapToDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_layoutForPreviewTransition;
-(void)_previewTransitionDidComplete:(BOOL)arg1 ;
-(void)_dismissTransitionDidComplete:(BOOL)arg1 ;
-(CGPoint)_presentedActionSheetCenterForActionSheet:(id)arg1 ;
-(void)_restorePlatterToInitialStatePositionAnimated;
-(UIWindow *)initialSourceViewSnapshotWindow;
-(void)setIsAnimatingActionSheet:(BOOL)arg1 ;
-(void)setForcePresentationControllerDelegate:(id<_UIForcePresentationControllerDelegate>)arg1 ;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)setPresentationPhaseCompletionBlock:(id)arg1 ;
-(UIPreviewAction *)leadingPreviewAction;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(UIPreviewAction *)trailingPreviewAction;
-(NSArray *)previewActionItems;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)presentationPhaseCompletionBlock;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setPreviewInteractionController:(UIPreviewInteractionController *)arg1 ;
-(UIPreviewInteractionController *)previewInteractionController;
-(id<UIViewControllerPreviewing>)previewingContext;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing>)arg1 ;
-(CGPoint)centerForPlatterWithMenuViewDismissed;
-(CGPoint)centerForMenuDismissed;
-(CGPoint)centerForPlatterWithMenuViewPresented;
-(double)minimumSpacingBetweenPlatterAndMenu;
-(CGPoint)centerForMenuPresented;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1 ;
-(id)leadingSwipeActionView;
-(id)trailingSwipeActionView;
-(CGPoint)initialCenterForLeadingSwipeActionView;
-(CGPoint)initialCenterForTrailingSwipeActionView;
-(void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(CGPoint)arg3 ;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(id)_animatorForContainmentTransition;
-(BOOL)previewActionSheetCanSelectItem:(id)arg1 ;
-(id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1 ;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
-(double)_quickActionSelectionOffset;
-(double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)arg1 ;
-(BOOL)_platterIsInInitialPositionMostly;
-(CGPoint)_applyLayoutAdjustmentsForManagedViewWithPosition:(CGPoint)arg1 ;
-(void)setLeadingPreviewAction:(UIPreviewAction *)arg1 ;
-(void)setTrailingPreviewAction:(UIPreviewAction *)arg1 ;
-(void)setPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)presentationTransitionWillBegin;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(UIView *)_revealContainerView;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1 ;
-(BOOL)_canCommitPresentation;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(BOOL)_canDismissPresentation;
-(void)_willCommitPresentation;
-(void)_prepareInitialSourceViewSnapshot;
-(UIPreviewForceInteractionProgress *)interactionProgressForCommit;
-(void)setInteractionProgressForCommit:(UIPreviewForceInteractionProgress *)arg1 ;
-(void)dealloc;
@end

