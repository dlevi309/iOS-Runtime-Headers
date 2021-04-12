/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBApplicationHosting.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControlling.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBScenePlaceholderContentContext, SBApplicationSceneViewControllingStatusBarDelegate, SBAppViewControllerDelegate;
@class NSString, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, SBActivationSettings, NSMutableSet, NSSet, SBApplicationSceneView, SBSceneHandle, UIView;

@interface SBAppViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBApplicationHosting, SBApplicationSceneViewControlling, BSInvalidatable> {

	NSString* _identifier;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	SBDeviceApplicationSceneViewController* _deviceAppViewController;
	SBActivationSettings* _activationSettings;
	id<SBScenePlaceholderContentContext> _placeholderContentContext;
	NSMutableSet* _activeTransitions;
	NSSet* _actionsToDeliver;
	long long _requestedMode;
	long long _currentMode;
	BOOL _sceneContentIsReady;
	BOOL _ignoresOcclusions;
	BOOL _invalidated;
	BOOL _automatesLifecycle;
	BOOL _placeholderContentEnabled;
	BOOL _wantsSecureRendering;
	id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
	id<SBAppViewControllerDelegate> _delegate;
	SBActivationSettings* _supplementalActivationSettings;

}

@property (assign,nonatomic,__weak) id<SBAppViewControllerDelegate> delegate;                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL automatesLifecycle;                                                                                      //@synthesize automatesLifecycle=_automatesLifecycle - In the implementation block
@property (assign,nonatomic) long long requestedMode;                                                                                      //@synthesize requestedMode=_requestedMode - In the implementation block
@property (nonatomic,readonly) long long currentMode;                                                                                      //@synthesize currentMode=_currentMode - In the implementation block
@property (nonatomic,readonly) SBApplicationSceneView * appView; 
@property (assign,nonatomic) BOOL ignoresOcclusions;                                                                                       //@synthesize ignoresOcclusions=_ignoresOcclusions - In the implementation block
@property (nonatomic,retain) NSSet * actionsToDeliver;                                                                                     //@synthesize actionsToDeliver=_actionsToDeliver - In the implementation block
@property (assign,nonatomic) BOOL wantsSecureRendering;                                                                                    //@synthesize wantsSecureRendering=_wantsSecureRendering - In the implementation block
@property (assign,nonatomic) BOOL placeholderContentEnabled;                                                                               //@synthesize placeholderContentEnabled=_placeholderContentEnabled - In the implementation block
@property (nonatomic,retain) SBActivationSettings * supplementalActivationSettings;                                                        //@synthesize supplementalActivationSettings=_supplementalActivationSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBSceneHandle * sceneHandle; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext;                                               //@synthesize placeholderContentContext=_placeholderContentContext - In the implementation block
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
-(void)dealloc;
-(void)invalidate;
-(id<SBAppViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBAppViewControllerDelegate>)arg1 ;
-(long long)currentMode;
-(UIView *)customContentView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(double)statusBarAlpha;
-(long long)displayMode;
-(id)newSnapshot;
-(void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(SBSceneHandle *)sceneHandle;
-(void)setCustomContentView:(UIView *)arg1 ;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)setPlaceholderContentEnabled:(BOOL)arg1 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(BOOL)placeholderContentEnabled;
-(void)_installedAppsDidChange:(id)arg1 ;
-(BOOL)isHostingAnApp;
-(id)hostedAppSceneHandle;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(BOOL)canHostAnApp;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(SBApplicationSceneView *)appView;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(NSSet *)actionsToDeliver;
-(void)setSupplementalActivationSettings:(SBActivationSettings *)arg1 ;
-(long long)contentInterfaceOrientation;
-(long long)overrideStatusBarStyle;
-(id)newSnapshotView;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(CGSize)contentReferenceSize;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(id)initWithIdentifier:(id)arg1 andApplicationSceneEntity:(id)arg2 ;
-(void)setAutomatesLifecycle:(BOOL)arg1 ;
-(void)setIgnoresOcclusions:(BOOL)arg1 ;
-(long long)requestedMode;
-(void)setRequestedMode:(long long)arg1 ;
-(void)_sendActions:(id)arg1 ;
-(void)_setCurrentMode:(long long)arg1 ;
-(void)_updateForAppearanceState:(int)arg1 ;
-(void)_transformHostedAppViewForRotationToOrientation:(long long)arg1 ;
-(void)_activateApp;
-(void)_deactivateHostedApp;
-(void)_destroySceneViewController;
-(void)_createSceneViewController;
-(id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2 ;
-(id)_configureApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2 ;
-(BOOL)automatesLifecycle;
-(BOOL)ignoresOcclusions;
-(BOOL)wantsSecureRendering;
-(void)setWantsSecureRendering:(BOOL)arg1 ;
-(SBActivationSettings *)supplementalActivationSettings;
@end

