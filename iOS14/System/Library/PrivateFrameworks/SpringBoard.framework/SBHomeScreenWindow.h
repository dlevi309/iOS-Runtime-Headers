/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow

@property (nonatomic,readonly) SBHomeScreenViewController * homeScreenViewController; 
+(BOOL)sb_autorotates;
+(CGRect)constrainFrameToScreen:(CGRect)arg1 ;
-(BOOL)_canBecomeKeyWindow;
-(SBHomeScreenViewController *)homeScreenViewController;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5 ;
@end

