/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSecureMainScreenActiveInterfaceOrientationWindow.h>

@class SBAssistantRootViewController;

@interface SBAssistantActiveInterfaceOrientationWindow : SBSecureMainScreenActiveInterfaceOrientationWindow {

	BOOL _touchesPassThroughToSpringBoard;

}

@property (assign,nonatomic) BOOL touchesPassThroughToSpringBoard;                                       //@synthesize touchesPassThroughToSpringBoard=_touchesPassThroughToSpringBoard - In the implementation block
@property (nonatomic,readonly) SBAssistantRootViewController * assistantRootViewController; 
+(BOOL)sb_autorotates;
+(BOOL)_isSecure;
+(id)defaultLayoutStrategy;
-(BOOL)_usesWindowServerHitTesting;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isOpaque;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithDebugName:(id)arg1 ;
-(void)setTouchesPassThroughToSpringBoard:(BOOL)arg1 ;
-(SBAssistantRootViewController *)assistantRootViewController;
-(BOOL)touchesPassThroughToSpringBoard;
@end

