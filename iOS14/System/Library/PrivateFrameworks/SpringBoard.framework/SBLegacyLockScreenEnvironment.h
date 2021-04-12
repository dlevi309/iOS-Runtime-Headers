/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBLockScreenEnvironment.h>

@class UIViewController, SBLockScreenViewControllerBase, NSString;

@interface SBLegacyLockScreenEnvironment : NSObject <BSDescriptionProviding, SBLockScreenEnvironment> {

	SBLockScreenViewControllerBase* _lockScreenViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * rootViewController; 
@property (nonatomic,readonly) id<SBAutoUnlockRule> autoUnlockRule; 
@property (nonatomic,readonly) id<SBBiometricUnlockBehavior> biometricUnlockBehavior; 
@property (nonatomic,readonly) id<SBButtonEventsHandler> buttonEventsHandler; 
@property (nonatomic,readonly) id<SBApplicationHosting> applicationHoster; 
@property (nonatomic,readonly) id<SBIdleTimerProviding> idleTimerProvider; 
@property (nonatomic,readonly) id<SBFScreenWakeAnimationTarget> screenWakeAnimationTarget; 
@property (nonatomic,readonly) id<SBLockScreenApplicationLaunching> applicationLauncher; 
@property (nonatomic,readonly) id<SBLockScreenBacklightControlling> backlightController; 
@property (nonatomic,readonly) id<SBLockScreenBehaviorSuppressing> behaviorSuppressor; 
@property (nonatomic,readonly) id<SBLockScreenBlockedStateObserving> blockedStateObserver; 
@property (nonatomic,readonly) id<SBLockScreenButtonObserving> buttonObserver; 
@property (nonatomic,readonly) id<SBLockScreenCallHandling> callController; 
@property (nonatomic,readonly) id<SBLockScreenContentStateProviding> contentStateProvider; 
@property (nonatomic,readonly) id<SBLockScreenCustomActionStoring> customActionStore; 
@property (nonatomic,readonly) id<SBLockScreenIdleTimerControlling> idleTimerController; 
@property (nonatomic,readonly) id<SBLockScreenLockingAndUnlocking> lockController; 
@property (nonatomic,readonly) id<SBLockScreenMediaControlsPresenting> mediaControlsPresenter; 
@property (nonatomic,readonly) id<SBLockScreenPasscodeViewPresenting> passcodeViewPresenter; 
@property (nonatomic,readonly) id<SBLockScreenPluginPresenting> pluginPresenter; 
@property (nonatomic,readonly) id<SBLockScreenProximityBehaviorProviding> proximityBehaviorProvider; 
@property (nonatomic,readonly) id<SBLockScreenStatusBarTransitioning> statusBarTransitionController; 
-(id<SBLockScreenApplicationLaunching>)applicationLauncher;
-(id<SBLockScreenIdleTimerControlling>)idleTimerController;
-(id)succinctDescription;
-(id<SBLockScreenCallHandling>)callController;
-(id<SBLockScreenBehaviorSuppressing>)behaviorSuppressor;
-(id<SBLockScreenCustomActionStoring>)customActionStore;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<SBApplicationHosting>)applicationHoster;
-(id<SBLockScreenLockingAndUnlocking>)lockController;
-(id<SBButtonEventsHandler>)buttonEventsHandler;
-(id<SBLockScreenBlockedStateObserving>)blockedStateObserver;
-(id<SBLockScreenProximityBehaviorProviding>)proximityBehaviorProvider;
-(id<SBAutoUnlockRule>)autoUnlockRule;
-(NSString *)description;
-(UIViewController *)rootViewController;
-(id<SBLockScreenPasscodeViewPresenting>)passcodeViewPresenter;
-(id<SBIdleTimerProviding>)idleTimerProvider;
-(id<SBLockScreenStatusBarTransitioning>)statusBarTransitionController;
-(id<SBLockScreenPluginPresenting>)pluginPresenter;
-(id<SBFScreenWakeAnimationTarget>)screenWakeAnimationTarget;
-(id<SBLockScreenButtonObserving>)buttonObserver;
-(id<SBLockScreenContentStateProviding>)contentStateProvider;
-(id<SBLockScreenMediaControlsPresenting>)mediaControlsPresenter;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id<SBLockScreenBacklightControlling>)backlightController;
-(id<SBBiometricUnlockBehavior>)biometricUnlockBehavior;
-(id)initWithLockScreenViewController:(id)arg1 ;
@end

