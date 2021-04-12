/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBar_Base.h>

@interface UIStatusBar_Placeholder : UIStatusBar_Base
+(double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)currentStyle;
-(double)defaultDoubleHeight;
-(id)_initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 wantsServer:(BOOL)arg3 inProcessStateProvider:(id)arg4 ;
-(void)setForegroundColor:(id)arg1 animationParameters:(id)arg2 ;
-(void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)setStyleRequest:(id)arg1 animationParameters:(id)arg2 ;
-(void)_setHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(BOOL)arg6 ;
@end

