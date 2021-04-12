/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISheetPresentationController.h>
#import <UIKitCore/_UIStatusBarAnimationProviding.h>

@class UIStatusBarStyleAnimationParameters, UIStatusBarHideAnimationParameters, UIWindow, NSString;

@interface _UIRootPresentationController : _UISheetPresentationController <_UIStatusBarAnimationProviding> {

	UIWindow* _presentingWindow;

}

@property (nonatomic,__weak,readonly) UIWindow * presentingWindow;                                                                                                               //@synthesize presentingWindow=_presentingWindow - In the implementation block
@property (nonatomic,readonly) long long preferredStatusBarStyle; 
@property (nonatomic,readonly) int _preferredStatusBarVisibility; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_preferredStatusBarStyleAnimationParameters,nonatomic,readonly) UIStatusBarStyleAnimationParameters * preferredStatusBarStyleAnimationParameters; 
@property (getter=_preferredStatusBarHideAnimationParameters,nonatomic,readonly) UIStatusBarHideAnimationParameters * preferredStatusBarHideAnimationParameters; 
@property (nonatomic,readonly) long long preferredStatusBarUpdateAnimation; 
+(BOOL)_allowsDeferredTransitions;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_preferredStatusBarHideAnimationParameters;
-(long long)preferredStatusBarUpdateAnimation;
-(id)_preferredStatusBarStyleAnimationParameters;
-(int)_preferredStatusBarVisibility;
-(long long)preferredStatusBarStyle;
-(id)_fullscreenPresentationSuperview;
-(BOOL)_mayChildGrabPresentedViewControllerView;
-(id)_parentTraitEnvironment;
-(UIWindow *)presentingWindow;
-(id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2 ;
-(BOOL)_isRootPresentation;
@end

