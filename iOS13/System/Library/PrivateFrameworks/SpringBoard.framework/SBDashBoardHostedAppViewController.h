/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDashBoardViewExternalControllerBase.h>
#import <libobjc.A.dylib/SBAppViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/SBMainDisplaySceneLayoutStatusBarViewDataSource.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControllingStatusBarDelegate.h>
#import <libobjc.A.dylib/SBApplicationHosting.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBDashBoardHostedAppViewControllerDelegate, BSInvalidatable;
@class SBAppViewController, UIApplicationSceneDeactivationAssertion, SBFAuthenticationAssertion, NSString, SBMainDisplaySceneLayoutStatusBarView, _SBDashBoardHostedAppStatusBarStateProxy, UIApplicationSceneClientSettingsDiffInspector, SBApplicationSceneHandle, SBApplicationSceneView, NSSet;

@interface SBDashBoardHostedAppViewController : SBDashBoardViewExternalControllerBase <SBAppViewControllerDelegate, SBSceneHandleObserver, SBMainDisplaySceneLayoutStatusBarViewDataSource, SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBApplicationHosting, BSInvalidatable> {

	id<SBDashBoardHostedAppViewControllerDelegate> _delegate;
	SBAppViewController* _appViewController;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBFAuthenticationAssertion* _authenticationAssertion;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;
	NSString* _cachedBasicPublicDescription;
	BOOL _invalidated;
	BOOL _wantsIdleTimerDisabled;
	SBMainDisplaySceneLayoutStatusBarView* _statusBarView;
	_SBDashBoardHostedAppStatusBarStateProxy* _statusBarObserverProxy;
	UIApplicationSceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	BOOL _intentToTransitionFromSecureAppToFull;
	BOOL _interfaceOrientationLocked;

}

@property (nonatomic,readonly) id<SBApplicationSceneStatusBarDescribing> statusBarDescriber;              //@synthesize statusBarObserverProxy=_statusBarObserverProxy - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardHostedAppViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBApplicationSceneHandle * applicationSceneHandle; 
@property (nonatomic,readonly) SBApplicationSceneView * appView; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (assign,nonatomic) long long mode; 
@property (nonatomic,retain) NSSet * actionsToDeliver; 
@property (assign,nonatomic) BOOL intentToTransitionFromSecureAppToFull;                                  //@synthesize intentToTransitionFromSecureAppToFull=_intentToTransitionFromSecureAppToFull - In the implementation block
@property (assign,nonatomic) BOOL placeholderContentEnabled; 
@property (assign,nonatomic) BOOL interfaceOrientationLocked;                                             //@synthesize interfaceOrientationLocked=_interfaceOrientationLocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<SBDashBoardHostedAppViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBDashBoardHostedAppViewControllerDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(long long)presentationStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)statusBarOrientation;
-(long long)presentationType;
-(id)appearanceIdentifier;
-(id)_appViewController;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)setPlaceholderContentEnabled:(BOOL)arg1 ;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(BOOL)placeholderContentEnabled;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(BOOL)isHostingAnApp;
-(id)hostedAppSceneHandle;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(BOOL)canHostAnApp;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(id)displayLayoutElementIdentifier;
-(void)configureDisplayLayoutElement:(id)arg1 ;
-(SBApplicationSceneHandle *)applicationSceneHandle;
-(SBApplicationSceneView *)appView;
-(void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2 ;
-(NSSet *)actionsToDeliver;
-(id)initWithApplicationSceneEntity:(id)arg1 ;
-(void)setSupplementalActivationSettings:(id)arg1 ;
-(id)statusBarDescribers;
-(id)statusBarDescriberForStatusBarPart:(id)arg1 ;
-(BOOL)allowsConfiguringIndividualStatusBarParts;
-(long long)contentInterfaceOrientation;
-(void)setInterfaceOrientationLocked:(BOOL)arg1 ;
-(void)setIntentToTransitionFromSecureAppToFull:(BOOL)arg1 ;
-(id)_deviceApplicationSceneHandle;
-(void)applicationSceneViewController:(id)arg1 didUpdateStatusBarSettings:(id)arg2 ;
-(id<SBApplicationSceneStatusBarDescribing>)statusBarDescriber;
-(void)_setMode:(long long)arg1 fromClient:(BOOL)arg2 forReason:(id)arg3 ;
-(void)_setResignActiveAssertionEnabled:(BOOL)arg1 ;
-(void)_addStatusBarViewIfNeeded;
-(void)_updateStatusBarContainerOrientation;
-(void)_beginShowingStatusBarView;
-(void)_endShowingStatusBarView;
-(long long)containerInterfaceOrientation;
-(void)appViewController:(id)arg1 didTransitionFromMode:(long long)arg2 toMode:(long long)arg3 ;
-(void)appViewControllerWillActivateApplication:(id)arg1 ;
-(void)appViewControllerDidDeactivateApplication:(id)arg1 ;
-(BOOL)appViewControllerShouldBackgroundApplicationOnDeactivate:(id)arg1 ;
-(BOOL)intentToTransitionFromSecureAppToFull;
-(BOOL)interfaceOrientationLocked;
@end

