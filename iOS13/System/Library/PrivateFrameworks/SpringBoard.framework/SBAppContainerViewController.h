/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControllingStatusBarDelegate.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControlling.h>

@protocol SBApplicationSceneViewControlling, SBDeviceApplicationSceneStatusBarStateObserver;
@class SBApplicationSceneHandle, UIApplicationSceneSettingsDiffInspector, UIViewController, _SBAppContainerStatusBarStateProxy, NSString, SBSceneHandle, UIView;

@interface SBAppContainerViewController : SBLayoutElementViewController <SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBSceneHandleObserver, SBApplicationSceneViewControlling> {

	SBApplicationSceneHandle* _applicationSceneHandle;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsDiffInspector;
	UIViewController*<SBApplicationSceneViewControlling> _applicationSceneViewController;
	long long _requestedDisplayMode;
	_SBAppContainerStatusBarStateProxy* _statusBarObserverProxy;
	id<SBDeviceApplicationSceneStatusBarStateObserver> _statusBarDelegate;

}

@property (nonatomic,readonly) UIViewController*<SBApplicationSceneViewControlling> _applicationSceneViewController;                       //@synthesize applicationSceneViewController=_applicationSceneViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBDeviceApplicationSceneStatusBarStateObserver> statusBarDelegate;                                  //@synthesize statusBarDelegate=_statusBarDelegate - In the implementation block
@property (nonatomic,readonly) id<SBApplicationSceneStatusBarDescribing> statusBarDescriber;                                               //@synthesize statusBarObserverProxy=_statusBarObserverProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBSceneHandle * sceneHandle; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
-(void)invalidate;
-(void)prepareForReuse;
-(UIView *)customContentView;
-(double)statusBarAlpha;
-(long long)displayMode;
-(id)newSnapshot;
-(void)_clearState;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2 ;
-(SBSceneHandle *)sceneHandle;
-(void)setCustomContentView:(UIView *)arg1 ;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(id<SBDeviceApplicationSceneStatusBarStateObserver>)statusBarDelegate;
-(void)setStatusBarDelegate:(id<SBDeviceApplicationSceneStatusBarStateObserver>)arg1 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2 ;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
-(UIViewController*<SBApplicationSceneViewControlling>)_applicationSceneViewController;
-(long long)contentInterfaceOrientation;
-(long long)overrideStatusBarStyle;
-(id)newSnapshotView;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(CGSize)contentReferenceSize;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(void)setContentWrapperInterfaceOrientation:(long long)arg1 ;
-(id)initWithDisplayIdentity:(id)arg1 ;
-(void)didEndTransitionToVisible:(BOOL)arg1 ;
-(id)_deviceApplicationSceneHandle;
-(id)_applicationSceneViewControllerForSceneHandle:(id)arg1 ;
-(void)_configureViewController:(id)arg1 ;
-(void)_updateDisplayLayoutElementForSceneExistence:(id)arg1 ;
-(void)applicationSceneViewController:(id)arg1 didUpdateStatusBarSettings:(id)arg2 ;
-(long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(id<SBApplicationSceneStatusBarDescribing>)statusBarDescriber;
@end

