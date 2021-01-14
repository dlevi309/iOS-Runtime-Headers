/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=_preferredStatusBarStyleAnimationParameters,nonatomic,readonly) UIStatusBarStyleAnimationParameters * preferredStatusBarStyleAnimationParameters; 
@property (getter=_preferredStatusBarHideAnimationParameters,nonatomic,readonly) UIStatusBarHideAnimationParameters * preferredStatusBarHideAnimationParameters; 
@property (nonatomic,readonly) long long preferredStatusBarUpdateAnimation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowsDeferredTransitions;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_parentTraitEnvironment;
-(int)_preferredStatusBarVisibility;
-(BOOL)_isRootPresentation;
-(id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2 ;
-(id)_fullscreenPresentationSuperview;
-(long long)preferredStatusBarStyle;
-(long long)preferredStatusBarUpdateAnimation;
-(id)_preferredStatusBarStyleAnimationParameters;
-(UIWindow *)presentingWindow;
-(id)_preferredStatusBarHideAnimationParameters;
-(BOOL)_mayChildGrabPresentedViewControllerView;
@end

