/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBMultiplexedSpotlightDelegate.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>
#import <libobjc.A.dylib/SBScrollToTopSceneProxyViewDelegate.h>

@protocol SPUIRemoteSearchViewDelegate;
@class UIView, UIGestureRecognizer, SBDeviceApplicationSceneStatusBarStateProvider, SBAppStatusBarSettingsAssertion, SBScrollToTopSceneProxyView, _UILegibilitySettings, NSString;

@interface SBSpotlightMultiplexingViewController : UIViewController <SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBScrollToTopSceneProxyViewDelegate> {

	BOOL _reachabilityEnabled;
	UIView* _reachabilityContainerView;
	UIGestureRecognizer* _dismissReachabilityGesture;
	SBDeviceApplicationSceneStatusBarStateProvider* _statusBarStateProvider;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	SBScrollToTopSceneProxyView* _scrollToTopView;
	BOOL _activeDelegate;
	_UILegibilitySettings* _legibilitySettings;
	unsigned long long _searchViewPresentationSourceForNextTransition;
	id<SPUIRemoteSearchViewDelegate> _spotlightDelegate;

}

@property (assign,getter=isActiveDelegate,nonatomic) BOOL activeDelegate;                                   //@synthesize activeDelegate=_activeDelegate - In the implementation block
@property (nonatomic,copy) _UILegibilitySettings * legibilitySettings;                                      //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) unsigned long long searchViewPresentationSourceForNextTransition;              //@synthesize searchViewPresentationSourceForNextTransition=_searchViewPresentationSourceForNextTransition - In the implementation block
@property (nonatomic,readonly) unsigned long long level; 
@property (assign,nonatomic,__weak) id<SPUIRemoteSearchViewDelegate> spotlightDelegate;                     //@synthesize spotlightDelegate=_spotlightDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRemoteSearchViewController;
-(void)dealloc;
-(unsigned long long)level;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)dismissSearchView;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(BOOL)arg2 withAnimation:(long long)arg3 ;
-(void)setSearchViewPresentationSourceForNextTransition:(unsigned long long)arg1 ;
-(void)setSpotlightDelegate:(id<SPUIRemoteSearchViewDelegate>)arg1 ;
-(void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2 ;
-(void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2 ;
-(unsigned long long)remoteSearchViewPresentationSource;
-(void)didBecomeActiveDelegate;
-(void)didResignActiveDelegate;
-(BOOL)isActiveDelegate;
-(void)_acquireStatusBarAssertionIfNeeded;
-(void)_registerStatusBarScrollToTopView;
-(void)_invalidateStatusBarAssertionIfNeeded;
-(void)_unregisterStatusBarScrollToTopView;
-(id<SPUIRemoteSearchViewDelegate>)spotlightDelegate;
-(void)setActiveDelegate:(BOOL)arg1 ;
-(void)_configureStatusBarStateProvider;
-(void)_configureStatusBarScrollToTopView;
-(id)_spotlightSceneIdentifier;
-(id)_currentStatusBarSettings;
-(void)_registerStatusBarScrollToTopViewWithWindow:(id)arg1 ;
-(void)_unregisterStatusBarScrollToTopViewWithWindow:(id)arg1 ;
-(double)_effectiveStatusBarAlpha;
-(unsigned long long)searchViewPresentationSourceForNextTransition;
@end

