/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSLockScreenServiceServerInterface
@required
-(oneway void)setPreventPasscodeLock:(id)arg1;
-(oneway void)setPreventSpuriousScreenUndim:(id)arg1;
-(oneway void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1;
-(oneway void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

