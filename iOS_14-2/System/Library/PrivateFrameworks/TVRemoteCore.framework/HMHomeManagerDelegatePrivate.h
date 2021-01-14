/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol HMHomeManagerDelegatePrivate <HMHomeManagerDelegate>
@optional
-(void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
-(void)homeManagerDidUpdateApplicationData:(id)arg1;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1;
-(void)homeManagerDidUpdateDataSyncInProgress:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateResidentEnabledForThisDevice:(BOOL)arg2;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2;
-(void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
-(void)homeManagerWillStartBatchNotifications:(id)arg1;
-(void)homeManagerDidEndBatchNotifications:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateMultiUserStatus:(long long)arg2 reason:(id)arg3;
-(void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
-(void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(BOOL)arg2;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1;

@end

