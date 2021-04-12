/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/


@protocol CDPRemoteSecretEntryDelegate
@required
-(void)dismissRecoveryFlow:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2;
-(void)cancelledRemoteSecretEntry:(id)arg1;
-(void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1;
-(void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2;
-(void)performRecoveryKeyRecovery:(id)arg1;
-(void)performRemoteApproval:(id)arg1;
-(void)performAccountReset:(id)arg1;
-(void)finishValidation:(id)arg1 withError:(id)arg2;
-(BOOL)performingAccountRecovery;

@end

