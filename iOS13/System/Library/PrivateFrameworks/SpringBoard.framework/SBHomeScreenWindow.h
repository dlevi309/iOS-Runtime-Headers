/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow

@property (nonatomic,readonly) SBHomeScreenViewController * homeScreenViewController; 
+(CGRect)constrainFrameToScreen:(CGRect)arg1 ;
+(BOOL)sb_autorotates;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_canBecomeKeyWindow;
-(SBHomeScreenViewController *)homeScreenViewController;
-(id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5 ;
@end

