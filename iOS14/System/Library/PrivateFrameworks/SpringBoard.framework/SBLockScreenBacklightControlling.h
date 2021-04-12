/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBLockScreenBacklightControlling <NSObject>
@property (assign,nonatomic) double backlightLevel; 
@required
-(void)setInScreenOffMode:(BOOL)arg1;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1;
-(BOOL)shouldDisableALS;
-(void)setBacklightLevel:(double)arg1;
-(BOOL)isInScreenOffMode;
-(double)backlightLevel;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3;

@end

