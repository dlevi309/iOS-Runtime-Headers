/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIScrollsToTopInitiatorView.h>
#import <UIKit/UIStatusBarServerClient.h>
#import <UIKit/UIStatusBarStateObserver.h>

@protocol UIStatusBarStyleDelegate, UIStatusBarCarPlayDockDataProviding, UIStatusBarStateProvider, UIViewControllerTransitionCoordinator, UIStatusBarManager;
@class UIStatusBarWindow, UIStatusBarServer, UIColor, UIStatusBarStyleRequest, NSArray, UIView, NSString;

@interface UIStatusBar_Base : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver> {

	BOOL _persistentAnimationsEnabled;
	BOOL _foreground;
	BOOL _hidden;
	BOOL _registered;
	BOOL _serverUpdatesDisabled;
	BOOL _suppressesHiddenSideEffects;
	BOOL _homeItemsDisabled;
	BOOL _disablesRasterization;
	int _styleOverrides;
	int _activeStyleOverride;
	id<UIStatusBarStyleDelegate> _styleDelegate;
	id<UIStatusBarCarPlayDockDataProviding> _dockDataProvider;
	UIStatusBarWindow* _statusBarWindow;
	long long _orientation;
	UIStatusBarServer* _statusBarServer;
	id<UIStatusBarStateProvider> _inProcessStateProvider;
	SCD_Struct_UI124* _localDataOverrides;
	long long _requestedStyle;
	id<UIViewControllerTransitionCoordinator> __transitionCoordinator;
	UIColor* _foregroundColor;
	long long _legibilityStyle;
	UIStatusBarStyleRequest* _styleRequest;
	long long _mode;
	NSArray* _enabledPartIdentifiers;
	id<UIStatusBarManager> _manager;
	CGRect _avoidanceFrame;

}

@property (nonatomic,retain) UIStatusBarServer * statusBarServer;                                                   //@synthesize statusBarServer=_statusBarServer - In the implementation block
@property (assign,nonatomic) BOOL foreground;                                                                       //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                                           //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL registered;                                                                       //@synthesize registered=_registered - In the implementation block
@property (nonatomic,retain) id<UIStatusBarStateProvider> inProcessStateProvider;                                   //@synthesize inProcessStateProvider=_inProcessStateProvider - In the implementation block
@property (nonatomic,readonly) SCD_Struct_UI124* localDataOverrides;                                                //@synthesize localDataOverrides=_localDataOverrides - In the implementation block
@property (assign,nonatomic) BOOL serverUpdatesDisabled;                                                            //@synthesize serverUpdatesDisabled=_serverUpdatesDisabled - In the implementation block
@property (assign,setter=_setRequestedStyle:,getter=_requestStyle,nonatomic) long long requestedStyle;              //@synthesize requestedStyle=_requestedStyle - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerTransitionCoordinator> _transitionCoordinator;               //@synthesize _transitionCoordinator=__transitionCoordinator - In the implementation block
@property (assign,nonatomic) BOOL suppressesHiddenSideEffects;                                                      //@synthesize suppressesHiddenSideEffects=_suppressesHiddenSideEffects - In the implementation block
@property (assign,nonatomic) BOOL homeItemsDisabled;                                                                //@synthesize homeItemsDisabled=_homeItemsDisabled - In the implementation block
@property (assign,setter=_setDisablesRasterization:,nonatomic) BOOL disablesRasterization;                          //@synthesize disablesRasterization=_disablesRasterization - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                                             //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) long long legibilityStyle;                                                             //@synthesize legibilityStyle=_legibilityStyle - In the implementation block
@property (nonatomic,copy) UIStatusBarStyleRequest * styleRequest;                                                  //@synthesize styleRequest=_styleRequest - In the implementation block
@property (assign,nonatomic) int activeStyleOverride;                                                               //@synthesize activeStyleOverride=_activeStyleOverride - In the implementation block
@property (assign,nonatomic) long long mode;                                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSArray * enabledPartIdentifiers;                                                        //@synthesize enabledPartIdentifiers=_enabledPartIdentifiers - In the implementation block
@property (assign,nonatomic) CGRect avoidanceFrame;                                                                 //@synthesize avoidanceFrame=_avoidanceFrame - In the implementation block
@property (assign,nonatomic,__weak) id<UIStatusBarManager> manager;                                                 //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic,__weak) UIView * sensorActivityIndicator; 
@property (assign,nonatomic,__weak) id<UIStatusBarStyleDelegate> styleDelegate;                                     //@synthesize styleDelegate=_styleDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIStatusBarCarPlayDockDataProviding> dockDataProvider;                       //@synthesize dockDataProvider=_dockDataProvider - In the implementation block
@property (nonatomic,__weak,readonly) UIStatusBarWindow * statusBarWindow;                                          //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
@property (assign,nonatomic) BOOL persistentAnimationsEnabled;                                                      //@synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled - In the implementation block
@property (nonatomic,readonly) int styleOverrides;                                                                  //@synthesize styleOverrides=_styleOverrides - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                 //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)_frameInSceneReferenceSpaceForStyle:(long long)arg1 orientation:(long long)arg2 inSceneWithReferenceSize:(CGSize)arg3 ;
+(long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 activeStyleOverride:(int*)arg3 ;
+(double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3 inWindow:(id)arg4 isAzulBLinked:(BOOL)arg5 ;
+(long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 ;
+(double)_viewControllerAdjustmentForOrientation:(long long)arg1 inWindow:(id)arg2 ;
+(double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3 inWindow:(id)arg4 ;
+(double)heightForStyle:(long long)arg1 orientation:(long long)arg2 inWindow:(id)arg3 isAzulBLinked:(BOOL)arg4 ;
+(void)_setImplementationClass:(Class)arg1 ;
+(double)heightForStyle:(long long)arg1 orientation:(long long)arg2 ;
+(double)heightForStyle:(long long)arg1 orientation:(long long)arg2 inWindow:(id)arg3 ;
+(Class)_implementationClass;
-(void)setRegistered:(BOOL)arg1 ;
-(void)_performBlockWhileIgnoringForegroundViewChanges:(/*^block*/id)arg1 ;
-(double)defaultHeight;
-(long long)mode;
-(void)setForeground:(BOOL)arg1 ;
-(BOOL)registered;
-(void)setLegibilityStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)hidden;
-(BOOL)isHidden;
-(void)setOffset:(UIOffset)arg1 forPartWithIdentifier:(id)arg2 ;
-(BOOL)isDoubleHeight;
-(void)setTintColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)_setOverrideHeight:(double)arg1 ;
-(void)_statusBarDidAnimateRotation;
-(BOOL)isTranslucent;
-(UIColor *)foregroundColor;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2 ;
-(CGRect)frameForPartWithIdentifier:(id)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3 ;
-(void)requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(void)forceUpdate:(BOOL)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2 ;
-(void)setForegroundColor:(id)arg1 animationParameters:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(CGRect)avoidanceFrame;
-(void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2 ;
-(void)_setHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(void)setManager:(id<UIStatusBarManager>)arg1 ;
-(BOOL)_shouldSeekHigherPriorityTouchTarget;
-(UIOffset)offsetForPartWithIdentifier:(id)arg1 ;
-(void)setTintColor:(id)arg1 withDuration:(double)arg2 ;
-(void)forceUpdateToData:(const SCD_Struct_UI121*)arg1 animated:(BOOL)arg2 ;
-(void)didMoveToSuperview;
-(BOOL)_rectIntersectsTimeItem:(CGRect)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)requestStyle:(long long)arg1 ;
-(void)_noteStyleOverridesChangedLocally;
-(void)forceUpdateDoubleHeightStatus;
-(long long)currentStyle;
-(void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(NSArray *)enabledPartIdentifiers;
-(UIView *)sensorActivityIndicator;
-(BOOL)disablesRasterization;
-(id)initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 ;
-(int)styleOverrides;
-(CGRect)frameForOrientation:(long long)arg1 ;
-(void)setEnabledCenterItems:(id)arg1 duration:(double)arg2 ;
-(void)setAvoidanceFrame:(CGRect)arg1 ;
-(long long)_requestStyle;
-(void)_evaluateServerRegistration;
-(id<UIStatusBarStyleDelegate>)styleDelegate;
-(id<UIStatusBarStateProvider>)inProcessStateProvider;
-(void)requestStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)_getStyle:(long long*)arg1 andActiveOverride:(int*)arg2 forRequestedStyle:(long long)arg3 ;
-(void)setActiveStyleOverride:(int)arg1 ;
-(BOOL)suppressesHiddenSideEffects;
-(void)_performAnimations:(/*^block*/id)arg1 withParameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_clearOverrideHeight;
-(int)activeStyleOverride;
-(void)_setRequestedStyle:(long long)arg1 ;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_UI121*)arg2 withActions:(int)arg3 ;
-(BOOL)persistentAnimationsEnabled;
-(long long)styleForRequestedStyle:(long long)arg1 ;
-(SCD_Struct_UI124*)localDataOverrides;
-(BOOL)homeItemsDisabled;
-(void)setShowsOnlyCenterItems:(BOOL)arg1 ;
-(void)setEnabledPartIdentifiers:(NSArray *)arg1 ;
-(id)actionForPartWithIdentifier:(id)arg1 ;
-(void)_statusBarWillAnimateRotation;
-(void)setSuppressesHiddenSideEffects:(BOOL)arg1 ;
-(id<UIStatusBarManager>)manager;
-(void)setStyleDelegate:(id<UIStatusBarStyleDelegate>)arg1 ;
-(long long)orientation;
-(BOOL)_isTransparent;
-(CGRect)currentFrame;
-(id)activeTintColor;
-(UIStatusBarWindow *)statusBarWindow;
-(void)setStyleRequest:(UIStatusBarStyleRequest *)arg1 ;
-(void)_didEnterBackground:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)_styleOverridesDidChange:(id)arg1 ;
-(BOOL)_usesModernBar;
-(id)initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 inProcessStateProvider:(id)arg3 ;
-(UIStatusBarServer *)statusBarServer;
-(BOOL)serverUpdatesDisabled;
-(double)heightForOrientation:(long long)arg1 isAzulBLinked:(BOOL)arg2 ;
-(void)requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(void)requestStyle:(long long)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 ;
-(CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)arg1 ;
-(double)_hiddenAlphaForHideAnimationParameters:(id)arg1 ;
-(void)setServerUpdatesDisabled:(BOOL)arg1 ;
-(BOOL)_canShowInOrientation:(long long)arg1 ;
-(BOOL)showsContentsOnScreen;
-(void)setLocalDataOverrides:(SCD_Struct_UI124*)arg1 ;
-(void)setDockDataProvider:(id<UIStatusBarCarPlayDockDataProviding>)arg1 ;
-(void)setStatusBarServer:(UIStatusBarServer *)arg1 ;
-(void)setInProcessStateProvider:(id<UIStatusBarStateProvider>)arg1 ;
-(void)set_transitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
-(void)setHomeItemsDisabled:(BOOL)arg1 ;
-(void)forceUpdateData:(BOOL)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 wantsServer:(BOOL)arg3 inProcessStateProvider:(id)arg4 ;
-(BOOL)foreground;
-(double)defaultDoubleHeight;
-(double)heightForOrientation:(long long)arg1 ;
-(void)forgetEitherSideHistory;
-(double)currentHeight;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3 ;
-(void)animateUnlock;
-(id<UIViewControllerTransitionCoordinator>)_transitionCoordinator;
-(void)setStyleRequest:(id)arg1 animationParameters:(id)arg2 ;
-(void)forceUpdateStyleOverrides:(BOOL)arg1 ;
-(void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(UIStatusBarStyleRequest *)styleRequest;
-(long long)legibilityStyle;
-(void)setSensorActivityIndicator:(UIView *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(double)alphaForPartWithIdentifier:(id)arg1 ;
-(void)_setDisablesRasterization:(BOOL)arg1 ;
-(void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2 ;
-(id<UIStatusBarCarPlayDockDataProviding>)dockDataProvider;
-(void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const SCD_Struct_UI121*)arg2 withActions:(int)arg3 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)jiggleLockIcon;
@end

