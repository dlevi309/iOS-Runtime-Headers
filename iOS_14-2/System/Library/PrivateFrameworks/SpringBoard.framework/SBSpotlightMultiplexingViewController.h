/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBMultiplexedSpotlightDelegate.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/SBScrollToTopSceneProxyViewDelegate.h>

@protocol SPUIRemoteSearchViewDelegate;
@class SBScrollToTopSceneProxyView, _UILegibilitySettings, SBMedusaHostedKeyboardWindowLevelAssertion, NSString;

@interface SBSpotlightMultiplexingViewController : UIViewController <SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, SBScrollToTopSceneProxyViewDelegate> {

	SBScrollToTopSceneProxyView* _scrollToTopView;
	BOOL _activeDelegate;
	_UILegibilitySettings* _legibilitySettings;
	id<SPUIRemoteSearchViewDelegate> _spotlightDelegate;
	SBMedusaHostedKeyboardWindowLevelAssertion* _medusaHostedKeyboardWindowLevelAssertion;

}

@property (assign,getter=isActiveDelegate,nonatomic) BOOL activeDelegate;                                                        //@synthesize activeDelegate=_activeDelegate - In the implementation block
@property (nonatomic,retain) SBMedusaHostedKeyboardWindowLevelAssertion * medusaHostedKeyboardWindowLevelAssertion;              //@synthesize medusaHostedKeyboardWindowLevelAssertion=_medusaHostedKeyboardWindowLevelAssertion - In the implementation block
@property (nonatomic,copy) _UILegibilitySettings * legibilitySettings;                                                           //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) unsigned long long level; 
@property (assign,nonatomic,__weak) id<SPUIRemoteSearchViewDelegate> spotlightDelegate;                                          //@synthesize spotlightDelegate=_spotlightDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRemoteSearchViewController;
+(id)sharedRemoteSearchViewControllerIfExists;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)remoteSearchViewPresentationSource;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(unsigned long long)level;
-(_UILegibilitySettings *)legibilitySettings;
-(void)dismissSearchView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(id)_sceneHandle;
-(void)setSpotlightDelegate:(id<SPUIRemoteSearchViewDelegate>)arg1 ;
-(void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2 ;
-(void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2 ;
-(void)didBecomeActiveDelegate;
-(void)didResignActiveDelegate;
-(BOOL)isActiveDelegate;
-(void)_registerStatusBarScrollToTopView;
-(void)_unregisterStatusBarScrollToTopView;
-(id<SPUIRemoteSearchViewDelegate>)spotlightDelegate;
-(void)setActiveDelegate:(BOOL)arg1 ;
-(void)_configureStatusBarScrollToTopView;
-(id)_spotlightSceneIdentifier;
-(void)_registerStatusBarScrollToTopViewWithWindow:(id)arg1 ;
-(void)_unregisterStatusBarScrollToTopViewWithWindow:(id)arg1 ;
-(SBMedusaHostedKeyboardWindowLevelAssertion *)medusaHostedKeyboardWindowLevelAssertion;
-(void)setMedusaHostedKeyboardWindowLevelAssertion:(SBMedusaHostedKeyboardWindowLevelAssertion *)arg1 ;
@end

