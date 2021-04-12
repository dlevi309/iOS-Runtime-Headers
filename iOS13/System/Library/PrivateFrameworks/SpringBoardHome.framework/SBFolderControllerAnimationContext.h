/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class UIScreen, UIWindow, UIView;

@interface SBFolderControllerAnimationContext : NSObject {

	UIScreen* _screen;
	UIWindow* _animationWindow;
	UIView* _fallbackIconContainer;

}

@property (nonatomic,readonly) UIScreen * screen;                           //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) UIWindow * animationWindow;                  //@synthesize animationWindow=_animationWindow - In the implementation block
@property (nonatomic,readonly) UIView * fallbackIconContainer;              //@synthesize fallbackIconContainer=_fallbackIconContainer - In the implementation block
+(id)contextWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3 ;
-(UIScreen *)screen;
-(UIWindow *)animationWindow;
-(UIView *)fallbackIconContainer;
-(id)initWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3 ;
@end

