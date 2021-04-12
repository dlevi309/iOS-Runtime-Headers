/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
#import <libobjc.A.dylib/SBFSensorActivityObserver.h>
#import <libobjc.A.dylib/SBIndirectPanGestureRecognizerOrientationProviding.h>
#import <libobjc.A.dylib/SBHomeGrabberPointerClickDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/CSCoverSheetOverlaying.h>

@protocol SBIdleTimerCoordinating, SBFSensorActivityDataProvider, BSInvalidatable;
@class CCUIStatusBarStyleSnapshot, SBControlCenterWindow, CCUIModularControlCenterOverlayViewController, SBBarSwipeAffordanceViewController, SBControlCenterSystemAgent, BSSimpleAssertion, SBAppStatusBarSettingsAssertion, SBAsynchronousRenderingAssertion, SBGrabberTongue, UIPanGestureRecognizer, SBIndirectPanGestureRecognizer, UIApplicationSceneDeactivationAssertion, FBDisplayLayoutElement, NSHashTable, NSMutableArray, PTSingleTestRecipe, NSString, NSArray, NSSet, _UILegibilitySettings, UIColor;

@interface SBControlCenterController : NSObject <CCUIModularControlCenterOverlayViewControllerDelegate, SBGrabberTongueDelegate, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalAppearanceProviding, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBFIdleTimerBehaviorProviding, CCUIHostStatusBarStyleProvider, SBReachabilityObserver, SBFSensorActivityObserver, SBIndirectPanGestureRecognizerOrientationProviding, SBHomeGrabberPointerClickDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying> {

	BOOL _indirectStatusBarPullGestureCalledBegin;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	id<SBFSensorActivityDataProvider> _sensorActivityDataProvider;
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
	id<BSInvalidatable> _bannerSuppressionAssertion;
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
@property (assign,nonatomic) BOOL indirectStatusBarPullGestureCalledBegin;                                         //@synthesize indirectStatusBarPullGestureCalledBegin=_indirectStatusBarPullGestureCalledBegin - In the implementation block
@property (nonatomic,retain) UIApplicationSceneDeactivationAssertion * resignActiveAssertion;                      //@synthesize resignActiveAssertion=_resignActiveAssertion - In the implementation block
@property (nonatomic,retain) FBDisplayLayoutElement * displayLayoutElement;                                        //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * windowLevelAssertions;                                               //@synthesize windowLevelAssertions=_windowLevelAssertions - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> idleTimerDisableAssertion;                                        //@synthesize idleTimerDisableAssertion=_idleTimerDisableAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> bannerSuppressionAssertion;                                       //@synthesize bannerSuppressionAssertion=_bannerSuppressionAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> deferOrientationUpdatesAssertion;                                 //@synthesize deferOrientationUpdatesAssertion=_deferOrientationUpdatesAssertion - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * presentModuleTestRecipe;                                       //@synthesize presentModuleTestRecipe=_presentModuleTestRecipe - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * userInterfaceStyleTestRecipe;                                  //@synthesize userInterfaceStyleTestRecipe=_userInterfaceStyleTestRecipe - In the implementation block
@property (getter=isPresented,nonatomic,readonly) BOOL presented; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL allowGestureForContentBelow; 
@property (nonatomic,readonly) unsigned long long presentingEdge; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;                              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<SBFSensorActivityDataProvider> sensorActivityDataProvider;                  //@synthesize sensorActivityDataProvider=_sensorActivityDataProvider - In the implementation block
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
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueWillPresent:(id)arg1 ;
-(void)handleReachabilityModeActivated;
-(BOOL)grabberTongue:(id)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2 ;
-(void)grabberTongueDidDismiss:(id)arg1 ;
-(void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)setSensorActivityDataProvider:(id<SBFSensorActivityDataProvider>)arg1 ;
-(void)setGrabberTongue:(SBGrabberTongue *)arg1 ;
-(void)_didPresent;
-(void)_updateWindowVisibility;
-(void)controlCenterViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2 ;
-(BOOL)grabberTongueOrPullEnabled:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(BOOL)_shouldShowGrabberOnFirstSwipe;
-(void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)addObserver:(id)arg1 ;
-(SBAppStatusBarSettingsAssertion *)statusBarAssertion;
-(void)handleDidEndReachabilityAnimation;
-(BOOL)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id<SBFSensorActivityDataProvider>)sensorActivityDataProvider;
-(BOOL)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2 ;
-(id)customGestureRecognizerForGrabberTongue:(id)arg1 ;
-(void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(UIPanGestureRecognizer *)statusBarPullGestureRecognizer;
-(void)handleReachabilityYOffsetDidChange;
-(void)setViewController:(CCUIModularControlCenterOverlayViewController *)arg1 ;
-(SBGrabberTongue *)grabberTongue;
-(void)_uiRelockedNotification:(id)arg1 ;
-(void)handleReachabilityModeDeactivated;
-(SBAsynchronousRenderingAssertion *)asynchronousRenderingAssertion;
-(SBBarSwipeAffordanceViewController *)homeAffordanceViewController;
-(void)setResignActiveAssertion:(UIApplicationSceneDeactivationAssertion *)arg1 ;
-(void)setIdleTimerDisableAssertion:(id<BSInvalidatable>)arg1 ;
-(NSArray *)presentationRegions;
-(BOOL)allowShowTransitionSystemGesture;
-(void)setStatusBarAssertion:(SBAppStatusBarSettingsAssertion *)arg1 ;
-(NSMutableArray *)windowLevelAssertions;
-(NSHashTable *)observers;
-(unsigned long long)presentingEdge;
-(CGPoint)_presentGestureLocationInView;
-(void)conformsToCSExternalBehaviorProviding;
-(id)init;
-(void)setWindow:(SBControlCenterWindow *)arg1 ;
-(BOOL)isPresentedOrDismissing;
-(void)setHideStatusBarAssertion:(BSSimpleAssertion *)arg1 ;
-(void)setWindowLevelAssertions:(NSMutableArray *)arg1 ;
-(CGPoint)_locationOfTouchInActiveInterfaceOrientation:(id)arg1 gestureRecognizer:(id)arg2 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(long long)backgroundStyle;
-(void)setHomeAffordanceViewController:(SBBarSwipeAffordanceViewController *)arg1 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1 ;
-(SBControlCenterSystemAgent *)systemAgent;
-(void)_disableReachability;
-(id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 ;
-(BOOL)allowGestureForContentBelow;
-(void)_updateWindowOrientation;
-(BOOL)isDismissedOrDismissing;
-(long long)notificationBehavior;
-(void)conformsToCSBehaviorProviding;
-(BOOL)handleIndirectStatusBarAction;
-(BOOL)indirectStatusBarPullGestureCalledBegin;
-(id)reachabilitySpringAnimationBehaviorForControlCenterViewController:(id)arg1 ;
-(id<BSInvalidatable>)bannerSuppressionAssertion;
-(void)setIndirectStatusBarPullGestureCalledBegin:(BOOL)arg1 ;
-(BOOL)_isLocationXWithinTrailingStatusBarRegion:(double)arg1 regionPadding:(double)arg2 ;
-(long long)proximityDetectionMode;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)setIndirectStatusBarPullGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(NSString *)appearanceIdentifier;
-(UIColor *)backgroundColor;
-(unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(NSSet *)components;
-(NSString *)coverSheetIdentifier;
-(void)setDisplayLayoutElement:(FBDisplayLayoutElement *)arg1 ;
-(void)setBannerSuppressionAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)deferOrientationUpdatesAssertion;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isLocationXWithinExtendedTrailingStatusBarRegion:(double)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)didCloseExpandedModuleForControlCenterViewController:(id)arg1 ;
-(CCUIModularControlCenterOverlayViewController *)viewController;
-(PTSingleTestRecipe *)presentModuleTestRecipe;
-(void)conformsToCSAppearanceProviding;
-(void)_handleStatusBarPullDownGesture:(id)arg1 ;
-(double)_homeAffordanceAnimationDelay;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)willOpenExpandedModuleForControlCenterViewController:(id)arg1 ;
-(BOOL)isVisible;
-(void)_requireGestureRecognizerToFailForPresentGestureRecognizer:(id)arg1 ;
-(double)reachabilityOffsetForControlCenterViewController:(id)arg1 ;
-(CGPoint)_presentGestureTranslationInView:(BOOL)arg1 ;
-(BOOL)_isStatusBarHiddenIgnoringControlCenter;
-(_UILegibilitySettings *)legibilitySettings;
-(SBControlCenterWindow *)window;
-(id)_controlCenterWindow;
-(void)_didDismiss;
-(void)removeObserver:(id)arg1 ;
-(long long)idleTimerDuration;
-(BOOL)handleMenuButtonTap;
-(id)hideAnimationSettingsForBarSwipeAffordanceView:(id)arg1 ;
-(void)_willDismiss;
-(BOOL)_shouldAllowControlCenterGesture;
-(long long)idleTimerMode;
-(void)_enumerateObservers:(/*^block*/id)arg1 ;
-(id)_sensorActivityDataFromSensorActivityAttribution:(id)arg1 ;
-(void)_setStatusBarHidden:(BOOL)arg1 ;
-(void)setAsynchronousRenderingAssertion:(SBAsynchronousRenderingAssertion *)arg1 ;
-(long long)participantState;
-(void)_willPresent;
-(void)_updateWindowLevel;
-(id<BSInvalidatable>)idleTimerDisableAssertion;
-(PTSingleTestRecipe *)userInterfaceStyleTestRecipe;
-(void)setStatusBarPullGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(long long)idleWarnMode;
-(BOOL)allowShowTransition;
-(void)homeGrabberViewDidReceiveClick:(id)arg1 ;
-(void)_didEndTransition;
-(UIApplicationSceneDeactivationAssertion *)resignActiveAssertion;
-(BOOL)isPresented;
-(void)setSystemAgent:(SBControlCenterSystemAgent *)arg1 ;
-(void)dismissOverlayForDashBoardAnimated:(BOOL)arg1 ;
-(void)controlCenterViewController:(id)arg1 wantsHostStatusBarHidden:(BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)_reachabilityOffset;
-(void)_screenDidDim;
-(CCUIStatusBarStyleSnapshot *)hostStatusBarStyle;
-(SBIndirectPanGestureRecognizer *)indirectStatusBarPullGestureRecognizer;
-(void)_requirePresentGestureRecognizerToFailForGestureRecognizer:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(long long)scrollingStrategy;
-(void)controlCenterViewController:(id)arg1 significantPresentationProgressChange:(double)arg2 ;
-(BOOL)grabberTongueHonorsAmbiguousActivationMargin:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BSSimpleAssertion *)hideStatusBarAssertion;
-(void)controlCenterViewController:(id)arg1 didChangePresentationState:(unsigned long long)arg2 ;
-(void)activityDidChangeForSensorActivityDataProvider:(id)arg1 ;
-(BOOL)_isLocationXWithinTrailingStatusBarRegion:(double)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(void)setDeferOrientationUpdatesAssertion:(id<BSInvalidatable>)arg1 ;
-(long long)indirectPanEffectiveInterfaceOrientation;
-(CGPoint)_presentGestureVelocityInView;
-(void)dealloc;
-(double)_trailingStatusBarRegionWidth;
-(void)_willBeginTransition;
-(id)unhideAnimationSettingsForBarSwipeAffordanceView:(id)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
@end

