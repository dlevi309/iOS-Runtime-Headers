/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFallbackEnvironment.h>
#import <UIKitCore/_UIGeometryChangeObserver.h>
#import <UIKitCore/_UIAppearanceContainer.h>
#import <UIKitCore/_UITraitEnvironmentInternal.h>
#import <UIKitCore/_UIContentContainerInternal.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAppearanceContainer.h>
#import <UIKit/UITraitEnvironment.h>
#import <UIKit/UIContentContainer.h>
#import <UIKit/UIFocusEnvironment.h>

@protocol UIAdaptivePresentationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext;
@class UITraitCollection, UIView, UITapGestureRecognizer, NSUUID, UIBarButtonItem, UIViewController, NSString, NSArray;

@interface UIPresentationController : NSObject <_UIFallbackEnvironment, _UIGeometryChangeObserver, _UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment> {

	BOOL _isDisconnectedRoot;
	BOOL _transitionAsDisconnectedRoot;
	BOOL _needsDidAppear;
	BOOL _needsDidDisappear;
	BOOL _monitorsSystemLayoutFittingSize;
	BOOL _didUpdateLayoutForStatusBarAndInterfaceOrientation;
	id _target;
	SEL _didEndSelector;
	UITraitCollection* _lastNotifiedTraitCollection;
	UIView* _snapshotOverlayView;
	UITapGestureRecognizer* _backGestureRecognizer;
	NSUUID* _currentRunningAnimationsUUID;
	BOOL _changedPresentingViewControllerDuringAdaptation;
	BOOL _shouldContinueTouchesOnTargetViewController;
	BOOL _containerIgnoresDirectTouchEvents;
	BOOL _isCurrentStateCancelled;
	UIView* _sourceView;
	UIBarButtonItem* _barButtonItem;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;
	UIView* _containerView;
	id<UIAdaptivePresentationControllerDelegate> _delegate;
	UITraitCollection* _overrideTraitCollection;
	id<UIViewControllerAnimatedTransitioning> _currentTransitionController;
	id<UIViewControllerInteractiveTransitioning> _currentInteractionController;
	UIView* _presentationView;
	UIView* __currentPresentationSuperview;
	long long _state;
	id<UIViewControllerTransitionCoordinator> _adaptiveTransitionCoordinator;
	id<UIViewControllerTransitionCoordinatorContext> _adaptiveTransitionContext;
	/*^block*/id __transitionViewForCurrentTransition;
	/*^block*/id __containerSuperviewForCurrentTransition;
	/*^block*/id __fromViewForCurrentTransition;
	/*^block*/id __toViewForCurrentTransition;
	/*^block*/id __customFromViewForCurrentTransition;
	/*^block*/id __customToViewForCurrentTransition;
	/*^block*/id __computeToEndFrameForCurrentTransition;
	/*^block*/id __currentTransitionDidComplete;
	UIView* _customViewForTouchContinuation;
	UITraitCollection* _internalOverrideTraitCollection;
	UIView* _realSourceView;
	CGSize _preferredContentSize;
	CGRect _sourceRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setCurrentTransitionController:,getter=_currentTransitionController,nonatomic,retain) id<UIViewControllerAnimatedTransitioning> currentTransitionController;                                     //@synthesize currentTransitionController=_currentTransitionController - In the implementation block
@property (setter=_setCurrentInteractionController:,getter=_currentInteractionController,nonatomic,retain) id<UIViewControllerInteractiveTransitioning> currentInteractionController;                               //@synthesize currentInteractionController=_currentInteractionController - In the implementation block
@property (setter=_setPresentingViewController:,nonatomic,retain) UIViewController * presentingViewController;                                                                                                      //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (setter=_setPresentedViewController:,nonatomic,retain) UIViewController * presentedViewController;                                                                                                        //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (setter=_setPresentationView:,getter=_presentationView,nonatomic,retain) UIView * presentationView;                                                                                                       //@synthesize presentationView=_presentationView - In the implementation block
@property (assign,setter=_setCurrentPresentationSuperview:,getter=_currentPresentationSuperview,nonatomic,__weak) UIView * _currentPresentationSuperview;                                                           //@synthesize _currentPresentationSuperview=__currentPresentationSuperview - In the implementation block
@property (assign,nonatomic) long long state;                                                                                                                                                                       //@synthesize state=_state - In the implementation block
@property (setter=_setContainerView:,nonatomic,retain) UIView * containerView;                                                                                                                                      //@synthesize containerView=_containerView - In the implementation block
@property (assign,setter=_setPreferredContentSize:,getter=_preferredContentSize,nonatomic) CGSize _preferredContentSize;                                                                                            //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (setter=_setAdaptiveTransitionCoordinator:,getter=_adaptiveTransitionCoordinator,nonatomic,retain) id<UIViewControllerTransitionCoordinator> adaptiveTransitionCoordinator;                               //@synthesize adaptiveTransitionCoordinator=_adaptiveTransitionCoordinator - In the implementation block
@property (setter=_setAdaptiveTransitionContext:,getter=_adaptiveTransitionContext,nonatomic,retain) id<UIViewControllerTransitionCoordinatorContext> adaptiveTransitionContext;                                    //@synthesize adaptiveTransitionContext=_adaptiveTransitionContext - In the implementation block
@property (assign,setter=_setChangedPresentingViewControllerDuringAdaptation:,getter=_changedPresentingViewControllerDuringAdaptation,nonatomic) BOOL changedPresentingViewControllerDuringAdaptation;              //@synthesize changedPresentingViewControllerDuringAdaptation=_changedPresentingViewControllerDuringAdaptation - In the implementation block
@property (nonatomic,copy) id _transitionViewForCurrentTransition;                                                                                                                                                  //@synthesize _transitionViewForCurrentTransition=__transitionViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _containerSuperviewForCurrentTransition;                                                                                                                                              //@synthesize _containerSuperviewForCurrentTransition=__containerSuperviewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _fromViewForCurrentTransition;                                                                                                                                                        //@synthesize _fromViewForCurrentTransition=__fromViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _toViewForCurrentTransition;                                                                                                                                                          //@synthesize _toViewForCurrentTransition=__toViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _customFromViewForCurrentTransition;                                                                                                                                                  //@synthesize _customFromViewForCurrentTransition=__customFromViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _customToViewForCurrentTransition;                                                                                                                                                    //@synthesize _customToViewForCurrentTransition=__customToViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _computeToEndFrameForCurrentTransition;                                                                                                                                               //@synthesize _computeToEndFrameForCurrentTransition=__computeToEndFrameForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _currentTransitionDidComplete;                                                                                                                                                        //@synthesize _currentTransitionDidComplete=__currentTransitionDidComplete - In the implementation block
@property (nonatomic,readonly) BOOL _isPresentedInFullScreen; 
@property (nonatomic,readonly) BOOL _mayChildGrabPresentedViewControllerView; 
@property (assign,setter=_setShouldContinueTouchesOnTargetViewController:,getter=_shouldContinueTouchesOnTargetViewController,nonatomic) BOOL shouldContinueTouchesOnTargetViewController;                          //@synthesize shouldContinueTouchesOnTargetViewController=_shouldContinueTouchesOnTargetViewController - In the implementation block
@property (setter=_setCustomViewForTouchContinuation:,getter=_customViewForTouchContinuation,nonatomic,retain) UIView * customViewForTouchContinuation;                                                             //@synthesize customViewForTouchContinuation=_customViewForTouchContinuation - In the implementation block
@property (nonatomic,readonly) id<_UITraitEnvironmentInternal> _parentTraitEnvironment; 
@property (setter=_setInternalOverrideTraitCollection:,getter=_internalOverrideTraitCollection,nonatomic,copy) UITraitCollection * internalOverrideTraitCollection;                                                 //@synthesize internalOverrideTraitCollection=_internalOverrideTraitCollection - In the implementation block
@property (assign,setter=_setContainerIgnoresDirectTouchEvents:,getter=_containerIgnoresDirectTouchEvents,nonatomic) BOOL containerIgnoresDirectTouchEvents;                                                        //@synthesize containerIgnoresDirectTouchEvents=_containerIgnoresDirectTouchEvents - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                                                                                                                                   //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                                                                                                                                     //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                                                                                                                                                       //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic) BOOL isCurrentStateCancelled;                                                                                                                                                          //@synthesize isCurrentStateCancelled=_isCurrentStateCancelled - In the implementation block
@property (getter=_realSourceView,nonatomic,readonly) UIView * realSourceView;                                                                                                                                      //@synthesize realSourceView=_realSourceView - In the implementation block
@property (nonatomic,readonly) long long presentationStyle; 
@property (assign,nonatomic,__weak) id<UIAdaptivePresentationControllerDelegate> delegate;                                                                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long adaptivePresentationStyle; 
@property (nonatomic,readonly) UIView * presentedView; 
@property (nonatomic,readonly) CGRect frameOfPresentedViewInContainerView; 
@property (nonatomic,readonly) BOOL shouldPresentInFullscreen; 
@property (nonatomic,readonly) BOOL shouldRemovePresentersView; 
@property (nonatomic,copy) UITraitCollection * overrideTraitCollection;                                                                                                                                             //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
+(void)initialize;
+(BOOL)_shouldDeferTransitions;
+(BOOL)_allowsDeferredTransitions;
+(UIEdgeInsets)_statusBarOverlapAndMarginInfoForView:(id)arg1 ;
+(void)_scheduleTransition:(/*^block*/id)arg1 ;
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(void)dealloc;
-(id<UIAdaptivePresentationControllerDelegate>)delegate;
-(void)setDelegate:(id<UIAdaptivePresentationControllerDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)_cleanup;
-(UITraitCollection *)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(UIView *)preferredFocusedView;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(UIViewController *)presentedViewController;
-(CGSize)preferredContentSize;
-(long long)presentationStyle;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(void)containerViewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_setPreferredContentSize:(CGSize)arg1 ;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1 ;
-(BOOL)presenting;
-(UIView *)presentedView;
-(BOOL)_preserveResponderAcrossWindows;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyle;
-(void)containerViewWillLayoutSubviews;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(BOOL)_shouldOccludeDuringPresentation;
-(id)_fallbackTraitCollection;
-(void)_sendDidDismiss;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(BOOL)dismissed;
-(BOOL)dismissing;
-(void)_setContainerIgnoresDirectTouchEvents:(BOOL)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_geometryChanges:(id)arg1 forAncestor:(id)arg2 ;
-(Class)_appearanceGuideClass;
-(id)_customViewForTouchContinuation;
-(void)setSourceView:(UIView *)arg1 ;
-(UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_isAdapted;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)dismissalTransitionWillBegin;
-(BOOL)_forcesPreferredAnimationControllers;
-(id)_preferredAnimationControllerForPresentation;
-(id)_preferredAnimationControllerForDismissal;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)_setInternalOverrideTraitCollection:(id)arg1 ;
-(void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4 ;
-(BOOL)presented;
-(BOOL)_shouldDismiss;
-(void)_sendWillDismiss;
-(id)_realSourceView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_updateRealSourceView;
-(void)_setPresentedViewController:(id)arg1 ;
-(id)_childPresentationController;
-(UIView *)_currentPresentationSuperview;
-(id)_passthroughViews;
-(BOOL)_fallbackShouldDismiss;
-(void)_sendFallbackWillDismiss;
-(void)_sendFallbackDidDismiss;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(id)_initialPresentationViewControllerForViewController:(id)arg1 ;
-(id)_presentationView;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_transitionFromWillBegin;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(void)_transitionToDidEnd;
-(void)_realSourceViewDidChangeFromView:(id)arg1 toView:(id)arg2 ;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(UIEdgeInsets)_additionalSafeAreaInsets;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)_setRealSourceView:(id)arg1 ;
-(void)_realSourceViewGeometryDidChange;
-(void)_setPresentingViewController:(id)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_shouldMakePresentedViewControllerFirstResponder;
-(BOOL)shouldRemovePresentersView;
-(id)_currentTransitionDidComplete;
-(void)_setPresentationView:(id)arg1 ;
-(void)_setContainerView:(id)arg1 ;
-(void)_setCurrentInteractionController:(id)arg1 ;
-(BOOL)_shouldDisablePresentersAppearanceCallbacks;
-(void)_setCurrentTransitionController:(id)arg1 ;
-(void)_setCurrentPresentationSuperview:(id)arg1 ;
-(void)set_transitionViewForCurrentTransition:(id)arg1 ;
-(void)set_computeToEndFrameForCurrentTransition:(id)arg1 ;
-(void)set_currentTransitionDidComplete:(id)arg1 ;
-(void)set_fromViewForCurrentTransition:(id)arg1 ;
-(void)set_toViewForCurrentTransition:(id)arg1 ;
-(void)set_customFromViewForCurrentTransition:(id)arg1 ;
-(void)set_customToViewForCurrentTransition:(id)arg1 ;
-(void)_setAdaptiveTransitionContext:(id)arg1 ;
-(void)_setAdaptiveTransitionCoordinator:(id)arg1 ;
-(void)_prepareForWindowDeallocRecursively:(BOOL)arg1 ;
-(id)_fullscreenPresentationSuperview;
-(id)_currentContextPresentationSuperview;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(void)_initViewHierarchyForPresentationSuperview:(id)arg1 ;
-(void)runTransitionForCurrentState;
-(void)completeCurrentTransitionImmediately;
-(BOOL)_changedPresentingViewControllerDuringAdaptation;
-(void)_setChangedPresentingViewControllerDuringAdaptation:(BOOL)arg1 ;
-(id)_transitionViewForCurrentTransition;
-(id)_toViewForCurrentTransition;
-(id)_computeToEndFrameForCurrentTransition;
-(id)_parentPresentationControllerImmediate:(BOOL)arg1 ;
-(BOOL)_mayChildGrabPresentedViewControllerView;
-(id)_parentPresentationController;
-(id)_containerSuperviewForCurrentTransition;
-(id)_rootPresentingViewControllerForNestedPresentation;
-(id)_currentInteractionController;
-(BOOL)_shouldRestoreFirstResponder;
-(id)_fromViewForCurrentTransition;
-(BOOL)_shouldGrabPresentersView;
-(void)setIsCurrentStateCancelled:(BOOL)arg1 ;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(void)transitionDidStart;
-(id)_currentTransitionController;
-(void)_releaseSnapshot;
-(void)_enableOcclusion:(BOOL)arg1 ;
-(BOOL)_containerIgnoresDirectTouchEvents;
-(BOOL)_transitioningTo;
-(BOOL)_transitioningFrom;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 ;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(id)_customFromViewForCurrentTransition;
-(id)_customToViewForCurrentTransition;
-(void)_sendPresentationControllerNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_beginOcclusionIfNecessary:(BOOL)arg1 ;
-(BOOL)_shouldContinueTouchesOnTargetViewController;
-(long long)adaptivePresentationStyleForTraitCollection:(id)arg1 ;
-(id)_activePresentationController;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)presentedContentContainer;
-(SCD_Struct_UI8)__sizeClassPair;
-(void)_updateTraitsIfNecessary;
-(id<_UITraitEnvironmentInternal>)_parentTraitEnvironment;
-(id)_parentTraitCollection;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(id)_internalOverrideTraitCollection;
-(UITraitCollection *)overrideTraitCollection;
-(void)_setOverrideTraitCollection:(id)arg1 updatingPresentedViewControllerImmediately:(BOOL)arg2 ;
-(id)_adaptiveWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(long long)_subclassPreferredFocusedViewPrioritizationType;
-(BOOL)_isModal;
-(void)_containedViewControllerModalStateChanged;
-(id)_appearanceContainer;
-(BOOL)_monitorsSystemLayoutFittingSize;
-(void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2 ;
-(BOOL)_shouldPreserveFirstResponder;
-(void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4 ;
-(id)_firstCurrentContextChildInWindow;
-(BOOL)_isPresentedInFullScreen;
-(id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
-(id)_descriptionForPrintingViewControllerHierarchy;
-(void)_coverWithSnapshot;
-(void)_containerViewBoundsDidChange;
-(void)_containerViewTraitCollectionDidChange;
-(void)_containerViewSafeAreaInsetsDidChange;
-(void)_containerViewWillLayoutSubviews;
-(void)_containerViewLayoutSubviews;
-(id)_preferredInteractionControllerForPresentation:(id)arg1 ;
-(id)_preferredInteractionControllerForDismissal:(id)arg1 ;
-(BOOL)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
-(void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)arg1 transitionCoordinator:(id)arg2 ;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(id)_animatorForContainmentTransition;
-(id)_focusMapContainer;
-(void)_performBackGesture:(id)arg1 ;
-(void)_disableMenuPressForBackGesture;
-(void)_sendDidAttemptToDismiss;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(CGSize)_preferredContentSize;
-(id)_adaptiveTransitionCoordinator;
-(id)_adaptiveTransitionContext;
-(void)set_containerSuperviewForCurrentTransition:(id)arg1 ;
-(void)_setShouldContinueTouchesOnTargetViewController:(BOOL)arg1 ;
-(void)_setCustomViewForTouchContinuation:(id)arg1 ;
-(BOOL)isCurrentStateCancelled;
@end

