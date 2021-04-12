/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBApplicationHosting.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControlling.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBScenePlaceholderContentContext, SBApplicationSceneViewControllingStatusBarDelegate, SBAppViewControllerDelegate;
@class NSString, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, SBActivationSettings, NSMutableSet, NSSet, SBApplicationSceneView, SBApplicationSceneHandle, UIView;

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
@property (nonatomic,readonly) SBApplicationSceneHandle * sceneHandle;                                                                     //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext;                                               //@synthesize placeholderContentContext=_placeholderContentContext - In the implementation block
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)newSnapshotView;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(BOOL)canHostAnApp;
-(void)_destroySceneViewController;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(long long)currentMode;
-(void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setCurrentMode:(long long)arg1 ;
-(void)setRequestedMode:(long long)arg1 ;
-(id<SBAppViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setCustomContentView:(UIView *)arg1 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(SBApplicationSceneView *)appView;
-(void)setAutomatesLifecycle:(BOOL)arg1 ;
-(long long)requestedMode;
-(void)_createSceneViewController;
-(long long)displayMode;
-(id)_configureApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2 ;
-(double)statusBarAlpha;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<SBAppViewControllerDelegate>)arg1 ;
-(BOOL)automatesLifecycle;
-(void)setSupplementalActivationSettings:(SBActivationSettings *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_installedAppsDidChange:(id)arg1 ;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(UIView *)customContentView;
-(id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2 ;
-(long long)overrideStatusBarStyle;
-(id)newSnapshot;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(SBActivationSettings *)supplementalActivationSettings;
-(NSSet *)actionsToDeliver;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(long long)contentInterfaceOrientation;
-(SBApplicationSceneHandle *)sceneHandle;
-(void)_updateForAppearanceState:(int)arg1 ;
-(void)conformsToSBApplicationHosting;
-(BOOL)ignoresOcclusions;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)placeholderContentEnabled;
-(void)_deactivateHostedApp;
-(void)_transformHostedAppViewForRotationToOrientation:(long long)arg1 ;
-(BOOL)isHostingAnApp;
-(void)_sendActions:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 andApplicationSceneEntity:(id)arg2 ;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(void)setPlaceholderContentEnabled:(BOOL)arg1 ;
-(CGSize)contentReferenceSize;
-(void)viewDidLayoutSubviews;
-(BOOL)wantsSecureRendering;
-(void)setWantsSecureRendering:(BOOL)arg1 ;
-(void)dealloc;
-(void)_activateApp;
-(void)setIgnoresOcclusions:(BOOL)arg1 ;
@end

