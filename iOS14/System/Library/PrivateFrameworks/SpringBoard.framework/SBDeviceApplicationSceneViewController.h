/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class SBDeviceApplicationSceneHandle, SBHomeGrabberView, UIApplicationSceneDeactivationAssertion, NSMutableArray, SBSceneViewStatusBarAssertion, UIStatusBar, SBFHomeGrabberSettings, NSHashTable, NSString, MTLumaDodgePillSettings, SBDeviceApplicationSceneView, UIView;

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
	long long _homeGrabberDisplayMode;
	NSHashTable* _statusBarAssertions;
	NSString* _sceneHostViewMinificationFilter;
	MTLumaDodgePillSettings* _homeGrabberPillSettings;

}

@property (getter=_sceneView,nonatomic,readonly) SBDeviceApplicationSceneView * sceneView; 
@property (nonatomic,retain) MTLumaDodgePillSettings * homeGrabberPillSettings;                                                            //@synthesize homeGrabberPillSettings=_homeGrabberPillSettings - In the implementation block
@property (setter=_setStatusBarAssertions:,getter=_statusBarAssertions,nonatomic,retain) NSHashTable * statusBarAssertions;                //@synthesize statusBarAssertions=_statusBarAssertions - In the implementation block
@property (assign,nonatomic) BOOL rendersWhileLocked;                                                                                      //@synthesize rendersWhileLocked=_rendersWhileLocked - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeSceneHostView;                                                                            //@synthesize shouldRasterizeSceneHostView=_shouldRasterizeSceneHostView - In the implementation block
@property (nonatomic,copy) NSString * sceneHostViewMinificationFilter;                                                                     //@synthesize sceneHostViewMinificationFilter=_sceneHostViewMinificationFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView*<SBApplicationSceneBackgroundView> backgroundView; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
@property (assign,nonatomic) long long homeGrabberDisplayMode;                                                                             //@synthesize homeGrabberDisplayMode=_homeGrabberDisplayMode - In the implementation block
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
-(void)viewWillLayoutSubviews;
-(void)sceneView:(id)arg1 changedPreferredStatusBarStyleTo:(long long)arg2 ;
-(void)_createSceneOverlayViewProvidersIfNecessary;
-(void)_removeFakeStatusBar;
-(BOOL)_activeOverlaysWantResignActiveAssertion;
-(BOOL)_configureFakeStatusBarWithCurrentStyleRequestCreatingIfNecessary;
-(void)setBackgroundView:(UIView*<SBApplicationSceneBackgroundView>)arg1 ;
-(void)sceneHandle:(id)arg1 didChangeStatusBarAvoidanceFrame:(CGRect)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)_didDisableSecureDisplay;
-(UIView*<SBApplicationSceneBackgroundView>)backgroundView;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(MTLumaDodgePillSettings *)homeGrabberPillSettings;
-(void)setRendersWhileLocked:(BOOL)arg1 ;
-(BOOL)_shouldSuppressHomeGrabber;
-(void)sceneHandle:(id)arg1 didChangeStatusBarParts:(long long)arg2 ;
-(void)activateOverlayForViewProvider:(id)arg1 ;
-(void)_deactivateOverlayForViewProvider:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(void)setShouldRasterizeSceneHostView:(BOOL)arg1 ;
-(void)_recalculateResignActiveAssertionForActiveOverlays;
-(id)statusBarAssertionWithStatusBarSettings:(id)arg1 atLevel:(unsigned long long)arg2 ;
-(void)_configureForSecureDisplay:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldRasterizeSceneHostView;
-(void)viewDidLoad;
-(void)_willEnableSecureDisplay;
-(id)initWithSceneHandle:(id)arg1 ;
-(void)setSceneHostViewMinificationFilter:(NSString *)arg1 ;
-(NSString *)sceneHostViewMinificationFilter;
-(void)setHomeGrabberPillSettings:(MTLumaDodgePillSettings *)arg1 ;
-(id)animationFactoryForImplicitTransitionFromMode:(long long)arg1 toMode:(long long)arg2 defaultFactory:(id)arg3 ;
-(void)setHomeGrabberDisplayMode:(long long)arg1 ;
-(void)invalidate;
-(id)_statusBarAssertions;
-(void)_destroySceneOverlayViewProviders;
-(BOOL)definesPresentationContext;
-(void)statusBarAssertionDidUpdate:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)deactivateOverlayForViewProvider:(id)arg1 ;
-(BOOL)_isApplicationStatusBarHidden;
-(SBHomeGrabberView *)homeGrabberView;
-(void)_statusBarAssertionsDidUpdate;
-(long long)homeGrabberDisplayMode;
-(void)_addFakeStatusBarWithStyleRequest:(id)arg1 enabledParts:(long long)arg2 ;
-(BOOL)overlayViewProviderRendersWhileLocked:(id)arg1 ;
-(void)statusBarAssertionDidInvalidate:(id)arg1 ;
-(void)_layoutFakeStatusBar;
-(void)_configureForCurrentSecureDisplayState;
-(void)_relinquishResignActiveAssertion;
-(void)dealloc;
-(void)_setStatusBarAssertions:(id)arg1 ;
-(BOOL)rendersWhileLocked;
@end

