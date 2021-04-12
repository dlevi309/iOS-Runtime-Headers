/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

