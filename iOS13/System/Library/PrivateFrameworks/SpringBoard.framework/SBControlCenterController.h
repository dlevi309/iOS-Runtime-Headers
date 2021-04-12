/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/CCUIModularControlCenterOverlayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBGrabberTongueDelegate.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/CSExternalPresentationProviding.h>
#import <libobjc.A.dylib/CSExternalAppearanceProviding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBBarSwipeAffordanceObserver.h>
#import <libobjc.A.dylib/SBBarSwipeAffordanceDelegate.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/CCUIHostStatusBarStyleProvider.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>
#import <libobjc.A.dylib/SBIndirectPanGestureRecognizerOrientationProviding.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/CSCoverSheetOverlaying.h>

@protocol SBIdleTimerCoordinating, BSInvalidatable;
@class CCUIStatusBarStyleSnapshot, SBControlCenterWindow, CCUIModularControlCenterOverlayViewController, SBBarSwipeAffordanceViewController, SBControlCenterSystemAgent, BSSimpleAssertion, SBAppStatusBarSettingsAssertion, SBAsynchronousRenderingAssertion, SBGrabberTongue, UIPanGestureRecognizer, SBIndirectPanGestureRecognizer, UIApplicationSceneDeactivationAssertion, FBDisplayLayoutElement, NSHashTable, NSMutableArray, PTSingleTestRecipe, NSString, NSArray, NSSet, _UILegibilitySettings, UIColor;

@interface SBControlCenterController : NSObject <CCUIModularControlCenterOverlayViewControllerDelegate, SBGrabberTongueDelegate, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalAppearanceProviding, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBFIdleTimerBehaviorProviding, CCUIHostStatusBarStyleProvider, SBReachabilityObserver, SBIndirectPanGestureRecognizerOrientationProviding, SBIdleTimerProviding, CSCoverSheetOverlaying> {

	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	SBControlCenterWindow* _window;
	CCUIModularControlCenterOverlayViewController* _viewController;
	SBBarSwipeAffordanceViewController* _homeAffordanceViewController;
	SBControlCenterSystemAgent* _systemAgent;
	BSSimpleAssertion* _hideStatusBarAssertion;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	SBAsynchronousRenderingAssertion* _asynchronousRenderingAssertion;
	SBGrabberTongue* _grabberTongue;
	UIPanGestureRecognizer* _statusBarPullGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectStatusBarPullGestureRecognizer;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	FBDisplayLayoutElement* _displayLayoutElement;
	NSHashTable* _observers;
	NSMutableArray* _windowLevelAssertions;
	id<BSInvalidatable> _idleTimerDisableAssertion;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;
	PTSingleTestRecipe* _presentModuleTestRecipe;
	PTSingleTestRecipe* _userInterfaceStyleTestRecipe;

}

@property (nonatomic,retain) SBControlCenterWindow * window;                                                       //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) CCUIModularControlCenterOverlayViewController * viewController;                       //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) SBBarSwipeAffordanceViewController * homeAffordanceViewController;                    //@synthesize homeAffordanceViewController=_homeAffordanceViewController - In the implementation block
@property (nonatomic,retain) SBControlCenterSystemAgent * systemAgent;                                             //@synthesize systemAgent=_systemAgent - In the implementation block
@property (nonatomic,retain) BSSimpleAssertion * hideStatusBarAssertion;                                           //@synthesize hideStatusBarAssertion=_hideStatusBarAssertion - In the implementation block
@property (nonatomic,retain) SBAppStatusBarSettingsAssertion * statusBarAssertion;                                 //@synthesize statusBarAssertion=_statusBarAssertion - In the implementation block
@property (nonatomic,retain) SBAsynchronousRenderingAssertion * asynchronousRenderingAssertion;                    //@synthesize asynchronousRenderingAssertion=_asynchronousRenderingAssertion - In the implementation block
@property (nonatomic,retain) SBGrabberTongue * grabberTongue;                                                      //@synthesize grabberTongue=_grabberTongue - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * statusBarPullGestureRecognizer;                              //@synthesize statusBarPullGestureRecognizer=_statusBarPullGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectStatusBarPullGestureRecognizer;              //@synthesize indirectStatusBarPullGestureRecognizer=_indirectStatusBarPullGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIApplicationSceneDeactivationAssertion * resignActiveAssertion;                      //@synthesize resignActiveAssertion=_resignActiveAssertion - In the implementation block
@property (nonatomic,retain) FBDisplayLayoutElement * displayLayoutElement;                                        //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * windowLevelAssertions;                                               //@synthesize windowLevelAssertions=_windowLevelAssertions - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> idleTimerDisableAssertion;                                        //@synthesize idleTimerDisableAssertion=_idleTimerDisableAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> deferOrientationUpdatesAssertion;                                 //@synthesize deferOrientationUpdatesAssertion=_deferOrientationUpdatesAssertion - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * presentModuleTestRecipe;                                       //@synthesize presentModuleTestRecipe=_presentModuleTestRecipe - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * userInterfaceStyleTestRecipe;                                  //@synthesize userInterfaceStyleTestRecipe=_userInterfaceStyleTestRecipe - In the implementation block
@property (getter=isPresented,nonatomic,readonly) BOOL presented; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL allowGestureForContentBelow; 
@property (nonatomic,readonly) unsigned long long presentingEdge; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;                              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@property (nonatomic,copy,readonly) CCUIStatusBarStyleSnapshot * hostStatusBarStyle; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)_sharedInstanceCreatingIfNeeded:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSSet *)components;
-(void)setViewController:(CCUIModularControlCenterOverlayViewController *)arg1 ;
-(BOOL)isVisible;
-(UIColor *)backgroundColor;
-(SBControlCenterWindow *)window;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didPresent;
-(void)dismissAnimated:(BOOL)arg1 ;
-(CCUIModularControlCenterOverlayViewController *)viewController;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)setWindow:(SBControlCenterWindow *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(long long)backgroundStyle;
-(void)_setStatusBarHidden:(BOOL)arg1 ;
-(void)_didDismiss;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)appearanceIdentifier;
-(long long)idleTimerMode;
-(BOOL)isPresented;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(BOOL)handleMenuButtonTap;
-(SBAppStatusBarSettingsAssertion *)statusBarAssertion;
-(void)setStatusBarAssertion:(SBAppStatusBarSettingsAssertion *)arg1 ;
-(void)_willPresent;
-(void)_willBeginTransition;
-(void)_didEndTransition;
-(long long)participantState;
-(NSArray *)presentationRegions;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(SBBarSwipeAffordanceViewController *)homeAffordanceViewController;
-(void)dismissOverlayForDashBoardAnimated:(BOOL)arg1 ;
-(BOOL)allowShowTransition;
-(void)controlCenterViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2 ;
-(void)willOpenExpandedModuleForControlCenterViewController:(id)arg1 ;
-(void)didCloseExpandedModuleForControlCenterViewController:(id)arg1 ;
-(void)controlCenterViewController:(id)arg1 didChangePresentationState:(unsigned long long)arg2 ;
-(id)reachabilitySpringAnimationBehaviorForControlCenterViewController:(id)arg1 ;
-(CCUIStatusBarStyleSnapshot *)hostStatusBarStyle;
-(void)controlCenterViewController:(id)arg1 significantPresentationProgressChange:(double)arg2 ;
-(void)controlCenterViewController:(id)arg1 wantsHostStatusBarHidden:(BOOL)arg2 ;
-(double)reachabilityOffsetForControlCenterViewController:(id)arg1 ;
-(double)_reachabilityOffset;
-(void)_screenDidDim;
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(void)handleReachabilityYOffsetDidChange;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(BOOL)handleIndirectStatusBarAction;
-(id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 ;
-(id)_controlCenterWindow;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1 ;
-(id)hideAnimationSettingsForBarSwipeAffordanceView:(id)arg1 ;
-(id)unhideAnimationSettingsForBarSwipeAffordanceView:(id)arg1 ;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(void)setDisplayLayoutElement:(FBDisplayLayoutElement *)arg1 ;
-(SBAsynchronousRenderingAssertion *)asynchronousRenderingAssertion;
-(void)setAsynchronousRenderingAssertion:(SBAsynchronousRenderingAssertion *)arg1 ;
-(id<BSInvalidatable>)deferOrientationUpdatesAssertion;
-(void)setDeferOrientationUpdatesAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_uiRelockedNotification:(id)arg1 ;
-(unsigned long long)presentingEdge;
-(void)_handleStatusBarPullDownGesture:(id)arg1 ;
-(void)_updateWindowLevel;
-(BOOL)isPresentedOrDismissing;
-(BOOL)_shouldAllowControlCenterGesture;
-(void)_disableReachability;
-(BOOL)_shouldShowGrabberOnFirstSwipe;
-(BOOL)_isLocationXWithinTrailingStatusBarRegion:(double)arg1 ;
-(CGPoint)_locationOfTouchInActiveInterfaceOrientation:(id)arg1 gestureRecognizer:(id)arg2 ;
-(BOOL)isDismissedOrDismissing;
-(void)_updateWindowOrientation;
-(void)_updateWindowVisibility;
-(CGPoint)_presentGestureLocationInView;
-(CGPoint)_presentGestureTranslationInView:(BOOL)arg1 ;
-(CGPoint)_presentGestureVelocityInView;
-(void)_willDismiss;
-(void)_enumerateObservers:(/*^block*/id)arg1 ;
-(double)_trailingStatusBarRegionWidth;
-(BOOL)allowShowTransitionSystemGesture;
-(double)_homeAffordanceAnimationDelay;
-(BOOL)_isStatusBarHiddenIgnoringControlCenter;
-(BOOL)grabberTongueOrPullEnabled:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2 ;
-(BOOL)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)grabberTongue:(id)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2 ;
-(BOOL)grabberTongueHonorsAmbiguousActivationMargin:(id)arg1 ;
-(void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueWillPresent:(id)arg1 ;
-(void)grabberTongueDidDismiss:(id)arg1 ;
-(id)customGestureRecognizerForGrabberTongue:(id)arg1 ;
-(long long)indirectPanEffectiveInterfaceOrientation;
-(BOOL)allowGestureForContentBelow;
-(void)_requirePresentGestureRecognizerToFailForGestureRecognizer:(id)arg1 ;
-(void)_requireGestureRecognizerToFailForPresentGestureRecognizer:(id)arg1 ;
-(void)setHomeAffordanceViewController:(SBBarSwipeAffordanceViewController *)arg1 ;
-(SBControlCenterSystemAgent *)systemAgent;
-(void)setSystemAgent:(SBControlCenterSystemAgent *)arg1 ;
-(BSSimpleAssertion *)hideStatusBarAssertion;
-(void)setHideStatusBarAssertion:(BSSimpleAssertion *)arg1 ;
-(SBGrabberTongue *)grabberTongue;
-(void)setGrabberTongue:(SBGrabberTongue *)arg1 ;
-(UIPanGestureRecognizer *)statusBarPullGestureRecognizer;
-(void)setStatusBarPullGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(SBIndirectPanGestureRecognizer *)indirectStatusBarPullGestureRecognizer;
-(void)setIndirectStatusBarPullGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(UIApplicationSceneDeactivationAssertion *)resignActiveAssertion;
-(void)setResignActiveAssertion:(UIApplicationSceneDeactivationAssertion *)arg1 ;
-(NSMutableArray *)windowLevelAssertions;
-(void)setWindowLevelAssertions:(NSMutableArray *)arg1 ;
-(id<BSInvalidatable>)idleTimerDisableAssertion;
-(void)setIdleTimerDisableAssertion:(id<BSInvalidatable>)arg1 ;
-(PTSingleTestRecipe *)presentModuleTestRecipe;
-(PTSingleTestRecipe *)userInterfaceStyleTestRecipe;
@end

