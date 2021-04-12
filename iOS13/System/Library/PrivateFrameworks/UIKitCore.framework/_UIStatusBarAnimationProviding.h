/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIStatusBarStyleAnimationParameters, UIStatusBarHideAnimationParameters;


@protocol _UIStatusBarAnimationProviding <NSObject>
@property (getter=_preferredStatusBarStyleAnimationParameters,nonatomic,readonly) UIStatusBarStyleAnimationParameters * preferredStatusBarStyleAnimationParameters; 
@property (getter=_preferredStatusBarHideAnimationParameters,nonatomic,readonly) UIStatusBarHideAnimationParameters * preferredStatusBarHideAnimationParameters; 
@property (nonatomic,readonly) long long preferredStatusBarUpdateAnimation; 
@required
-(id)_preferredStatusBarHideAnimationParameters;
-(long long)preferredStatusBarUpdateAnimation;
-(id)_preferredStatusBarStyleAnimationParameters;

@end

