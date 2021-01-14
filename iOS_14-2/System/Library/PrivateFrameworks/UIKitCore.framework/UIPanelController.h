/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UILayoutContainerViewDelegate.h>

@class NSMutableArray, UIViewController, UIView, UINavigationBar, _UIFloatableBarButtonItem, UILayoutContainerView, _UIPanelInternalState, UISlidingBarState, NSArray, _UIVerticalEdgeShadowView, UIDimmingView, UISlidingBarConfiguration, UISlidingBarStateRequest, NSString;

@interface UIPanelController : NSObject <UILayoutContainerViewDelegate> {

	struct {
		unsigned isUpdatingState : 1;
		unsigned needsDeferredUpdateWhileUpdatingState : 1;
		unsigned isPerformingDeferredUpdate : 1;
		unsigned nextLayoutIsForInitializingAnimation : 1;
		unsigned isPresentationGestureActive : 1;
		unsigned areClippingViewsUnnecessary : 1;
		unsigned inWillTransitionToTraitCollection : 1;
		unsigned inViewWillTransitionToSize : 1;
		unsigned inViewWillTransitionToSizeRecursingToChildren : 1;
		unsigned viewsLocked : 1;
		unsigned takingDestinationSnapshot : 1;
		unsigned registeredForKeyboardNotifications : 1;
		unsigned borderViewsObservingViewBackgroundColor : 1;
		unsigned updateLayoutRequested : 1;
		unsigned leadingTrailingWrapsNavigationController : 1;
		unsigned shouldDelegateNavigationBarForViewController : 1;
	}  _panelControllerFlags;
	NSMutableArray* _wrapperBlocksForNextUpdate;
	BOOL _animationRequestShouldCoordinate;
	BOOL __hasUpdatedForTraitCollection;
	BOOL __needsFirstTimeUpdateForTraitCollection;
	BOOL __changingViewControllerParentage;
	UIViewController* _owningViewController;
	long long _style;
	UIView* _dimmingView;
	UIView* _leadingBarContentClippingView;
	UIView* _trailingBarContentClippingView;
	UIView* _supplementaryBarContentClippingView;
	UINavigationBar* _navigationBarForContentLayoutGuideAnimation;
	_UIFloatableBarButtonItem* _floatingBarButtonItem;
	UILayoutContainerView* _view;
	_UIPanelInternalState* __internalState;
	_UIPanelInternalState* __previousInternalState;
	UISlidingBarState* __lastComputedPublicState;
	NSArray* __lastPossiblePublicStates;
	UIView* __contentView;
	UIView* __leadingBorderView;
	UIView* __trailingBorderView;
	UIView* __supplementaryBorderView;
	_UIVerticalEdgeShadowView* __overlayEdgeShadowView;
	_UIVerticalEdgeShadowView* __supplementaryParallaxShadowView;
	UIDimmingView* __primaryParallaxDimmingView;
	UIView* __sourceTransitionView;
	UIView* __destTransitionView;
	CGSize __lastViewSize;

}

@property (assign,nonatomic,__weak) UIViewController * owningViewController;                                                                        //@synthesize owningViewController=_owningViewController - In the implementation block
@property (nonatomic,retain) UILayoutContainerView * view;                                                                                          //@synthesize view=_view - In the implementation block
@property (setter=_setInternalState:,nonatomic,retain) _UIPanelInternalState * _internalState;                                                      //@synthesize _internalState=__internalState - In the implementation block
@property (setter=_setPreviousInternalState:,nonatomic,retain) _UIPanelInternalState * _previousInternalState;                                      //@synthesize _previousInternalState=__previousInternalState - In the implementation block
@property (setter=_setLastComputedPublicState:,nonatomic,copy) UISlidingBarState * _lastComputedPublicState;                                        //@synthesize _lastComputedPublicState=__lastComputedPublicState - In the implementation block
@property (setter=_setLastPossiblePublicStates:,nonatomic,copy) NSArray * _lastPossiblePublicStates;                                                //@synthesize _lastPossiblePublicStates=__lastPossiblePublicStates - In the implementation block
@property (assign,setter=_setLastViewSize:,nonatomic) CGSize _lastViewSize;                                                                         //@synthesize _lastViewSize=__lastViewSize - In the implementation block
@property (setter=_setContentView:,nonatomic,retain) UIView * _contentView;                                                                         //@synthesize _contentView=__contentView - In the implementation block
@property (setter=_setLeadingBorderView:,nonatomic,retain) UIView * _leadingBorderView;                                                             //@synthesize _leadingBorderView=__leadingBorderView - In the implementation block
@property (setter=_setTrailingBorderView:,nonatomic,retain) UIView * _trailingBorderView;                                                           //@synthesize _trailingBorderView=__trailingBorderView - In the implementation block
@property (setter=_setSupplementaryBorderView:,nonatomic,retain) UIView * _supplementaryBorderView;                                                 //@synthesize _supplementaryBorderView=__supplementaryBorderView - In the implementation block
@property (setter=_setOverlayEdgeShadowView:,nonatomic,retain) _UIVerticalEdgeShadowView * _overlayEdgeShadowView;                                  //@synthesize _overlayEdgeShadowView=__overlayEdgeShadowView - In the implementation block
@property (setter=_setSupplementaryParallaxShadowView:,nonatomic,retain) _UIVerticalEdgeShadowView * _supplementaryParallaxShadowView;              //@synthesize _supplementaryParallaxShadowView=__supplementaryParallaxShadowView - In the implementation block
@property (setter=_setPrimaryParallaxDimmingView:,nonatomic,retain) UIDimmingView * _primaryParallaxDimmingView;                                    //@synthesize _primaryParallaxDimmingView=__primaryParallaxDimmingView - In the implementation block
@property (setter=_setSourceTransitionView:,nonatomic,retain) UIView * _sourceTransitionView;                                                       //@synthesize _sourceTransitionView=__sourceTransitionView - In the implementation block
@property (setter=_setDestinationTransitionView:,nonatomic,retain) UIView * _destTransitionView;                                                    //@synthesize _destTransitionView=__destTransitionView - In the implementation block
@property (assign,setter=_setHasUpdatedForTraitCollection:,nonatomic) BOOL _hasUpdatedForTraitCollection;                                           //@synthesize _hasUpdatedForTraitCollection=__hasUpdatedForTraitCollection - In the implementation block
@property (assign,setter=_setNeedsFirstTimeUpdateForTraitCollection:,nonatomic) BOOL _needsFirstTimeUpdateForTraitCollection;                       //@synthesize _needsFirstTimeUpdateForTraitCollection=__needsFirstTimeUpdateForTraitCollection - In the implementation block
@property (assign,setter=_setChangingViewControllerParentage:,nonatomic) BOOL _changingViewControllerParentage;                                     //@synthesize _changingViewControllerParentage=__changingViewControllerParentage - In the implementation block
@property (assign,nonatomic) long long style;                                                                                                       //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) BOOL supportsColumnStyle; 
@property (assign,nonatomic) BOOL leadingTrailingWrapsNavigationController; 
@property (nonatomic,retain) UIViewController * mainViewController; 
@property (nonatomic,retain) UIViewController * leadingViewController; 
@property (nonatomic,retain) UIViewController * trailingViewController; 
@property (nonatomic,retain) UIViewController * supplementaryViewController; 
@property (nonatomic,retain) UIViewController * collapsedViewController; 
@property (nonatomic,retain) UIViewController * preservedDetailController; 
@property (assign,nonatomic,__weak) id<UIPanelControllerDelegate> delegate; 
@property (nonatomic,copy) UISlidingBarConfiguration * configuration; 
@property (nonatomic,readonly) UISlidingBarState * currentState; 
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,readonly) NSArray * uncachedPossibleStates; 
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest; 
@property (assign,nonatomic) BOOL animationRequestShouldCoordinate;                                                                                 //@synthesize animationRequestShouldCoordinate=_animationRequestShouldCoordinate - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * interactiveStateRequest; 
@property (assign,getter=isPresentationGestureActive,nonatomic) BOOL presentationGestureActive; 
@property (nonatomic,retain) UIView * dimmingView;                                                                                                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,getter=areClippingViewsUnnecessary,nonatomic) BOOL clippingViewsUnnecessary; 
@property (nonatomic,retain) UIView * leadingBarContentClippingView;                                                                                //@synthesize leadingBarContentClippingView=_leadingBarContentClippingView - In the implementation block
@property (nonatomic,retain) UIView * trailingBarContentClippingView;                                                                               //@synthesize trailingBarContentClippingView=_trailingBarContentClippingView - In the implementation block
@property (nonatomic,retain) UIView * supplementaryBarContentClippingView;                                                                          //@synthesize supplementaryBarContentClippingView=_supplementaryBarContentClippingView - In the implementation block
@property (nonatomic,retain) UINavigationBar * navigationBarForContentLayoutGuideAnimation;                                                         //@synthesize navigationBarForContentLayoutGuideAnimation=_navigationBarForContentLayoutGuideAnimation - In the implementation block
@property (nonatomic,retain) _UIFloatableBarButtonItem * floatingBarButtonItem;                                                                     //@synthesize floatingBarButtonItem=_floatingBarButtonItem - In the implementation block
@property (nonatomic,readonly) long long collapsedState; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_withDisabledAppearanceTransitions:(BOOL)arg1 forVisibleDescendantsOf:(id)arg2 perform:(/*^block*/id)arg3 ;
-(void)stopAnimations;
-(void)removeChildViewController:(id)arg1 ;
-(BOOL)isCollapsed;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)uncachedPossibleStates;
-(void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1 ;
-(void)_setOverlayEdgeShadowView:(id)arg1 ;
-(void)_stopAnimationsBeginningInteraction:(BOOL)arg1 ;
-(void)setNeedsUpdate;
-(UIViewController *)owningViewController;
-(CGSize)_expectedSecondaryColumnSizeAfterAnimatingToState:(id)arg1 getLeadingColumnSize:(CGSize*)arg2 trailingColumnSize:(CGSize*)arg3 supplementaryColumnSize:(CGSize*)arg4 ;
-(id)_createBorderView;
-(UIViewController *)mainViewController;
-(BOOL)_willExpandWithNewTraitCollection:(id)arg1 oldTraitCollection:(id)arg2 ;
-(void)_layoutContainerViewWillMoveToWindow:(id)arg1 ;
-(void)_performDeferredUpdate;
-(void)__viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(UISlidingBarState *)currentState;
-(void)navigationControllerDidChangeNavigationBarHidden:(id)arg1 ;
-(id<UIPanelControllerDelegate>)delegate;
-(BOOL)isPresentationGestureActive;
-(void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3 forceOverlay:(BOOL)arg4 velocity:(double)arg5 ;
-(void)animateToRequest:(id)arg1 ;
-(BOOL)shouldRunOurRotationAlongSideAnimationBeforeClientAlongSideAnimation;
-(void)setMainViewController:(id)arg1 changingParentage:(BOOL)arg2 ;
-(void)_setSourceTransitionView:(id)arg1 ;
-(long long)collapsedState;
-(UIView *)_sourceTransitionView;
-(void)setLeadingViewController:(UIViewController *)arg1 ;
-(void)_updateForTraitCollection:(id)arg1 oldTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(id)gatherMultitaskingDragExclusionRectsFromVisibleColumns;
-(void)_setChangingViewControllerParentage:(BOOL)arg1 ;
-(void)setCollapsedViewController:(UIViewController *)arg1 ;
-(BOOL)supportsColumnStyle;
-(UIView *)_contentView;
-(void)_performSingleDeferredUpdatePass;
-(void)setLeadingTrailingWrapsNavigationController:(BOOL)arg1 ;
-(void)_expandWithTransitionCoordinator:(id)arg1 ;
-(BOOL)isLeadingViewControllerVisibleAfterAnimation;
-(UISlidingBarState *)_lastComputedPublicState;
-(void)setMainViewController:(UIViewController *)arg1 ;
-(BOOL)_changingViewControllerParentage;
-(void)animateToRequest:(id)arg1 forceOverlay:(BOOL)arg2 withVelocity:(double)arg3 ;
-(void)setLeadingBarContentClippingView:(UIView *)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)setNavigationBarForContentLayoutGuideAnimation:(UINavigationBar *)arg1 ;
-(void)setView:(UILayoutContainerView *)arg1 ;
-(void)setLeadingViewController:(id)arg1 changingParentage:(BOOL)arg2 ;
-(_UIPanelInternalState *)_internalState;
-(void)_removeIdentifiedChildViewController:(id)arg1 ;
-(void)_setBorderViewsObserveViewBackgroundColor:(BOOL)arg1 ;
-(void)_updateToNewPublicState:(id)arg1 withSize:(CGSize)arg2 ;
-(void)setInteractiveStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(id)initWithOwningViewController:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 toNewTraits:(id)arg2 ;
-(_UIVerticalEdgeShadowView *)_supplementaryParallaxShadowView;
-(void)setDelegate:(id<UIPanelControllerDelegate>)arg1 ;
-(void)_observeKeyboardNotificationsOnScreen:(id)arg1 ;
-(id)_createOverlayEdgeShadowViewForEdge:(unsigned long long)arg1 ;
-(void)_setHasUpdatedForTraitCollection:(BOOL)arg1 ;
-(void)_setNeedsDeferredUpdate;
-(void)_stopObservingKeyboardNotifications;
-(NSString *)description;
-(void)setSupplementaryViewController:(id)arg1 changingParentage:(BOOL)arg2 ;
-(void)animateToRequest:(id)arg1 forceOverlay:(BOOL)arg2 ;
-(UILayoutContainerView *)view;
-(void)setPreservedDetailController:(UIViewController *)arg1 ;
-(void)_adjustForKeyboardInfo:(id)arg1 ;
-(BOOL)_needsWorkaroundForCoordinatorBlocks;
-(UISlidingBarConfiguration *)configuration;
-(double)interpolatedMarginForPrimaryNavigationBar:(id)arg1 supplementaryOrSecondaryNavbar:(id)arg2 getInterpolatedAlpha:(double*)arg3 ;
-(void)_collapseWithTransitionCoordinator:(id)arg1 ;
-(void)_setNeedsFirstTimeUpdateForTraitCollection:(BOOL)arg1 ;
-(_UIPanelInternalState *)_previousInternalState;
-(UIView *)_destTransitionView;
-(void)setOwningViewController:(UIViewController *)arg1 ;
-(BOOL)animationRequestShouldCoordinate;
-(UIView *)_supplementaryBorderView;
-(void)_updateBorderViewsBackgroundColor:(id)arg1 ;
-(UIView *)trailingBarContentClippingView;
-(UIView *)leadingBarContentClippingView;
-(void)setSupplementaryBarContentClippingView:(UIView *)arg1 ;
-(UIDimmingView *)_primaryParallaxDimmingView;
-(UIViewController *)collapsedViewController;
-(void)setFloatingBarButtonItem:(_UIFloatableBarButtonItem *)arg1 ;
-(void)_setLastPossiblePublicStates:(id)arg1 ;
-(UIView *)supplementaryBarContentClippingView;
-(UIViewController *)trailingViewController;
-(BOOL)leadingTrailingWrapsNavigationController;
-(void)addWrapperBlockForNextUpdate:(/*^block*/id)arg1 ;
-(UISlidingBarStateRequest *)stateRequest;
-(void)_setInternalState:(id)arg1 ;
-(_UIVerticalEdgeShadowView *)_overlayEdgeShadowView;
-(UISlidingBarStateRequest *)interactiveStateRequest;
-(void)setAnimationRequestShouldCoordinate:(BOOL)arg1 ;
-(void)setPresentationGestureActive:(BOOL)arg1 ;
-(UIViewController *)preservedDetailController;
-(id)transitionCoordinator;
-(void)_setSupplementaryParallaxShadowView:(id)arg1 ;
-(void)_withDisabledAppearanceTransitionsPerform:(/*^block*/id)arg1 ;
-(id)allViewControllers;
-(_UIFloatableBarButtonItem *)floatingBarButtonItem;
-(BOOL)_needsFirstTimeUpdateForTraitCollection;
-(void)_setTrailingBorderView:(id)arg1 ;
-(void)_setLastViewSize:(CGSize)arg1 ;
-(void)_setSupplementaryBorderView:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(/*^block*/id)arg3 ;
-(BOOL)isTrailingViewControllerVisibleAfterAnimation;
-(BOOL)_hasUpdatedForTraitCollection;
-(void)setStyle:(long long)arg1 ;
-(void)loadView;
-(void)_performWrappedUpdate:(/*^block*/id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(/*^block*/id)arg3 ;
-(void)_setNeedsLayoutAndPerformImmediately:(BOOL)arg1 ;
-(void)_setPreviousInternalState:(id)arg1 ;
-(BOOL)_willCollapseWithNewTraitCollection:(id)arg1 oldTraitCollection:(id)arg2 ;
-(UINavigationBar *)navigationBarForContentLayoutGuideAnimation;
-(void)_setDestinationTransitionView:(id)arg1 ;
-(UIView *)dimmingView;
-(UIViewController *)leadingViewController;
-(UIView *)_trailingBorderView;
-(void)setTrailingViewController:(id)arg1 changingParentage:(BOOL)arg2 ;
-(BOOL)isSupplementaryViewControllerVisibleAfterAnimation;
-(void)_setLeadingBorderView:(id)arg1 ;
-(BOOL)areClippingViewsUnnecessary;
-(void)setSupplementaryViewController:(UIViewController *)arg1 ;
-(void)setTrailingBarContentClippingView:(UIView *)arg1 ;
-(void)_setPrimaryParallaxDimmingView:(id)arg1 ;
-(BOOL)isAnimating;
-(void)_setLastComputedPublicState:(id)arg1 ;
-(void)_setContentView:(id)arg1 ;
-(void)_unspecifiedUpdateToNewPublicState:(id)arg1 withSize:(CGSize)arg2 ;
-(long long)style;
-(NSArray *)possibleStates;
-(UIViewController *)supplementaryViewController;
-(void)_addIdentifiedChildViewController:(id)arg1 ;
-(UIView *)_leadingBorderView;
-(void)dealloc;
-(void)setTrailingViewController:(UIViewController *)arg1 ;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(CGSize)_lastViewSize;
-(void)setClippingViewsUnnecessary:(BOOL)arg1 ;
-(NSArray *)_lastPossiblePublicStates;
@end

