/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISceneComponentProviding.h>

@class UIWindowScene, NSMutableSet, NSDictionary, UIScene, NSString;

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
@property (nonatomic,readonly) double defaultStatusBarHeight; 
@property (nonatomic,copy) id debugMenuHandler;                                                              //@synthesize debugMenuHandler=_debugMenuHandler - In the implementation block
@property (nonatomic,readonly) long long statusBarStyle;                                                     //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (getter=isStatusBarHidden,nonatomic,readonly) BOOL statusBarHidden;                                //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,readonly) CGRect statusBarFrame; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_implicitStatusBarAnimationParametersWithClass:(Class)arg1 ;
-(UIScene *)_scene;
-(double)statusBarHeight;
-(void)updateLocalStatusBars;
-(UIWindowScene *)windowScene;
-(void)_setScene:(id)arg1 ;
-(/*^block*/id)updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)setLocalStatusBars:(NSMutableSet *)arg1 ;
-(id)_settingsDiffActionsForScene:(id)arg1 ;
-(void)setupForSingleLocalStatusBar;
-(CGPoint)_adjustedLocationForXPosition:(double)arg1 ;
-(NSDictionary *)statusBarPartStyles;
-(CGRect)statusBarFrameForStatusBarHeight:(double)arg1 inOrientation:(long long)arg2 ;
-(id)initWithScene:(id)arg1 ;
-(void)_visibilityChangedWithOriginalOrientation:(long long)arg1 targetOrientation:(long long)arg2 animationParameters:(id)arg3 ;
-(NSMutableSet *)localStatusBars;
-(void)_updateLocalStatusBar:(id)arg1 ;
-(double)defaultStatusBarHeightInOrientation:(long long)arg1 ;
-(BOOL)_updateVisibilityForWindow:(id)arg1 targetOrientation:(long long)arg2 animationParameters:(id*)arg3 ;
-(void)setDebugMenuHandler:(id)arg1 ;
-(double)statusBarAlpha;
-(BOOL)_updateAlpha;
-(/*^block*/id)_updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2 animationParameters:(id)arg3 ;
-(BOOL)statusBarHidden;
-(BOOL)isInStatusBarFadeAnimation;
-(id)createLocalStatusBar;
-(void)handleTapAction:(id)arg1 ;
-(void)deactivateLocalStatusBar:(id)arg1 ;
-(BOOL)_updateStyleForWindow:(id)arg1 animationParameters:(id*)arg2 ;
-(void)updateStatusBarAppearance;
-(void)setWindowScene:(UIWindowScene *)arg1 ;
-(double)defaultStatusBarHeight;
-(BOOL)isStatusBarHidden;
-(long long)statusBarStyle;
-(CGRect)statusBarFrame;
-(void)activateLocalStatusBar:(id)arg1 ;
-(void)updateStatusBarAppearanceWithAnimationParameters:(id)arg1 ;
-(void)_handleScrollToTopAtXPosition:(double)arg1 ;
-(CGRect)statusBarFrameForStatusBarHeight:(double)arg1 ;
-(id)debugMenuHandler;
@end

