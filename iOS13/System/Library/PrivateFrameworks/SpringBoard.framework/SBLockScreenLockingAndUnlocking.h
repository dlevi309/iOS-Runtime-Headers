/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBLockScreenLockingAndUnlocking <NSObject>
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@required
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1;
-(void)jiggleLockIcon;
-(BOOL)isUnlockDisabled;
-(BOOL)willUIUnlockFromSource:(int)arg1;
-(void)prepareForUIUnlock;
-(void)prepareForUILock;
-(void)finishUIUnlockFromSource:(int)arg1;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
-(BOOL)shouldUnlockUIOnKeyDownEvent;

@end

