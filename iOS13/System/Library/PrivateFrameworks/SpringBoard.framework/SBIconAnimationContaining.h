/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIView, UIWindow;


@protocol SBIconAnimationContaining <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIWindow * animationWindow; 
@property (nonatomic,readonly) UIView * fallbackIconContainerView; 
@required
-(UIView *)containerView;
-(UIWindow *)animationWindow;
-(UIView *)fallbackIconContainerView;

@end

