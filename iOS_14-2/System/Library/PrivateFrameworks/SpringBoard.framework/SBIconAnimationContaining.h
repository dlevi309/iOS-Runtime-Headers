/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIView, UIWindow;


@protocol SBIconAnimationContaining <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIWindow * animationWindow; 
@property (nonatomic,readonly) UIView * fallbackIconContainerView; 
@required
-(UIWindow *)animationWindow;
-(UIView *)fallbackIconContainerView;
-(UIView *)containerView;

@end

