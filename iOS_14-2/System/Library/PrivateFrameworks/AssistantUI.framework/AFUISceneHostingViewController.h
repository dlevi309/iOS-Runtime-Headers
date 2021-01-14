/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AFUISceneControllerDelegate.h>

@protocol UIScenePresenter, BSInvalidatable;
@class AFUISceneConfiguration, AFUISceneController, UIView, FBSceneClientProviderInvalidationAction, FBScene, NSString;

@interface AFUISceneHostingViewController : UIViewController <AFUISceneControllerDelegate> {

	BOOL _inFluidDismissal;
	BOOL _pauseDeferrals;
	BOOL _safeAreaInsetsAreSuspended;
	long long _deferralMode;
	AFUISceneConfiguration* _configuration;
	AFUISceneController* _sceneController;
	UIView* _windowSceneHostingView;
	id<UIScenePresenter> _presentation;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	FBScene* _scene;
	id<BSInvalidatable> _predicateInvalidationHandler;
	long long _currentOrientation;
	UIEdgeInsets _effectiveSafeAreaInsets;
	UIEdgeInsets _suspendedSafeAreaInsets;

}

@property (nonatomic,retain) AFUISceneController * sceneController;                                     //@synthesize sceneController=_sceneController - In the implementation block
@property (nonatomic,retain) UIView * windowSceneHostingView;                                           //@synthesize windowSceneHostingView=_windowSceneHostingView - In the implementation block
@property (nonatomic,retain) id<UIScenePresenter> presentation;                                         //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,retain) FBSceneClientProviderInvalidationAction * invalidationAction;              //@synthesize invalidationAction=_invalidationAction - In the implementation block
@property (nonatomic,retain) FBScene * scene;                                                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> predicateInvalidationHandler;                          //@synthesize predicateInvalidationHandler=_predicateInvalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL pauseDeferrals;                                                       //@synthesize pauseDeferrals=_pauseDeferrals - In the implementation block
@property (assign,nonatomic) long long currentOrientation;                                              //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (assign,nonatomic) BOOL safeAreaInsetsAreSuspended;                                           //@synthesize safeAreaInsetsAreSuspended=_safeAreaInsetsAreSuspended - In the implementation block
@property (assign,nonatomic) UIEdgeInsets effectiveSafeAreaInsets;                                      //@synthesize effectiveSafeAreaInsets=_effectiveSafeAreaInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets suspendedSafeAreaInsets;                                      //@synthesize suspendedSafeAreaInsets=_suspendedSafeAreaInsets - In the implementation block
@property (nonatomic,readonly) long long deferralMode;                                                  //@synthesize deferralMode=_deferralMode - In the implementation block
@property (nonatomic,readonly) AFUISceneConfiguration * configuration;                                  //@synthesize configuration=_configuration - In the implementation block
@property (assign,getter=isInFluidDismissal,nonatomic) BOOL inFluidDismissal;                           //@synthesize inFluidDismissal=_inFluidDismissal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)currentOrientation;
-(FBScene *)scene;
-(void)viewWillLayoutSubviews;
-(void)setScene:(FBScene *)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)setPresentation:(id<UIScenePresenter>)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(AFUISceneConfiguration *)configuration;
-(void)viewSafeAreaInsetsDidChange;
-(id<UIScenePresenter>)presentation;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)arg1 ;
-(void)_transitionContentsWithView:(id)arg1 forContentState:(long long)arg2 ;
-(void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg1 ;
-(void)stopHostingScene;
-(void)invalidateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2 ;
-(void)_updateDeferralChainWithWindow:(id)arg1 ;
-(void)_updateSceneUIApplicationSceneSettingsWithBlock:(/*^block*/id)arg1 ;
-(UIEdgeInsets)effectiveSafeAreaInsets;
-(void)_updateSceneSafeAreaInsets;
-(BOOL)safeAreaInsetsAreSuspended;
-(UIEdgeInsets)suspendedSafeAreaInsets;
-(void)setSuspendedSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)setSafeAreaInsetsAreSuspended:(BOOL)arg1 ;
-(void)updateSceneWithConfiguration:(id)arg1 ;
-(BOOL)_shouldDeferHIDEventsForMode;
-(void)_handleSceneDidActivateWithIdentifier:(id)arg1 ;
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
-(void)setWindowSceneHostingView:(UIView *)arg1 ;
-(void)setInFluidDismissal:(BOOL)arg1 ;
-(void)deactivateSceneForExtendingTTSInBackground;
-(BOOL)_hasScene;
-(long long)deferralMode;
-(BOOL)isInFluidDismissal;
-(AFUISceneController *)sceneController;
-(void)setSceneController:(AFUISceneController *)arg1 ;
-(UIView *)windowSceneHostingView;
-(FBSceneClientProviderInvalidationAction *)invalidationAction;
-(void)setInvalidationAction:(FBSceneClientProviderInvalidationAction *)arg1 ;
-(id<BSInvalidatable>)predicateInvalidationHandler;
-(void)setPredicateInvalidationHandler:(id<BSInvalidatable>)arg1 ;
-(BOOL)pauseDeferrals;
-(void)setPauseDeferrals:(BOOL)arg1 ;
-(void)setCurrentOrientation:(long long)arg1 ;
-(void)setEffectiveSafeAreaInsets:(UIEdgeInsets)arg1 ;
@end

