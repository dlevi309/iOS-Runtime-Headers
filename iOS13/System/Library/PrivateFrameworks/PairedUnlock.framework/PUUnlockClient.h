/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
*/


@protocol PUUnlockClient <NSObject>
@required
-(void)didPairForUnlock:(BOOL)arg1 error:(id)arg2;
-(void)didUnpairForUnlock:(BOOL)arg1 error:(id)arg2;
-(void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
-(void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
-(void)remoteDeviceDidCompleteRemoteAction:(BOOL)arg1 remoteDeviceState:(id)arg2 error:(id)arg3;
-(void)remoteDeviceDidUnlock;
-(void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(id)arg2;
-(void)didGetRemoteDeviceState:(id)arg1 error:(id)arg2;

@end

