/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBLockScreenBacklightControlling <NSObject>
@property (assign,nonatomic) double backlightLevel; 
@required
-(void)setBacklightLevel:(double)arg1;
-(double)backlightLevel;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3;
-(BOOL)isInScreenOffMode;
-(void)setInScreenOffMode:(BOOL)arg1;
-(BOOL)shouldDisableALS;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1;

@end

