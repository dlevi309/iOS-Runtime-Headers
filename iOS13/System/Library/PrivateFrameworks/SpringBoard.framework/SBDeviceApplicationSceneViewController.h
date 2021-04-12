/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationSceneViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneOverlayViewProviderDelegate.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBSceneViewDelegate.h>
#import <libobjc.A.dylib/SBSceneViewStatusBarAssertionObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneViewControlling.h>

@protocol BSInvalidatable;
@class SBDeviceApplicationSceneHandle, SBHomeGrabberView, UIApplicationSceneDeactivationAssertion, NSMutableArray, SBSceneViewStatusBarAssertion, UIStatusBar, SBFHomeGrabberSettings, NSHashTable, NSString, MTLumaDodgePillSettings, SBDeviceApplicationSceneView, SBSceneHandle, UIView;

@interface SBDeviceApplicationSceneViewController : SBApplicationSceneViewController <SBDeviceApplicationSceneOverlayViewProviderDelegate, SBDeviceApplicationSceneHandleObserver, SBSceneViewDelegate, SBSceneViewStatusBarAssertionObserver, SBDeviceApplicationSceneViewControlling> {

	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	NSMutableArray* _overlayViewProviders;
	NSMutableArray* _activeOverlayViewProviders;
	SBSceneViewStatusBarAssertion* _activeOverlayStatusBarAssertion;
	SBSceneViewStatusBarAssertion* _placeholderStatusBarAssertion;
	UIStatusBar* _fakeStatusBar;
	id<BSInvalidatable> _liveContentDisableAssertion;
	SBFHomeGrabberSettings* _homeGrabberSettings;
	BOOL _rendersWhileLocked;
	BOOL _shouldRasterizeSceneHostView;
	NSHashTable* _statusBarAssertions;
	NSString* _sceneHostViewMinificationFilter;
	long long _homeGrabberDisplayMode;
	MTLumaDodgePillSettings* _homeGrabberPillSettings;

}

@property (getter=_sceneView,nonatomic,readonly) SBDeviceApplicationSceneView * sceneView; 
@property (assign,nonatomic) long long homeGrabberDisplayMode;                                                                             //@synthesize homeGrabberDisplayMode=_homeGrabberDisplayMode - In the implementation block
@property (nonatomic,retain) MTLumaDodgePillSettings * homeGrabberPillSettings;                                                            //@synthesize homeGrabberPillSettings=_homeGrabberPillSettings - In the implementation block
@property (setter=_setStatusBarAssertions:,getter=_statusBarAssertions,nonatomic,retain) NSHashTable * statusBarAssertions;                //@synthesize statusBarAssertions=_statusBarAssertions - In the implementation block
@property (assign,nonatomic) BOOL rendersWhileLocked;                                                                                      //@synthesize rendersWhileLocked=_rendersWhileLocked - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeSceneHostView;                                                                            //@synthesize shouldRasterizeSceneHostView=_shouldRasterizeSceneHostView - In the implementation block
@property (nonatomic,copy) NSString * sceneHostViewMinificationFilter;                                                                     //@synthesize sceneHostViewMinificationFilter=_sceneHostViewMinificationFilter - In the implementation block
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
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
-(void)dealloc;
-(void)invalidate;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(BOOL)definesPresentationContext;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)sceneView:(id)arg1 changedPreferredStatusBarStyleTo:(long long)arg2 ;
-(id)animationFactoryForImplicitTransitionFromMode:(long long)arg1 toMode:(long long)arg2 defaultFactory:(id)arg3 ;
-(void)_removeFakeStatusBar;
-(void)_layoutFakeStatusBar;
-(void)sceneHandle:(id)arg1 didChangeStatusBarParts:(long long)arg2 ;
-(void)sceneHandle:(id)arg1 didChangeStatusBarAvoidanceFrame:(CGRect)arg2 ;
-(SBHomeGrabberView *)homeGrabberView;
-(void)statusBarAssertionDidUpdate:(id)arg1 ;
-(void)statusBarAssertionDidInvalidate:(id)arg1 ;
-(id)initWithSceneHandle:(id)arg1 ;
-(id)_statusBarAssertions;
-(void)_willEnableSecureDisplay;
-(void)_didDisableSecureDisplay;
-(void)_relinquishResignActiveAssertion;
-(void)_destroySceneOverlayViewProviders;
-(void)_configureForCurrentSecureDisplayState;
-(BOOL)shouldRasterizeSceneHostView;
-(NSString *)sceneHostViewMinificationFilter;
-(void)_statusBarAssertionsDidUpdate;
-(BOOL)_shouldSuppressHomeGrabber;
-(MTLumaDodgePillSettings *)homeGrabberPillSettings;
-(void)_createSceneOverlayViewProvidersIfNecessary;
-(id)statusBarAssertionWithStatusBarSettings:(id)arg1 atLevel:(unsigned long long)arg2 ;
-(BOOL)_configureFakeStatusBarWithCurrentStyleRequestCreatingIfNecessary;
-(BOOL)_isApplicationStatusBarHidden;
-(void)_recalculateResignActiveAssertionForActiveOverlays;
-(BOOL)rendersWhileLocked;
-(void)deactivateOverlayForViewProvider:(id)arg1 ;
-(void)_addFakeStatusBarWithStyleRequest:(id)arg1 enabledParts:(long long)arg2 ;
-(void)_configureForSecureDisplay:(BOOL)arg1 ;
-(void)activateOverlayForViewProvider:(id)arg1 ;
-(BOOL)overlayViewProviderRendersWhileLocked:(id)arg1 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(void)setHomeGrabberDisplayMode:(long long)arg1 ;
-(void)setRendersWhileLocked:(BOOL)arg1 ;
-(void)setShouldRasterizeSceneHostView:(BOOL)arg1 ;
-(void)setSceneHostViewMinificationFilter:(NSString *)arg1 ;
-(void)_setStatusBarAssertions:(id)arg1 ;
-(long long)homeGrabberDisplayMode;
-(void)setHomeGrabberPillSettings:(MTLumaDodgePillSettings *)arg1 ;
@end

