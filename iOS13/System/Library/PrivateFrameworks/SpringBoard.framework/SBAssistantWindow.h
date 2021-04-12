/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWindow.h>

@class SBAssistantRootViewController;

@interface SBAssistantWindow : SBWindow

@property (nonatomic,readonly) SBAssistantRootViewController * assistantRootViewController; 
+(BOOL)_isSecure;
+(id)defaultLayoutStrategy;
+(BOOL)sb_autorotates;
-(void)dealloc;
-(BOOL)isOpaque;
-(BOOL)_canBecomeKeyWindow;
-(SBAssistantRootViewController *)assistantRootViewController;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
@end

