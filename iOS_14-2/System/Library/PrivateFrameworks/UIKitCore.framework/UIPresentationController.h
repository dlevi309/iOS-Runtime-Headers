/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _shouldDeactivateReachabilityWhenTransitioning;
	BOOL _forcePresentationInPresenterScene;
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
@property (assign,setter=_setShouldDeactivateReachabilityWhenTransitioning:,getter=_shouldDeactivateReachabilityWhenTransitioning,nonatomic) BOOL shouldDeactivateReachabilityWhenTransitioning;                    //@synthesize shouldDeactivateReachabilityWhenTransitioning=_shouldDeactivateReachabilityWhenTransitioning - In the implementation block
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
@property (assign,setter=_setForcePresentationInPresenterScene:,nonatomic) BOOL _forcePresentationInPresenterScene;                                                                                                 //@synthesize forcePresentationInPresenterScene=_forcePresentationInPresenterScene - In the implementation block
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
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
+(void)initialize;
+(UIEdgeInsets)_statusBarOverlapAndMarginInfoForView:(id)arg1 inWindow:(id)arg2 ;
+(BOOL)_preventsAppearanceProxyCustomization;
+(BOOL)_allowsDeferredTransitions;
+(void)_scheduleTransition:(/*^block*/id)arg1 ;
+(BOOL)_shouldDeferTransitions;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(id)_passthroughViews;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)_presentWithAnimationController:(id)arg1 inWindow:(id)arg2 interactionController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 ;
-(long long)presentationStyle;
-(UIBarButtonItem *)barButtonItem;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(UITraitCollection *)traitCollection;
-(UIView *)preferredFocusedView;
-(void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2 ;
-(void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4 ;
-(void)_cleanup;
-(long long)adaptivePresentationStyle;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(Class)_appearanceGuideClass;
-(id)_adaptiveWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setOverrideTraitCollection:(id)arg1 updatingPresentedViewControllerImmediately:(BOOL)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setNeedsFocusUpdate;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(id)init;
-(void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)arg1 transitionCoordinator:(id)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 inWindow:(id)arg2 ;
-(void)_transitionToDidEnd;
-(void)_setContainerView:(id)arg1 ;
-(UIView *)presentedView;
-(void)setSourceView:(UIView *)arg1 ;
-(id<UIAdaptivePresentationControllerDelegate>)delegate;
-(void)dismissalTransitionWillBegin;
-(void)_sendPresentationControllerNotification:(id)arg1 userInfo:(id)arg2 ;
-(id<_UITraitEnvironmentInternal>)_parentTraitEnvironment;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(BOOL)_isModal;
-(id)_initialPresentationViewControllerForViewController:(id)arg1 ;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)_initViewHierarchyForPresentationSuperview:(id)arg1 inWindow:(id)arg2 ;
-(void)_setChangedPresentingViewControllerDuringAdaptation:(BOOL)arg1 ;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)_containerViewSafeAreaInsetsDidChange;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)_shouldMakePresentedViewControllerFirstResponder;
-(BOOL)_changedPresentingViewControllerDuringAdaptation;
-(void)_setShouldContinueTouchesOnTargetViewController:(BOOL)arg1 ;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(void)_setShouldDeactivateReachabilityWhenTransitioning:(BOOL)arg1 ;
-(id)_rootPresentingViewControllerForNestedPresentation;
-(BOOL)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
-(void)_geometryChanged:(const SCD_Struct_UI29*)arg1 forAncestor:(id)arg2 ;
-(void)_containerViewBoundsDidChange;
-(BOOL)_shouldDeactivateReachabilityWhenTransitioning;
-(id)_descriptionForPrintingViewControllerHierarchy;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(UIView *)sourceView;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)containerViewDidLayoutSubviews;
-(long long)_subclassPreferredFocusedViewPrioritizationType;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_preferredInteractionControllerForPresentation:(id)arg1 ;
-(BOOL)presented;
-(UIViewController *)presentingViewController;
-(void)_setContainerIgnoresDirectTouchEvents:(BOOL)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setDelegate:(id<UIAdaptivePresentationControllerDelegate>)arg1 ;
-(BOOL)presenting;
-(BOOL)dismissing;
-(void)setSourceRect:(CGRect)arg1 ;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(CGSize)preferredContentSize;
-(UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2 ;
-(id)_currentContextPresentationSuperview;
-(void)runTransitionForCurrentState;
-(void)_releaseSnapshot;
-(void)completeCurrentTransitionImmediately;
-(id)_transitionViewForCurrentTransition;
-(void)_initViewHierarchyForPresentationSuperview:(id)arg1 ;
-(id)_toViewForCurrentTransition;
-(void)_enableOcclusion:(BOOL)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_computeToEndFrameForCurrentTransition;
-(id)_parentPresentationControllerImmediate:(BOOL)arg1 ;
-(id)_parentPresentationController;
-(SCD_Struct_UI9)__sizeClassPair;
-(id)_containerSuperviewForCurrentTransition;
-(UIView *)containerView;
-(CGSize)_preferredContentSize;
-(id)_currentInteractionController;
-(BOOL)_shouldRestoreFirstResponder;
-(id)_fromViewForCurrentTransition;
-(void)_containerViewTraitCollectionDidChange;
-(BOOL)_shouldGrabPresentersView;
-(void)setIsCurrentStateCancelled:(BOOL)arg1 ;
-(id)_currentTransitionController;
-(BOOL)_transitioningTo;
-(BOOL)_containerIgnoresDirectTouchEvents;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 ;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)_customFromViewForCurrentTransition;
-(id)_customToViewForCurrentTransition;
-(BOOL)shouldPresentInFullscreen;
-(void)_beginOcclusionIfNecessary:(BOOL)arg1 ;
-(id<UIFocusItemContainer>)focusItemContainer;
-(BOOL)_isAdapted;
-(BOOL)_shouldContinueTouchesOnTargetViewController;
-(long long)adaptivePresentationStyleForTraitCollection:(id)arg1 ;
-(id)_activePresentationController;
-(BOOL)_preserveResponderAcrossWindows;
-(id)presentedContentContainer;
-(void)_updateTraitsIfNecessary;
-(id)_appearanceContainer;
-(id)_parentTraitCollection;
-(id)_internalOverrideTraitCollection;
-(UITraitCollection *)overrideTraitCollection;
-(void)_containedViewControllerModalStateChanged;
-(BOOL)_forcePresentationInPresenterScene;
-(BOOL)_forcesPreferredAnimationControllers;
-(id)_preferredAnimationControllerForPresentation;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(BOOL)_monitorsSystemLayoutFittingSize;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id)_firstCurrentContextChildInWindow;
-(BOOL)_isPresentedInFullScreen;
-(void)_performBackGesture:(id)arg1 ;
-(id)_fullscreenPresentationSuperview;
-(void)_containerViewWillLayoutSubviews;
-(void)setOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(void)_setInternalOverrideTraitCollection:(id)arg1 ;
-(BOOL)_shouldOccludeDuringPresentation;
-(id)_animatorForContainmentTransition;
-(void)_disableMenuPressForBackGesture;
-(BOOL)_canPresentInSeparateScene;
-(id)_fallbackTraitCollection;
-(void)_sendDidAttemptToDismiss;
-(void)_setForcePresentationInPresenterScene:(BOOL)arg1 ;
-(id)_adaptiveTransitionCoordinator;
-(id)_adaptiveTransitionContext;
-(void)set_containerSuperviewForCurrentTransition:(id)arg1 ;
-(BOOL)_shouldPreserveFirstResponder;
-(void)_setCustomViewForTouchContinuation:(id)arg1 ;
-(id)_presentationView;
-(BOOL)_shouldDismiss;
-(BOOL)isCurrentStateCancelled;
-(CGRect)sourceRect;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
-(void)setState:(long long)arg1 ;
-(void)_closeScene;
-(id)_childPresentationController;
-(void)_sendDidDismiss;
-(long long)state;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(id)_preferredAnimationControllerForDismissal;
-(void)_updateRealSourceView;
-(BOOL)_shouldConvertToScene;
-(BOOL)shouldRemovePresentersView;
-(void)updateFocusIfNeeded;
-(void)_setPreferredContentSize:(CGSize)arg1 ;
-(void)_setPresentedViewController:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(UIView *)_currentPresentationSuperview;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_realSourceViewGeometryDidChange;
-(BOOL)_fallbackShouldDismiss;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(void)_sendFallbackWillDismiss;
-(void)_sendFallbackDidDismiss;
-(void)_realSourceViewDidChangeFromView:(id)arg1 toView:(id)arg2 ;
-(UIEdgeInsets)_additionalSafeAreaInsets;
-(void)transitionDidStart;
-(void)_convertToSceneFromPresentingViewController:(id)arg1 ;
-(BOOL)_transitioningFrom;
-(void)_coverWithSnapshot;
-(void)_setRealSourceView:(id)arg1 ;
-(id)_focusMapContainer;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)_customViewForTouchContinuation;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(void)_setPresentationView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)dismissed;
-(void)_containerViewLayoutSubviews;
-(id)_realSourceView;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(void)_setPresentingViewController:(id)arg1 ;
-(id)_currentTransitionDidComplete;
-(id)_preferredInteractionControllerForDismissal:(id)arg1 ;
-(void)_setCurrentInteractionController:(id)arg1 ;
-(void)_transitionFromWillBegin;
-(BOOL)_shouldDisablePresentersAppearanceCallbacks;
-(void)_sendWillDismiss;
-(void)_setCurrentTransitionController:(id)arg1 ;
-(void)_setCurrentPresentationSuperview:(id)arg1 ;
-(void)dealloc;
-(void)set_transitionViewForCurrentTransition:(id)arg1 ;
-(void)set_computeToEndFrameForCurrentTransition:(id)arg1 ;
-(void)set_currentTransitionDidComplete:(id)arg1 ;
-(void)set_fromViewForCurrentTransition:(id)arg1 ;
-(void)set_toViewForCurrentTransition:(id)arg1 ;
-(void)set_customFromViewForCurrentTransition:(id)arg1 ;
-(void)set_customToViewForCurrentTransition:(id)arg1 ;
-(void)_setAdaptiveTransitionContext:(id)arg1 ;
-(void)_setAdaptiveTransitionCoordinator:(id)arg1 ;
-(BOOL)_mayChildGrabPresentedViewControllerView;
-(void)_prepareForWindowDeallocRecursively:(BOOL)arg1 ;
-(UIViewController *)presentedViewController;
@end

