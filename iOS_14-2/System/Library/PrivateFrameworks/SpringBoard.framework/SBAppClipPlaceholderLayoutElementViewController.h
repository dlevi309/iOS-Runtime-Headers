/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementViewController.h>
#import <libobjc.A.dylib/SBSceneViewStatusBarAssertionObserver.h>
#import <libobjc.A.dylib/SBApplicationSceneStatusBarDescriberProviding.h>
#import <libobjc.A.dylib/SBApplicationSceneStatusBarDescribing.h>
#import <libobjc.A.dylib/SBSceneLayoutMedusaStatusBarAssertionProviding.h>

@protocol SBDeviceApplicationSceneStatusBarStateObserver;
@class NSString, SBAppClipOverlayViewController, NSMutableArray, _UIStatusBarData, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, SBDeviceApplicationSceneHandle, FBScene;

@interface SBAppClipPlaceholderLayoutElementViewController : SBLayoutElementViewController <SBSceneViewStatusBarAssertionObserver, SBApplicationSceneStatusBarDescriberProviding, SBApplicationSceneStatusBarDescribing, SBSceneLayoutMedusaStatusBarAssertionProviding> {

	NSString* _bundleIdentifier;
	NSString* _sceneIdentifier;
	SBAppClipOverlayViewController* _placeholderViewController;
	BOOL _isObservingApplicationInstalls;
	NSMutableArray* _statusBarAssertions;
	id<SBDeviceApplicationSceneStatusBarStateObserver> _statusBarDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SBApplicationSceneStatusBarDescribing> statusBarDescriber; 
@property (assign,nonatomic,__weak) id<SBDeviceApplicationSceneStatusBarStateObserver> statusBarDelegate;              //@synthesize statusBarDelegate=_statusBarDelegate - In the implementation block
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarOrientation; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) BOOL sceneWantsDeviceOrientationEventsEnabled; 
@property (nonatomic,readonly) NSString * statusBarSceneIdentifier; 
@property (nonatomic,readonly) _UIStatusBarData * overlayStatusBarData; 
@property (nonatomic,readonly) SBDeviceApplicationSceneStatusBarBreadcrumbProvider * breadcrumbProvider; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * classicApplicationSceneHandleIfExists; 
@property (nonatomic,readonly) FBScene * sceneToHandleStatusBarTapIfExists; 
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
-(NSString *)statusBarSceneIdentifier;
-(void)_cleanup;
-(void)setStatusBarDelegate:(id<SBDeviceApplicationSceneStatusBarStateObserver>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)statusBarStyleForPartWithIdentifier:(id)arg1 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
-(CGRect)statusBarAvoidanceFrame;
-(unsigned long long)supportedContentInterfaceOrientations;
-(void)prepareForReuse;
-(double)statusBarAlpha;
-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(FBScene *)sceneToHandleStatusBarTapIfExists;
-(BOOL)statusBarHidden;
-(void)viewDidLoad;
-(SBDeviceApplicationSceneHandle *)classicApplicationSceneHandleIfExists;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(long long)statusBarOrientation;
-(void)invalidate;
-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
-(void)statusBarAssertionDidUpdate:(id)arg1 ;
-(long long)statusBarStyle;
-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
-(SBDeviceApplicationSceneStatusBarBreadcrumbProvider *)breadcrumbProvider;
-(id)_aggregateStatusBarOverrideSettings;
-(id<SBDeviceApplicationSceneStatusBarStateObserver>)statusBarDelegate;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(id<SBApplicationSceneStatusBarDescribing>)statusBarDescriber;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3 ;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(void)_beginObservingApplicationInstalls;
-(void)_launchApplication:(id)arg1 ;
-(int)statusBarStyleOverridesToSuppress;
-(void)statusBarAssertionDidInvalidate:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_statusBarAssertionDidUpdate;
-(void)_stopObservingApplicationInstalls;
-(_UIStatusBarData *)overlayStatusBarData;
@end

