/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AFUISceneControllerDelegate.h>

@protocol UIScenePresenter, FBSceneHost, BSInvalidatable;
@class AFUISceneConfiguration, AFUISceneController, UIView, FBSceneClientProviderInvalidationAction, FBScene, NSString;

@interface AFUISceneHostingViewController : UIViewController <AFUISceneControllerDelegate> {

	BOOL _pauseDeferrals;
	long long _deferralMode;
	AFUISceneConfiguration* _configuration;
	AFUISceneController* _sceneController;
	UIView* _windowSceneHostingView;
	id<UIScenePresenter> _presentation;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	id<FBSceneHost> _sceneHost;
	FBScene* _scene;
	id<BSInvalidatable> _predicateInvalidationHandler;
	long long _currentOrientation;

}

@property (nonatomic,retain) AFUISceneController * sceneController;                                     //@synthesize sceneController=_sceneController - In the implementation block
@property (nonatomic,retain) UIView * windowSceneHostingView;                                           //@synthesize windowSceneHostingView=_windowSceneHostingView - In the implementation block
@property (nonatomic,retain) id<UIScenePresenter> presentation;                                         //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,retain) FBSceneClientProviderInvalidationAction * invalidationAction;              //@synthesize invalidationAction=_invalidationAction - In the implementation block
@property (assign,nonatomic) id<FBSceneHost> sceneHost;                                                 //@synthesize sceneHost=_sceneHost - In the implementation block
@property (nonatomic,retain) FBScene * scene;                                                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> predicateInvalidationHandler;                          //@synthesize predicateInvalidationHandler=_predicateInvalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL pauseDeferrals;                                                       //@synthesize pauseDeferrals=_pauseDeferrals - In the implementation block
@property (assign,nonatomic) long long currentOrientation;                                              //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (nonatomic,readonly) long long deferralMode;                                                  //@synthesize deferralMode=_deferralMode - In the implementation block
@property (nonatomic,readonly) AFUISceneConfiguration * configuration;                                  //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(AFUISceneConfiguration *)configuration;
-(void)_commonInit;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(FBScene *)scene;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setPresentation:(id<UIScenePresenter>)arg1 ;
-(id<UIScenePresenter>)presentation;
-(void)setScene:(FBScene *)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(long long)currentOrientation;
-(void)setCurrentOrientation:(long long)arg1 ;
-(void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)arg1 ;
-(void)_transitionContentsWithView:(id)arg1 forContentState:(long long)arg2 ;
-(void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg1 ;
-(void)stopHostingScene;
-(void)deactivateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2 ;
-(void)_updateDeferralChainWithWindow:(id)arg1 ;
-(BOOL)_shouldDeferHIDEventsForMode;
-(void)_handleInvalidationForReason:(unsigned long long)arg1 explanation:(id)arg2 ;
-(id)sceneConfigurationForDelegate;
-(void)sceneController:(id)arg1 sceneContentStateDidChange:(id)arg2 ;
-(void)sceneController:(id)arg1 sceneWasInvalidated:(id)arg2 forReason:(unsigned long long)arg3 ;
-(void)sceneController:(id)arg1 sceneDidUpdateClientSettings:(id)arg2 ;
-(void)updateSettingsForInterfaceOrientationChange:(long long)arg1 willAnimationWithDuration:(double)arg2 ;
-(void)startHostingSceneForConfiguration:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)isHostingScene;
-(BOOL)isDeferringHIDEvents;
-(void)startDeferringHIDEventsIfNeeded;
-(void)invalidateAndPauseDeferringHIDEvents;
-(void)updateSceneWithConfiguration:(id)arg1 ;
-(void)setWindowSceneHostingView:(UIView *)arg1 ;
-(BOOL)_hasScene;
-(long long)deferralMode;
-(AFUISceneController *)sceneController;
-(void)setSceneController:(AFUISceneController *)arg1 ;
-(UIView *)windowSceneHostingView;
-(FBSceneClientProviderInvalidationAction *)invalidationAction;
-(void)setInvalidationAction:(FBSceneClientProviderInvalidationAction *)arg1 ;
-(id<FBSceneHost>)sceneHost;
-(void)setSceneHost:(id<FBSceneHost>)arg1 ;
-(id<BSInvalidatable>)predicateInvalidationHandler;
-(void)setPredicateInvalidationHandler:(id<BSInvalidatable>)arg1 ;
-(BOOL)pauseDeferrals;
-(void)setPauseDeferrals:(BOOL)arg1 ;
@end

