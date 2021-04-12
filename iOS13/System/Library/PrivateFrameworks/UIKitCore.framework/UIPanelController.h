/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UILayoutContainerViewDelegate.h>

@class NSMutableArray, UIViewController, UIView, UILayoutContainerView, _UIPanelInternalState, UISlidingBarState, NSArray, UIVisualEffectView, UISlidingBarConfiguration, UISlidingBarStateRequest, NSString;

@interface UIPanelController : NSObject <UILayoutContainerViewDelegate> {

	struct {
		unsigned isUpdatingState : 1;
		unsigned needsDeferredUpdateWhileUpdatingState : 1;
		unsigned isPerformingDeferredUpdate : 1;
		unsigned nextLayoutIsForInitializingAnimation : 1;
		unsigned inWillTransitionToTraitCollection : 1;
		unsigned inViewWillTransitionToSize : 1;
		unsigned inViewWillTransitionToSizeRecursingToChildren : 1;
		unsigned viewsLocked : 1;
		unsigned takingDestinationSnapshot : 1;
		unsigned registeredForKeyboardNotifications : 1;
		unsigned borderViewsObservingViewBackgroundColor : 1;
		unsigned updateLayoutRequested : 1;
	}  _panelControllerFlags;
	NSMutableArray* _wrapperBlocksForNextUpdate;
	BOOL __hasUpdatedForTraitCollection;
	BOOL __needsFirstTimeUpdateForTraitCollection;
	BOOL __changingViewControllerParentage;
	UIViewController* _owningViewController;
	UIView* _dimmingView;
	UILayoutContainerView* _view;
	_UIPanelInternalState* __internalState;
	_UIPanelInternalState* __previousInternalState;
	UISlidingBarState* __lastComputedPublicState;
	NSArray* __lastPossiblePublicStates;
	UIView* __contentView;
	UIView* __leadingBorderView;
	UIView* __trailingBorderView;
	UIView* __sourceTransitionView;
	UIView* __destTransitionView;
	UIVisualEffectView* __leadingBackgroundView;
	UIVisualEffectView* __trailingBackgroundView;
	CGSize __lastViewSize;

}

@property (assign,nonatomic,__weak) UIViewController * owningViewController;                                                               //@synthesize owningViewController=_owningViewController - In the implementation block
@property (nonatomic,retain) UILayoutContainerView * view;                                                                                 //@synthesize view=_view - In the implementation block
@property (setter=_setInternalState:,nonatomic,retain) _UIPanelInternalState * _internalState;                                             //@synthesize _internalState=__internalState - In the implementation block
@property (setter=_setPreviousInternalState:,nonatomic,retain) _UIPanelInternalState * _previousInternalState;                             //@synthesize _previousInternalState=__previousInternalState - In the implementation block
@property (setter=_setLastComputedPublicState:,nonatomic,copy) UISlidingBarState * _lastComputedPublicState;                               //@synthesize _lastComputedPublicState=__lastComputedPublicState - In the implementation block
@property (setter=_setLastPossiblePublicStates:,nonatomic,copy) NSArray * _lastPossiblePublicStates;                                       //@synthesize _lastPossiblePublicStates=__lastPossiblePublicStates - In the implementation block
@property (assign,setter=_setLastViewSize:,nonatomic) CGSize _lastViewSize;                                                                //@synthesize _lastViewSize=__lastViewSize - In the implementation block
@property (setter=_setContentView:,nonatomic,retain) UIView * _contentView;                                                                //@synthesize _contentView=__contentView - In the implementation block
@property (setter=_setLeadingBorderView:,nonatomic,retain) UIView * _leadingBorderView;                                                    //@synthesize _leadingBorderView=__leadingBorderView - In the implementation block
@property (setter=_setTrailingBorderView:,nonatomic,retain) UIView * _trailingBorderView;                                                  //@synthesize _trailingBorderView=__trailingBorderView - In the implementation block
@property (setter=_setSourceTransitionView:,nonatomic,retain) UIView * _sourceTransitionView;                                              //@synthesize _sourceTransitionView=__sourceTransitionView - In the implementation block
@property (setter=_setDestinationTransitionView:,nonatomic,retain) UIView * _destTransitionView;                                           //@synthesize _destTransitionView=__destTransitionView - In the implementation block
@property (setter=_setLeadingBackgroundView:,nonatomic,retain) UIVisualEffectView * _leadingBackgroundView;                                //@synthesize _leadingBackgroundView=__leadingBackgroundView - In the implementation block
@property (setter=_setTrailingBackgroundView:,nonatomic,retain) UIVisualEffectView * _trailingBackgroundView;                              //@synthesize _trailingBackgroundView=__trailingBackgroundView - In the implementation block
@property (assign,setter=_setHasUpdatedForTraitCollection:,nonatomic) BOOL _hasUpdatedForTraitCollection;                                  //@synthesize _hasUpdatedForTraitCollection=__hasUpdatedForTraitCollection - In the implementation block
@property (assign,setter=_setNeedsFirstTimeUpdateForTraitCollection:,nonatomic) BOOL _needsFirstTimeUpdateForTraitCollection;              //@synthesize _needsFirstTimeUpdateForTraitCollection=__needsFirstTimeUpdateForTraitCollection - In the implementation block
@property (assign,setter=_setChangingViewControllerParentage:,nonatomic) BOOL _changingViewControllerParentage;                            //@synthesize _changingViewControllerParentage=__changingViewControllerParentage - In the implementation block
@property (nonatomic,retain) UIViewController * mainViewController; 
@property (nonatomic,retain) UIViewController * leadingViewController; 
@property (nonatomic,retain) UIViewController * trailingViewController; 
@property (nonatomic,retain) UIViewController * preservedDetailController; 
@property (assign,nonatomic,__weak) id<UIPanelControllerDelegate> delegate; 
@property (nonatomic,copy) UISlidingBarConfiguration * configuration; 
@property (nonatomic,readonly) UISlidingBarState * currentState; 
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,readonly) NSArray * uncachedPossibleStates; 
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest; 
@property (nonatomic,readonly) UIViewController * collapsedViewController; 
@property (nonatomic,retain) UIView * dimmingView;                                                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,readonly) long long collapsedState; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_withDisabledAppearanceTransitions:(BOOL)arg1 forVisibleDescendantsOf:(id)arg2 perform:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id<UIPanelControllerDelegate>)delegate;
-(void)setDelegate:(id<UIPanelControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(UISlidingBarState *)currentState;
-(UISlidingBarConfiguration *)configuration;
-(UILayoutContainerView *)view;
-(void)setView:(UILayoutContainerView *)arg1 ;
-(void)loadView;
-(UIView *)_contentView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)isAnimating;
-(BOOL)isCollapsed;
-(void)setDimmingView:(UIView *)arg1 ;
-(UIView *)dimmingView;
-(id)allViewControllers;
-(void)__viewWillLayoutSubviews;
-(void)_layoutContainerViewWillMoveToWindow:(id)arg1 ;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(NSArray *)possibleStates;
-(UISlidingBarStateRequest *)stateRequest;
-(UIViewController *)mainViewController;
-(void)setMainViewController:(UIViewController *)arg1 ;
-(UIViewController *)leadingViewController;
-(void)setLeadingViewController:(UIViewController *)arg1 ;
-(UIViewController *)trailingViewController;
-(void)setTrailingViewController:(UIViewController *)arg1 ;
-(UIViewController *)collapsedViewController;
-(UIViewController *)preservedDetailController;
-(void)setPreservedDetailController:(UIViewController *)arg1 ;
-(long long)collapsedState;
-(void)setOwningViewController:(UIViewController *)arg1 ;
-(void)_setInternalState:(id)arg1 ;
-(_UIPanelInternalState *)_internalState;
-(void)_setNeedsFirstTimeUpdateForTraitCollection:(BOOL)arg1 ;
-(void)_stopObservingKeyboardNotifications;
-(void)_setBorderViewsObserveViewBackgroundColor:(BOOL)arg1 ;
-(void)setMainViewController:(id)arg1 changingParentage:(BOOL)arg2 ;
-(void)_removeIdentifiedChildViewController:(id)arg1 ;
-(void)_addIdentifiedChildViewController:(id)arg1 ;
-(void)setLeadingViewController:(id)arg1 changingParentage:(BOOL)arg2 ;
-(void)setTrailingViewController:(id)arg1 changingParentage:(BOOL)arg2 ;
-(void)_setNeedsDeferredUpdate;
-(UISlidingBarState *)_lastComputedPublicState;
-(NSArray *)_lastPossiblePublicStates;
-(UIViewController *)owningViewController;
-(void)_setContentView:(id)arg1 ;
-(BOOL)_changingViewControllerParentage;
-(BOOL)_hasUpdatedForTraitCollection;
-(BOOL)_willCollapseWithNewTraitCollection:(id)arg1 ;
-(void)_collapseWithTransitionCoordinator:(id)arg1 ;
-(BOOL)_willExpandWithNewTraitCollection:(id)arg1 ;
-(void)_expandWithTransitionCoordinator:(id)arg1 ;
-(void)_setHasUpdatedForTraitCollection:(BOOL)arg1 ;
-(BOOL)_needsWorkaroundForCoordinatorBlocks;
-(void)_setChangingViewControllerParentage:(BOOL)arg1 ;
-(void)_withDisabledAppearanceTransitionsPerform:(/*^block*/id)arg1 ;
-(void)_setSourceTransitionView:(id)arg1 ;
-(void)_updateForTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setLastComputedPublicState:(id)arg1 ;
-(void)_setLastPossiblePublicStates:(id)arg1 ;
-(BOOL)shouldRunOurRotationAlongSideAnimationBeforeClientAlongSideAnimation;
-(UIView *)_sourceTransitionView;
-(UIView *)_destTransitionView;
-(void)_setNeedsLayoutAndPerformImmediately:(BOOL)arg1 ;
-(void)_setDestinationTransitionView:(id)arg1 ;
-(void)addWrapperBlockForNextUpdate:(/*^block*/id)arg1 ;
-(BOOL)_needsFirstTimeUpdateForTraitCollection;
-(void)_observeKeyboardNotificationsOnScreen:(id)arg1 ;
-(void)_adjustForKeyboardInfo:(id)arg1 ;
-(CGSize)_lastViewSize;
-(void)_performDeferredUpdate;
-(void)_performSingleDeferredUpdatePass;
-(void)setNeedsUpdate;
-(_UIPanelInternalState *)_previousInternalState;
-(void)_updateToNewPublicState:(id)arg1 withSize:(CGSize)arg2 ;
-(void)_performWrappedUpdate:(/*^block*/id)arg1 ;
-(void)_setPreviousInternalState:(id)arg1 ;
-(void)_setLastViewSize:(CGSize)arg1 ;
-(UIView *)_leadingBorderView;
-(id)_createBorderView;
-(void)_setLeadingBorderView:(id)arg1 ;
-(UIView *)_trailingBorderView;
-(void)_setTrailingBorderView:(id)arg1 ;
-(void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3 ;
-(void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1 ;
-(id)initWithOwningViewController:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(/*^block*/id)arg3 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(/*^block*/id)arg3 ;
-(BOOL)isLeadingViewControllerVisibleAfterAnimation;
-(BOOL)isTrailingViewControllerVisibleAfterAnimation;
-(void)animateToRequest:(id)arg1 ;
-(NSArray *)uncachedPossibleStates;
-(UIVisualEffectView *)_leadingBackgroundView;
-(void)_setLeadingBackgroundView:(id)arg1 ;
-(UIVisualEffectView *)_trailingBackgroundView;
-(void)_setTrailingBackgroundView:(id)arg1 ;
@end

