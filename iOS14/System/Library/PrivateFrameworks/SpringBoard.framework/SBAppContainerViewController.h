/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControllingStatusBarDelegate.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControlling.h>
#import <libobjc.A.dylib/SBApplicationSceneStatusBarDescriberProviding.h>

@protocol SBApplicationSceneViewControlling, SBDeviceApplicationSceneStatusBarStateObserver;
@class SBApplicationSceneHandle, UIApplicationSceneSettingsDiffInspector, UIViewController, _SBAppContainerStatusBarStateProxy, NSString, UIView;

@interface SBAppContainerViewController : SBLayoutElementViewController <SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBSceneHandleObserver, SBApplicationSceneViewControlling, SBApplicationSceneStatusBarDescriberProviding> {

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
@property (nonatomic,readonly) SBApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
-(id)newSnapshotView;
-(void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2 ;
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(void)setStatusBarDelegate:(id<SBDeviceApplicationSceneStatusBarStateObserver>)arg1 ;
-(void)_clearState;
-(void)setCustomContentView:(UIView *)arg1 ;
-(long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(long long)displayMode;
-(void)prepareForReuse;
-(double)statusBarAlpha;
-(void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2 ;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(id)_deviceApplicationSceneHandle;
-(void)setContentWrapperInterfaceOrientation:(long long)arg1 ;
-(id)_applicationSceneViewControllerForSceneHandle:(id)arg1 ;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(UIView *)customContentView;
-(long long)overrideStatusBarStyle;
-(void)didEndTransitionToVisible:(BOOL)arg1 ;
-(id)newSnapshot;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(void)invalidate;
-(long long)contentInterfaceOrientation;
-(SBApplicationSceneHandle *)sceneHandle;
-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(id)initWithDisplayIdentity:(id)arg1 ;
-(id<SBDeviceApplicationSceneStatusBarStateObserver>)statusBarDelegate;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(id<SBApplicationSceneStatusBarDescribing>)statusBarDescriber;
-(void)applicationSceneViewController:(id)arg1 didUpdateStatusBarSettings:(id)arg2 ;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(UIViewController*<SBApplicationSceneViewControlling>)_applicationSceneViewController;
-(CGSize)contentReferenceSize;
-(void)_updateDisplayLayoutElementForSceneExistence:(id)arg1 ;
-(void)_configureViewController:(id)arg1 ;
@end

