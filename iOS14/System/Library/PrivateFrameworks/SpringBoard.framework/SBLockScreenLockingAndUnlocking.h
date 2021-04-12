/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBLockScreenLockingAndUnlocking <NSObject>
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@required
-(BOOL)shouldUnlockUIOnKeyDownEvent;
-(void)setAuthenticated:(BOOL)arg1;
-(void)finishUIUnlockFromSource:(int)arg1;
-(BOOL)isUnlockDisabled;
-(void)prepareForUILock;
-(BOOL)isAuthenticated;
-(void)prepareForUIUnlock;
-(BOOL)willUIUnlockFromSource:(int)arg1;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
-(void)jiggleLockIcon;

@end

