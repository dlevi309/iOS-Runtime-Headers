/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISceneComponentProviding.h>

@class UIWindowScene, NSMutableSet, NSDictionary, NSString, UIScene;

@interface UIStatusBarManager : NSObject <_UISceneComponentProviding> {

	BOOL _statusBarHidden;
	BOOL _inStatusBarFadeAnimation;
	long long _statusBarStyle;
	UIWindowScene* _windowScene;
	NSMutableSet* _localStatusBars;
	NSDictionary* _statusBarPartStyles;
	double _statusBarAlpha;
	/*^block*/id _debugMenuHandler;

}

@property (nonatomic,retain) UIWindowScene * windowScene;                                                    //@synthesize windowScene=_windowScene - In the implementation block
@property (nonatomic,retain) NSMutableSet * localStatusBars;                                                 //@synthesize localStatusBars=_localStatusBars - In the implementation block
@property (nonatomic,readonly) NSDictionary * statusBarPartStyles;                                           //@synthesize statusBarPartStyles=_statusBarPartStyles - In the implementation block
@property (getter=isInStatusBarFadeAnimation,nonatomic,readonly) BOOL inStatusBarFadeAnimation;              //@synthesize inStatusBarFadeAnimation=_inStatusBarFadeAnimation - In the implementation block
@property (nonatomic,readonly) double statusBarAlpha;                                                        //@synthesize statusBarAlpha=_statusBarAlpha - In the implementation block
@property (nonatomic,readonly) double statusBarHeight; 
@property (nonatomic,copy) id debugMenuHandler;                                                              //@synthesize debugMenuHandler=_debugMenuHandler - In the implementation block
@property (nonatomic,readonly) long long statusBarStyle;                                                     //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (getter=isStatusBarHidden,nonatomic,readonly) BOOL statusBarHidden;                                //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,readonly) CGRect statusBarFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
+(id)_implicitStatusBarAnimationParametersWithClass:(Class)arg1 ;
-(void)setWindowScene:(UIWindowScene *)arg1 ;
-(id)_settingsDiffActionsForScene:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(UIWindowScene *)windowScene;
-(BOOL)isStatusBarHidden;
-(double)defaultStatusBarHeightInOrientation:(long long)arg1 ;
-(long long)statusBarStyle;
-(double)statusBarHeight;
-(void)updateStatusBarAppearance;
-(void)updateLocalStatusBars;
-(BOOL)statusBarHidden;
-(double)statusBarAlpha;
-(void)setupForSingleLocalStatusBar;
-(CGRect)statusBarFrameForStatusBarHeight:(double)arg1 ;
-(void)updateStatusBarAppearanceWithAnimationParameters:(id)arg1 ;
-(/*^block*/id)_updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2 animationParameters:(id)arg3 ;
-(BOOL)_updateVisibilityForWindow:(id)arg1 targetOrientation:(long long)arg2 animationParameters:(id*)arg3 ;
-(BOOL)_updateStyleForWindow:(id)arg1 animationParameters:(id*)arg2 ;
-(BOOL)_updateAlpha;
-(void)_visibilityChangedWithOriginalOrientation:(long long)arg1 targetOrientation:(long long)arg2 animationParameters:(id)arg3 ;
-(void)activateLocalStatusBar:(id)arg1 ;
-(void)_updateLocalStatusBar:(id)arg1 ;
-(CGRect)statusBarFrame;
-(void)_handleScrollToTopAtXPosition:(double)arg1 ;
-(CGPoint)_adjustedLocationForXPosition:(double)arg1 ;
-(/*^block*/id)updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)deactivateLocalStatusBar:(id)arg1 ;
-(id)createLocalStatusBar;
-(void)handleTapAction:(id)arg1 ;
-(NSMutableSet *)localStatusBars;
-(void)setLocalStatusBars:(NSMutableSet *)arg1 ;
-(NSDictionary *)statusBarPartStyles;
-(BOOL)isInStatusBarFadeAnimation;
-(id)debugMenuHandler;
-(void)setDebugMenuHandler:(id)arg1 ;
@end

